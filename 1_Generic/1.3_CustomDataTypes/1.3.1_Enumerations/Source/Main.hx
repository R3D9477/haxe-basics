package;

enum Color {
	Red;
	Green;
	Blue;
	Rgb(r:Int, g:Int, b:Int);
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Перечисления ---");
		
		// http://old.haxe.org/ref/enums?lang=ru
		// http://haxe.org/manual/types-enum-instance.html
		// http://haxe.org/manual/types-enum-using.html

		var clr1 = Color.Green;
		
		switch (clr1)
		{
			case Color.Green:
				trace("Зелёный");
			case Color.Red:
				trace("Красный");
			case Color.Blue:
				trace("Синий");
			case Color.Rgb:
				trace("Кастом");
			default:
				trace("Неизвестный");
		}

		var clr2 = Color.Rgb(10, 11, 12);

		switch (clr2)
		{
			case Color.Green:
				trace("Зелёный");
			case Color.Red:
				trace("Красный");
			case Color.Blue:
				trace("Синий");
			case Color.Rgb(r, g, b):
				trace("Кастом: " + r + g + b);
			default:
				trace("Неизвестный");
		}
	}
}
