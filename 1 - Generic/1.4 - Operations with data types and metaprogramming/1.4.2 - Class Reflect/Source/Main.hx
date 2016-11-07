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

	public function func1 (a : Int, b : Int) {
		trace("Вызов метода func1 класса A arg: " + a + " + " + b + " = " + (a + b));
		return a + b;
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Объявление структуры с анонимным типом ---");
		
		var a = { one: 1, two: 2.2, three: "три", four: { one: "число один" } };
		trace(a);

		//----------------------------------------------------------------------
		trace("--- Проверка наличия поля объекта a по наименованию ---");

		trace("a содержит поле 'one': " + Reflect.hasField(a, "one"));
		trace("a содержит поле 'five': " + Reflect.hasField(a, "five"));

		//----------------------------------------------------------------------
		trace("--- Отображение всех полей объекта a ---");
		
		for(aField in Reflect.fields(a)) {
			trace("a." + aField + " = " + Reflect.field(a, aField));
		}

		//----------------------------------------------------------------------
		trace("--- Копирование объекта a ---");
		
		var b = Reflect.copy(a);
		trace(b);

		//----------------------------------------------------------------------
		trace("--- Отображение всех полей объекта b ---");
		
		for(bField in Reflect.fields(b)) {
			trace("b." + bField + " = " + Reflect.field(b, bField));
		}

		//----------------------------------------------------------------------
		trace("--- Изменение объекта a ---");
		
		a.two = 2.2222; // не повлияет на копию объекта
		a.three = "ТРИ"; // не повлияет на копию объекта
		a.four.one = "ЧИСЛО ОДИН"; // повлияет на копию объекта

		//----------------------------------------------------------------------
		trace("--- Отображение всех полей объекта a после изменения ---");
		
		for(aField in Reflect.fields(a)) {
			trace("a." + aField + " = " + Reflect.field(a, aField));
		}

		//----------------------------------------------------------------------
		trace("--- Отображение всех полей объекта b после изменения объекта a ---");
		
		for(bField in Reflect.fields(b)) {
			trace("b." + bField + " = " + Reflect.field(b, bField));
		}

		//----------------------------------------------------------------------
		trace("--- Вызов методов экземпляра объекта по наименованию ---");

		var c = new A();

		Reflect.callMethod(c, Reflect.field(c, "func"), []);
		trace("Результат вызова метода c.func1: " + Reflect.callMethod(c, Reflect.field(c, "func1"), [1, 2]));
	}
}
