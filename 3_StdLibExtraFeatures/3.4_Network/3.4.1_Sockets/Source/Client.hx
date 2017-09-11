package;

// http://api.haxe.org/sys/net/Socket.html
// http://old.haxe.org/doc/neko/client_server
// http://haxe.ru/category/klyuchevye-slova/socket

class Client {
	static function main() {
		var s = new sys.net.Socket();
		s.connect(new sys.net.Host("localhost"), 5000);
		
		trace("client connected...");
		
        while ( true ) {
		    s.write("hello from client!\n");
            
            var l = s.input.readLine();
		    trace(l);
		
		    if( l == "exit" ) {
			    if (s != null)
                    s.close();
                
			    break;
		    }
		}
	}
}
