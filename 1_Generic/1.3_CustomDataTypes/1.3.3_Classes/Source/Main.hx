package;

// Класс: поля, конструктор без параметров
class User_v1 {
	// Поля
	public var name: String;
	public var age: Int;
	public var weight: Float;
	
	// Конструктор без параметров
	public function new () { }
}

// Класс: поля, конструктор с параметрами и методом toString для представления ввиде строки
class User_v2 {
	// Поля
	public var name: String;
	public var age: Int;
	public var weight: Float;
	
	// Конструктор с параметрами
	public function new (name, age, weight) {
		this.name = name;
		this.age = age;
		this.weight = weight;
	}
	
	// Метод преставления класса ввиде строки
	public function toString() {
		return "Пользователь " + this.name + " имеет возраст " + this.age + " лет(год) и вес в " + this.weight + " кг.";
	}
}

// Класс: поля, свойства, конструктор с параметрами, метод toString для представления ввиде строки и другие методы
class User_v3 {
	// Поля
	private var age: Int;
	
	// Свойства
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
	
	// Конструктор с параметрами
	public function new (name, age, weight) {
		this.Name = name;
		this.Age = age;
		this.Weight = weight;
	}
	
	// Метод преставления класса ввиде строки
	public function toString() {
		return "Пользователь " + this.Name + " имеет возраст " + this.Age + " лет(год) и вес в " + this.Weight + " кг.";
	}
}

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Класс: поля, конструктор без параметров, метод toString ---");

		var u1 : User_v1 = new User_v1();
		u1.name = "Eugene";
		u1.age = 26;
		u1.weight = 76.3;
		trace(u1);

		//----------------------------------------------------------------------
		trace("--- Класс: поля, конструктор с параметрами, метод toString ---");

		var u2 : User_v2 = new User_v2("Jora", 30, 106.5);
		trace(u2);

		//----------------------------------------------------------------------
		trace("--- Класс: поля, свойства, конструктор с параметрами, метод toString ---");

		var u3 : User_v3 = new User_v3("Жэка", 26, 76);
		trace(u3);
		
		u3.Name = "UserName";
		u3.Age = 100;
		u3.Weight = 66.8;
		trace(u3);
	}
}
