package;

// http://old.haxe.org/api/haxe/xml/fast
// http://old.haxe.org/doc/advanced/xml_fast

class Main {
	public static function main () {
		//----------------------------------------------------------------------
		trace("--- Read element's information with xml-fast ---");
		
		var str:String = "
			<user name='john'>
				<phone>
				    <number>0000</number>
				    <number>111</number>
				</phone>
			</user>
		";
		
		// parse some xml data
		var xml:Xml = Xml.parse(str);
		
		// wrap the xml for fast access
		var fast = new haxe.xml.Fast(xml.firstElement());
		
		// access attributes
		trace(fast.att.name); // attribute "name"
		
		if(fast.has.age)
			trace(fast.att.age); // optional attribute
		
		// access the "phone" child, which is wrapped with haxe.xml.Fast too
		var phone = fast.node.phone;
		
		// iterate over numbers
		for(p in phone.nodes.number)
			trace(p.innerData);
		
		//----------------------------------------------------------------------
		trace("--- Show text of element (if contained) with xml-fast ---");
		
		str = "
			<root>
				<myNode1>This if text of element 'myNode1'...</myNode1>
				<myNode2></myNode2>
				<myNode3/>
			</root>
		";
		
		xml = Xml.parse(str);
		
		fast = new haxe.xml.Fast(xml.firstElement());
		
		if (fast.node.myNode1.innerHTML > "")
			trace(fast.node.myNode1.innerHTML);
		
		if (fast.node.myNode2.innerHTML > "")
			trace(fast.node.myNode2.innerHTML);
		
		if (fast.node.myNode3.innerHTML > "")
			trace(fast.node.myNode3.innerHTML);
	}
}
