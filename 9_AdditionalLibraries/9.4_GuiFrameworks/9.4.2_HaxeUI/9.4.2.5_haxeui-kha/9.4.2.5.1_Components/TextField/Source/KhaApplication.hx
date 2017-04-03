import kha.System;
import kha.Assets;
import kha.Framebuffer;

import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

class KhaApplication {
	public function new () {
		Toolkit.init();
		
		Assets.loadEverything(function () : Void {
			var ui:Component = ComponentMacros.buildComponent("../Assets/Xml/UI.xml");
			Screen.instance.addComponent(ui);
			ui.ready();
		});
		
		System.notifyOnRender(render);
	}
	
	function render (fb:Framebuffer) : Void {
		fb.g2.begin(true, 0xFFFFFF);
		
		Screen.instance.renderTo(fb.g2);
		
		fb.g2.end();
	}
}
