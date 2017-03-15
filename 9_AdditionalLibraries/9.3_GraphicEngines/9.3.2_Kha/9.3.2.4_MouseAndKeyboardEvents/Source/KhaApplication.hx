package;

import kha.Key;
import kha.Color;
import kha.Assets;
import kha.System;
import kha.Framebuffer;
import kha.input.Mouse;
import kha.input.Keyboard;

class KhaApplication {
	private var frameBuffer:Framebuffer;
	private var initialized:Bool = false;
	
	public function new () {
		System.notifyOnRender(render);
		
		Mouse.get().notify(onMouseDown, onMouseUp, onMouseMove, null);
		Keyboard.get().notify(onKeyDown, onKeyUp);
		
		Assets.loadEverything(function () this.initialized = true);
	}
	
	public function render (fb:Framebuffer) : Void {
		frameBuffer = fb;
		
		if (initialized) {
			frameBuffer.g2.color = Color.Red;
			frameBuffer.g2.font = Assets.fonts.Arial;
			frameBuffer.g2.fontSize = 20;
		}
	}
	
	private function onMouseMove (x:Int, y:Int, movementX:Int, movementY:Int) : Void {
		if (initialized) {
			frameBuffer.g2.begin(0xFFFFFF);
			frameBuffer.g2.drawString('onMouseMove: $x, $y', 10, 10);
			frameBuffer.g2.end();
		}
	}
	
	private function onMouseDown (button:Int, x:Int, y:Int) : Void {
		if (initialized) {
			frameBuffer.g2.begin(0xFFFFFF);
			frameBuffer.g2.drawString('onMouseDown: $x, $y', 10, 10);
			frameBuffer.g2.end();
		}
	}
	
	private function onMouseUp (button:Int, x:Int, y:Int) : Void {
		if (initialized) {
			frameBuffer.g2.begin(0xFFFFFF);
			frameBuffer.g2.drawString('onMouseUp: $x, $y', 10, 10);
			frameBuffer.g2.end();
		}
	}
	ы
	private function onKeyDown (key:Key, char:String) : Void {
		if (initialized) {
			frameBuffer.g2.begin(0xFFFFFF);
			frameBuffer.g2.drawString('onKeyDown: $char', 10, 10);
			frameBuffer.g2.end();
		}
	}
	
	private function onKeyUp (key:Key, char:String) : Void {
		if (initialized) {
			frameBuffer.g2.begin(0xFFFFFF);
			frameBuffer.g2.drawString('onKeyUp: $char', 10, 10);
			frameBuffer.g2.end();
		}
	}
}
