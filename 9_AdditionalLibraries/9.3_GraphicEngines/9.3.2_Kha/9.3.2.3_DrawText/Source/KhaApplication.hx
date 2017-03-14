package;

import kha.Color;
import kha.Assets;
import kha.System;
import kha.Framebuffer;

class KhaApplication {
	private var initialized:Bool = false;

	public function new () {
		System.notifyOnRender(render);
		kha.Assets.loadEverything(function () this.initialized = true);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(0xFFFFFF);
		
		if (initialized) {
			fb.g2.color = Color.Red;
			fb.g2.font = kha.Assets.fonts.Arial;
			fb.g2.fontSize = 20;
			fb.g2.drawString("Hello, world!", 10, 10);
		}
		
		fb.g2.end();
	}
}
