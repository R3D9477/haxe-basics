package;

import openfl.display.*;

class CustomSprite extends Sprite {
	public function new () {
		super ();
		
		var img:Shape = new Shape();
		
		img.graphics.beginFill(0xFF0000);
		img.graphics.drawRect(0, 0, 16, 16);
		img.graphics.endFill();
		
		img.graphics.beginFill(0x555FFF);
		img.graphics.drawRect(5, 5, 6, 6);
		img.graphics.endFill();
		
		this.x = 10;
		this.y = 10;
		
		this.addChild(img);
	}
}
