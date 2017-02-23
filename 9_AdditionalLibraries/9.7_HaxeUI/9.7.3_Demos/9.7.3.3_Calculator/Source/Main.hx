import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

class Main {
	public static function main() {
		Toolkit.init();
		
		var main:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
		Screen.instance.addComponent(main);
	}
}
