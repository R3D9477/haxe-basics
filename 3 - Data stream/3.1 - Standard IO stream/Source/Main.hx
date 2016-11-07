package;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Вывод данных через стандартный поток ---');
		
		// http://api.haxe.org/haxe/io/Output.html
		var stdout = Sys.stdout();
		
		stdout.writeString("smth string...");
		stdout.writeString("\n");
		
		stdout.writeString(Std.string(1.28));
		stdout.writeString("\n");
		
		stdout.writeString(Std.string(12.8));
		stdout.writeString("\n");
		
		stdout.writeString(Std.string(128));
		stdout.writeString("\n");
		
		//----------------------------------------------------------------------
		trace('--- Ввод данных через стандартный поток ---');
		
		// http://api.haxe.org/haxe/io/Input.html
		// http://api.haxe.org/haxe/io/Input.html#readUntil
		var stdin = Sys.stdin();
		
		stdout.writeString("Line: ");
		var inp_string_1 = stdin.readLine();
		trace(" --- " + inp_string_1);
		
		stdout.writeString("String (first 5 characters): ");
		var inp_string_2 = stdin.readString(5);
		trace(" --- " + inp_string_2);
		
		stdout.writeString("Int32: ");
		var inp_int32 = Std.parseInt(stdin.readLine());
		trace(" --- " + inp_int32);
		
		stdout.writeString("Float: ");
		var inp_float =  Std.parseFloat(stdin.readLine());
		trace(" --- " + inp_float);
	}
}
