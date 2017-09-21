import haxe.ui.Toolkit;
import haxe.ui.core.Screen;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;

class Main {
	public static function main() {
		Toolkit.init();
		
		var ui:Component = ComponentMacros.buildComponent("Assets/Xml/UI.xml");
		Screen.instance.addComponent(ui);
        
        // Conponent:
        //      rootComponent
        //      parentComponent
        //      addComponent
        //      removeAllComponents
        //      childComponents
        //      removeComponent
        //      findComponent
        //      findAncestor
        //      findComponentsUnderPoint        
        //      getComponentIndex
        //      setComponentIndex
        //      getComponentAt
        //      hide
        //      show
        //      hidden
        //      disabled
        //      customStyle
        //      addClass
        //      removeClass
        //      hasClass
        //      styleNames
        //      styleString
        //      style
        //      registerEvent
        //      unregisterEvent
        //      dispatch
        //      includeInLayout
        //      
	}
}
