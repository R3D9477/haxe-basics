package;

import kha.Color;
import kha.System;
import kha.Framebuffer;

class Window1 {
	public function new(id:Int) {
		System.notifyOnRender(render, id);
	}
	
	function render (fb:Framebuffer) : Void {
		fb.g2.begin(Color.Green);
		fb.g2.end();
	}
}
