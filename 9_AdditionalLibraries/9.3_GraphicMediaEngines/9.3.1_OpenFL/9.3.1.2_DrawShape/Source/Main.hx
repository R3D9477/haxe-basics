package;

// http://api.openfl.org/openfl/display/Shape.html
// http://api.openfl.org/openfl/display/Graphics.html

import openfl.display.*;
import openfl.Vector;

class Main extends Sprite {
	public function new () {
		super();
		
		var img:Shape;
		
		// draw line
		
		img = new Shape();
		
		img.graphics.lineStyle(1, 0xFF00FF, 1);
		img.graphics.moveTo(10, 10);
		img.graphics.lineTo(70, 20);
		
		this.addChild(img);
		
		// draw square
		
		img = new Shape();
		
		img.graphics.beginFill(0xFF0000);
		img.graphics.drawRect(0, 0, 25, 25);
		img.graphics.endFill();
		
		img.x = 10;
		img.y = 20;
		
		this.addChild(img);
		
		// draw circle
		
		img = new Shape();
		
		img.graphics.beginFill(0x00FF00);
		img.graphics.drawCircle(0, 0, 20);
		img.graphics.endFill();
		
		img.x = 100;
		img.y = 25;
		
		this.addChild(img);
		
		// draw triangle
		
		var vertices:Vector<Float> = new Vector<Float>();
		vertices[0] = 50;
		vertices[1] = 0;
		vertices[2] = 0;
		vertices[3] = 100;
		vertices[4] = 100;
		vertices[5] = 100;
		
		img = new Shape();
		
		img.graphics.beginFill(0x0000FF);
		img.graphics.drawTriangles(vertices);
		img.graphics.endFill();
		
		img.x = 25;
		img.y = 50;
		
		this.addChild(img);
	}
}
