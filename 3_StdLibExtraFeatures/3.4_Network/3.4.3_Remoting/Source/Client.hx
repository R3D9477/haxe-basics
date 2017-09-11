package;

// http://api.haxe.org/haxe/remoting/
// http://old.haxe.org/doc/remoting
// http://old.haxe.org/doc/remoting/0_introduction
// http://old.haxe.org/doc/remoting/client_server

class Client {
	static function display(v) {
		trace(v);
	}
	
	static function main() {
		var URL = "http://localhost:2000/Server.n";
		
		var cnx = haxe.remoting.HttpAsyncConnection.urlConnect(URL);
		
		cnx.setErrorHandler(function(err) { trace("Error : " + Std.string(err)); });
		cnx.Server.foo.call([1,2],display);
	} 
}
