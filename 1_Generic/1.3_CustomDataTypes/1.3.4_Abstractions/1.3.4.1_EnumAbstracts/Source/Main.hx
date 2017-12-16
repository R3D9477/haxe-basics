package;

// https://haxe.org/manual/types-abstract-enum.html
// https://code.haxe.org/category/macros/enum-abstract-values.html
// https://stackoverflow.com/questions/27579587/iterate-enum-abstracts-in-haxe

@:enum
abstract OperationStatus(Int) {
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
		trace ( 'Error:   code = ${OperationStatus.Error}, color = ${getStatusColor(OperationStatus.Error)}' );
		trace ( 'Success: code = ${OperationStatus.Success}, color = ${getStatusColor(OperationStatus.Success)}' );

		var state = cast(42, OperationStatus);
		trace ( 'Unknown: code = ${state}, color = ${getStatusColor(state)}' );
	}

	static function getStatusColor (status) return switch (status) {
		case OperationStatus.Error: StatusColor.Red;
		case OperationStatus.Success: StatusColor.Green;
		default: StatusColor.Black;
	}
}