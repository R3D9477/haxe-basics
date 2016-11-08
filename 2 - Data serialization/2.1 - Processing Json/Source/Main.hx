package;

// http://api.haxe.org/haxe/Json.html
// http://haxe.org/manual/std-Json-encoding.html
// http://haxe.org/manual/std-Json-parsing.html
// http://stackoverflow.com/questions/15530645/how-can-i-iterate-dynamic-object-in-haxe

typedef MyData = {
	var name: String;
	var tags: Array<String>;
}

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace('--- JSON: parse struct from json-string ---');
		
		var s = '{
			"name": "Haxe",
			"tags": ["awesome"]
		}';
		
		var o1:MyData = haxe.Json.parse(s);
		trace(o1.name);
		trace(o1.tags[0]);
		
		s = '{
			"rating": 5
		}';
		
		var o2 = haxe.Json.parse(s);
		
		trace("o2.rating: " + Reflect.field(o2, "rating"));
		
		trace("--------------------------------------------------------------");
		trace('--- JSON: struct to string ---');
		
		var o3:MyData = {
			"name": "HaXe Lang",
			"tags": ["asd", "qwe", "zxc"]
		};
		
		trace(o3);
		
		trace("Convert data to json-string: " + haxe.Json.stringify(o3));
	}
}
