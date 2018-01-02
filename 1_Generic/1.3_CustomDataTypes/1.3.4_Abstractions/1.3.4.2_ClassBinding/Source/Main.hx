package;

// Class with fields and methods
class A {
	public var valueA : Int;
	public var valueB : Int;
	
	public function new (valueA : Int, valueB : Int) {
		this.valueA = valueA;
		this.valueB = valueB;
	}
	
	public function classMethod () {
		trace("Method of the class...");
	}
}

// Abstraction of the class A
@:forward
abstract A2(A) to A from A {
	public function new (valueA : Int, valueB : Int) {
		this = new A(valueA, valueB);
	}
	
	@:op(A + B)
	static public function sum (lhs: A2, rhs : A2) : A2 {
		return new A2(lhs.valueA + rhs.valueA, lhs.valueB + rhs.valueB);
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- MAKE A TWO OBJECTS OF ABSTRATIONS ---");
		
		var a : A2 = new A2(10, 20);
		trace(a);
		
		var b : A2 = new A2(3, 44);
		trace(b);
		
		//----------------------------------------------------------------------
		trace("--- Summ of two objects ---");
		
		var c : A2 = a + b;
		trace(c);
		
		//----------------------------------------------------------------------
		trace("--- Call method who was defined in class ---");
		
		c.classMethod();
	}
}
