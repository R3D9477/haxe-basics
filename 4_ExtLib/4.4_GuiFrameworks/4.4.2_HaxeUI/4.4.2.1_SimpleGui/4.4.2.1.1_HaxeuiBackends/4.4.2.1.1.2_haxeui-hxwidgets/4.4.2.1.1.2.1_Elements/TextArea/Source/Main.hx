import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

class Main {
	public static function main() {
		#if debug
			new debugger.Local(true);
		#end

		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			app.addComponent(ComponentMacros.buildComponent("Assets/Xml/UI.xml"));
			app.start();
		});
	}
}
