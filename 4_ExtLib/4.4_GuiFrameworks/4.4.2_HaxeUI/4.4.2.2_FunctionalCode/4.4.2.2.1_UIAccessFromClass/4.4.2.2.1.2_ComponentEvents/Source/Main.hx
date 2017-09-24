import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.components.TextArea;
import haxe.ui.containers.ScrollView;

import haxe.ui.core.UIEvent;
import haxe.ui.core.MouseEvent;
import haxe.ui.core.KeyboardEvent;
import haxe.ui.core.ScrollEvent;

class Main {
	static function ueHandler (e:UIEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
	}
	
	static function meHandler (e:MouseEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
		trace('   button down: ${e.buttonDown}');
		trace('   touch event: ${e.touchEvent}');
		trace('   delta: ${e.delta}, X:${e.screenX}, Y:${e.screenY}');
	}
	
	static function keHandler (e:KeyboardEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
		trace('   key code: ${e.keyCode}');
		trace('   shift key: ${e.shiftKey}');
	}
	
	static function seHandler (e:ScrollEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
	}
	
	public static function main() {
		Toolkit.init();
		
		var sv1 = ComponentMacros.buildComponent("Assets/Xml/UI.xml", ScrollView);
		
		sv1.registerEvent(UIEvent.READY, ueHandler);
		sv1.registerEvent(UIEvent.RESIZE, ueHandler);
		sv1.registerEvent(UIEvent.MOVE, ueHandler);
		
		sv1.registerEvent(MouseEvent.MOUSE_WHEEL, meHandler);
		
		sv1.registerEvent(ScrollEvent.CHANGE, seHandler);
		sv1.registerEvent(ScrollEvent.START, seHandler);
		sv1.registerEvent(ScrollEvent.STOP, seHandler);
		
		var ta1 = sv1.findComponent("ta1", TextArea);
		
		ta1.registerEvent(UIEvent.MOVE, ueHandler);
		ta1.registerEvent(UIEvent.CHANGE, ueHandler);
		
		sv1.registerEvent(MouseEvent.MOUSE_MOVE, meHandler);
		sv1.registerEvent(MouseEvent.MOUSE_OVER, meHandler);
		sv1.registerEvent(MouseEvent.MOUSE_OUT, meHandler);
		sv1.registerEvent(MouseEvent.MOUSE_DOWN, meHandler);
		sv1.registerEvent(MouseEvent.MOUSE_UP, meHandler);
		sv1.registerEvent(MouseEvent.CLICK, meHandler);
		
		sv1.registerEvent(KeyboardEvent.KEY_DOWN, keHandler);
		sv1.registerEvent(KeyboardEvent.KEY_UP, keHandler);
		
		Screen.instance.addComponent(sv1);
		
		sv1.width = 200;
		sv1.height = 200;
		
		sv1.top = 10;
		sv1.left = 10;
		
		ta1.width = 200;
		ta1.height = 200;
		
		ta1.top = 20;
		ta1.left = 20;
		
		ta1.text = "default text...";
		
		trace('');
		
		ta1.unregisterEvent(UIEvent.MOVE, ueHandler);
		ta1.unregisterEvent(UIEvent.CHANGE, ueHandler);
		
		sv1.width = 250;
		sv1.height = 250;
		
		sv1.top = 0;
		sv1.left = 0;
		
		ta1.width = 300;
		ta1.height = 300;
		
		ta1.top = 0;
		ta1.left = 0;
		
		ta1.text = "default text 1...";
		
		trace('');
		
		//...
		//...
		//...
	}
}
