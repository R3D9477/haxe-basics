package;

import kha.System;
import kha.Framebuffer;

class KhaApplication {
	public function new () {
		System.notifyOnRender(render);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(0x000000);
		fb.g2.end();
	}
}
