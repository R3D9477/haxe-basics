package;

// http://old.haxe.org/doc/neko/threads
// http://api.haxe.org/cpp/vm/Thread.html
// http://www.joshuagranick.com/2012/08/24/using-threads-with-nme/

#if cpp
	import cpp.vm.Thread;
#elseif neko
	import neko.vm.Thread;
#end

class Main {
	public static function threadFunction (): Void {
		var main = Thread.readMessage (true);
		
		while (true) {
			var numeric = Thread.readMessage (true);
			main.sendMessage (numeric * 10);
		}
	}
	
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Exchange data between threads ---');
		
		var thread = Thread.create (threadFunction);
		thread.sendMessage (Thread.current ());
		
		for (i in 0...10) {
			thread.sendMessage (i);
			trace (i + " * 10 = " + Thread.readMessage (true));
		}
	}
}
