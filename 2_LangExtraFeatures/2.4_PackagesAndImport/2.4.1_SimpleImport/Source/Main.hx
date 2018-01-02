// https://haxe.org/manual/type-system-import.html

package;

import my.pack.C; // Import a single type of module
import my.strPack.StringUtils; // Import a single type of module
import my.pack2.*; // Import types by mask

class C2 extends C {
	public function new () { 
		super(); 
		trace("Constructor of class C2"); 
	}
	
	public override function method (e : E) {
		trace("my.strPack.StringUtils.double: " + StringUtils.double("<Option " + e + ">")); // method StringUtils.double from package my.strPack
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Class C from package my.pack (Import a single type of module) ---");
		
		var c : C = new C();
		c.method(E.opA);
		c.method(E.opB);
		c.method(E.opC);
		
		//----------------------------------------------------------------------
		trace("--- Class C2 from main source Main.hx (Import a single type of module) ---");
		
		var c2 : C2 = new C2();
		c2.method(E.opA);
		c2.method(E.opB);
		c2.method(E.opC);
		
		//----------------------------------------------------------------------
		trace("--- Access to classes from package my.pack2 (Import types by mask) ---");
		
		CL1.method();
		CL2.method();
		CL3.method();
		CL4.method();
		CL5.method();
	}
}
