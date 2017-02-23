package;

// http://api.haxe.org/haxe/Timer.html#

import haxe.Timer;

class Main {
	static function main () {
		for (i in 0...10) {
			Timer.delay(function () trace("Thread 1." + i), i * 250);
		}
		
		for (i in 0...10) {
			Timer.delay(function () trace("Thread 2." + i), i * 500);
		}
		
		for (i in 0...15) {
			Timer.delay(function () trace("Thread 3." + i), i * 100);
		}
		
		trace("Root thread...");
	}
}
