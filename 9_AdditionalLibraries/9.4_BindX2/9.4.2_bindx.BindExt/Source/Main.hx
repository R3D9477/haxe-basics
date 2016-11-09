package;

// http://haxe.ru/reification-bindx
// https://github.com/profelis/bindx2

import bindx.BindExt;
import bindx.IBindable;

@:bindable class BndClass implements IBindable {
	public var in_value:String;
	public var out_value:String;
	
	public function new () { }
}

class Main {
	public static function main () {
		var bc = new BndClass();		
		BindExt.exprTo("OUTVALUE is '" + bc.in_value + "' with some additional data", bc.out_value);
		
		bc.in_value = "new_str";
		trace("out_value: " + bc.out_value);

		bc.in_value = "new_str2";
		trace("out_value: " + bc.out_value);

		bc.in_value = "new_str3";
		trace("out_value: " + bc.out_value);
	}
}
