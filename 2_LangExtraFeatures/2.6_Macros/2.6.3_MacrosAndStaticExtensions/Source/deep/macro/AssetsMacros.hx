package deep.macro;

#if macro
	import haxe.io.Path;
	import haxe.macro.Compiler;
	import haxe.macro.Context;
	import haxe.macro.Expr;
	import haxe.macro.ExprTools;
	import haxe.macro.Type;
	import sys.FileSystem;
	import sys.io.File;

	enum AssetType {
		AText;
	}
#end

class AssetsMacros {
	#if macro
		static var TEXT = ["txt"];
		
		// Name of meta tag
		inline static function getMetaName(type:AssetType) {
			return switch (type) {
				case AText: ":text";
			}
		}
	
		// Complex type
		inline static function getComplexType(type:AssetType):ComplexType {
			return switch (type) {
				case AText: macro : String;
			}
		}
	
		// Base type
		inline static function getKind(type:ComplexType):TypeDefKind {
			return switch (type) {
				case TPath(p):
					TDClass(p);
				default:
					Context.error("can't find asset type", Context.currentPos());
					null;
			}
		}
	
		inline static function getClassPrefix(type:AssetType) {
			return switch (type) {
				case AText: "Text_";
			}
		}
	
		inline static function getVarPrefix(type:AssetType) {
			return switch (type) {
				case AText: "txt";
			}
		}
	
		inline static function getArgs(type:AssetType):Array<Expr> {
			return switch (type) {
				case AText: [];
			}
		}
	
		static var idEreg = ~/[A-Z_][A-Z0-9_]*/i;
		static var idCharEreg = ~/[A-Z0-9_]/i;
	
		inline static function varName(type:AssetType, name:String) {
			if (idEreg.match(name)) return name;
			else {
				var res = "";
				for (i in 0...name.length) {
					var ch = name.charAt(i);
					if (idCharEreg.match(ch)) res += ch;
				}
				return getVarPrefix(type) + res;
			}
		}
	
		static function getPath(type:ClassType):String {		
			for (i in type.interfaces) {
				if (i.t.toString() == "deep.macro.IAssets") {
					switch (i.params[0]) {
						case TInst(t, _) : 
							var ct:ClassType = t.get();
							switch (ct.kind) {
								case KExpr( { expr:EConst(CString(s)) } ): return s;
								default: throw "assert";
							}
						default: throw "assert";
					}
				}
			}
			throw "assert";
		}
	
		static var fontsRange:String = "a-zA-Z0-9.,;:'\"`@#$%^&*()[]{} ";
	#end
		
	macro static public function embed():Array<Field> {		
		var ref:ClassType = Context.getLocalClass().get();
		var path = getPath(ref);
		path = Context.resolvePath(path);
		
		var pos = Context.currentPos();
		var res = Context.getBuildFields();
		
		for (f in FileSystem.readDirectory(path)) {
			var file = path + "/" + f;
			if (FileSystem.isDirectory(file)) continue;
			
			var p = new Path(file);
			var ext = p.ext.toLowerCase();
			
			var type = switch (ext) {
				case ext if (Lambda.has(TEXT, ext)): AText;
				default: throw "assert";
			};
			
			if (type == null)
				continue; // фаил неизвестного типа
			
			var ct = getComplexType(type);
			
			if (type == AText) {	
				trace(file);			
				var data = File.getContent(file);
				res.push({
					name: varName(type, p.file),
					access: [APublic, AStatic],
					doc: 'file: "$file"',
					kind: FVar(ct, macro $v{data} ),
					pos: pos,
				});
				
				continue;
			}
			
			var filePos = Context.makePosition({ min:0, max:0, file:file });
			var className = getClassPrefix(type) + p.file;
			var metaParams = [macro $v {file}];
			
			var clazz:TypeDefinition = {
				pos: filePos,
				fields: [],
				params: [],
				pack: ["assets"],
				name: className,
				meta: [{ name: getMetaName(type), params: metaParams, pos: filePos }],
				isExtern: false,
				kind: getKind(ct),
			};
			
			Context.defineType(clazz);
			
			res.push({
				name: varName(type, p.file),
				access: [APublic, AStatic],
				doc: 'file: "$file"',
				kind: FVar(ct, {expr: ENew({ pack: ["assets"], name: className, params: []}, getArgs(type)), pos: pos }),
				//meta : [],
				pos: pos,
			});
		}
		
		return res;
	}
}
