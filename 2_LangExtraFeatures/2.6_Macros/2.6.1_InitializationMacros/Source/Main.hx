package;

// http://haxe.org/manual/macro.html
// http://haxe.ru/makrosy-haxe-vvodnaya-statya

import sys.io.File;
import haxe.macro.Expr;
import haxe.macro.Context;

class Main {
	static function main () {
		//------------------------------------------------------------------
		trace("--- Call macros ---");
		
		trace("getBuildDate1: " + getBuildDate1()); // Call macros with result type as String
		trace("getBuildDate2: " + getBuildDate2()); // Call macros with casting result type String to Date and parsing of string contained some Haxe source code
		trace("test: " + test(Date.fromString("2013-01-01"))); // Call macro to transfer arbitrary expressions and view contents
		trace("getBuildDate3: " + getBuildDate3()); // Call macros with casting result type String to Date and without parsing of string contained some Haxe source code
		
		//------------------------------------------------------------------
		trace("--- Call macros (macro reification) ---");
	
		trace("getBuildDate4: " + getBuildDate4());
		trace("call method hello: " + hello());
		
		var a = 0;
		repeat(a < 10, a++);
		trace("value of a after macros called: " + a);
	
		var b = 0;
		var c = add(b++); // c = (b++) + 0 = 1 + 0 = 1, b = (b++) + (b++) = 1 + 1 = 2
		trace("value of b after macros called: " + b);
		trace("value of c after macros called: " + c);
		
		trace("getFileContent: " + getFileContent("../../../../readme.txt"));
		trace("getFileContent2: " + getFileContent("../../../../readme.txt"));
		
		trace("getFileContentUpperCase1: " + getFileContentTripleUpperCase1("readme.txt"));
		
		trace("getFileContentUpperCase2: " + getFileContentTripleUpperCase2("../../../../readme.txt"));
	}
	
	macro static public function getBuildDate1 () : Expr { // returns String as result
		var d = Date.now();
		
		return Context.makeExpr(d.toString(), Context.currentPos());
	}
	
	macro static public function getBuildDate2 () : Expr { // returns Date as result
		var d = Date.now();
		
		return Context.parse("Date.fromString('" + d.toString() + "')", Context.currentPos()); // parse the string contained some Haxe source code
	}
	
	macro static function test (e: Expr) {
		trace("--- Show data of strcture Expr ---");
		trace(e);
		
		return e;
	}
	
	macro static public function getBuildDate3 () : Expr { // returns Date as result without parsing of string contained some Haxe source code
		var d = Date.now();
		var p = Context.currentPos();
		
		return { 
			expr: ECall( { 
				expr: EField( { 
					expr: EConst(CIdent("Date")), pos: p 
				}, "fromString"), pos:p 
			}, 
			[ { expr: EConst(CString(d.toString())), pos: p } ]), pos: p 
		};
	}
	
	//------------------------------------------------------------------
	// macro reification expression
	
	// http://old.haxe.org/manual/macros#macro-reification
	// http://haxe.org/manual/macro-reification-expression.html
	// http://ncannasse.fr/blog/reification_for_macros
	
	macro static public function getBuildDate4 () : Expr { // упрощённый вариант макроса с приведением результирующего типа String в Date без парсинга строки с Haxe кодом
		var d = Date.now();
		var e = Context.makeExpr(d.toString(), Context.currentPos());
		
		return macro Date.fromString($e);
	}
	
	macro static public function hello () {
		return macro "Hello World";
	}
	
	macro public static function repeat (cond : Expr, e : Expr) : Expr {
		return macro while ($cond) trace ($e);
	}
	
	macro static function add (e: Expr) {
		return macro $e + $e;
	}
	
	macro public static function getFileContent2 (fname : String) : Expr {
		return macro $(File.getContent(fname));
	}
	
	macro public static function getFileContent (fname : Expr) : Expr {
		return macro File.getContent($fname);
	}
	
	//------------------------------------------------------------------
	
	macro public static function getFileContentTripleUpperCase1 (fname : String) : Expr { // macro reification expression
		var fContent = File.getContent(fname);
		fContent = StringTools.replace(fContent, '\n', '').toUpperCase();
	
		var tripleContent = "";
	
		for (i in 0...3) {
			tripleContent += fContent;
		}
		
		var e = Context.makeExpr(tripleContent, Context.currentPos());
		
		return macro $e;
	}
	
	macro public static function getFileContentTripleUpperCase2 (fname : String) : Expr { // ExprDef
		var p = Context.currentPos();
		
		return {
			expr: ECall({
				expr: EField({
					expr: ECall(
						{ expr: EField({ expr: EConst(CIdent("StringTools")), pos: p }, "replace"), pos: p }, 
						[
							{
								expr: ECall(
									{  expr: EField( { expr: EConst(CIdent("File")), pos: p }, "getContent"), pos: p }, 
									[{ expr: EConst(CString(fname)), pos: p }]
								),
								pos: p
							},
							{ expr: EConst(CString('\n')), pos: p },
							{ expr: EConst(CString('')), pos: p }
						]
					),
					pos: p
				}, "toUpperCase"),
				pos: p
			}, 
			[]),
			pos: p
		};
	}
}
