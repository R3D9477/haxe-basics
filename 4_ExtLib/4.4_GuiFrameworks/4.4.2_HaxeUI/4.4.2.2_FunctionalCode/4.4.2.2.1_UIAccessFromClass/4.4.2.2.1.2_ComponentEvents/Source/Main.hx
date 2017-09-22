import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.components.TextArea;
import haxe.ui.containers.ScrollView;

class Main {
	public static function main() {
		Toolkit.init();
		
		var sv1:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml", ScrollView);
		Screen.instance.addComponent(sv1);
	}
}
