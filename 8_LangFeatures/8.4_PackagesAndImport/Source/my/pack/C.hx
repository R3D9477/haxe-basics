package my.pack;

enum E {
	opA;
	opB;
	opC;
}

class C {
	public function new () { 
		trace("Конструктор класса C"); 
	}
	
	public function method (e : E) { 
		trace("Опция: " + e); 
	}
}
