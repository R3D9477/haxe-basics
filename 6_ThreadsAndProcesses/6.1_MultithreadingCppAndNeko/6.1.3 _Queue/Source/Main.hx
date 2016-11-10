package;

// http://old.haxe.org/doc/neko/threads
// http://api.haxe.org/cpp/vm/Thread.html
// http://www.joshuagranick.com/2012/08/24/using-threads-with-nme/
// http://api.haxe.org/cpp/vm/Deque.html

#if cpp
	import cpp.vm.Deque;
	import cpp.vm.Thread;
#elseif neko
	import neko.vm.Deque;
	import neko.vm.Thread;
#end

class Main {
	private static function sendData ():Void {
		var data:Deque<Int> = Thread.readMessage (true);
		
		for (i in 0...10) {
			data.push (i);
			
			trace ("Sending data: " + i);
			Sys.sleep (0.1);	
		}	
	}
	
	private static function receiveData ():Void {
		var data:Deque<Int> = Thread.readMessage (true);
		
		for (i in 0...10) {
			trace ("Receiving data: " + data.pop (true));			
		}	
	}

	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Обмен данными между потоками ---');
		
		var data = new Deque <Int> ();
		
		var first = Thread.create (sendData);
		var second = Thread.create (receiveData);
		
		first.sendMessage (data);
		second.sendMessage (data);
		
		trace ("This message will not wait for the result");
		
		for (i in 0...10) {
			trace ("Main Thread: " + i);
			Sys.sleep (0.5);
		}
	}
}
