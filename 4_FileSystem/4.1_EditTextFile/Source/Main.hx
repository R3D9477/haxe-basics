package;

import sys.io.File;

// http://api.haxe.org/sys/io/File.html
// http://old.haxe.org/forum/thread/4271
// http://old.haxe.org/doc/sys/io/filesystem

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Write to text file ---');
		
		File.saveContent("test.txt", "123 qwe 321");
		
		var fileContent = File.getContent("test.txt");
		trace("Original content: " + fileContent);
		
		//----------------------------------------------------------------------
		trace('--- Change text file ---');
		
		fileContent = File.getContent("test.txt");
		fileContent = StringTools.replace(fileContent, "qwe", "AND");
		
		File.saveContent("test.txt", fileContent);	
		
		fileContent = File.getContent("test.txt");
		trace("Changed content: " + fileContent);
		
		//----------------------------------------------------------------------
		trace('--- Append data to end of text file ---');
		
		var fileStream = File.append("test.txt");
		fileStream.writeString("\r\n");
		fileStream.writeString("additional text");
		fileStream.close();
		
		fileContent = File.getContent("test.txt");
		trace("Added content: " + fileContent);
	}
}
