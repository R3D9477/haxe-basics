package;

// http://api.haxe.org/Type.html
// http://old.haxe.org/doc/cross/reflect

class A {
	public function new () {
		trace("Конструктор класса A");
	}
	
	public function func () {
		trace("Вызов метода func класса A");
	}

	public function func2 () {
		trace("Вызов метода func2 класса A");
	}

	public function func3 () {
		trace("Вызов метода func3 класса A");
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Объявление переменных ---");

		var a = new A();
		var b = { one: 1, two: 2.2, three: "three" };
		var c = 1;
		var d = 2.2;
		var e = "строка...";
		
		//----------------------------------------------------------------------
		trace("--- Получить типы переменных ---");

		trace("тип a: " + Type.typeof(a));
		trace("тип a.func: " + Type.typeof(a.func));
		trace("тип b: " + Type.typeof(b));
		trace("тип c: " + Type.typeof(c));
		trace("тип d: " + Type.typeof(d));
		trace("тип e: " + Type.typeof(e));

		//----------------------------------------------------------------------
		trace("--- Получить наименования типов переменных ---");

		trace("Наименование типа a: " + Type.getClassName(Type.getClass(a)));
		trace("Наименование типа b: " + Type.getClassName(Type.getClass(b)));
		trace("Наименование типа c: " + Type.getClassName(Type.getClass(c)));
		trace("Наименование типа d: " + Type.getClassName(Type.getClass(d)));
		trace("Наименование типа e: " + Type.getClassName(Type.getClass(e)));

		//----------------------------------------------------------------------
		trace("--- Получить наименование классов типов переменных ---");

		trace("a является типом A: " + Std.is(a, A));
		trace("b является типом Int: " + Std.is(b, Int));
		trace("c является как типом Int: " + Std.is(c, Int));
		trace("c является как типом Float: " + Std.is(c, Float));
		trace("d является типом Int: " + Std.is(d, Int));
		trace("d является типом Float: " + Std.is(d, Float));
		trace("e является типом String: " + Std.is(e, String));

		//----------------------------------------------------------------------
		trace("--- Создание экземпляра объекта по наименованию типа ---");

		var a2 = Type.createInstance(Type.resolveClass("A"), []);
		a2.func();

		//----------------------------------------------------------------------
		trace("--- Список методов эклемпляра объекта класса A ---");
		
		var aFields = Type.getInstanceFields(Type.resolveClass("A"));
		
		for(field in aFields) {
			trace("a." + field);
		}
	}
}
