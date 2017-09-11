package;

// http://ui.stablex.ru/doc/#ru/stablex/ui/widgets/Button.html

import openfl.Lib;
import openfl.events.MouseEvent;

import ru.stablex.ui.widgets.Button;

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		var btn = new Button();
		btn.text = "Click Me";
		btn.onPress = function (e:MouseEvent) trace("clicked !!!");
		
		Lib.current.addChild(btn);
	}
}
