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
	
	private var petX = 50;
	private var petY = 50;
	private var petDeltaX = 0;
	private var petDeltaY = 0;
	
	public function new () {
		Keyboard.get().notify(onKeyDown, onKeyUp);
		
		Assets.loadEverything(function () {
			frameImg = Assets.images.WizardB;
			System.notifyOnRender(render);
			Scheduler.addTimeTask(updateAnimation, 0, 0.1);
			Scheduler.addTimeTask(updatePetPosition, 0, 0.01);
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
	}
	
	public function updateAnimation () : Void {
		frameX += frameSize;
		
		if (frameX > frameCount * frameSize) {
			frameX = 0;
			frameY += frameSize;
			
			if (frameY > frameCount * frameSize) {
				if (frameImg == Assets.images.WizardM) {
					frameImg = Assets.images.WizardB;
					
					petX = Std.int(Math.random() * System.windowWidth());
					
					if (petX + frameSize > System.windowWidth())
						petX = System.windowWidth() - frameSize;
					
					petY = Std.int(Math.random() * System.windowHeight());
					
					if (petY + frameSize > System.windowHeight())
						petY = System.windowHeight() - frameSize;
				}
				
				frameY = 0;
			}
		}
	}
	
	public function updatePetPosition () : Void {
		petX += petDeltaX;
		petY += petDeltaY;
	}
}
