package my.pack2;

class CL2 {
	public function new () {}
	
	public function method (msgTemplate:String) {
		trace(msgTemplate.replace("%method%", "CL2.method"));
	}
}