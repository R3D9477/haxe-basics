package;

// http://api.openfl.org/openfl/display/Application.html
// http://api.openfl.org/lime/app/WindowConfig.html
// http://api.openfl.org/openfl/display/Window.html

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		var c = this.stage.window.config;
		trace(c.title);
		c.title = "adasdasd";
		
		trace(this.stage.application.windows.length);
		trace(this.stage.application.window == this.stage.application.windows[0]);
		
		this.stage.application.window.alert("asdasdasd", "sssss");
		
		//var w = new openfl.display.Window(c);
		//w.create(this.stage.application);
		//lime.system.System.embed (null, 800, 600, "null");
		//openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
	}
}
