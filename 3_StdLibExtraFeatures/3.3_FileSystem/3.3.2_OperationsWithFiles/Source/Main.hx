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
		trace('--- Operations with files ---');
		
		File.saveContent("test.txt", "123 qwe 321"); // make a new text file
		
		trace("File test.txt " + (FileSystem.exists("test.txt") ? "is exists" : "is not exists")); // check file exists
		trace("Absolute path of test.txt " + FileSystem.fullPath("test.txt")); // get absolute path of existing relative path
		
		//----------------------------------------------------------------------
		trace('--- File attributes ---');
		
		var stat:FileStat = FileSystem.stat("test.txt");
		
		trace("Date of creation: " + stat.ctime);
		trace("Date of last reading: " + stat.atime);
		trace("Date of last changing: " + stat.mtime);
		trace("Size: " + stat.size);
		trace("UID: " + stat.uid);
		
		//----------------------------------------------------------------------
		trace('--- Copy file ---');
		
		File.copy("test.txt", "test1.txt");
		
		if (FileSystem.exists("test1.txt")) {
			trace("File test1.txt: " + File.getContent("test1.txt"));
		}
		
		//----------------------------------------------------------------------
		trace('--- Rename file ---');
		
		FileSystem.rename("test.txt", "test123.txt");
		
		if (FileSystem.exists("test123.txt")) {
			trace("File test123.txt: " + File.getContent("test12.txt"));
		}
		
		//----------------------------------------------------------------------
		trace('--- Delete file ---');
		
		FileSystem.deleteFile("test1.txt");
		
		if (FileSystem.exists("test1.txt")) {
			trace("Error: file wasn't deleted");
		}
		else {
			trace("File was successfully deleted");
		}
	}
}
