package;

import kha.Color;
import kha.System;
import kha.Framebuffer;

using kha.graphics2.GraphicsExtension;

class KhaApplication {
	public function new () {
		System.notifyOnRender(render);
	}
	
	public function render (fb:Framebuffer) : Void {
		fb.g2.begin(0xFFFFFF);
		
		// draw line
		
		fb.g2.color = Color.Pink;
		fb.g2.drawLine(10, 10, 70, 20);
		
		// draw square
		
		fb.g2.color = Color.Red;
		fb.g2.fillRect(10, 20, 25, 25);
		
		// draw circle
		
		fb.g2.color = Color.Green;
		fb.g2.fillCircle(100, 25, 20);
		
		// draw triangle
		
		fb.g2.color = Color.Black;
		fb.g2.fillTriangle(25, 150, 75, 50, 125, 150);
		
		fb.g2.end();
	}
}
