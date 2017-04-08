package;

import kha.System;
import kha.Display;

class KhaApplication {
	public function new () {
		for (i in 0...Display.count)
			trace('display${i}: ${Display.x(i)};${Display.y(i)} @ ${Display.width(i)}x${Display.height(i)} isPrimary=${Display.isPrimary(i)}');	
	}
}
