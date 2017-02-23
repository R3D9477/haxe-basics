package;

class Main {
	public static function main () {
		// http://old.haxe.org/ref/conditionals
		// http://haxe.org/manual/lf-condition-compilation.html
		
		var i : Int;
		
		#if cpp
			// Specific code for C++ target
			i = 1;
			trace("Selected C++ target");
		#elseif cs
			// Specific code for C# target
			i = 2;
			trace("Selected CSharp target");
		#elseif js
			// Specific code for JavaScript target
			i = 3;
			trace("Selected JavaScript target");
		#elseif neko
			// Specific code for Neko target
			i = 4;
			trace("Selected Neko target");
		#else 
			#error  // will display "Haven't realization for target platform"
			#error "Custom error" // will display "Custom error"
			i = -1;
			trace("Selected unknown target");
		#end
		
		trace("Value of i: " + i);
		
		#if debug
			trace("Debugging information included for all targets");
			
			#if (debug_level > 3)
				trace("Debugging level: " + 3);
			#else
				trace("Debugging level is too low");
			#end
		#end
		
		#if (neko && mydebug)
			trace("Debugging information included for Neko target");
		#end
		
		#if (haxe_ver >= 3.2)
			trace("Version of Haxe >= 3.2");
		#else
			trace("Version of Haxe < 3.2");
		#end
	}
}
