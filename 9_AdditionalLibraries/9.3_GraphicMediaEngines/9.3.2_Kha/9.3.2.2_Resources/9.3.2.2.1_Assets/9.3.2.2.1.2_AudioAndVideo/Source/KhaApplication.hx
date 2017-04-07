package;

import kha.Video;
import kha.System;
import kha.Assets;
import kha.Scheduler;
import kha.Framebuffer;
import kha.audio2.Audio1;
import kha.audio1.AudioChannel;

class KhaApplication {
	var switcher:Bool;
	
	var audio:AudioChannel;
	var video:Video;

	public function new () {
		Assets.loadEverything(function () {
			switcher = true;
			
			audio = Audio1.play(Assets.sounds.Forest, true);
			video = Assets.videos.Movie;
			
			System.notifyOnRender(videoRender);
			Scheduler.addTimeTask(playPauseSound, 0, 3);
		});
	}

	public function playPauseSound () {
		if (switcher) {
			trace ("Play audio and stop video");
			
			video.stop();
			audio.play();
		}
		else {
			trace ("Stop audio and play video");
			
			audio.stop();
			video.play();
		}

		switcher = !switcher;
	}

	public function videoRender (fb:Framebuffer) {
		fb.g2.begin();
		fb.g2.drawVideo(video, 0, 0, video.width(), video.height());
		fb.g2.end();
	}
}
