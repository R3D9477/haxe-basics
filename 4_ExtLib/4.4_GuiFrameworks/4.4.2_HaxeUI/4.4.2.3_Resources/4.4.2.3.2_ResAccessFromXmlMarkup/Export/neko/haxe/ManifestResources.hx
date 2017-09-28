package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_roboto_regular_ttf);
		
		#end
		
		var data, manifest, library;
		
		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__styles_default_main_min_css extends null { }
@:keep @:bind #if display private #end class __ASSET__styles_default_main_css extends null { }
@:keep @:bind #if display private #end class __ASSET__fonts_roboto_regular_woff extends null { }
@:keep @:bind #if display private #end class __ASSET__fonts_roboto_regular_woff2 extends null { }
@:keep @:bind #if display private #end class __ASSET__fonts_roboto_regular_svg extends null { }
@:keep @:bind #if display private #end class __ASSET__fonts_roboto_regular_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__fonts_roboto_regular_eot extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)


@:keep #if display private #end class __ASSET__fonts_roboto_regular_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "fonts/Roboto-Regular.ttf"; name = "Roboto"; super (); }}


#else

@:keep @:expose('__ASSET__fonts_roboto_regular_ttf') #if display private #end class __ASSET__fonts_roboto_regular_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/Roboto-Regular.ttf"; #end name = "Roboto"; super (); }}


#end

#if (openfl && !flash)

@:keep @:expose('__ASSET__OPENFL__fonts_roboto_regular_ttf') #if display private #end class __ASSET__OPENFL__fonts_roboto_regular_ttf extends openfl.text.Font { public function new () { #if !html5 __fontPath = #if (ios || tvos) "assets/" + #end "fonts/Roboto-Regular.ttf"; #end name = "Roboto"; super (); }}


#end
#end