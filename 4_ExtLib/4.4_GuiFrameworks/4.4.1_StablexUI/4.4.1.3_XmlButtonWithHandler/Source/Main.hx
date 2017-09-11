package;

import openfl.Lib;
import openfl.events.MouseEvent;

import ru.stablex.ui.UIBuilder;

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		UIBuilder.init();
		
		var btn = UIBuilder.buildFn("Assets/ui.xml")();
		btn.onPress = function (e:MouseEvent) trace("clicked !!!");
		
		Lib.current.addChild(btn);
	}
}
