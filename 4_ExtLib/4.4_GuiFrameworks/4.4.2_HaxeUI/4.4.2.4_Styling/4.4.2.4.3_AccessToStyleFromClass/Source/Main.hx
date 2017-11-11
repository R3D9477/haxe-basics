import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.util.Color;
import haxe.ui.styles.Style;
import haxe.ui.components.Label;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			
			var lbl1 = ui.findComponent("lbl1", Label);
			
			lbl1.styleNames = "style1 style2";
			
			var lbl2 = ui.findComponent("lbl2", Label);
			
			lbl2.customStyle = new Style();
			
			var col:Color = "purple";
			lbl2.customStyle.color = col;
			
			lbl2.customStyle.fontBold = true;
			
			var lbl3 = ui.findComponent("lbl3", Label);
			
			lbl3.styleString = "color: red; font-size: 16px; font-weight: bold;";
			
			var lbl4 = ui.findComponent("lbl4", Label);
			
			trace(lbl4.hasClass("style1"));
			
			lbl4.addClass("style1");
			lbl4.addClass("style2");
			trace(lbl4.hasClass("style1"));
			trace(lbl4.hasClass("style2"));
			
			lbl4.removeClass("style2");
			trace(lbl4.hasClass("style2"));
			
			var lbl51 = ui.findComponent("lbl51", Label);
			
			trace(lbl51.className);
			trace(lbl51.getClassProperty("color"));
			
			lbl51.setClassProperty("color", "lime");
			trace(lbl51.getClassProperty("color"));
			
			app.addComponent(ui);
			app.start();
		});
	}
}
