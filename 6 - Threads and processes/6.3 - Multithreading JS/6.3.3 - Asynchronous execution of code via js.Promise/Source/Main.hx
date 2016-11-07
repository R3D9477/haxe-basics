package;

// http://api.haxe.org/js/Promise.html

import js.Promise;

class Main 
{
	static function PromiseBody (resolve, reject) {
		trace("PromiseBody");
	}

	static function PromiseResolve () {
		trace("PromiseResolve");
	}

	static function PromiseReject () {
		trace("PromiseReject");
	}

	static function main () {
		var p = new Promise(PromiseBody);
		p.then(PromiseResolve);
		p.catchError(PromiseReject);
	}
}
