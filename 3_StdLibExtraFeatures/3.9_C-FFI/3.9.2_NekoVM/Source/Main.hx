package;

// http://nekovm.org/doc/ffi

#if neko
	import neko.Lib;
#end

class Main {
	private static var set_k = Lib.load("libfoo", "set_k", 1);
	private static var get_k = Lib.load("libfoo", "get_k", 0);
	private static var sum_k = Lib.load("libfoo", "sum_k", 1);
	private static var show_k = Lib.load("libfoo", "show_k", 0);
	
	public static function main () {
		show_k();
		set_k(10);
		trace('get_k: ${get_k()}');
		trace('sum_k: ${sum_k(7)}');
		set_k(12);
		trace('get_k: ${get_k()}');
		show_k();
	}
}
