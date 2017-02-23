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
		while (true) {
			trace("Thread 2");
			Sys.sleep(1.5);
		}
	}
	
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Two simple threads ---');
		
		var thread = Thread.create (threadFunction);
		
		for (i in 1...10) {
			trace("Thread 1");
			Sys.sleep(0.5);
		}
	}
}
