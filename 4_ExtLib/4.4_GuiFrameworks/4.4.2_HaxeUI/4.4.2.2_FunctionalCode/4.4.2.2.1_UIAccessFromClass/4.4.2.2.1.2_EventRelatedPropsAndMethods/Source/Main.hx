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
		trace('');
	}
	
	static function meHandler (e:MouseEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
		trace('   button down: ${e.buttonDown}');
		trace('   touch event: ${e.touchEvent}');
		trace('   delta: ${e.delta}, X:${e.screenX}, Y:${e.screenY}');
		trace('');
	}
	
	static function keHandler (e:KeyboardEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
		trace('   key code: ${e.keyCode}');
		trace('   shift key: ${e.shiftKey}');
		trace('');
	}
	
	static function seHandler (e:ScrollEvent) {
		trace('event type: ${e.type}');
		trace('   target: ${e.target}');
		trace('');
	}
	
	public static function main() {
		Toolkit.init();
		
		var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
		
		//-------------------------------------------------------------------------------------------
		
		ui.registerEvent(UIEvent.READY, ueHandler);
		
		//-------------------------------------------------------------------------------------------
		
		var sv1 = ui.findComponent("sv1", ScrollView);
		
		sv1.registerEvent(ScrollEvent.START, seHandler);
		sv1.registerEvent(ScrollEvent.STOP, seHandler);
		
		sv1.registerEvent(ScrollEvent.CHANGE, seHandler);
		
		//-------------------------------------------------------------------------------------------
		
		var ta1 = ui.findComponent("ta1", TextArea);
		
		ta1.registerEvent(UIEvent.RESIZE, ueHandler);
		ta1.registerEvent(UIEvent.MOVE, ueHandler);
		
		//-------------------------------------------------------------------------------------------
		
		var ta2 = ui.findComponent("ta2", TextArea);
		
		ta2.registerEvent(KeyboardEvent.KEY_DOWN, keHandler);
		ta2.registerEvent(KeyboardEvent.KEY_UP, keHandler);
		
		ta2.registerEvent(UIEvent.CHANGE, ueHandler);
		
		//-------------------------------------------------------------------------------------------
		
		var ta3 = ui.findComponent("ta3", TextArea);
		
		ta3.registerEvent(MouseEvent.MOUSE_WHEEL, meHandler);
		
		ta3.registerEvent(MouseEvent.MOUSE_MOVE, meHandler);
		
		ta3.registerEvent(MouseEvent.MOUSE_OVER, meHandler);
		ta3.registerEvent(MouseEvent.MOUSE_OUT, meHandler);
		
		ta3.registerEvent(MouseEvent.MOUSE_DOWN, meHandler);
		ta3.registerEvent(MouseEvent.MOUSE_UP, meHandler);
		
		ta3.registerEvent(MouseEvent.CLICK, meHandler);
		
		//-------------------------------------------------------------------------------------------
		
		Screen.instance.addComponent(ui);
		
		//-------------------------------------------------------------------------------------------
		
		trace('Resize and move (related events will be called):');
		trace('');
		
		ta1.width = 250;
		ta1.height = 250;
		
		ta1.top = 10;
		ta1.left = 10;
		
		//-------------------------------------------------------------------------------------------
		
		trace('Change some component\'s data (related events will be called):');
		trace('');
		
		ta2.text += "\n1st New Line...";
		ta2.text += "\n2nd New Line...";
		
		//-------------------------------------------------------------------------------------------
		
		trace('Unregister event and change (nothing will be called).');
		trace('');
		
		ta2.unregisterEvent(UIEvent.CHANGE, ueHandler);
		
		ta2.text += "\n3rd New Line...";
		
		//-------------------------------------------------------------------------------------------
		
		trace('Register some events via properies');
		trace('');
		
		ta2.onChange = ueHandler;
		ta2.onClick = meHandler;
		
		//-------------------------------------------------------------------------------------------
		
		trace('Call events programmatically:');
		trace('');
		
		ta1.dispatch(new UIEvent(UIEvent.RESIZE));
		
		ta2.dispatch(cast(new KeyboardEvent(KeyboardEvent.KEY_UP), UIEvent));
		
		ta2.dispatch(new UIEvent(UIEvent.CHANGE));
		ta2.dispatch(cast(new MouseEvent(MouseEvent.CLICK), UIEvent));
		
		ta3.dispatch(cast(new MouseEvent(MouseEvent.CLICK), UIEvent));
	}
}
