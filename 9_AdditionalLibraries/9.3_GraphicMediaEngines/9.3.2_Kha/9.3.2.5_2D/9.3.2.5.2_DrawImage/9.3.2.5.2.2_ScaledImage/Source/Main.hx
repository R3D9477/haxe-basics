package;

import kha.System;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 500, height: 500 }, function () : Void {
			new KhaApplication();
		});
	}
}
