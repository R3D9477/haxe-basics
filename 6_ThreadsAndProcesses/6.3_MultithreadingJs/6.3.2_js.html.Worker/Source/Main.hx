package;

// http://api.haxe.org/js/html/Worker.html
// https://gist.github.com/cambiata/be0c2dc499da4be71151
// http://adireddy.github.io/haxe/web/workers/multi-threading/javascript/web-workers

class Main 
{
	static function main () {
		var worker = new js.html.Worker('WorkerScript.js');
		
		worker.onmessage = function(e) {
			trace('Message from worker: ' + e.data);
		}
		
		worker.postMessage('Start');
		worker.postMessage(123);
		worker.postMessage('Hello');
		worker.postMessage({name:'Bob'});
	}
}
