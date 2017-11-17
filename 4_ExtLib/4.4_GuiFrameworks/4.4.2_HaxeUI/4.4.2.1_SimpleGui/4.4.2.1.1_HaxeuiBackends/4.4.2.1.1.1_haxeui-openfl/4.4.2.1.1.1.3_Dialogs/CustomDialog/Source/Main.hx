import haxe.ui.Toolkit;
import haxe.ui.HaxeUIApp;
import haxe.ui.macros.ComponentMacros;

import haxe.ui.core.Screen;

import haxe.ui.components.Button;
import haxe.ui.containers.TabView;
import haxe.ui.containers.ScrollView;

import haxe.ui.containers.dialogs.DialogOptions;

class Main {
	public static function main() {
		var app = new HaxeUIApp();
		app.ready(function() {
			var showDialog:Button = ComponentMacros.buildComponent("Assets/Xml/UI.xml");

			showDialog.onClick = function(e) {
				var customDialog = ComponentMacros.buildComponent("Assets/Xml/Events.xml");
				var tabview = customDialog.findComponent(TabView);
				var events:ScrollView = tabview.findComponent("events");
				var tech:ScrollView = tabview.findComponent("tech");

				// create some events
				for (i in 0...20) {
					var button = new Button();
					button.text = 'Event ${i}';
					button.percentWidth = 100;
					events.addComponent(button);
				}

				// create some tech
				for (i in 0...20) {
					var button = new Button();
					button.text = 'Tech ${i}';
					button.percentWidth = 100;
					tech.addComponent(button);
				}

				Screen.instance.showDialog(customDialog, new DialogOptions());
			};

			app.addComponent(showDialog);
			app.start();
		});
	}
}