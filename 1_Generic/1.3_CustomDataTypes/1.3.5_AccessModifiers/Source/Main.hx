package;

// http://haxe.org/manual/class-field-visibility.html

class Base {
	public function new() { }
	private function baseField() { }
	public function baseMethod () { }
}

class Child1 extends Base {
	private function child1Field() { }
	// http://haxe.org/manual/class-field-override.html
	override public function baseMethod () { }
}

class Child2 extends Base {
	public function child2Field() {
		var child1 = new Child1();
		child1.baseField();
		//child1.child1Field(); // Cannot access private field child1Field
	}
}

// http://haxe.org/manual/class-field-static.html

class Main {
	// http://haxe.org/manual/class-field-inline.html
	static inline function mid(s1:Int, s2:Int) {
		return (s1 + s2) / 2;
	}
	
	// http://haxe.org/manual/class-field-dynamic.html
	static dynamic function test() {
		return "original";
	}

	public static function main () {
		var a = 1;
		var b = 2;
		var c = mid(a, b);
		
		trace(test()); // original
		test = function() { return "new"; }
		trace(test()); // new
	}
}
