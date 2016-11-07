package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- LOOPS ---");
		
		for (i in 0...10) // for loop displays 10 numbers
			trace(i);
		
		var i = 1;
		while (i < 20) // while loop displays 20 numbers
			trace(i++);
	}
}
