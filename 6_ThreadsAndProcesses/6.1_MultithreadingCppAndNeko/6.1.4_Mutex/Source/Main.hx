package;

// http://old.haxe.org/doc/neko/threads
// http://api.haxe.org/cpp/vm/Thread.html
// http://www.joshuagranick.com/2012/08/24/using-threads-with-nme/
// http://api.haxe.org/cpp/vm/Deque.html

#if cpp
	import cpp.vm.Mutex;
	import cpp.vm.Thread;
#elseif neko
	import neko.vm.Mutex;
	import neko.vm.Thread;
#end

class ShareData {
	public var value:Int;
	public var Value (get, set):Int;

	private var mutex:Mutex;
	
	public function new () {
		mutex = new Mutex ();	
	}
	
	private function get_Value ():Int {
		mutex.acquire ();
		var result = value;
		mutex.release ();
		return result;	
	}
	
	private function set_Value (newValue:Int):Int {
		mutex.acquire ();
		value = newValue;
		mutex.release ();
		return newValue;	
	}	
}

class Main {
	private static function setValue ():Void {		
		var data = Thread.readMessage (true);
		data.value = 100;		
	}
		
	private static function retrieveValue ():Void {		
		var data = Thread.readMessage (true);
		trace ("The value is " + data.value);		
	}

	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Совместное использование объекта между потоками ---');
		
		var data = new ShareData ();
		
		var first = Thread.create (setValue);
		var second = Thread.create (retrieveValue);
		
		first.sendMessage (data);
		second.sendMessage (data);
		
		for (i in 0...10) {
			trace ("Main Thread: " + i);
			Sys.sleep (0.5);
		}
	}
}
