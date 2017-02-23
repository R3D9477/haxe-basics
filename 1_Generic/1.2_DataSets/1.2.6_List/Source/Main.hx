package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW LIST OF INTEGERS ---');
		
		var a = new List<Int>();
		
		//----------------------------------------------------------------------
		trace('--- List empty is empty: ' + a.isEmpty() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- ADD ELEMENTS TO END OF THE LIST ---');
		
		a.add(3);
		a.add(2);
		a.add(1);
		a.add(5);
		a.add(6);
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- List empty is empty: ' + a.isEmpty() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Length of list: ' + a.length + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- ADD ELEMENTS TO BEGIN OF THE LIST ---');
		
		a.push(0);
		a.push(20);
		a.push(10);
		a.push(50);
		a.push(60);
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- Get first element: ' + a.first() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- Get last element: ' + a.last() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- REMOVE ELEMENTS 3, 100, 50 AND 20 FROM LIST ---');
		
		trace("Was removed element with index: " + a.remove(3));
		trace("Was removed element with index: " + a.remove(100));
		trace("Was removed element with index: " + a.remove(50));
		trace("Was removed element with index: " + a.remove(20));
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- LIST TO STRING ' + a.toString() + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- LIST TO STRING WITH CUSTOM DELIMITERS: ' + a.join('-->') + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- FILTRATION OF THE LIST ---');
		trace(a.filter(function (i) { return i > 5 && i < 40; }));
		
		//----------------------------------------------------------------------
		trace('--- CHANGE THE REPRESENTATION OF THE ELEMENTS ---');
		trace(a.map(function (i) { return i * 100; }));
	}
}
