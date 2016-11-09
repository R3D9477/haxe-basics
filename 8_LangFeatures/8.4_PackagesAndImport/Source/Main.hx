// http://old.haxe.org/ref/packages?lang=ru

package;

import my.pack.C; // Импорт единственного типа из модуля
import my.strPack.StringUtils; // Импорт единственного типа из модуля
import my.pack2.*; // Импорт по маске

class C2 extends C {
	public function new () { 
		super(); 
		trace("Конструктор класса C2"); 
	}

	public override function method (e : E) {
		trace("my.strPack.StringUtils.double: " + StringUtils.double("<Опция " + e + ">")); // метод StringUtils.double из пакета my.strPack
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Класс C из пакета my.pack (импорт единственного типа из модуля) ---");
		
		var c : C = new C();
		c.method(E.opA);
		c.method(E.opB);
		c.method(E.opC);

		//----------------------------------------------------------------------
		trace("--- Класс C2 из главного исходника Main.hx (импорт единственного типа из модуля) ---");

		var c2 : C2 = new C2();
		c2.method(E.opA);
		c2.method(E.opB);
		c2.method(E.opC);

		//----------------------------------------------------------------------
		trace("--- Доступ к классам пакета my.pack2 (импорт по маске) ---");

		CL1.method();
		CL2.method();
		CL3.method();
		CL4.method();
		CL5.method();
	}
}
