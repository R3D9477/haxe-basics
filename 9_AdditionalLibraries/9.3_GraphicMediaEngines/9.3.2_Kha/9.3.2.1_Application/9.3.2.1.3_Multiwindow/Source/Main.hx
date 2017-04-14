package;

import kha.System;
import kha.Display;
import kha.WindowOptions;

class Main {
	static var Wnd1:Window1;
	static var Wnd2:Window2;
	static var Wnd3:Window3;
	
	public static function main () : Void {
		var displayWidth:Int = Display.width(0);

		var wndModeOpt1:WindowedModeOptions = { maximizable: false, minimizable: false, resizable: false };
		var wndOpt1:WindowOptions = {title: ' - Window 1', windowedModeOptions: wndModeOpt1, width: 250, height: 150, x: Position.Fixed(Std.int(displayWidth / 2) - 450) };
		
		var wndModeOpt2:WindowedModeOptions = { maximizable: true, minimizable: true, resizable: false };
		var wndOpt2:WindowOptions = { title: ' - Window 2', windowedModeOptions: wndModeOpt2, width: 300, height: 300, x: Position.Center, mode: Mode.BorderlessWindow };
        
		var wndModeOpt3:WindowedModeOptions = { maximizable: false, minimizable: false, resizable: false };
		var wndOpt3:WindowOptions = { title: ' - Window 3', windowedModeOptions: wndModeOpt3, width: 250, height: 150, x: Position.Fixed(Std.int(displayWidth / 2) + 200) };
		
		System.initEx('Test', [wndOpt1, wndOpt2, wndOpt3], windowInit, init);
	}

	static function windowInit (id:Int) {
		if (Wnd1 == null)
			Wnd1 = new Window1(id);
		else if (Wnd2 == null)
			Wnd2 = new Window2(id);
		else if (Wnd3 == null)
			Wnd3 = new Window3(id);
    }

	private static function init () { }
}
