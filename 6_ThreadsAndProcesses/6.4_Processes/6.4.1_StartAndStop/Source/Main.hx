package;

// http://api.haxe.org/sys/io/Process.html
// http://old.haxe.org/api/neko/io/process/examples

import sys.io.Process;

class Main {
	static function main () {
		var p = new Process("ls", ["/home/r3d9u11", "-l"]);
		
		trace("exitcode: " + p.exitCode());
		trace("process id: " + p.getPid());
		
		// read everything from stderr
		var error = p.stderr.readAll().toString();
		trace("stderr:\n" + error);
		
		// read everything from stdout
		var stdout = p.stdout.readAll().toString();
		
		trace("stdout:\n" + stdout);
		p.close(); // close the process I/O

		// change work_dir
		p = new Process("./check_cwd", []);
	}
}
