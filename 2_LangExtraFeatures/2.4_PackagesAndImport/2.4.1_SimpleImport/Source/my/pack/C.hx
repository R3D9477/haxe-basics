package my.pack;

enum E {
	opA;
	opB;
	opC;
}

class C {
	public function new () { 
		trace("Constructor of class C"); 
	}
	
	public function method (e : E) { 
		trace("Option: " + e); 
	}
}
