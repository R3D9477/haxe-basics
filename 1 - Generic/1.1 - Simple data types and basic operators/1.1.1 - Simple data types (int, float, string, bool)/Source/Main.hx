package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- OPERATIONS WITH INTEGER NUMBERS ---");
		
		var i1:Int; // variable declaration without an initial value
		i1 = 321; // value assignment
		trace(i1);
		
		var i2:Int = 123; // declaring a variable with initial value
		trace(i2);
		
		trace(i1 + i2); // displays result of addition
		trace(i1 - i2); // displays result of subtraction
		trace(i1 * i2); // displays result of multiplication
		trace(i1 / i2); // displays result of division
		trace(i1 % i2); // displays remainder of the division
		
		//var i3:Int = i1 / i2; // error of type mismatch
		//trace(i3);
		
		trace("--------------------------------------------------------------");
		trace("--- OPERATIONS WITH FRACTIONAL NUMBERS ---");
		
		var f1:Float; // variable declaration without an initial value
		f1 = 3.14; // value assignment
		trace(f1);
		
		var f2:Float = 41.3; // declaring a variable with initial value
		trace(f2);
		
		trace(f1 + f2); // displays result of addition
		trace(f1 - f2); // displays result of subtraction
		trace(f1 * f2); // displays result of multiplication
		trace(f1 / f2); // displays result of division
		trace(f1 % f2); // displays remainder of the division
		
		var f3:Float = f1 / f2;
		trace(f3);
		
		trace("--------------------------------------------------------------");
		trace("--- OPERATIONS WITH STRINGS ---");
		
		var s1:String; // variable declaration without an initial value
		s1 = "blah blah STR1"; // value assignment
		trace(s1);
		
		var s2:String = "qwe STR2"; // declaring a variable with initial value
		trace(s2);
		
		var s3:String = s1 + ", " + s2 + s2 + s1;
		trace(s3);
		
		trace(s3.length); // displays length of string
		trace(s3.charAt(2)); // displays symbol by its index 2 in string
		trace(s3.indexOf("STR0")); // displays search results of substring from the left edge of the string
		trace(s3.indexOf("STR2")); // displays search results of substring from the left edge of the string
		trace(s3.indexOf("STR2", 21)); // displays search results of substring from the left edge of the string from 21 index
		trace(s3.lastIndexOf("STR2")); // displays search results of substring from the right edge of the string
		trace(s3.split("R")); // displays results of division of string by the symbol "R"
		trace(s3.split("R")[0]); // divide string by symbol "R" and display substring with index 0
		trace(s3.split("R")[1]); // divide string by symbol "R" and display substring with index 1
		trace(s3.substr(5, 8)); // displays substring starts from 5 and length to 8 symbols
		trace(s3.substring(10, 20)); // displays substring starts from 10 and length to 20 symbols
		trace(s3.toLowerCase()); // set all symbols of string to lower register and displays result
		trace(s3.toUpperCase()); // set all symbols of string to upper register and displays result
		
		trace("--------------------------------------------------------------");
		trace("--- OPERATIONS WITH BOOLEAN ---");
		
		var b1 : Bool; // variable declaration without an initial value
		b1 = true; // value assignment
		trace(b1);
		
		var b2 : Bool = false; // declaring a variable with initial value
		trace(b2);
		
		trace(b1 && b2); // boolean AND operation
		trace(b1 || b2); // boolean OR operation
		trace(!b1); // boolean NOT operation
		trace(!b2); // boolean NOT operation
	}
}
