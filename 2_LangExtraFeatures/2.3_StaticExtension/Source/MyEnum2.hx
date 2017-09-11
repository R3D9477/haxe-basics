enum MyEnum2 {
	B2;
	C2;
	A2;
}

class MyEnumHelper2 { // Static extension for enumeration
	public static function toInt (e : MyEnum2) {
		return Type.enumIndex(e);
	}
}
