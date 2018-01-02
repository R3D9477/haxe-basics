package my.pack2;

class CL1 {
	public function new () {}
	
	public function method (msgTemplate:String) {
		trace(msgTemplate.replace("%method%", "CL1.method"));
	}
}