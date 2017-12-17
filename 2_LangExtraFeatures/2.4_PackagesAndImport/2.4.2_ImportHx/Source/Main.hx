// https://haxe.org/blog/importhx-intro/
// https://haxe.org/manual/type-system-import.html

package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Class C from package my.pack (Import a single type of module) ---");
		
		var c : C = new C();
		c.method("Method %method% of object 'c' was called");
		
		//----------------------------------------------------------------------
		trace("--- Access to classes from package my.pack2 (Import types by mask) ---");
		
		var c1 : CL1 = new CL1();
		c1.method("Method %method% of object 'c1' was called");

		var c2 : CL2 = new CL2();
		c2.method("Method %method% of object 'c2' was called");
	}
}