package;

// http://api.haxe.org/Xml.html
// http://api.haxe.org/XmlType.html
// http://old.haxe.org/doc/cross/xml

class Main {
	static function showNode (elem:Xml) {
		trace('Element name: ${elem.nodeName}'); // show node name of element
		trace('Element type: ${cast(elem.nodeType, Xml.XmlType)}'); // all types of xml-element defined at Xml.XmlType and described here http://api.haxe.org/XmlType.html
		trace('Value of attribute "name": ${elem.get("name")}'); // show value of element's attribute named 'name'
		
		// show text of element (if contained)
		if ((elem = elem.firstChild()) != null) // get first element
			if (elem.nodeType == Xml.XmlType.PCData) // check element's type
				trace('Element text: ${elem.nodeValue}'); // if element is text, then show it's value
	}
	
	public static function main () {
		trace("--------------------------------------------------------------");
		trace("--- Create new xml node ---");
		
		var xml:Xml = Xml.createElement("root");
		
		var child:Xml = Xml.createElement("child"); 
		child.set("name", "John"); // set value of element's attribute named 'name'
		xml.addChild(child);
		
		trace('xml: $xml');
		
		var xmlChild = xml.firstChild(); // get first child node of root
		showNode(xmlChild); // show information of selected node
		
		trace("--------------------------------------------------------------");
		trace("--- Parse xml-string ---");
		
		var str:String = "<user name='Ken'>Value of node named 'Ken'</user>";
		
		trace('xml-string: $str');
		
		xml = Xml.parse(str); // create xml-node from xml-string
		showNode(xml.firstElement()); // show information of created node
	}
}
