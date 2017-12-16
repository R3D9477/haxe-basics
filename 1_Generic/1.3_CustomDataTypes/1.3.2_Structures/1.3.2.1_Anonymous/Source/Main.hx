package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		//trace("--- ANONIMOUS STRUCTURE ---")
		
		// http://haxe.org/manual/types-anonymous-structure.html
		
		var s1 = {
			name: "Nicolas",
			age: 32,
			pos: [{ x : 0, y : 0 }, { x : 1, y : -1 }],
		};
		trace(s1);
		
		var s2 = { x: 10, y: 15 };
		trace(s2);
	}
}
