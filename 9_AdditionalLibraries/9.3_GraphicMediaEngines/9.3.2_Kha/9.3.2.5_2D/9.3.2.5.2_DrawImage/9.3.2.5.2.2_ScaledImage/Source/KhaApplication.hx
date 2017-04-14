package;

import kha.Assets;
import kha.System;
import kha.Framebuffer;

class KhaApplication {
	private var initialized:Bool = false;
	
	public function new () {
		System.notifyOnRender(render);
		Assets.loadEverything(function () initialized = true);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(0xFFFFFF);
		
		if (initialized)
			fb.g2.drawScaledImage(Assets.images.Tux, 0, 0, fb.width, fb.height);
		
		fb.g2.end();
	}
}
