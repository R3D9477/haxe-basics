package;

// http://api.openfl.org/openfl/display/Window.html

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		this.stage.application.window.alert("My Message Title", "This is my test message!");
	}
}
