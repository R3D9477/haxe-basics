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
        	fb.g2.drawSubImage(Assets.images.SubTux, 0, 0, -30, -55, 150, 150);
        
		fb.g2.end();
	}
}