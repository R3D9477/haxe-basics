package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- COMPARSION OF NUMBERS ---");
		
		var i1:Int = 3;
		var i2:Int = 4;
		
		trace(i1 > i2); // displays the result of the expression "3 greater than 4"
		
		var f1:Float = 3.14;
		
		trace(f1 < i2); // displays the result of the expression "3.14 lower than 4"
		trace(f1 > 5);  // displays the result of the expression "3.14 greater than 5"
		trace(f1 >= 3); // displays the result of the expression "3.14 greater or equal than 3"
		trace(f1 <= 4); // displays the result of the expression "3.14 lower than 4"
		trace(f1 == 4); // displays the result of the expression "3.14 equal 4"
		trace(f1 != 6); // displays the result of the expression "3.14 not equal 6"
		
		trace("--------------------------------------------------------------");
		trace("--- COMPARSION OF STRINGS ---");
		
		var s1:String = "str1";
		var s2:String = "STR1";
		
		trace(s1 == "str1");
		trace(s1 == s2);
		trace(s1 == s2.toLowerCase());
		
		trace("--------------------------------------------------------------");
		trace("--- COMPARSION OF BOOLEANS ---");
		
		var b1:Bool = f1 > i2; // save the result of the expression "3.14 greater than 4" into variable b1
		trace(b1);
		
		var b2:Bool = i1 < i2; // save the result of the expression "3 lower than 4" into variable b2
		trace(b2);
		
		trace(b1 && b2); // expression "logical false AND logical true"
		trace(b1 || b2); // expression "logical false OR logical true"
	}
}
