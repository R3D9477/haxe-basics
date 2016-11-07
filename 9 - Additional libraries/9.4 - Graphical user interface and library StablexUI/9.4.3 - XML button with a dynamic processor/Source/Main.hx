package;

import openfl.Lib;
import ru.stablex.ui.UIBuilder;
import openfl.events.MouseEvent;

class Main extends openfl.display.Sprite {
	public function new () {
		super();

        UIBuilder.init();

		var btn = UIBuilder.buildFn("Assets/ui.xml")();
		btn.onPress = function (e:MouseEvent) trace("clicked !!!");
		
        Lib.current.addChild(btn);
	}
}
