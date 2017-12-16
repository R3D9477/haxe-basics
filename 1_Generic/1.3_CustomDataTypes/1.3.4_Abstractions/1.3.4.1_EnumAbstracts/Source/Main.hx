package;



class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- MAKE A TWO OBJECTS OF ABSTRATIONS ---");
		
		var a : A2 = new A2(10, 20);
		trace(a);
		
		var b : A2 = new A2(3, 44);
		trace(b);
		
		//----------------------------------------------------------------------
		trace("--- Summ of two objects ---");
		
		var c : A2 = a + b;
		trace(c);
		
		//----------------------------------------------------------------------
		trace("--- Call method who was defined in class ---");
		
		c.classMethod();
	}
}
