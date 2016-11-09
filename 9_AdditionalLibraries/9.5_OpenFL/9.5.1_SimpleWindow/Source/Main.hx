package;

// http://api.openfl.org/openfl/display/Window.html
// http://api.openfl.org/lime/app/WindowConfig.html
// http://api.openfl.org/openfl/display/Application.html

class Main extends openfl.display.Sprite {
	public function new () {
		super();
		
		// current set window's position
		
		this.stage.window.x = 50;
		this.stage.window.y = 50;
		
		// current set window's size
		
		this.stage.window.width = 250;
		this.stage.window.height = 250;
		this.stage.window.resizable = false; // forbid window's resizing
		
		// other settins
		
		this.stage.color = 0xFFF000; // set background color
		//this.stage.window.title = "My new title...";
		this.stage.window.borderless = false; // don't hide window's frame
	}
}
