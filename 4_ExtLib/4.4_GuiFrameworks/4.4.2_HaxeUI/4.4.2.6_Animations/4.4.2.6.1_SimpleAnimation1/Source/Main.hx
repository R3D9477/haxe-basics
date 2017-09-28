import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.animation.Animation;
import haxe.ui.animation.AnimationManager;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			
			var animation = AnimationManager.instance.get("animation1");
			
			animation.setComponent("button1", ui.findComponent("animBtn1"));
			animation.setComponent("button2", ui.findComponent("animBtn2"));
			animation.setComponent("button3", ui.findComponent("animBtn3"));
			animation.setComponent("button4", ui.findComponent("animBtn4"));
			
			animation.loop();
			
			app.addComponent(ui);
			app.start();
		});
	}
}
