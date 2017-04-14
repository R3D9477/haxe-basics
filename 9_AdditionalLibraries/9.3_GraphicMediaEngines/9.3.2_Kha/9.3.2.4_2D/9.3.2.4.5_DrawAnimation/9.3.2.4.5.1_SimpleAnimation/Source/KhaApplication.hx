package;

import kha.System;
import kha.Assets;
import kha.Scheduler;
import kha.Framebuffer;

class KhaApplication {
	private var frameSize = 64;
	private var frameCount = 3;
	private var frameTime = 150;
	private var frameX = 0;
	private var frameY = 0;

	var lastFrameTime = 0.0;

	public function new () {
		Assets.loadEverything(function () System.notifyOnRender(render));
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin();
		fb.g2.drawSubImage(Assets.images.Wizard, 50, 50, frameX, frameY, frameSize, frameSize);
		fb.g2.end();

		var currTime = Scheduler.time() * 1000;
		
		if (currTime > lastFrameTime + frameTime) {
			lastFrameTime = currTime;
			
			frameX += frameSize;
			
			if (frameX > frameCount * frameSize) {
				frameX = 0;
				frameY += frameSize;

				if (frameY > frameCount * frameSize)
					frameY = 0;
			}
		}
	}
}
