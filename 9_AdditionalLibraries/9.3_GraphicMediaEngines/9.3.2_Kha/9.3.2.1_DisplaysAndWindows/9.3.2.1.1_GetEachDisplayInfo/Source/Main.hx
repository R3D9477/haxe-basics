package;

import kha.System;
import kha.Display;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 300, height: 200 }, function () : Void {
			for (i in 0...Display.count)
				trace('display${i}: ${Display.x(i)};${Display.y(i)} @ ${Display.width(i)}x${Display.height(i)} isPrimary=${Display.isPrimary(i)}');
		});
	}
}