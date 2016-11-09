package;

http://ui.stablex.ru/doc/#ru/stablex/ui/widgets/Button.html

import openfl.Lib;
import ru.stablex.ui.UIBuilder;

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		UIBuilder.init();
		
		Lib.current.addChild(UIBuilder.buildFn("Assets/ui.xml")());
	}
}
