import kha.System;

class Main {
	public static function main () : Void {
		#if (kha_version >= 1607)
			System.init({ title: "Test", width: 300, height: 300 }, function () : Void {
				new KhaApplication();
			});
		#else
			System.init("Test", 300, 300, function () : Void {
				new KhaApplication();
			});
		#end
	}
}
