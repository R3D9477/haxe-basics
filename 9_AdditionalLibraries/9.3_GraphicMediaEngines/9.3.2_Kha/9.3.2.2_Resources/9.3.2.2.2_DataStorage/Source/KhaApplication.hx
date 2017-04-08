package;

import kha.Storage;
import kha.StorageFile;

class KhaApplication {
	public function new () {
		var defFile:StorageFile = Storage.defaultFile();
		var usrFile:StorageFile = Storage.namedFile("counter.kha");

		// read previous data

		trace('Last time: ${defFile.readObject()}');
		trace('Counter: ${usrFile.readObject()}');

		// write new data
		
		defFile.writeObject(Date.now());
		usrFile.writeObject(Std.int(usrFile.readObject()) + 1);
	}
}
