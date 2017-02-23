package;

// http://api.haxe.org/haxe/remoting/
// http://old.haxe.org/doc/remoting
// http://old.haxe.org/doc/remoting/0_introduction
// http://old.haxe.org/doc/remoting/client_server

class Server {
	function new () { }
	
	function foo (x,y) { return x + y; }
	
	static function main() {
		var ctx = new haxe.remoting.Context();
		ctx.addObject("Server",new Server());
		
		if( haxe.remoting.HttpConnection.handleRequest(ctx) )
			return;
		
		// handle normal request
		neko.Lib.print("This is a remoting server !");
	} 
}
