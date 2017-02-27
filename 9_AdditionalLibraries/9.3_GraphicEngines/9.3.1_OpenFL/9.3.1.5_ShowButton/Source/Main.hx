package;

// http://api.openfl.org/openfl/text/TextField.html
// http://api.openfl.org/openfl/display/SimpleButton.html

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		var defLabel:openfl.text.TextField = new openfl.text.TextField();
		defLabel.x = 0;
		defLabel.y = 0;
		defLabel.text = "My button";
		
		var downLabel:openfl.text.TextField = new openfl.text.TextField();
		downLabel.x = 2;
		downLabel.y = 2;
		downLabel.text = "My button";
		
		var button:openfl.display.SimpleButton = new openfl.display.SimpleButton(defLabel, defLabel, downLabel, defLabel);
		button.x = 20;
		button.y = 20;
		button.useHandCursor = true;
		
		this.addChild(button);
	}
}
