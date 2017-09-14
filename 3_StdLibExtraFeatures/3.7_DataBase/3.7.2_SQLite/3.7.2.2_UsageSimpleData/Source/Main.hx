package;

// http://api.haxe.org/sys/db/Sqlite.html
// http://api.haxe.org/sys/db/Connection.html
// http://api.haxe.org/sys/db/ResultSet.html

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
			
			conn.request("
				CREATE TABLE IF NOT EXISTS sdttbl (
					intcol  INT NULL,
					dblcol  DOUBLE NULL,
					strcol  VARCHAR(45) NULL,
					datecol DATETIME NULL
				)
			");
			
			conn.request('INSERT INTO sdttbl (intcol, dblcol, strcol, datecol) VALUES (123, 3.14, "test string", "${Date.now()}")'); // insert row with columns: int, double, string and date.
			
			var dbRes = conn.request('SELECT * FROM sdttbl');
			
			trace('Read records count: ${dbRes.length}');
			trace('Read columns count: ${dbRes.nfields}');
			trace('Read field names: ${dbRes.getFieldsNames()}');
			
			var results = dbRes.results();
			
			trace('Display results v1:');
			
			for (res in results) {
				for (fld in dbRes.getFieldsNames())
					Sys.print('$fld: ${Reflect.field(res, fld)}, ');
				
				Sys.println('');
			}
			
			trace('Display results v2:');
			
			for (res in results) {
				Sys.print('intcol: ${res.intcol}, ');
				Sys.print('dblcol: ${res.dbcol}, ');
				Sys.print('strcol: ${res.strcol}, ');
				Sys.println('datecol: ${res.datecol}, ');
			}
			
			conn.close();
		}
	}
}
