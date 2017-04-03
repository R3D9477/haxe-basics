import kha.System;

class Main {
	public static function main () : Void {
		#if (kha_version >= 1607)
			System.init({ title: "Test", width: 350, height: 350 }, function () : Void {
				new KhaApplication();
			});
		#else
			System.init("Test", 350, 350, function () : Void {
				new KhaApplication();
			});
		#end
	}
}
