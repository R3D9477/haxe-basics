package;

import haxe.macro.Expr;
import haxe.macro.Context;

class Config {
	static var values : Map<String, String> = new Map<String, String>();
	
	macro public static function set (key : String, value : String) : Expr {
		values.set(key, value);
		return null;
	}
	
	macro public static function get (key : String) : Expr {
		return Context.makeExpr(values.get(key), Context.currentPos());
	}
}
