package;

// http://api.openfl.org/openfl/display/Shape.html
// http://api.openfl.org/openfl/display/Graphics.html

import openfl.display.*;
import openfl.Vector;

class Main extends Sprite {
	public function new () {
		super();
		
		// draw square
		
		var img:Shape = new Shape();
		
		img.graphics.beginFill(0xFF0000);
		img.graphics.drawRect(0, 0, 25, 25);
		img.graphics.endFill();
		
		img.x = 10;
		img.y = 10;
		
		super.addChild(img);
		
		// draw circle
		
		img = new Shape();
		
		img.graphics.beginFill(0x00FF00);
		img.graphics.drawCircle(0, 0, 20);
		img.graphics.endFill();
		
		img.x = 100;
		img.y = 25;
		
		super.addChild(img);
		
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
		
		super.addChild(img);
	}
}
