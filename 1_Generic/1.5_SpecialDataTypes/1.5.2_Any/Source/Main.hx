package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------------------------------------------------
		trace("	Show value type of variables");

		var av:Any;

		av = 42;
		showValueType(av);

		av = 42.42;
		showValueType(av);

		av = true;
		showValueType(av);

		av = "text of string...";
		showValueType(av);

		//----------------------------------------------------------------------------------------------------------------
		trace("	Add values of variables");

		var sAv:Any = "string value";
		var iAv:Any = 42;
		var fAv:Any = 42.42;
		var bAv:Any = true;

		// trace (sAv + iAv); // compiler don't allow this operation
		trace (cast(sAv, String) + cast(iAv, Int));

		// trace (iAv + fAv); // compiler don't allow this operation
		trace (cast(iAv, Int) + cast(fAv, Float));

		// trace (iAv + bAv); // compiler don't allow this operation
		// trace (cast(iAv, Int) + cast(bAv, Bool));  // compiler don't allow this operation
	}

	static function showValueType (av:Any) {
		if (Type.enumEq(Type.typeof(av), ValueType.TClass(String)))
			trace('"$av" -- TClass(String)');
		else
			trace('$av -- ${Type.typeof(av)}');
	}
}