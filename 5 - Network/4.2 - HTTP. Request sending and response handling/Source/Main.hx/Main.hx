package;

// http://api.haxe.org/haxe/Http.html
// https://groups.google.com/forum/#!topic/haxelang/IoE44k3Qoto

class Test {
	static function main() {
		var reqPost = new haxe.Http("http://try.haxe.org");
		req.onData = function (data) trace('first 100 bytes: ' + data.substr(0, 100));
		req.onError = function (error) trace('error: $error');
		req.request(true);

		var reqGet = new Http( "http://myserver.com/api/userinfo/" );
		req.setParameter( "userID", "34" );
		req.setParameter( "includeFriendList", "true" );
		req.onData = function (data) trace('first 100 bytes: ' + data.substr(0, 100));
		req.onError = function (error) trace('error: $error');
		req.request( false ); // false=GET, true=POST
	}
}
