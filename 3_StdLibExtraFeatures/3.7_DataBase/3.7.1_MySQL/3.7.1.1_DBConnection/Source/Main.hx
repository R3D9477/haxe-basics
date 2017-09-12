package;

// http://api.haxe.org/sys/db/Mysql.html
// http://api.haxe.org/sys/db/Connection.html

import sys.db.*;

class Main {
	public static function main () {
		var connData = {
			host: "localhost",
			port: 3306,
			user: "root",
			pass: "root",
			database: "testdb"
		};
		
		var conn = null;
		
		try {
			conn = Mysql.connect(connData);
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
