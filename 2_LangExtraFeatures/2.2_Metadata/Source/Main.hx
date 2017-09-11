package;

// http://old.haxe.org/manual/metadata
// http://haxe.org/manual/cr-metadata.html
// http://haxe.org/manual/lf-metadata.html
// http://old.haxe.org/manual/tips_and_tricks

import haxe.rtti.Meta;

@author("Nicolas") @debug class A {
	@range(1, 8) public var value:Int;
	@values(-1,100) public var x : Int;
	
	@broken @:noCompletion static function method() { }
	
	public function new() { }
}

class Main {
	public static function main () {
		// { debug => null, author => [Nicolas] }
		trace(Meta.getType(A));
		
		// [1,8]
		trace(Meta.getFields(A).value.range);
		
		// { broken => null }
		trace(Meta.getStatics(A).method);
		
		// [-1,100]
		var m = haxe.rtti.Meta.getFields(A);
		trace(m.x.values);
	}
}
