package;

import ffi.lib.EasyLibrary;

@:lib("Lib/bin/libfoo.so")
class Foo extends EasyLibrary {
	public function set_k (v:Int) : Int;
	public function get_k () : Int;
	public function sum_k (a:Int) : Int;
	public function show_k () : Void;
}

class Main {
	public static function main () {
		var f:Foo = new Foo();
		f.show_k();
		f.set_k(10);
		trace('get_k: ${f.get_k()}');
		trace('sum_k: ${f.sum_k(7)}');
		f.set_k(12);
		trace('get_k: ${f.get_k()}');
		f.show_k();
	}
}
