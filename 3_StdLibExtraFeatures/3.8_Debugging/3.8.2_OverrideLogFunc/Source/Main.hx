package;

// https://haxe.org/manual/debugging-trace-log.html

class Main {
	public static function main () {
		haxe.Log.trace = function (v:Dynamic, ?infos:haxe.PosInfos) {
			#if ( cpp || neko )
				Sys.stdout().writeString('[CUSTOM LOG]\n');
				Sys.stdout().writeString('   Value: $v\n');
				Sys.stdout().writeString('   Position: $infos\n');
			#end
		}
		
		trace("hello", "STR_ARG", 123, 3.45);
		trace("world", 6.78, "STR_ARG_1", 910);
	}
}