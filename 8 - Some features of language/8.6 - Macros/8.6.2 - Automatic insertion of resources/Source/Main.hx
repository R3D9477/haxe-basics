package;

// http://old.haxe.org/manual/macros/examples
// http://haxe.org/manual/macro-initialization.html

class Main {
	static function main () {
		trace(Config.get("key"));
	}
}
