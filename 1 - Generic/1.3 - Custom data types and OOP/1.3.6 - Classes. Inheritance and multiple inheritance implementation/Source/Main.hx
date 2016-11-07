package;

class Class_A {
	public function new () { trace("Конструктор A"); }
	public function Generic_Method () { trace("Метод Generic_Method_A"); }
	public function Method_A () { trace("Метод Method_A"); }
}

// Наследование реализации класса A
class Class_B extends Class_A {
	public function new () { super(); trace("Конструктор B"); }
	public override function Generic_Method () { trace("Метод Generic_Method_B"); }
	public function Method_B () { trace("Метод Method_B"); }
}

// Наследование реализации класса A и класса B
class Class_C extends Class_B {
	public function new () { super(); trace("Конструктор C"); }
	public override function Generic_Method () { trace("Метод Generic_Method_C"); }
	public function Method_C () { trace("Метод Method_C"); }
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Класс A ---");

		var a = new Class_A();
		a.Generic_Method();
		a.Method_A();

		//----------------------------------------------------------------------
		trace("--- Класс B (наследование реализации класса A) ---");

		var b = new Class_B();
		b.Generic_Method();
		b.Method_A();
		b.Method_B();

		//----------------------------------------------------------------------
		trace("--- Класс C (наследование реализации класса A и класса B) ---");

		var c = new Class_C();
		c.Generic_Method();
		c.Method_A();
		c.Method_B();
		c.Method_C();
	}
}
