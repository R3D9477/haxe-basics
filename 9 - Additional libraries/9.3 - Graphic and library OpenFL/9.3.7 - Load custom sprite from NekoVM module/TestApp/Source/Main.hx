package;

import openfl.Lib;
import openfl.display.*;
import neko.vm.Loader;
import neko.vm.Module;

class Main extends Sprite {
	public function new () {
		super ();
		
		var module = Loader.local().loadModule("../../../../../../CustomSprite/Bin/CustomSprite.n");
		var wgtCls = module.exportsTable().__classes.CustomSprite;
		
		Lib.current.addChild(Type.createInstance(wgtCls, []));
	}
}
