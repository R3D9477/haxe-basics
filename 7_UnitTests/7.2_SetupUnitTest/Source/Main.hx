package;

class MyTestCase extends haxe.unit.TestCase {
	var value:String;
	
	override public function setup () {
		value = "foo";
	}
	
	override public function tearDown () {
		trace("olol");
	}
	
	public function testSetup () {
		assertEquals("foo", value);
		trace("end of test...");
	}
}

class Main {
	static function main() {
		var r = new haxe.unit.TestRunner();
		r.add(new MyTestCase());
		r.run();
	}
}
