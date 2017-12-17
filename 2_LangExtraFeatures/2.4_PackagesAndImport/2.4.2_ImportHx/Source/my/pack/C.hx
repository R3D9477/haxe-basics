package my.pack;

class C {
	public function new () {}
	
	public function method (msgTemplate:String) {
		trace(msgTemplate.replace("%method%", "C.method"));
	}
}