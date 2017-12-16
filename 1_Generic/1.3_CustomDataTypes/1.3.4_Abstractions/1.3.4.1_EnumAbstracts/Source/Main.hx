package;

// https://haxe.org/manual/types-abstract-enum.html
// https://code.haxe.org/category/macros/enum-abstract-values.html
// https://stackoverflow.com/questions/27579587/iterate-enum-abstracts-in-haxe

@:enum
abstract OperationStatus(Int) from Int to Int {
	var Error   = 0;
	var Success = 1;
}

@:enum
abstract StatusColor(String) {
	var Red   = "#FF1D00";
	var Green = "#15FF00";
	var Black = "#000000";
}

class Main {
	public static function main () {
		var opState = OperationStatus.Error;
		trace ( 'Error:   code = ${opState}, color = ${getStatusColor(opState)}' );

		opState = OperationStatus.Success;
		trace ( 'Success: code = ${opState}, color = ${getStatusColor(opState)}' );

		opState = 42;
		trace ( 'Unknown: code = ${opState}, color = ${getStatusColor(opState)}' );

		// ---------------------------------------------------------------------------------------------------------------
		trace("");

		var intState:Int = 0;
		trace ( 'Error:   code = ${intState}, color = ${getStatusColor(intState)}' );

		intState = 1;
		trace ( 'Success: code = ${intState}, color = ${getStatusColor(intState)}' );
		
		intState = 42;
		trace ( 'Unknown: code = ${intState}, color = ${getStatusColor(intState)}' );
	}

	static function getStatusColor (status) return switch (status) {
		case OperationStatus.Error: StatusColor.Red;
		case OperationStatus.Success: StatusColor.Green;
		default: StatusColor.Black;
	}
}