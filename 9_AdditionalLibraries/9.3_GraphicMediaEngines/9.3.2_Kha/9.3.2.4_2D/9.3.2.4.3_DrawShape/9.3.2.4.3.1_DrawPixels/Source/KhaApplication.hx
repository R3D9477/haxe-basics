package;

import kha.Color;
import kha.System;
import kha.Framebuffer;

class KhaApplication {
	public function new () {
		System.notifyOnRender(render);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g1.begin();
		
		fb.g1.setPixel(10, 10, Color.Green);
		fb.g1.setPixel(10, 20, Color.Green);
		fb.g1.setPixel(20, 10, Color.Green);
		fb.g1.setPixel(20, 20, Color.Green);
		
		fb.g1.end();
	}
}