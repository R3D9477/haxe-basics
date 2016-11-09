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
		trace('--- Операции с файлами ---');

		File.saveContent("test.txt", "123 qwe 321");												// Создание тестового файла

		trace("Файл test.exe " + (FileSystem.exists("test.txt") ? "существует" : "не существует"));	// Проверка файла на существование
		trace("Абсолютный путь test.exe " + FileSystem.fullPath("test.txt"));						// Получить абсолютный путь

		//----------------------------------------------------------------------
		trace('--- Атрибуты файла ---');

		var stat:FileStat = FileSystem.stat("test.txt");
		
		trace("Дата создания: " + stat.ctime);
		trace("Дата последнего чтения: " + stat.atime);
		trace("Дата последнего изменения: " + stat.mtime);
		trace("Размер: " + stat.size);
		trace("UID: " + stat.uid);
		
		//----------------------------------------------------------------------
		trace('--- Копирование файла ---');

		File.copy("test.txt", "test1.txt");

		if (FileSystem.exists("test1.txt")) {
			trace("Файл test1.txt: " + File.getContent("test1.txt"));
		}
		
		//----------------------------------------------------------------------
		trace('--- Переименование файла ---');

		FileSystem.rename("test.txt", "test123.txt");

		if (FileSystem.exists("test123.txt")) {
			trace("Файл test123.txt: " + File.getContent("test12.txt"));
		}
		
		//----------------------------------------------------------------------
		trace('--- Переименование/перемещение файла ---');

		FileSystem.deleteFile("test1.txt");

		if (FileSystem.exists("test1.txt")) {
			trace("Ошибка удаления файла");
		}
		else {
			trace("Файл удалён");
		}
	}
}
