package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- MECHANISM OF BRANCHNG if -- else if -- else ---");
		
		var i1:Int = 3;
		
		if (i1 > 5) {
			trace("number greater than 5");
		}
		else if (i1 > 3) {
			trace("number greater than 3, but lower or equal 5");
		}
		else {
			trace("number lower or equal 3");
		}
		
		var i2:Int = 5;
		var i3:Int = 8;
		
		if (i2 > 2 && i3 > 7) {
			trace("condition is valid");
		}
		else {
			trace("condition is NOT valid");
		}
		
		trace("--------------------------------------------------------------");
		trace("--- MECHANISM OF BRANCHNG switch -- case ---");
		
		var i4:Int = 3;
		
		switch (i4) {
			case 1:
				trace("code branch 1 of variable i4");
				trace("...");
			case 2:
				trace("code branch 2 of variable i4");
				trace("...");
			case 3:
				trace("code branch 3 of variable i4");
				trace("...");
			case 4:
				trace("code branch 4 of variable i4");
				trace("...");
			default:
				trace("default code branch of variable i4");
				trace("...");
		}
		
		var i5:Int = 2;
		
		switch (i5) {
			case 1:
				trace("code branch 1 of variable i5");
				trace("...");
			case 2:
				trace("code branch 2 of variable i5");
				trace("...");
			default:
				trace("default code branch of variable i5");
				trace("...");
		}
	}
}
