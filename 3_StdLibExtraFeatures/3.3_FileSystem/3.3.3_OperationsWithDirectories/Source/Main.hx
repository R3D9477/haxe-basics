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
		trace('--- Operations with directories ---');
		
		FileSystem.createDirectory("NewDir");
		
		if (FileSystem.exists("NewDir")) {
			trace("The directory NewDir was created");
		}
		else {
			trace("The directory NewDir was not created");
		}
		
		if (FileSystem.isDirectory("NewDir")) {
			trace("The object NewDir is directory");
		}
		else {
			trace("The object NewDir is not directory");
		}
		
		FileSystem.createDirectory("NewDir/dir1");
		File.saveContent("NewDir/file1.txt", "test");
		File.saveContent("NewDir/file2.txt", "test");
		
		var dirObjects = FileSystem.readDirectory("NewDir");
		trace("Directory NewDir contain: " + dirObjects);
		
		FileSystem.deleteDirectory("NewDir/dir1");
		
		if (FileSystem.exists("NewDir/dir1")) {
			trace("Directory NewDir/dir1 was not deleted");
		}
		else {
			trace("Папка NewDir/dir1 was successfully deleted");
		}
		
		dirObjects = FileSystem.readDirectory("NewDir");
		trace("Directory NewDir contain: " + dirObjects);
		
		FileSystem.rename("NewDir", "DIR");
		dirObjects = FileSystem.readDirectory("DIR");
		trace("Directory Dir contain: " + dirObjects);
	}
}
