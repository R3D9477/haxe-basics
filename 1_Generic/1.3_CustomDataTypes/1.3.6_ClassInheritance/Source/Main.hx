package;

class Class_A {
	public function new () { trace("Constructor A"); }
	public function Generic_Method () { trace("Method Generic_Method_A"); }
	public function Method_A () { trace("Method Method_A"); }
}

// Inheritance of implementation of the class A
class Class_B extends Class_A {
	public function new () { super(); trace("Constructor B"); }
	public override function Generic_Method () { trace("Method Generic_Method_B"); }
	public function Method_B () { trace("Method Method_B"); }
}

// Inheritance of implementation of the class A and class B
class Class_C extends Class_B {
	public function new () { super(); trace("Constructor C"); }
	public override function Generic_Method () { trace("Method Generic_Method_C"); }
	public function Method_C () { trace("Method Method_C"); }
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Class A ---");
		
		var a = new Class_A();
		a.Generic_Method();
		a.Method_A();
		
		//----------------------------------------------------------------------
		trace("--- Class B (Inheritance of implementation of the class A) ---");
		
		var b = new Class_B();
		b.Generic_Method();
		b.Method_A();
		b.Method_B();
		
		//----------------------------------------------------------------------
		trace("--- Class C (Inheritance of implementation of the class A and class B) ---");
		
		var c = new Class_C();
		c.Generic_Method();
		c.Method_A();
		c.Method_B();
		c.Method_C();
	}
}
