package;

// http://api.haxe.org/sys/db/Sqlite.html
// http://api.haxe.org/sys/db/Connection.html

import sys.db.*;

class Main {
	public static function main () {
		var conn = null;
		
		try {
			conn = Sqlite.open("test.db");
		}
		catch (e:Dynamic) {
			trace('Connection failed with error: $e');
		}
		
		if (conn != null) {
			trace('Connected to database ${conn.dbName()}');
			conn.close();
		}
	}
}
