package;

@:structInit
class Point {
	public var x:Int;
	public var y:Int;

	public function new (x:Int, y:Int) {
		this.x = x;
		this.y = y;
	}

	public function show () trace ('Point { x: $x, y: $y }');
}

class Main {
	public static function main () {
		var p:Point = { x: 2, y: 5 };
		p.show();
	}
}