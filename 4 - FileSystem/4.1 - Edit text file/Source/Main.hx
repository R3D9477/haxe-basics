package;

import sys.io.File;

// http://api.haxe.org/sys/io/File.html
// http://old.haxe.org/forum/thread/4271
// http://old.haxe.org/doc/sys/io/filesystem

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Создание текстового файла ---');
		
		File.saveContent("test.txt", "123 qwe 321");
		
		var fileContent = File.getContent("test.txt");
		trace("Оригинальный контент: " + fileContent);
		
		//----------------------------------------------------------------------
		trace('--- Изменение контента файла ---');
		
		fileContent = File.getContent("test.txt");
		fileContent = StringTools.replace(fileContent, "qwe", "AND");
		
		File.saveContent("test.txt", fileContent);	
		
		fileContent = File.getContent("test.txt");
		trace("Изменённый контент: " + fileContent);
		
		//----------------------------------------------------------------------
		trace('--- Добавить данные в конец файла ---');
		
		var fileStream = File.append("test.txt");
		fileStream.writeString("\r\n");
		fileStream.writeString("additional text");
		fileStream.close();
		
		fileContent = File.getContent("test.txt");
		trace("Дополненный контент: " + fileContent);
	}
}
