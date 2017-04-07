package;

import kha.System;
import kha.Storage;
import kha.StorageFile;

class KhaApplication {
	public function new () {
		trace(Storage.defaultFile().canAppend());
		Storage.defaultFile().appendString("asd-");
		trace(Storage.defaultFile().readString());
	}
}
