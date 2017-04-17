package;

import kha.Color;
import kha.System;
import kha.Scheduler;
import kha.Framebuffer;

typedef Pixel = {
	var x:Int;
	var y:Int;
	var c:Color;
}

class KhaApplication {
	private var pixels:Array<Pixel>;
	
	public function new () {
		pixels = new Array<Pixel>();

		System.notifyOnRender(render);
		Scheduler.addTimeTask(addPixel, 0, 0.1);
	}
	
	public function addPixel () : Void {
		pixels.push({
			x: Std.int(Math.random() * 300),
			y: Std.int(Math.random() * 200),
			c: Color.fromFloats(Std.int(Math.random() * 10), Std.int(Math.random() * 10), Std.int(Math.random() * 10))
		});
	}

	public function render (fb:Framebuffer) : Void {
		fb.g1.begin();
		
		for (p in pixels)
			fb.g1.setPixel(p.x, p.y, p.c);

		fb.g1.end();
	}
}