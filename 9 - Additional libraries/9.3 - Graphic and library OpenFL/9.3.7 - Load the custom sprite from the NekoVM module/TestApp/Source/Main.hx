package;

import openfl.Lib;
import openfl.display.*;

import neko.vm.Loader;
import neko.vm.Module;

class Main extends Sprite {
	public function new () {
		super ();
		
		var customSpriteCls = Loader.local().loadModule("../../../../../../CustomSprite/Bin/CustomSprite.n").exportsTable().__classes.CustomSprite;
		
		Lib.current.addChild(Type.createInstance(customSpriteCls, []));
	}
}
