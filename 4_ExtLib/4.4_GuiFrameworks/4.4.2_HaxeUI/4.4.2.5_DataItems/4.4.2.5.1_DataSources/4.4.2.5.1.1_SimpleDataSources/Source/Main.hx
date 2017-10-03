import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.data.DataSource;
import haxe.ui.containers.ListView;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			
			var lv = ui.findComponent("listview2", ListView);
			
			lv.dataSource.add({ value: "Item 1" });
			lv.dataSource.add("Item 2");
			lv.dataSource.add(3);
			lv.dataSource.add(4.44);
			lv.dataSource.add(true);
			
			app.addComponent(ui);
			app.start();
		});
	}
}
