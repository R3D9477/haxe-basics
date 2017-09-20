import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.animation.Animation;
import haxe.ui.animation.AnimationManager;

class Main {
	public static function main() {
		Toolkit.init();
		
		var ui:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
		Screen.instance.addComponent(ui);
	}
}
