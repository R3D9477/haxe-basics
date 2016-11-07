package;

// http://api.haxe.org/cs/system/threading/Thread.html
// https://github.com/MarcWeber/haxe-compiler-experiments/blob/master/std/cs/system/threading/Thread.hx
// https://github.com/HaxeFoundation/haxe/issues/1903

#if cs
	import cs.system.threading.Thread;
	import cs.system.threading.ThreadStart;
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
		trace('--- Два простых потока ---');
		
		var ts : ThreadStart = threadFunction;
        var thread1 = new Thread(ts);
		thread1.Start();
        
		for (i in 1...10) {
			trace("Thread 1");
			Sys.sleep(0.5);
		}

		thread1.Abort();
	}
}
