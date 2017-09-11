package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW ARRAY OF INTEGERS ---');
		
		var a = new Array<Int>();
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		trace(a);
		
		//----------------------------------------------------------------------
		trace('--- Length of array: ' + a.length + ' ---');
		
		//----------------------------------------------------------------------
		trace('--- CONCATERATE ARRAY ---');
		
		var b = a.concat([17, 16, 15, 14, 13]);
		trace(a);
		trace(b);
		
		//----------------------------------------------------------------------
		trace('--- COPY ARRAY ---');
		
		var c = b.copy();
		trace(b);
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- REMOVE FIRST ITEM OF ARRAY ---');
		trace(c.shift()); // will get first element and remove it from array
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- REMOVE LAST ITEM OF ARRAY ---');
		trace(c.pop()); // will get last element and remove it from array
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- ADD ELEMENT TO THE END OF ARRAY ---');
		c.push(1024);
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- REMOVE ELEMENTS 3, 1000 AND 15 ---');
		trace(c.remove(3));
		trace(c.remove(1000));
		trace(c.remove(15));
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- REVERSE THE ARRAY ---');
		c.reverse();
		trace(c);
		
		//----------------------------------------------------------------------
		trace('--- COPY RANGE OF ITEMS ---');
		var d = c.slice(1, 4);
		trace(d);
		
		//-------------------------------
		trace('--- ARRAY TO STRING ---');
		trace(d.join(" --> "));
	}
}
