package;

// http://haxe.ru/reification-bindx
// https://github.com/profelis/bindx2

import bindx.Bind;
import bindx.IBindable;

@:bindable class BndClass implements IBindable {
	public var value:String;
	
	public function new () { }
}

class Main {
	public static function main () {
		var bc = new BndClass();
		bc.value = "old_str";
		
		Bind.bind(bc.value, onValueChange);
		
		bc.value = "new_str";
		bc.value = "new_str2";
		bc.value = "new_str3";
	}
	
	public static function onValueChange (from:Null<String>, to:Null<String>) {
		trace('value changed from $from to $to');
	}
}
