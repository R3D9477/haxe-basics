import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.containers.Box;
import haxe.ui.containers.VBox;
import haxe.ui.containers.HBox;
import haxe.ui.components.Label;
import haxe.ui.components.Button;

class Main {
	public static function main() {
		Toolkit.init();
		
		var ui:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml", VBox);
		Screen.instance.addComponent(ui);
		
		trace(Type.getClassName(Type.getClass(ui)));
		
		trace('ui id = ${ui.id}');
		trace('ui width = ${ui.width}');
		trace('ui height = ${ui.height}');
		trace('the parent of ui is null? ${ui.parentComponent == null}');
		
		trace('childs of ui:');
		for (ch in ui.childComponents)
			trace('    ${Type.getClassName(Type.getClass(ch))}');
		
		trace('');
		
		trace('does component label1 exists? ${ui.findComponent("label1") != null}');
		trace('does component label2 exists? ${ui.findComponent("label2") != null}');
		trace('does component invalidLabel exists? ${ui.findComponent("invalidLabel") != null}');
		
		trace('');
		
		var label1 = ui.findComponent("label1", Label);
		trace(Type.getClassName(Type.getClass(label1)));
		
		trace('old text of label1 is "${label1.text}"');
		label1.text = "New text 1...";
		trace('new text of label1 is "${label1.text}"');
		
		trace('old width of label1 is "${label1.width}"');
		label1.width = 100;
		trace('new width of label1 is "${label1.width}"');
		
		trace('old height of label1 is "${label1.height}"');
		label1.height = 50;
		trace('new height of label1 is "${label1.height}"');
		
		trace('');
		
		var hbox1 = ui.findComponent("hbox1", HBox);
		trace(Type.getClassName(Type.getClass(hbox1)));
		
		trace('hbox1 id = ${hbox1.id}');
		trace('hbox1 width = ${hbox1.width}');
		trace('hbox1 height = ${hbox1.height}');
		trace('the parent of hbox1 is null? ${hbox1.parentComponent == null}');
		
		trace('');
		
		trace('childs of hbox1:');
		for (ch in hbox1.childComponents)
			trace('    ${Type.getClassName(Type.getClass(ch))}');
		
		for (ch in hbox1.childComponents)
			trace('$ch.id = ${ch.id} have index ${hbox1.getComponentIndex(ch)}');
		
		trace('');
		
		var sublabel1 = hbox1.findComponent("sublabel1", Label);
		
		trace('sublabel1 have index ${hbox1.getComponentIndex(sublabel1)} into ${hbox1.id}');
		trace('sublabel1 have index ${ui.getComponentIndex(sublabel1)} into ${ui.id}');
		
		var sublabel2 = hbox1.findComponent("sublabel2", Label);
		var sublabel3 = hbox1.findComponent("sublabel3", Label);
		
		hbox1.setComponentIndex(sublabel1, 2);
		trace('sublabel1 have changed index ${hbox1.getComponentIndex(sublabel1)} into ${hbox1.id}');
		
		trace('');
		trace('childs of hbox1: ${hbox1.childComponents}');
		
		for (ch in hbox1.childComponents)
			trace('$ch.id = ${ch.id} have index ${hbox1.getComponentIndex(ch)}');
		
		trace('');
		
		for (i in 0...4)
			trace('child of ${hbox1.id} with index $i is ${hbox1.getComponentAt(i)}');
		
		trace('');
		
		trace('sublabel1\'s parent is ${sublabel1.parentComponent}');
		trace('sublabel2\'s parent is ${sublabel2.parentComponent}');
		trace('sublabel3\'s parent is ${sublabel3.parentComponent}');
		
		hbox1.removeAllComponents();
		trace('childs count of ${hbox1.id} = ${hbox1.childComponents.length}');
		
		trace('sublabel1\'s parent is ${sublabel1.parentComponent}');
		trace('sublabel2\'s parent is ${sublabel2.parentComponent}');
		trace('sublabel3\'s parent is ${sublabel3.parentComponent}');
		
		trace('');
		
		sublabel1 = new Label();
		sublabel1.text = "New Sublabel 1...";
		
		sublabel2 = new Label();
		sublabel2.text = "New Sublabel 2...";
		
		hbox1.addComponent(sublabel1);
		hbox1.addComponent(sublabel2);
		hbox1.addComponent(sublabel3); // keep sublabel3 old
		trace('childs count of ${hbox1.id} = ${hbox1.childComponents.length}');
		
		hbox1.removeComponent(sublabel2);
		trace('childs count of ${hbox1.id} = ${hbox1.childComponents.length}');
		
		trace('');
		
		var root = hbox1.rootComponent;
		
		trace('root id = ${root.id}');
		trace('root width = ${root.width}');
		trace('root height = ${root.height}');
		trace('the parent of hbox1 is null? ${root.parentComponent == null}');
		trace('childs of root: ${root.childComponents}');
		trace('root == ui? ${root == ui}');
		
		trace('');
		
		var button1 = ui.findComponent("button1", Button);
		var button2 = ui.findComponent("button2", Button);
		var button3 = ui.findComponent("button3", Button);		
		
		trace('${button1.id} ${button1.hidden ? "hidden" : "visible"} and ${button1.disabled ? "disabled" : "enabled"}');
		trace('${button2.id} ${button2.hidden ? "hidden" : "visible"} and ${button2.disabled ? "disabled" : "enabled"}');
		trace('${button3.id} ${button3.hidden ? "hidden" : "visible"} and ${button3.disabled ? "disabled" : "enabled"}');
		
		button1.hide();
		button2.show();
		button3.disabled = false;
		
		trace('${button1.id} ${button1.hidden ? "hidden" : "visible"} and ${button1.disabled ? "disabled" : "enabled"}');
		trace('${button2.id} ${button2.hidden ? "hidden" : "visible"} and ${button2.disabled ? "disabled" : "enabled"}');
		trace('${button3.id} ${button3.hidden ? "hidden" : "visible"} and ${button3.disabled ? "disabled" : "enabled"}');
		
		//trace('');
		
		//var label4 = ui.findComponent("label4", Label);
		
		//trace('label4\'s ancestor with id hbox11 is ${label4.findAncestor("hbox11")}');
		//trace('label4\'s ancestor with id invalid11 is ${label4.findAncestor("invalid11")}');
		
		//trace('label4\'s ancestor with class vbox11_cls is ${label4.findAncestor("vbox11_cls", null, "css")}');
		//trace('label4\'s ancestor with class invalid11_cls is ${label4.findAncestor("invalid11_cls", null, "css")}');
		
		//trace('label4\'s ancestor with type Box is ${label4.findAncestor(null, Box)}');
		//trace('label4\'s ancestor with type Button is ${label4.findAncestor(null, Button)}');
		
		trace('');
		
		trace('component under point x:0, y:0 is ${ui.findComponentsUnderPoint(0, 0)}');
		trace('component under point x:10, y:10 is ${ui.findComponentsUnderPoint(10, 10)}');
		trace('component under point x:10, y:150 is ${ui.findComponentsUnderPoint(10, 150)}');
		
		trace('');
		
		trace('UI elements tree:');
		
		function displayChilds (c:Component, ind = '') {
		    if (c != null) {
				trace('$ind $c with id:${c.id}');
				
				if (c.childComponents != null)
				    for (cc in c.childComponents)
						displayChilds(cc, ind + '  ');
			}
		}
		
		displayChilds(ui);
	}
}
