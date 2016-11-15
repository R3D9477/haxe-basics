package;

class Cls {
	var i:Int;
	
	public function new (i:Int)
		this.i = i;
	
	public function objMethod (arg:Int) : Int {
		trace("called original objMethod");
		
		return arg + this.i;
	}
	
	public static function clsMethod (arg:Int) : Int {
		trace("called original clsMethod");
		
		return arg * 2;
	}
}

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- REWRITE CLASS METHODS AT RUNTIME ---");
		
		var obj:Cls = new Cls(10);
		
		trace("--------------------------------------------------------------");
		trace("--- ORIGINAL METHODS ---");
		
		trace('orig objMethod res: ${obj.objMethod(5)}');
		trace('orig clsMethod res: ${Cls.clsMethod(10)}');
		
		trace("--------------------------------------------------------------");
		trace("--- MODIFIED METHOD OF OBJECT ---");
		
		var origObjMethod:Int->Int = Reflect.field(obj, "objMethod");
		
		Reflect.setField(obj, "objMethod", function (arg:Int) : Int {
			trace("called modified objMethod");
			
			return origObjMethod(arg) - 100;
		});
		
		trace('mod objMethod res: ${obj.objMethod(5)}');
		
		trace("--------------------------------------------------------------");
		trace("--- MODIFIED STATIC METHOD OF CLASS ---");
		
		var origClsMethod:Int->Int = Reflect.field(Cls, "clsMethod");
		
		Reflect.setField(Cls, "clsMethod", function (arg:Int) : Int {
			trace("called modified clsMethod");
			
			return origClsMethod(arg) - 100;
		});
		
		trace('mod clsMethod res: ${Cls.clsMethod(10)}');
	}
}
