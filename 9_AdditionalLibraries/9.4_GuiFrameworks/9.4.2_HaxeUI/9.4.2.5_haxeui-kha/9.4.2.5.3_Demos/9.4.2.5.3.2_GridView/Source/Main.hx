import kha.System;

class Main {
	public static function main () : Void {
		#if (kha_version >= 1607)
			System.init({ title: "Test", width: 500, height: 200 }, function () : Void {
				new KhaApplication();
			});
		#else
			System.init("Test", 500, 200, function () : Void {
				new KhaApplication();
			});
		#end
	}
}
