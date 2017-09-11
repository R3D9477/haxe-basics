package;

import haxe.ds.GenericStack;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW STACK OF INTEGERS ---');
		
		var a = new GenericStack<Int>();
		
		//----------------------------------------------------------------------
		trace('--- Stack is empty: ' + a.isEmpty() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- ADD ELEMENTS TO STACK ---');
		
		a.add(3);
		a.add(2);
		a.add(1);
		a.add(0);
		a.add(11);
		a.add(18);
		a.add(5);
		a.add(6);
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- Stack is empty: ' + a.isEmpty() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Upper element of the stack: ' + a.head.elt + ' ---');
		trace('--- Next element of the stack: ' + a.head.next.elt + ' ---');
		trace('--- And next element of the stack: ' + a.head.next.next.elt + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- REMOVE ELEMENTS 1, 8 AND 5 FROM THE STACK ---');
		
		trace(a.remove(1));
		trace(a.remove(8));
		trace(a.remove(5));
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- GET 3 UPPERS ELEMENTS AND REMOVE IT ---');
		
		trace(a.pop()); // get first upper element of the stack and remove it
		trace(a.pop()); // get second upper element of the stack and remove it
		trace(a.pop()); // and get third upper element of the stack and remove it
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- STACK TO STRING: ' + a.toString() + ' ---');
	}
}
