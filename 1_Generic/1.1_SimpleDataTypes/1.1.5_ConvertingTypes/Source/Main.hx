package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- EXPLICIT TYPE CONVERSION ---");
		
		var f1:Float = 333.67;
		var i1 = Std.int(f1); // explicit conversion from Float to Int
		trace(i1);
		
		var s1:String = "my text " + Std.string(i1) + " " + Std.string(f1); // explicit conversion from Int and Float to String
		trace(s1);
		
		var s2:String = "321";
		i1 = Std.parseInt(s2); // explicit conversion from String to Int
		i1 = i1 + 5;
		trace(i1);
		
		var s3:String = "43.776";
		f1 = Std.parseFloat(s3); // explicit conversion from String to Float
		trace(f1);
		
		trace("--------------------------------------------------------------");
		trace("--- IMPLICIT TYPE CONVERSION ---");
		
		var i2:Int = 3;
		var f2:Float = i1 / i2; // implicit conversion from Int to Float during the division operation
		trace(f2);
		
		var s4:String = "My String with number ";
		s4 = s4 + i1; // implicit conversion from Int to String
		trace(s4);
	}
}
