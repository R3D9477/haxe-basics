package;

import kha.Color;
import kha.System;
import kha.Framebuffer;

class KhaApplication {
	public function new () {
		System.notifyOnRender(render);
	}

	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(false);
		
		fb.g2.color = Color.fromFloats(Std.int(Math.random() * 10), Std.int(Math.random() * 10), Std.int(Math.random() * 10));

		fb.g2.drawLine(
			Std.int(Math.random() * System.windowWidth()),
			Std.int(Math.random() * System.windowHeight()),
			Std.int(Math.random() * System.windowWidth()),
			Std.int(Math.random() * System.windowHeight())
		);

		fb.g2.end();
	}
}