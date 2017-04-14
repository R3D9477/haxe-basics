package;

import kha.System;
import kha.Scheduler;

class KhaApplication {
	var timeout = 5;

	public function new () {
		Scheduler.addTimeTask(autoQuit, 0, 1);
	}

	public function autoQuit () {
		if (timeout > 0) {
			trace('Application will be closed in $timeout');
			timeout--;
		}
		else
			System.requestShutdown();
	}
}
