package ;

// https://github.com/profelis/macros_lessons/tree/master/macros_4
// haxe.ru/makrosy-haxe-avtomaticheskoe-vstraivanie-resursov-assets-embedding-2

import assets.Assets; 
import deep.macro.AssetsMacros;

class Main  {
	static function main() {
		trace(Assets.HelloMessage);
	}
}
