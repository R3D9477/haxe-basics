import haxe.ui.core.ItemRenderer;
import haxe.ui.components.CheckBox;

class CheckBoxRenderer extends ItemRenderer {
	var cbComponent:CheckBox;
	
	public function new ()
		super();

	override private function createChildren () {
		super.createChildren();

		cbComponent = new CheckBox();
		addComponent(cbComponent);
	}

	override private function set_data (data:Dynamic) {
		super.set_data(data);
		
		if (data != null && cbComponent != null) {
			cbComponent.text = Reflect.hasField(data, "text") ? data.text : cbComponent.id;
			cbComponent.selected = Reflect.hasField(data, "value") ? data.value == "true" : false;
		}

		return data;
	}
}