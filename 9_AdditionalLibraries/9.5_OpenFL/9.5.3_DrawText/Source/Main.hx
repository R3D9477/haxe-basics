package;

// http://api.openfl.org/openfl/text/TextField.html
// http://api.openfl.org/openfl/text/TextFormat.html

import openfl.display.*;
import openfl.text.*;

class Main extends Sprite {
	public function new () {
		super();
		
		var format:TextFormat = new TextFormat();
		format.size = 20;
		format.color = 0x000FFF;
		format.align = TextFormatAlign.LEFT;
		
		var field:TextField = new TextField();
		field.text = "This is my text...";
		field.defaultTextFormat = format;
		field.selectable = false;
		field.embedFonts = true;
		field.wordWrap = true;
		field.border = false;
		field.autoSize = TextFieldAutoSize.LEFT;
		field.width = 300;
		
		field.x = 20;
		field.y = 10;
		
		this.addChild(field);
	}
}
