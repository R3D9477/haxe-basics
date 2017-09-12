package;

class A {
	// Dynamic field (the method of the object)
	public var i : Int;
	// Static field (the method of the class)
	public static var j : Int;
	
	public function new () { }
	
	// Dynamic method
	public function M1 () { trace("Dynamic method: " + this.i); }
	// Static mathod
	public static function M2 () { trace("Static mathod: " + A.j); }
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Access to the dynamic field and dynamic method ---");
		
		var a : A = new A();
		a.i = 12;
		a.M1();
		
		//----------------------------------------------------------------------
		trace("--- Access to the static field and static method ---");
		
		A.j = 433;
		A.M2();
	}
}
