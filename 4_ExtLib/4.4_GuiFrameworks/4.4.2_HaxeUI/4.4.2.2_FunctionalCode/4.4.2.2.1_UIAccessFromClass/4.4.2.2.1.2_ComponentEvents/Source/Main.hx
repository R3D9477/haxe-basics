import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.components.CheckBox;
import haxe.ui.containers.ScrollView;

import haxe.ui.core.UIEvent;
import haxe.ui.core.MouseEvent;
import haxe.ui.core.KeyboardEvent;
import haxe.ui.core.ScrollEvent;

class Main {
	static function uieHandler (e:UIEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
	}
	
	public static function main() {
		Toolkit.init();
		
		var sv1 = ComponentMacros.buildComponent("Assets/Xml/UI.xml", ScrollView);
		
		sv1.registerEvent(UIEvent.READY, uieHandler);
		sv1.registerEvent(UIEvent.RESIZE, uieHandler);
		sv1.registerEvent(UIEvent.MOVE, uieHandler);
		
		var cb1 = sv1.findComponent("cb1", CheckBox);
		
		cb1.registerEvent(UIEvent.READY, uieHandler);
		cb1.registerEvent(UIEvent.RESIZE, uieHandler);
		cb1.registerEvent(UIEvent.MOVE, uieHandler);
		cb1.registerEvent(UIEvent.CHANGE, uieHandler);
		
		Screen.instance.addComponent(sv1);
		
		sv1.width = 200;
		sv1.height = 200;
		
		sv1.top = 10;
		sv1.left = 10;
		
		cb1.width = 250;
		cb1.height = 250;
		
		cb1.top = 20;
		cb1.left = 20;
		
		cb1.selected = true;
		
		trace('');
		
		cb1.unregisterEvent(UIEvent.READY, uieHandler);
		cb1.unregisterEvent(UIEvent.RESIZE, uieHandler);
		cb1.unregisterEvent(UIEvent.MOVE, uieHandler);
		cb1.unregisterEvent(UIEvent.CHANGE, uieHandler);
		
		sv1.width = 100;
		sv1.height = 100;
		
		sv1.top = 0;
		sv1.left = 0;
		
		cb1.width = 100;
		cb1.height = 100;
		
		cb1.top = 0;
		cb1.left = 0;
		
		cb1.selected = false;
		
		trace('');
		
		//...
		//...
		//...
	}
}
