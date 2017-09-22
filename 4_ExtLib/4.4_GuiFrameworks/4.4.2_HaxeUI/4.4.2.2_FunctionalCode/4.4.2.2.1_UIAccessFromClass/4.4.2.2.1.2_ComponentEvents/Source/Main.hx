import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.containers.VBox;
import haxe.ui.containers.HBox;
import haxe.ui.components.Label;
import haxe.ui.macros.ComponentMacros;

class Main {
	public static function main() {
		Toolkit.init();
		
		var vbox1:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml", VBox);
		Screen.instance.addComponent(vbox1);
        
        // Conponent:
        //      registerEvent
        //      unregisterEvent
        //      dispatch
        //      includeInLayout
	}
}
