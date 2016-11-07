package;

// Класс с данными и методами
class A {
	public var valueA : Int;
	public var valueB : Int;

	public function new (valueA : Int, valueB : Int) {
		this.valueA = valueA;
		this.valueB = valueB;
	}

	public function classMethod() {
		trace("Метод класса...");
	}
}

// Абстрацкия класса A
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
		trace("--- Объявление абстрацкий ---");

		var a : A2 = new A2(10, 20);
		trace(a);
		
		var b : A2 = new A2(3, 44);
		trace(b);

		//----------------------------------------------------------------------
		trace("--- Сумма абстракций ---");

		var c : A2 = a + b;
		trace(c);

		//----------------------------------------------------------------------
		trace("--- Вызов метода класса ---");

		c.classMethod();
	}
}
