import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ui:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			Screen.instance.addComponent(ui); // also can be used "app.addComponent(ui);" instread
			
			app.start();
		});
	}
}
