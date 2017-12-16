package;

// https://haxe.org/manual/types-abstract-enum.html

@:enum
abstract OperationStatus(Int) {
	var Error   = 0;
	var Success = 1;
	var Unknown = 2;
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

		var state = cast(4, OperationStatus);
		trace ( 'Unknown: code = ${state}, color = ${getStatusColor(state)}' );
	}

	public static function getStatusColor (status:OperationStatus) return switch (status) {
		case OperationStatus.Error:
			StatusColor.Red;
		case OperationStatus.Success:
			StatusColor.Green;
		default:
			StatusColor.Black;
	}
}