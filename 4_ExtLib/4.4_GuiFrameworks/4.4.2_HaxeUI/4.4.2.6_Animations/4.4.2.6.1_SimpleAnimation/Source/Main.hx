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
		
		var animation = AnimationManager.instance.get("animation1");
		
		animation.setComponent("button1", ui.getComponentAt(0).getComponentAt(0));
		animation.setComponent("button2", ui.getComponentAt(0).getComponentAt(1));
		animation.setComponent("button3", ui.getComponentAt(0).getComponentAt(2));
		animation.setComponent("button4", ui.getComponentAt(0).getComponentAt(3));
		
		animation.loop();
	}
}
