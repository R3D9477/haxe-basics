package;

// http://old.haxe.org/ref/type_params?lang=ru
// http://haxe.org/manual/type-system-generic.html
// http://haxe.org/manual/type-system-type-parameters.html

class A<T> {
	public var value1:T;
	public var value2:T;
	
	public function new (value1:T, value2:T) {
		this.value1 = value1;
		this.value2 = value2;
	}
	
	public function equals (op2 : A<T>) {
		if ((this.value1 == op2.value1) && (this.value2 == op2.value2)) {
			trace("Значения равны");
		}
		else {
			trace("Значения не равны!");
		}
	}
}

class Main {
	public static function main () {
		var a = new A<Int>(43, 101);
		trace(a);
		
		var b = new A<Int>(10, 30);
		trace(b);
		
		a.equals(b);
	}
}
