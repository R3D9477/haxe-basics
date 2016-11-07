# haxe-basics

1. Generic

	1.1. Simple data types and basic operators
		1.1.1. Simple data types (int, float, string, bool, datetime)
		1.1.2. Date and time (-)
		1.1.3. Comparison operator and boolean operations
		1.1.4. Branching mechanisms: if and switch statements
		1.1.5. Converting simple data types
		1.1.6. Loops: for and while statements
		1.1.7. Operations with numbers and class Math

	1.2. Data sets and operations with them
		1.2.1. One-dimensional arrays
		1.2.2. Multidimensional arrays
		1.2.3. The heterogeneous array
		1.2.4. Array Operations
		1.2.5. Vetor (type Vector)
		1.2.6. List (List type)
		1.2.7. Stack (Type GenericStack)
		1.2.8. An associative array (Map type)
		1.2.9. Additional functions and class Lambda

	1.3. Custom data types and OOP
		1.3.1. Enumerations
		1.3.2. Data Structures: anonymous and with declared type
		1.3.3. Classes: constructor, destructor, fields, properties, methods, and access modifiers
		1.3.4. Classes: static class members (static access modifier)
		1.3.5. Classes: inline access modifiers, dynamic, override
		1.3.6. Classes: inheritance and multiple inheritance implementation
		1.3.7. Classes: inheritance and multiple inheritance of interfaces
		1.3.8. Classes: parametrizirovanye types and class members
		1.3.9. Abstractions: Ad binding to class, operator overloading

	1.4. Operations with data types and metaprogramming
		1.4.1. Class Type
		1.4.2. Class Reflect

2. Data stream

	2.1. Standard IO stream
	2.2. Write a text ASCII file
	2.3. Write a binary file

3. Basic operations with filesystem

	3.1. Text file: writing, reading
	3.2. File operations: copy, delete, move/rename, attributes reading
	3.3. Operations with directories: create, delete, move/rename, read the contents of a directory

4. Networking

	4.1. Sockets: A simple client-server application
	4.2. HTTP: request sending and response handling
	4.3. HaXe Remoting

5. Data serialization

	5.1. Processing XML
	5.2. Processing JSON

6. Threads and processes

	6.1. Multithreading with C++ and Neko targets
		6.1.1. Simple Feed
		6.1.2. Exchanging messages between threads
		6.1.3. Using the data queue with multiple threads: class Queue 
		6.1.4. Sending simple values between threads: class Mutex

	6.2. Multithreading with C# target
		6.2.1. Simple Feed

	6.3. Multithreading with JS target
		6.3.1. Asynchronous execution of code via haxe.Timer
		6.3.2. Asynchronous execution of code via js.html.Worker
		6.3.3. Asynchronous execution of code via js.Promise

	6.4. Processes
		6.4.1. Starting and stopping
		6.4.2. Pending completion of the process and the redirection of stdout (-)
		6.4.3. Data exchanging between processe (-)
		6.4.4. A simple client-server application using an external web server (-)

7. Unit tests

	7.1. Creating and running a simple unit test: class haxe.unit.TestCase and haxe.unit.TestRunner
	7.2. Methods of setup and tearDown class haxe.unit.TestCase

8. Some features of language

	8.1. Conditional compilation (Preprocessor)
	8.2. Metadata
	8.3. Static type extension
	8.4. Packages and import
	8.5. External resources

	8.6. Macros (???)
		8.6.1. Initialization macros (macro from the command line)
		8.6.2. Automatic insertion of resources
		8.6.3. Simultaneous use of macros and static extensions

	8.7. Plug-ins, extensions, external modules and dynamic libraries
		8.7.1. Using pre-compiled NekoVM modules (*.n)
		8.7.2. Using a C dynamic library
			8.7.2.1. Implementation of C-FFI regular means (library C-format: *.ndll)
			8.7.2.2. Implementation of C-FFI through ffi library (hx-ffi) http://lib.haxe.org/p/ffi/ (library C-format: *.dll, *.so)
		8.7.3. Using .NET class libraries (*.dll)
		8.7.4. Using JavaScript modules (*.js)

9. Additional libraries

	9.1. Create a library for haxelib

	9.2. Data binding and library BindX2
		9.2.1. Data binding code and class bindx.Bind
		9.2.2. Arbitrary data binding expression and class bindx.BindExt

	9.3. Graphic and library OpenFL
		9.3.1. A blank window
		9.3.2. Window settings (-)
		9.3.3. Draw sqare (-)
		9.3.4. Draw shape (-)
		9.3.5. Mouse and keyboard events (-)
		9.3.6. Custom sprite (-)
		9.3.7. Load Custom sprite from NekoVM module

	9.4. Graphical user interface and library StablexUI
		9.4.1. Dynamic button handler
		9.4.2. XML handler Button
		9.4.3. XML button with a dynamic processor

	9.5. Native dialogs and library Systools (-)
