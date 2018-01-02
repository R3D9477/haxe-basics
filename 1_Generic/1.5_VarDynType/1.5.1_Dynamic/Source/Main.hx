package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------------------------------------------------
		trace("	Show value type of dynamic variables");

		var dyn:Dynamic;

		dyn = 42;
		showValueType(dyn);

		dyn = 42.42;
		showValueType(dyn);

		dyn = true;
		showValueType(dyn);

		dyn = "text of string...";
		showValueType(dyn);

		//----------------------------------------------------------------------------------------------------------------
		trace("	Add values of dynamic variables");

		var sDyn:Dynamic = "string value";
		var iDyn:Dynamic = 42;
		var fDyn:Dynamic = 42.42;
		var bDyn:Dynamic = true;

		trace (sDyn + iDyn); // will conctaterate string, result "string value42"
		trace (iDyn + fDyn); // result will be float 84.42
		trace (iDyn + bDyn); // will be excepted
	}

	static function showValueType (dv:Dynamic) {
		if (Type.enumEq(Type.typeof(dv), ValueType.TClass(String)))
			trace('"$dv" -- TClass(String)');
		else
			trace('$dv -- ${Type.typeof(dv)}');
	}
}