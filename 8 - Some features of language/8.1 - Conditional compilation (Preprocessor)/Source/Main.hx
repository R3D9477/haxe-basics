package;

class Main {
	public static function main () {
		// http://old.haxe.org/ref/conditionals
		// http://haxe.org/manual/lf-condition-compilation.html

		var i : Int;
		
		#if cpp
			// Код, специфичный для платформы C++
			i = 1;
			trace("Выбрана платформа C++");
		#elseif cs
			// Код, специфичный для платформы CSharp
			i = 2;
			trace("Выбрана платформа CSharp");
		#elseif js
			// Код, специфичный для платформы JavaScript
			i = 3;
			trace("Выбрана платформа JavaScript");
		#elseif neko
			// Код, специфичный для платформы Neko
			i = 4;
			trace("Выбрана платформа Neko");
		#else 
			#error  // отобразит ошибку "Нет реализации для данной платформы"
			#error "Произвольный Текст Ошибки" // отобразит ошибку "Произвольный Текст Ошибки"
			i = -1;
			trace("Выбрана неизвестная платформа");
		#end

		trace("Значение i: " + i);

		#if debug
			trace("Включена отладочная информация для всех платформ");

			#if (debug_level > 3)
				trace("Уровень отладки: " + 3);
			#else
				trace("Cлишком низкий уровень отладки");
			#end
		#end

		#if (neko && mydebug)
			trace("Включена отладочная информация для платформы Neko");
		#end

		#if (haxe_ver >= 3.2)
			trace("Версия HaXe >= 3.2");
		#else
			trace("Версия HaXe < 3.2");
		#end
	}
}
