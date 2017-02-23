package;

import haxe.ds.Vector;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW VECTOR WITH 10 INTEGER ELEMENTS ---');
		
		var a = new Vector<Int>(10);
		for (i in 0...10) {
			a.set(i, 50 - i);
		}
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- Length of vector: ' + a.length + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- GET EACH ELEMENTS BY INDEX ---');
		
		for (i in 0...a.length) {
			trace(i + ' = ' + a.get(i));
		}
		
		//----------------------------------------------------------------------
		trace('--- MERGE TWO VECTORS ---');
		
		var b = new Vector<Int>(10);
		for (i in 0...10) {
			 b.set(i, i * 100);
		}
		trace(b);
		
		Vector.blit(b, 5, a, 3, 3);
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- GET ARRAY FROM VECTOR ---');
		
		var c = a.toArray();
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- GET VECTOR FROM ARRAY ---');
		
		var d = Vector.fromArrayCopy([30, 20, 5, 8, 11]);
		trace(d);
	}
}
