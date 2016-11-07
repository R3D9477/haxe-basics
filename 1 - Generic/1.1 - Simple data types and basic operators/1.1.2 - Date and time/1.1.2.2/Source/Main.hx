package;

import sys.io.File;

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Форматирование даты ---");
		
		// http://api.haxe.org/DateTools.html
		// http://linux.die.net/man/3/strftime
		trace("Системный формат: " + Date.now());
		trace("Изменённый формат: " + DateTools.format(Date.now(), "%d.%m.%Y"));
		
		//----------------------------------------------------------------------
		trace("--- Количество дней в месяце даты ---");
		
		var d = Date.now();
		trace(" Дней в месяце: " + DateTools.getMonthDays(d));
		
		//----------------------------------------------------------------------
		trace("--- Конверсия количества дней во временной штамп: " + DateTools.days(5) + " ---");
		trace("--- Конверсия количества часов во временной штамп: " + DateTools.hours(18) + " ---");
		trace("--- Конверсия количества секунд во временной штамп: " + DateTools.seconds(23) + " ---");
	}
}
