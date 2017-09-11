package;

// http://old.haxe.org/manual/using
// http://haxe.org/manual/lf-static-extension.html
// http://haxe.org/manual/lf-static-extension-in-std.html

using Main.IntExtender; // Static extension for type Int
using StringTools; // Static extension for type String from standard library of Haxe
using Main.MyEnum; // Stright access to members of enumeration MyEnum
using Main.MyEnumExtender; // Static extension for enumeration
using MyEnum2;  // Stright access to members of enumeration MyEnum2 and to static extension form MyEnum2.hx


class IntExtender { // Static extension for type Int
	static public function triple (i:Int) {
		return i * 3;
	}
}

enum MyEnum {
	A;
	B;
	C;
}

class MyEnumExtender { // Static extension for enumeration
	public static function toInt (e : MyEnum) {
		return Type.enumIndex(e);
	}
}


// http://haxe.org/manual/macro-limitations-static-extension.html

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Static extension for type Int ---");
		
		trace("an explicit call of method triple(): " + Main.IntExtender.triple(12)); // an explicit call of method from class of static extension
		trace("call method triple(): " + 12.triple()); // call method of static extension
		
		//----------------------------------------------------------------------
		trace("--- Static extension for type String from standard library of Haxe ---");
		
		trace("an explicit call of method replace(): " + StringTools.replace("adc", "d", "b")); // an explicit call of method from class of static extension
		trace("call method replace(): " + "adc".replace("d", "b")); // call method of static extension
		
		//----------------------------------------------------------------------
		trace("--- Static extension and keyword 'using' for enumeration ---");
		
		trace("an explicit call of method toInt(): " + C.toInt()); // an explicit call of method from class of static extension
		trace("call method toInt(): " + C.toInt()); // call method of static extension
		
		//----------------------------------------------------------------------
		trace("--- Static extension and keyword 'using' for enumeration from MyEnum2.hx ---");
		
		trace("an explicit call of method toInt(): " + C2.toInt()); // an explicit call of method from class of static extension
		trace("call method toInt(): " + C2.toInt()); // call method of static extension
	}
}
