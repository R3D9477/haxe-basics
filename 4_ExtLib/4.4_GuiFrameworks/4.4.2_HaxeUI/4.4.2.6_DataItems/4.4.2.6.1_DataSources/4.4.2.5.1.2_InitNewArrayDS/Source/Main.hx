import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.components.DropDown;
import haxe.ui.containers.ListView;

import haxe.ui.data.ArrayDataSource;

class Main {
	public static function main() {
		Toolkit.init();
		
		var app = new HaxeUIApp();
		
		app.ready(function() {
			var ds = new ArrayDataSource<Dynamic>();
			ds.add({ value: "Item 1" });
			ds.add("Item 2");
			ds.add(3);
			ds.add(4.44);
			ds.add(true);
			
			var ui = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
			
			var dd1 = ui.findComponent("dropdown1", DropDown);
			dd1.dataSource = ds;
			
			var lv1 = ui.findComponent("listview1", ListView);
			lv1.dataSource = ds;
			
			app.addComponent(ui);
			app.start();
		});
	}
}