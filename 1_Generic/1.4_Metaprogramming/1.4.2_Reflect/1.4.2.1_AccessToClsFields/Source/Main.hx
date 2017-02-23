package;

// http://api.haxe.org/Type.html
// http://old.haxe.org/doc/cross/reflect

class A {
	public function new () {
		trace("Constructor of the class A");
	}
	
	public function func () {
		trace("Call method 'func' of the class A");
	}
	
	public function func1 (a : Int, b : Int) {
		trace("Call method 'func1' of the class A with arguments: " + a + " + " + b + " = " + (a + b));
		return a + b;
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Make anonymous structure ---");
		
		var a = { one: 1, two: 2.2, three: "три", four: { one: "number one" } };
		trace(a);
		
		//----------------------------------------------------------------------
		trace("--- Check availability of the field by name ---");
		
		trace("The object 'a' contains 'one': " + Reflect.hasField(a, "one"));
		trace("The object 'a' contains 'five': " + Reflect.hasField(a, "five"));
		
		//----------------------------------------------------------------------
		trace("--- Display all fields of object 'a' ---");
		
		for(aField in Reflect.fields(a)) {
			trace("a." + aField + " = " + Reflect.field(a, aField));
		}
		
		//----------------------------------------------------------------------
		trace("--- Copy object 'a' ---");
		
		var b = Reflect.copy(a);
		trace(b);
		
		//----------------------------------------------------------------------
		trace("--- Display all fields of object 'b' ---");
		
		for(bField in Reflect.fields(b)) {
			trace("b." + bField + " = " + Reflect.field(b, bField));
		}
		
		//----------------------------------------------------------------------
		trace("--- Change object 'a' ---");
		
		a.two = 2.2222; // not affect the copy 'b' of the object 'a'
		a.three = "THREE"; // not affect the copy 'b' of the object 'a'
		a.four.one = "NUMBER ONE"; // affect the copy 'b' of the object 'a'!!!
		
		//----------------------------------------------------------------------
		trace("--- Display all fields of object 'a' after changing ---");
		
		for(aField in Reflect.fields(a)) {
			trace("a." + aField + " = " + Reflect.field(a, aField));
		}
		
		//----------------------------------------------------------------------
		trace("--- Display all fields of object 'b' after changing object 'a' ---");
		
		for(bField in Reflect.fields(b)) {
			trace("b." + bField + " = " + Reflect.field(b, bField));
		}
		
		//----------------------------------------------------------------------
		trace("--- Call method of object by name ---");
		
		var c = new A();
		
		Reflect.callMethod(c, Reflect.field(c, "func"), []);
		trace("Result of method 'c.func1': " + Reflect.callMethod(c, Reflect.field(c, "func1"), [1, 2]));
	}
}
