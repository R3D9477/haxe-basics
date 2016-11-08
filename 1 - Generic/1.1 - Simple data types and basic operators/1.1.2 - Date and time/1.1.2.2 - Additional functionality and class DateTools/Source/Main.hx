package;

// http://api.haxe.org/DateTools.html

class Main {
	public static function main () {
		var d:Date = Date.now();
		
		trace('Number of days in the month of $d: ${DateTools.getMonthDays(d)}');
		
		trace("--------------------------------------------------------------");
		trace("--- DATE FORMATTING ---");
		
		trace("System format: " + Date.now());
		trace("Custom format: " + DateTools.format(Date.now(), "%d.%m.%Y")); // description of date formatting http://linux.die.net/man/3/strftime
		
		trace("--------------------------------------------------------------");
		trace("--- DATE CONVERSION ---");
		
		trace('Number of days in the date to timestamp: ${DateTools.days(5)}');
		trace('Number of hours in the date to timestamp ${DateTools.hours(18)}');
		trace('Number of seconds in the date to timestamp: ${DateTools.seconds(23)}');
	}
}
