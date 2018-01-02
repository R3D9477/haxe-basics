package;

// https://haxe.org/manual/debugging-posinfos.html

class Main {
	static function posInfoFunc (param1:Dynamic, param2:Dynamic, ?pos:haxe.PosInfos) {
		#if ( cpp || neko )
			Sys.stdout().writeString('[$param1, $param2]\n');
			Sys.stdout().writeString('   Position: $pos\n');
		#end
	}

	public static function main () {
		posInfoFunc("hello", "world");
		posInfoFunc(123, 3.45);
	}
}