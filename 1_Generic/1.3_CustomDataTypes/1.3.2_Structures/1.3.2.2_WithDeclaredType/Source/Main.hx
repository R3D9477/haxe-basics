package;

typedef Point = { x : Int, y : Int }

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- STRUCTURE WITH TYPE DEFINITION ---");
		
		// http://old.haxe.org/manual/struct
		
		var s3 : Point = { x: 10, y: 15 };
		trace(s3);
	}
}