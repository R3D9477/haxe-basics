package;

import kha.Assets;
import kha.audio2.Audio1;
import kha.audio1.AudioChannel;

class KhaApplication {
	var audio:AudioChannel;
	
	public function new () {
		Assets.loadEverything(function () {
			audio = Audio1.play(Assets.sounds.Forest, true);
		});
	}
}
