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
		trace("--- ENUMERATIONS ---");
		
		// http://old.haxe.org/ref/enums?lang=ru
		// http://haxe.org/manual/types-enum-instance.html
		// http://haxe.org/manual/types-enum-using.html
		
		var clr1 = Color.Green;
		
		switch (clr1)
		{
			case Color.Green:
				trace("Green");
			case Color.Red:
				trace("Red");
			case Color.Blue:
				trace("Blue");
			case Color.Rgb:
				trace("Custom");
			default:
				trace("Unknown");
		}
		
		var clr2 = Color.Rgb(10, 11, 12);
		
		switch (clr2)
		{
			case Color.Green:
				trace("Green");
			case Color.Red:
				trace("Red");
			case Color.Blue:
				trace("Blue");
			case Color.Rgb(r, g, b):
				trace("Custom: " + r + g + b);
			default:
				trace("Unknown");
		}
	}
}
