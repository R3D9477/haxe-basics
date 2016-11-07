package;

import sys.io.File;
import sys.FileStat;
import sys.FileSystem;

// http://api.haxe.org/sys/io/File.html
// http://old.haxe.org/forum/thread/4271
// http://old.haxe.org/doc/sys/io/filesystem
// http://api.haxe.org/sys/FileSystem.html
// http://api.haxe.org/sys/FileStat.html

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Операции с директориями ---');

		FileSystem.createDirectory("NewDir");

		if (FileSystem.exists("NewDir")) {
			trace("Папка NewDir была создана");
		}
		else {
			trace("Папка NewDir не была создана");
		}

		if (FileSystem.isDirectory("NewDir")) {
			trace("NewDir является директорией");
		}
		else {
			trace("NewDir не является директорией");
		}

		FileSystem.createDirectory("NewDir/dir1");
		File.saveContent("NewDir/file1.txt", "test");
		File.saveContent("NewDir/file2.txt", "test");
		
		var dirObjects = FileSystem.readDirectory("NewDir");
		trace("Содержимое папки NewDir: " + dirObjects);

		FileSystem.deleteDirectory("NewDir/dir1");

		if (FileSystem.exists("NewDir/dir1")) {
			trace("Папка NewDir/dir1 не была удалена");
		}
		else {
			trace("Папка NewDir/dir1 была создана");
		}

		dirObjects = FileSystem.readDirectory("NewDir");
		trace("Содержимое папки NewDir: " + dirObjects);

		FileSystem.rename("NewDir", "DIR");
		dirObjects = FileSystem.readDirectory("DIR");
		trace("Содержимое папки DIR: " + dirObjects);
	}
}
