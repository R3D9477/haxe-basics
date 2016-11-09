package;

// http://old.haxe.org/manual/using
// http://haxe.org/manual/lf-static-extension.html
// http://haxe.org/manual/lf-static-extension-in-std.html

using Main.IntExtender; // Статическое расширение для типа Int
using StringTools; // Статическое расширение для типа String из стандартной библиотеки HaXe
using Main.MyEnum; // Прямой доступ к членам перечисления
using Main.MyEnumExtender; // Статическое расширение для перечисления
using MyEnum2;  // Прямой доступ к члена перечисления и статическому расширению перечисления из MyEnum2.hx

// Статическое расширение для типа Int

class IntExtender {
	static public function triple (i:Int) {
		return i * 3;
	}
}

// Статическое расширение для перечисления

enum MyEnum {
	A;
	B;
	C;
}

class MyEnumExtender {
	public static function toInt (e : MyEnum) {
		return Type.enumIndex(e);
	}
}

// http://haxe.org/manual/macro-limitations-static-extension.html

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Статическое расширение для типа Int ---");
		
		trace("Явный вызов метода triple(): " + Main.IntExtender.triple(12)); // Явный вызов метода класса статического расширения
		trace("Вызов метода triple(): " + 12.triple()); // Вызов метода статического расширения

		//----------------------------------------------------------------------
		trace("--- Статическое расширение для типа String из стандартной библиотеки HaXe ---");

		trace("Явный вызов метода replace(): " + StringTools.replace("adc", "d", "b")); // Явный вызов метода класса статического расширения
		trace("Вызов метода replace(): " + "adc".replace("d", "b")); // Вызов метода статического расширения

		//----------------------------------------------------------------------
		trace("--- Статическое расширение и использование using для перечисления ---");

		trace("Явный вызов метода toInt(): " + C.toInt()); // Явный вызов метода класса статического расширения
		trace("Вызов метода toInt(): " + C.toInt()); // Вызов метода статического расширения

		//----------------------------------------------------------------------
		trace("--- Статическое расширение и использование using для перечисления из файла MyEnum2.hx ---");

		trace("Явный вызов метода toInt(): " + C2.toInt()); // Явный вызов метода класса статического расширения
		trace("Вызов метода toInt(): " + C2.toInt()); // Вызов метода статического расширения
	}
}
