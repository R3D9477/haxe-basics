package;

// http://api.haxe.org/Date.html

class Main {
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- CURRENT DATE ---");
		
		var curr_date:Date = Date.now();
		trace(curr_date);
		
		trace("Year: " + curr_date.getFullYear());
		trace("Month: " + curr_date.getMonth());
		trace("Day of month: " + curr_date.getDate());
		trace("Day of week: " + curr_date.getDay());
		
		trace("Hours: " + curr_date.getHours());
		trace("Minutes: " + curr_date.getMinutes());		
		trace("Seconds: " + curr_date.getSeconds());
		
		trace("Timestamp: " + curr_date.getTime());
		
		trace("Current date to string: " + curr_date.toString());
		
		trace("--------------------------------------------------------------");
		trace("--- GET DATE FROM TIMESTAMP ---");
		
		var d1 = Date.fromTime(1231231230008);
		trace(d1);
		
		trace("--------------------------------------------------------------");
		trace("--- GET DATE FROM STRING ---");
		
		var d2 = Date.fromString("2016-01-03");
		trace(d2);
		
		trace("--------------------------------------------------------------");
		trace("--- BUILD DATE FROM PARTS ---");
		
		var yyyy = 2000;
		var mm = 3; // month: 0 to 11
		var dd = 5; // day: 1 to 31
		
		var h = 20; // hour: 0 to 23
		var m = 50; // min: 0 to 59
		var s = 34; // sec: 0 to 59
		
		var d3 = new Date(yyyy, mm, dd, h, m, s); // year, month, day of month, hours, minutes, seconds
		trace(d3);
	}
}
