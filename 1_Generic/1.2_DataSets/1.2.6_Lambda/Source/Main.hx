package;

using Lambda;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- MAKE A NEW ARRA OF STEINGS ---');
		
		var words = ['car', 'boat', 'cat', 'frog'];
		trace(words);
		
		//----------------------------------------------------------------------
		trace('--- ARRAY IS EMPTY? ---');
		
		trace(words.empty());
		
		//----------------------------------------------------------------------
		trace('--- LENGTH OF ARRAY ---');
		
		trace(words.count());
		
		//----------------------------------------------------------------------
		trace('--- WHETHER THE ARRAY CONTAIN ELEMENT "boat"? ---');
		
		trace(words.has('boat'));
		
		//----------------------------------------------------------------------
		trace('--- WHETHER THE ARRAY CONTAIN ELEMENT "FROG"? ---');
		trace('a custom function for searching of the element');
		
		trace(words.exists(function(word) { return word.toUpperCase() == 'FROG'; }));
		
		//----------------------------------------------------------------------
		trace('--- FILTERING OF THE LIST ---');
		
		trace(words.filter(function(word) { return word.length == 3; }));
		
		//----------------------------------------------------------------------
		trace('--- CHANGE THE REPRESENTATION OF THE ELEMENTS ---');
		
		trace(words.map(function(word) { return word.toUpperCase(); }));
		
		//----------------------------------------------------------------------
		trace('--- SEARCH ELEMENTS WHO BEGINS FROM "c" ---');
		
		trace(words.find(function(word) { return word.substr(0, 1) == 'c'; }));
		
		//----------------------------------------------------------------------
		trace('--- INDEX OF THE ELEMENT "cat" ---');
		
		trace(words.indexOf('cat'));
	}
}
