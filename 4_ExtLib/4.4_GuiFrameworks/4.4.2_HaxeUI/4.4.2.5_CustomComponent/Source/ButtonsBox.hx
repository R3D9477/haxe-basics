import haxe.ui.containers.HBox;
import haxe.ui.components.Label;
import haxe.ui.components.Button;

class ButtonsBox extends HBox {
	var bbLabel:Label;
	var bbFirstBtn:Button;
	var bbSecondBtn:Button;
	var bbThirdBtn:Button;
	
	public var labelStyleNames(get, set):String;
	function get_labelStyleNames () return bbLabel.styleNames;
	function set_labelStyleNames (styleNames:String) return (bbLabel.styleNames = styleNames);

	public var buttonStyleNames(get, set):String;
	function get_buttonStyleNames () return bbFirstBtn.styleNames;
	function set_buttonStyleNames (styleNames:String) return (bbFirstBtn.styleNames = bbSecondBtn.styleNames = bbThirdBtn.styleNames = styleNames);

	public function new () {
		super();

		bbLabel = new Label();
		bbLabel.text = "-";
		addComponent(bbLabel);

		bbFirstBtn = new Button();
		bbFirstBtn.text = "1st button";
		bbFirstBtn.onClick = function (e:Dynamic) bbLabel.text = "1st clicked!";
		addComponent(bbFirstBtn);

		bbSecondBtn = new Button();
		bbSecondBtn.text = "2nd button";
		bbSecondBtn.onClick = function (e:Dynamic) bbLabel.text = "2nd clicked!";
		addComponent(bbSecondBtn);

		bbThirdBtn = new Button();
		bbThirdBtn.text = "3rd button";
		bbThirdBtn.onClick = function (e:Dynamic) bbLabel.text = "3rd clicked!";
		addComponent(bbThirdBtn);
	}
}