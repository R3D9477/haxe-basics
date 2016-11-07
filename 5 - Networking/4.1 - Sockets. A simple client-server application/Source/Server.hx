package;

// http://api.haxe.org/sys/net/Socket.html
// http://old.haxe.org/doc/neko/client_server
// http://haxe.ru/category/klyuchevye-slova/socket

import sys.net.Socket;
import sys.net.Host;

class Server {
	static function main() {
		var s = new Socket();
		s.bind(new Host("localhost"),5000);
		s.listen(1);
		trace("Starting server...");
		
		var c : sys.net.Socket = s.accept();
		trace("Client connected...");
		c.write("hello\n");
		c.write("your IP is " + c.peer().host.toString()+"\n");
		c.write("exit");
		c.close();
	}
}
