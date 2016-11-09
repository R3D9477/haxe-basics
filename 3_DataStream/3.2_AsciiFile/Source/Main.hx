package;

import sys.io.File;

class Main {
	public static function main () {
		var f_name = "ascii_file.txt";
		
		//----------------------------------------------------------------------
		trace("--- Writing ASCII file ---");
		
		var f_out = File.write(f_name, false);
		f_out.writeString("this is being written into the file\n");
		f_out.writeString("this line includes a number: " + 123.312 + "\n");
		f_out.close();
		
		//----------------------------------------------------------------------
		trace("--- Reading ASCII file ---");
		
		var f_cont = File.getContent(f_name);
		Sys.println("File content:\n" + f_cont);
		
		//----------------------------------------------------------------------
		trace("--- Reading ASCII file line by line ---");
		
		var f_in = File.read(f_name, false);
		
		try {
			var i = 0;
			
			while(true) {
				var str = f_in.readLine();
				Sys.println("> line" + (++i) + ": " + str);
			}
		}
		catch(ex: haxe.io.Eof) { }
		
		f_in.close();
		
		//----------------------------------------------------------------------
		trace("--- Reading ASCII file symbol by symbol ---");
		
		var f_in = File.read(f_name, false);
		
		try {
			while(true) {
				Sys.print(f_in.readString(1));
				Sys.sleep(.1);
			}
		}
		catch(ex: haxe.io.Eof) { }
		
		f_in.close();
	}
}
