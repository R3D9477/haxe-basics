package;

// http://api.haxe.org/Type.html
// http://old.haxe.org/doc/cross/reflect

class A {
	public function new () {
		trace("Custructor of the class A");
	}
	
	public function func () {
		trace("Call method 'func' of the class A");
	}
	
	public function func2 () {
		trace("Call method 'func2' of the class A");
	}
	
	public function func3 () {
		trace("Call method 'func3' of the class A");
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Make a some variables ---");
		
		var a = new A();
		var b = { one: 1, two: 2.2, three: "three" };
		var c = 1;
		var d = 2.2;
		var e = "string...";
		
		//----------------------------------------------------------------------
		trace("--- Get types of the variables ---");
		
		trace("Type of the a: " + Type.typeof(a));
		trace("Type of the a.func: " + Type.typeof(a.func));
		trace("Type of the b: " + Type.typeof(b));
		trace("Type of the c: " + Type.typeof(c));
		trace("Type of the d: " + Type.typeof(d));
		trace("Type of the e: " + Type.typeof(e));
		
		//----------------------------------------------------------------------
		trace("--- Get names of ther classes of variables ---");
		
		trace("Name of class of the variable a: " + Type.getClassName(Type.getClass(a)));
		trace("Name of class of the variable b: " + Type.getClassName(Type.getClass(b)));
		trace("Name of class of the variable c: " + Type.getClassName(Type.getClass(c)));
		trace("Name of class of the variable d: " + Type.getClassName(Type.getClass(d)));
		trace("Name of class of the variable e: " + Type.getClassName(Type.getClass(e)));
		
		//----------------------------------------------------------------------
		trace("--- Compare types of the variables ---");
		
		trace("Type of the variable a is A: " + Std.is(a, A));
		trace("Type of the variable b is Int: " + Std.is(b, Int));
		trace("Type of the variable c is Int: " + Std.is(c, Int));
		trace("Type of the variable c is Float: " + Std.is(c, Float));
		trace("Type of the variable d is Int: " + Std.is(d, Int));
		trace("Type of the variable d is Float: " + Std.is(d, Float));
		trace("Type of the variable e is String: " + Std.is(e, String));
		
		//----------------------------------------------------------------------
		trace("--- Make object by a name of the class ---");
		
		var a2 = Type.createInstance(Type.resolveClass("A"), []);
		a2.func();
		
		//----------------------------------------------------------------------
		trace("--- List of methods of object of the class A ---");
		
		var aFields = Type.getInstanceFields(Type.resolveClass("A"));
		
		for(field in aFields) {
			trace("a." + field);
		}
	}
}
