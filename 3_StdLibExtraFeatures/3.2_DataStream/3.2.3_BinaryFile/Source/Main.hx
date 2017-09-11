package;

import sys.io.File;

class Main {
	public static function main () {
		var f_name = "binary_file.dat";
		
		//----------------------------------------------------------------------
		trace("--- Write to binary file ---");
		
		var f_out = File.write(f_name, true);
		f_out.writeInt16(101);
		f_out.writeInt32(202);
		f_out.writeDouble(10.01);
		f_out.writeString("kayak");
		f_out.close();
		
		//----------------------------------------------------------------------
		trace("--- Read from binary file ---");
		
		var f_in = File.read(f_name, true);
		var int16Val = f_in.readInt16();
		var int32Val = f_in.readInt32();
		var doubleVal = f_in.readDouble();
		var strVal = f_in.readString(5);
		f_in.close();
		
		Sys.println("read int16: " + int16Val);
		Sys.println("read int32: " + int32Val);
		Sys.println("read double: " + doubleVal);
		Sys.println("read string: " + strVal);
	}
}
