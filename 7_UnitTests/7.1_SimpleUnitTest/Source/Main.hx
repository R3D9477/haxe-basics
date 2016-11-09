package;

class MyTestCase extends haxe.unit.TestCase {
	public function testBasic () {
		assertEquals("A", "A");
	}
}

class Main {
	static function main() {
		var r = new haxe.unit.TestRunner();
		r.add(new MyTestCase());
		r.run();
	}
}
