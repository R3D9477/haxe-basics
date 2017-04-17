package;

import kha.Image;
import kha.Color;
import kha.System;
import kha.Scheduler;
import kha.Framebuffer;

class KhaApplication {
	private var backbuffer:Image;
	private var initialized:Bool = false;
	
	public function new () {
		backbuffer = Image.createRenderTarget(System.windowWidth(), System.windowHeight());
		System.notifyOnRender(render);
		Scheduler.addTimeTask(draw, 0, 0.1);
	}
	
	public function draw () : Void {
		backbuffer.g1.begin();
		backbuffer.g1.setPixel(Std.int(Math.random() * 300), Std.int(Math.random() * 200), Color.White);
		backbuffer.g1.end();
	}

	public function render (fb:Framebuffer) : Void {
		fb.g2.begin();
		fb.g2.drawImage(backbuffer, 0, 0);
		fb.g2.end();
	}
}