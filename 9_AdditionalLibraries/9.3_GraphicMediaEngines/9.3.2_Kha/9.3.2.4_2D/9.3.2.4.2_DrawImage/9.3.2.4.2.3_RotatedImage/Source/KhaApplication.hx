package;

import kha.Assets;
import kha.System;
import kha.Scaler;
import kha.Framebuffer;
import kha.ScreenRotation;

class KhaApplication {
	private var initialized:Bool = false;
	
	public function new () {
		System.notifyOnRender(render);
		Assets.loadEverything(function () this.initialized = true);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(0xFFFFFF);
		
		if (initialized)
			Scaler.scale(Assets.images.Tux, fb, ScreenRotation.Rotation90);
		
		fb.g2.end();
	}
}
