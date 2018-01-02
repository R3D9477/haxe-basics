package;

import neko.vm.Loader;
import neko.vm.Module;

class Main {
	public static function main () {
		var loader = Loader.local();
		
		var module:Module = loader.loadModule("DynModule_Prg");
		var classes:Dynamic = module.exportsTable().__classes;
		var classesTypes = Reflect.fields(classes);
		
		trace(classesTypes);
		
		module = loader.loadModule("DynModule_Lib");
		classes = module.exportsTable().__classes;
		classesTypes = Reflect.fields(classes);
		
		trace(classesTypes);
		
		var dynModLib = Type.createInstance(classes.DynModule_Lib, []);
		dynModLib.showMessage();
	}
}