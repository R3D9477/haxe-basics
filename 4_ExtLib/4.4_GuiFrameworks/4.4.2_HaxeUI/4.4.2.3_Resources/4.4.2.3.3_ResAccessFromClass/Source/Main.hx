import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.components.Image;
import haxe.ui.components.Button;
import haxe.ui.components.TextArea;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			
			var img1 = ui.findComponent("img1", Image);
			img1.resource = "res/img/tuxImage.jpg";
			
			var btn1 = ui.findComponent("btn1", Button);
			btn1.icon = "res/img/tuxIcon.png";
			
			var txt1 = ui.findComponent("txt1", TextArea);
			txt1.text = haxe.Resource.listNames().join("\n");
			
			app.addComponent(ui);
			app.start();
		});
	}
}
