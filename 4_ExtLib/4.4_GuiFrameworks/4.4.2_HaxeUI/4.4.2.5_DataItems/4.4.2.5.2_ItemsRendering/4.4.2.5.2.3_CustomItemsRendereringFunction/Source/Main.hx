import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.core.ItemRenderer;
import haxe.ui.core.ClassFactory;

import haxe.ui.containers.ListView;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var lv = ComponentMacros.buildComponent("Assets/Xml/UI.xml", ListView);
			
			lv.itemRendererFunction = function (data:Dynamic) : ClassFactory<ItemRenderer> {
				//...
				//...
				//...
				
				return null;
			}
			
			app.addComponent(lv);
			app.start();
		});
	}
}
