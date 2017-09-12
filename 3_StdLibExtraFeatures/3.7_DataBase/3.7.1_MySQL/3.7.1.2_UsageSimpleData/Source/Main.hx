package;

// http://api.haxe.org/sys/db/Mysql.html
// http://api.haxe.org/sys/db/Connection.html
// http://api.haxe.org/sys/db/ResultSet.html

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
			
			conn.request('INSERT INTO sdttbl (intcol, dblcol, strcol, datecol) VALUES (123, 3.14, "test string", "${Date.now()}")'); // insert row with columns: int, double, string and date.
			
			var dbRes = conn.request('SELECT * FROM sdttbl');
			
			trace('Read records count: ${dbRes.length}');
			trace('Read columns count: ${dbRes.nfields}');
			trace('Read field names:   ${dbRes.getFieldsNames()}');
			
			for(res in dbRes.results()) {
				trace('
					intcol:  ${res.intcol},
					dblcol:  ${res.dbcol},
					strcol:  ${res.strcol},
					datecol: ${res.datecol}
				');
			}
			
			conn.close();
		}
	}
}
