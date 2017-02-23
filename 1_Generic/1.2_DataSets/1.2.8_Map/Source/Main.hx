package;

import haxe.ds.GenericStack;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW ASSOCIATIVE ARRAY ---');
		
		var a:Map<Int, String> = new Map<Int, String>();
		
		//----------------------------------------------------------------------
		trace('--- ADD 3 ELEMENTS TO ARRAY ---');
		
		a.set(1, 'one');
		a.set(2, 'two');
		a.set(3, 'three');
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- ADD SECOND 3 ELEMENTS TO ARRAY ---');
		
		a.arrayWrite(5, 'five');
		a.arrayWrite(4, 'four');
		a.arrayWrite(10, 'ten');
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- ADD THIRD 3 ELEMENTS TO ARRAY ---');
		
		a.set(20, 'twenty');
		a.set(30, 'thirty');
		a.set(40, 'fourty');
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- Element with key "3" is exist in array: ' + a.exists(3) + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Element with key "100500" is exist in array: ' + a.exists(100500) + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Value of element with key "3": ' + a.get(3) + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Value of element with key "100500": ' + a.get(100500) + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- REMOVE ELEMENTS WITH KEYS "3" AND "30" ---');
		
		a.remove(3);
		a.remove(30);
		trace(a);
	}
}
