package;

// http://api.haxe.org/sys/net/Socket.html
// http://old.haxe.org/doc/neko/client_server
// http://haxe.ru/category/klyuchevye-slova/socket

class Client {
	static function main() {
		var s = new sys.net.Socket();
		s.connect(new sys.net.Host("localhost"), 5000);
		
		while( true ) {
			var l = s.input.readLine();
			trace(l);
			
			if( l == "exit" ) {
				s.close();
				break;
			}
		}
	}
}
