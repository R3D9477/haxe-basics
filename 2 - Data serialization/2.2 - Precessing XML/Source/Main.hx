package;

// http://api.haxe.org/Xml.html
// http://old.haxe.org/doc/cross/xml
// http://api.haxe.org/haxe/xml/Fast.html
// http://old.haxe.org/api/haxe/xml/fast
// http://old.haxe.org/doc/advanced/xml_fast

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace('--- Работа с XML ---');
		
		var xml = Xml.createElement('root');
		
		var child:Xml = Xml.createElement('child'); 
		child.set('name', 'John');		
		xml.addChild(child);
		
		trace(xml);
		
		var xmlChild = xml.firstChild();
		trace("Наименование: " + xmlChild.nodeName);
		//trace("Значение: " + (xmlChild.nodeValue ? "123" : "33"));
		trace("Значение атрибута 'name': " + xmlChild.get('name'));
		
		//----------------------------------------------------------------------
		trace('--- Работа с XML через xmlFast ---');

		// parse some xml data
		var xml = Xml.parse("
			<user name='john'>
				<phone>
				    <number>0000</number>
				    <number>111</number>
				</phone>
			</user>
		");
		
		// wrap the xml for fast access
		var fast = new haxe.xml.Fast(xml.firstElement());

		// access attributes
		trace(fast.att.name); // attribute "name"
		if( fast.has.age ) trace( fast.att.age ); // optional attribute

		// access the "phone" child, which is wrapped with haxe.xml.Fast too
		var phone = fast.node.phone;

		// iterate over numbers
		for( p in phone.nodes.number ) {
			 trace(p.innerData);
		}

		xml = Xml.parse("
			<root>
				<myNode1>текст...</myNode1>
				<myNode2></myNode2>
				<myNode3/>
			</root>
		");

		fast = new haxe.xml.Fast(xml.firstElement());

		trace(fast.node.myNode1.innerHTML);
		trace(fast.node.myNode2.innerHTML);
		trace(fast.node.myNode3.innerHTML);
	}
}
