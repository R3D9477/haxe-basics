package;

interface I1 {
	public function showName () : Void;
	public function showDate () : Void;
}

// Наследование интерфейсов

class A implements I1 {
	public function new () { }
	
	// Реализация интерфейса I1
	public function showName () { trace("Name: Class A"); }
	public function showDate () { trace("Date A: " + Date.now()); }
}

class B implements I1 {
	public function new () { }

	// Реализация интерфейса I1
	public function showName () { trace("Name: Class B"); }
	public function showDate () { trace("Date B: " + Date.now()); }
}

interface I2 {
	public var value : Int;
	public function showValue () : Void;
}

// Множественное наследование интерфейсов

class C implements I1 implements I2 {
	public function new () { }
	
	// Реализация интерфейса I1
	public function showName () { trace("Name: Class C"); }
	public function showDate () { trace("Date C: " + Date.now()); }

	// Реализация интерфейса I2
	public var value : Int = 50;
	public function showValue () { trace("Value C: " + this.value); }
}

class D implements I1 implements I2 {
	public function new () { }

	// Реализация интерфейса I1	
	public function showName () { trace("Name: Class D"); }
	public function showDate () { trace("Date D: " + Date.now()); }

	// Реализация интерфейса I2
	public var value : Int = 25;
	public function showValue () { trace("Value D: " + this.value); }
}

class Main {
	public static function showI1 (i : I1) {
		i.showName();
	}

	public static function showI2 (i : I2) {
		i.showValue();
	}

	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Объявление классов ---");

		var a : A = new A();
		var b : B = new B();
		var c : C = new C();
		var d : D = new D();
		
		//----------------------------------------------------------------------
		trace("--- Вызов методов интерфейса I1 ---");

		showI1(a);
		showI1(b);
		showI1(c);
		showI1(d);

		//----------------------------------------------------------------------
		trace("--- Вызов методов интерфейса I2 ---");
		
		showI2(c);
		showI2(d);
	}
}
