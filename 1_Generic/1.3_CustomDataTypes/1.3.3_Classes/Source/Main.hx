package;

// Class: fields, constructor without parameters
class User_v1 {
	// Fields
	public var name: String;
	public var age: Int;
	public var weight: Float;
	
	// Constructor without parameters
	public function new () { }
}

// Class: fields, constructor with parameters and one method "toString" for representation as string
class User_v2 {
	// Fields
	public var name: String;
	public var age: Int;
	public var weight: Float;
	
	// Constructor with parameters
	public function new (name, age, weight) {
		this.name = name;
		this.age = age;
		this.weight = weight;
	}
	
	// Method "toString" for representation as string
	public function toString () {
		return "Age of user " + this.name + " is " + this.age + " year(s) and weight " + this.weight + " kg.";
	}
}

// Class: fields, properties, constructor with parameters, method "toString" for representation as string
class User_v3 {
	// Fields
	private var age: Int;
	
	// Properties
	// http://old.haxe.org/ref/properties?lang=ru
	
	public var Weight(default, default): Float;
	public var Name(default, default): String;
	public var Age(get, set): Int;
	
	private function get_Age(): Int {
		return this.age;
	}
	
	private function set_Age(age: Int): Int {
		if (age > 50 || age < 21) {
			this.age = -1;
		}
		else {
			this.age = age;
		}
		
		return this.age;
	}
	
	// Constructor with parameters
	public function new (name, age, weight) {
		this.Name = name;
		this.Age = age;
		this.Weight = weight;
	}
	
	// Method "toString" for representation as string
	public function toString() {
		return "Age of user " + this.Name + " is " + this.Age + " year(s) and weight " + this.Weight + " kg.";
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Class: fields, constructor without parameters ---");
		
		var u1 : User_v1 = new User_v1();
		u1.name = "Jane";
		u1.age = 26;
		u1.weight = 76.3;
		trace(u1);
		
		//----------------------------------------------------------------------
		trace("--- Class: fields, constructor with parameters and one method toString for representation as string ---");
		
		var u2 : User_v2 = new User_v2("Mike", 30, 106.5);
		trace(u2);
		
		//----------------------------------------------------------------------
		trace("--- Class: fields, properties, constructor with parameters, method toString for representation as string ---");
		
		var u3 : User_v3 = new User_v3("Oliver", 26, 76);
		trace(u3);
		
		u3.Name = "UserName";
		u3.Age = 100;
		u3.Weight = 66.8;
		trace(u3);
	}
}
