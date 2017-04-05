package;

import kha.Key;
import kha.System;
import kha.Assets;
import kha.Scheduler;
import kha.Framebuffer;
import kha.input.Keyboard;

class KhaApplication {
	private var frameImg = null;
	private var frameX = 0;
	private var frameY = 0;
	private var frameSize = 64;
	private var frameCount = 3;
	private var frameLastTime = 0.0;
	private var frameTimeLength = 150;

	private var petX = 50;
	private var petY = 50;
	private var petDeltaX = 0;
	private var petDeltaY = 0;
	private var petLastTime = 0.0;
	private var petTimeLength = 20;

	public function new () {
		Keyboard.get().notify(onKeyDown, onKeyUp);
		
		Assets.loadEverything(function () {
			frameImg = Assets.images.WizardB;
			System.notifyOnRender(render);
		});
	}
	
	private function onKeyDown (key:Key, char:String) : Void {
		switch (char) {
			case "w":
				frameImg = Assets.images.WizardT;
				petDeltaX = 0;
				petDeltaY = -1;
			case "a":
				frameImg = Assets.images.WizardL;
				petDeltaX = -1;
				petDeltaY = 0;
			case "s":
				frameImg = Assets.images.WizardB;
				petDeltaX = 0;
				petDeltaY = 1;
			case "d":
				frameImg = Assets.images.WizardR;
				petDeltaX = 1;
				petDeltaY = 0;
		}
	}
	
	private function onKeyUp (key:Key, char:String) : Void {
		if (char == "h") {
			frameX = 0;
			frameY = 0;
			frameImg = Assets.images.WizardM;
		}
		
		petDeltaX = 0;
		petDeltaY = 0;
	}

	public function render (fb:Framebuffer) : Void {
		fb.g2.begin();
		fb.g2.drawSubImage(frameImg, petX, petY, frameX, frameY, frameSize, frameSize);
		fb.g2.end();

		var currTime = Scheduler.time() * 2000;
		
		if (currTime > petLastTime + petTimeLength) {
			petLastTime = currTime;
			
			petX += petDeltaX;
			petY += petDeltaY;
		}

		if (currTime > frameLastTime + frameTimeLength) {
			frameLastTime = currTime;
			
			frameX += frameSize;
			
			if (frameX > frameCount * frameSize) {
				frameX = 0;
				frameY += frameSize;

				if (frameY > frameCount * frameSize) {
					if (frameImg == Assets.images.WizardM) {
						frameImg = Assets.images.WizardB;
						
						petX = Std.int(Math.random() * fb.width);
						
						if (petX + frameSize > fb.width)
							petX = fb.width - frameSize;
						
						petY = Std.int(Math.random() * fb.height);

						if (petY + frameSize > fb.height)
							petY = fb.height - frameSize;
					}
					
					frameY = 0;
				}
			}
		}
	}
}
