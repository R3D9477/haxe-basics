package;

import kha.System;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 300, height: 200 }, function () : Void {
			new KhaApplication();
		});
	}
}
