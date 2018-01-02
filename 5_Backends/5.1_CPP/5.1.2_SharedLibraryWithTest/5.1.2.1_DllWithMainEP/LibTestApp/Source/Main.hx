package;

// https://gist.github.com/ibilon/02e3e4e7f2c825444501a2e878e0ec7f

class Main {
	public static function main () {
		var lib = Dl.open("../../Lib/Bin/Main.dso", Dl.RTLD_NOW);
		
		if (lib == null) {
			trace("can't find library");
			Sys.exit(1);
		}

		var fn = Dl.sym(lib, "hxRunLibrary");
		
		if (fn == null) {
			trace("can't find entry point");
			Sys.exit(1);
		}

		var err:cpp.ConstCharStar = untyped __cpp__("reinterpret_cast< const char*(*)() > ({0})()", fn);
			
		if (err != null) {
			trace("Error: " + err);
			Sys.exit(1);
		}
	}
}