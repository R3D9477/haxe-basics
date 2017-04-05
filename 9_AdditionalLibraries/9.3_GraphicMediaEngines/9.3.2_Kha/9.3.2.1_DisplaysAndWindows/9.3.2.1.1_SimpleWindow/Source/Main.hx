package;

import kha.System;

class Main {
	public static function main() : Void {
		System.init({ title: "Test", width: 640, height: 480 }, function () : Void {
			new KhaApplication();
		});
	}
}
