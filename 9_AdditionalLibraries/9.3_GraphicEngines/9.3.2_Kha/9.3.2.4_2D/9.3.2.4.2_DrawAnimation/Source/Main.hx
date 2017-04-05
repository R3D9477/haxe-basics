package;

import kha.System;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 200, height: 200 }, function () : Void {
			new KhaApplication();
		});
	}
}
