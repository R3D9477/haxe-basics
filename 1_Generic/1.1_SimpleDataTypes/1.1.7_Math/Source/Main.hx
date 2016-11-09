package;

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- CLASS Math: CONSTANTS ---");
		
		trace("PI: " + Math.PI); // displays constant PI
		trace("e^4.231: " + Math.exp(4.231)); // displays exponent in the degree
		
		trace("--------------------------------------------------------------");
		trace("--- CLASS Math: ALGEBRAIC FUNCTIONS ---");
		
		trace("Natural logarithm 432.103: " + Math.log(432.103));
		
		trace("Absolute value of 333.555: " + Math.abs(333.555));
		trace("Absolute value of -112.6643: " + Math.abs(-112.6643));
		
		trace("Select min between 4 and 172: " + Math.min(4, 172));
		trace("Select max between 4 and 172: " + Math.max(4, 172));
		
		trace("2 to the exponent power 3: " + Math.pow(2, 3));
		trace("Square root of 16: " + Math.sqrt(16));
		
		trace("Random number from 0.0 to 1.0: " + Math.random());
		
		trace("--------------------------------------------------------------");
		trace("--- CLASS Math: ROUND NUMBERS ---");
		
		trace("Round 83.787 (result type Int): " + Math.round(83.787));
		trace("Round 83.787 (result type Float): " + Math.fround(83.787));
		
		trace("The smallest integer value that is greater than the number of 83.787 (result type Int): " + Math.ceil(83.787));
		trace("The smallest integer value that is greater than the number of 83.787 (result type Float): " + Math.fceil(83.787));
		trace("The largest integer value that is less than the number of 83.787 (result type Int): " + Math.floor(83.787));
		trace("The largest integer value that is less than the number of 83.787 (result type Float): " + Math.ffloor(83.787));
		
		trace("--------------------------------------------------------------");
		trace("--- CLASS Math: TRIGONOMETRIC FUNCTIONS ---");
		
		trace("Sinus of 24 (rad): " + Math.sin(24));
		trace("Arcsinus of 24 (rad): " + Math.asin(24));
		
		trace("Cosinus of 24 (rad): " + Math.cos(24));
		trace("Arccosinus of 24 (rad): " + Math.acos(24));
		
		trace("Tangent of 24 (rad): " + Math.tan(24));
		trace("Arctangent of 24 (rad): " + Math.atan(24));
		trace("Arctangent of multiplication of 8 and 12 (rad): " + Math.atan2(8, 12));
	}
}
