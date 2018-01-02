package;

// https://haxe.org/manual/debugging-type-function.html

class Main {
	public function new () { }

	public static function main () {
		var d1:Dynamic = "foo";
		$type(d1);

		var a1:Any = "bar";
		$type(a1);

		var s1:String = "foobar";
		$type(s1);

		var i1:Int = 123;
		$type(i1);

		var f1:Float = 3.45;
		$type(f1);

		var b1:Bool = true;
		$type(b1);

		var c1:Main = new Main();
		$type(c1);
	}
}