package;

import kha.Assets;

class KhaApplication {
	public function new () {
		// show the formats of files supported by Kha

		trace('Known formats:');
		trace('   font: ${Assets.fontFormats}');
		trace('   image: ${Assets.imageFormats}');
		trace('   audio: ${Assets.soundFormats}');
		trace('   video: ${Assets.videoFormats}');

		// show loaded Assets

		Assets.loadEverything(function () {
			trace('Loaded assets:');
			trace('   fonts: ${Assets.fonts.names}');
			trace('   blobs: ${Assets.blobs.names}');
			trace('   images: ${Assets.images.names}');
			trace('   sounds: ${Assets.sounds.names}');
			trace('   videos: ${Assets.videos.names}');
		});
	}
}
