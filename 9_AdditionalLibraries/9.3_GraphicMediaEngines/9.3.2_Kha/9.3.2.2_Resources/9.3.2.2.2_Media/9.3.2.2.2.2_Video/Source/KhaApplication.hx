package;

import kha.Video;
import kha.System;
import kha.Assets;
import kha.Framebuffer;

class KhaApplication {
	var video:Video;

	public function new () {
		Assets.loadEverything(function () {
			video = Assets.videos.Movie;
			video.play();
			
			System.notifyOnRender(videoRender);
		});
	}

	public function videoRender (fb:Framebuffer) {
		fb.g2.begin();
		fb.g2.drawVideo(video, 0, 0, video.width(), video.height());
		fb.g2.end();
	}
}
