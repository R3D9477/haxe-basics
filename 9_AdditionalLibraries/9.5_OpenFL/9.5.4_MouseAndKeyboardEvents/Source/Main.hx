package;

// http://api.openfl.org/openfl/events/MouseEvent.html
// http://api.openfl.org/openfl/events/KeyboardEvent.html

class Main extends openfl.display.Sprite {
	private var coord:openfl.text.TextField;
	private var label:openfl.text.TextField;
	
	public function new () {
		super();
		
		this.coord = new openfl.text.TextField();
		this.coord.width = 250;
		this.coord.x = 10;
		this.coord.y = 10;
		this.addChild(coord);
		
		this.stage.addEventListener(openfl.events.MouseEvent.MOUSE_MOVE, this.onMouseMove);
		this.stage.addEventListener(openfl.events.MouseEvent.CLICK, this.onMouseClick);
		
		this.label = new openfl.text.TextField();
		this.label.width = 250;
		this.label.x = 10;
		this.label.y = 30;
		this.addChild(label);
		
		this.stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN, this.onKeyDown);
		this.stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP, this.onKeyUp);
	}
	
	private function onMouseMove (evt:openfl.events.MouseEvent) : Void {
		this.coord.text = 'stageX: ${evt.stageX}, stageY: ${evt.stageY}';
	}
	
	private function onMouseClick (evt:openfl.events.MouseEvent) : Void {
		this.label.text = 'Mouse left button clicked';
	}
	
	private function onKeyDown (evt:openfl.events.KeyboardEvent) : Void {
		this.label.text = 'Pressed key: ${evt.keyCode}';
		this.stage.color = 0xFF0000;
	}
	
	private function onKeyUp (evt:openfl.events.KeyboardEvent) : Void {
		if (evt.keyCode < 70)
			this.stage.color = 0xFFFFFF;
		else if (evt.keyCode < 80)
			this.stage.color = 0x00FFFF;
		else
			this.stage.color = 0x0000FF;
	}
}
