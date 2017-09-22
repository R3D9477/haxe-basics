haxe-basics: haxeui access from class
=========================

Sample for OpenFL.
<br/>
<br/>
#### Used methods and properties:
* [haxe.ui.core.Component](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/Component.hx)
  * properties
    * id
    * width
    * height
    * parentComponent
    * childComponents
    * rootComponent
    * disabled
    * hidden
  * methods
    * findComponent
    * findAncestor
    * findComponentsUnderPoint
    * getComponentIndex
    * setComponentIndex
    * getComponentAt
    * addComponent
    * removeComponent
    * removeAllComponents
    * hide
    * show
<br/>
<br/>
#### Result:
<br/>
![Screen](screen1.png)
<br/>
<br/>
```
Main.hx:18: [object VBox]
Main.hx:20: ui id = vbox1
Main.hx:21: ui width = 204.390625
Main.hx:22: ui height = 198.875
Main.hx:23: the parent of ui is null? true
Main.hx:24: childs of ui: [[object Label],[object Label],[object Label],[object HBox],[object Button],[object Button],[object Button],[object Box]]
Main.hx:26: 
Main.hx:28: does component label1 exists? true
Main.hx:29: does component label2 exists? true
Main.hx:30: does component invalidLabel exists? false
Main.hx:32: 
Main.hx:35: [object Label]
Main.hx:37: old text of label1 is "Defautl text 1..."
Main.hx:39: new text of label1 is "New text 1..."
Main.hx:41: old width of label1 is "71.75"
Main.hx:43: new width of label1 is "100"
Main.hx:45: old height of label1 is "15.234375"
Main.hx:47: new height of label1 is "50"
Main.hx:49: 
Main.hx:52: [object HBox]
Main.hx:54: hbox1 id = hbox1
Main.hx:55: hbox1 width = 204.390625
Main.hx:56: hbox1 height = 15.234375
Main.hx:57: the parent of hbox1 is null? false
Main.hx:59: 
Main.hx:60: childs of hbox1: [[object Label],[object Label],[object Label]]
Main.hx:63: [object Label].id = sublabel1 have index 0
Main.hx:63: [object Label].id = sublabel2 have index 1
Main.hx:63: [object Label].id = sublabel3 have index 2
Main.hx:65: 
Main.hx:69: sublabel1 have index 0 into hbox1
Main.hx:70: sublabel1 have index -1 into vbox1
Main.hx:76: sublabel1 have changed index 2 into hbox1
Main.hx:78: 
Main.hx:79: childs of hbox1: [[object Label],[object Label],[object Label]]
Main.hx:82: [object Label].id = sublabel2 have index 0
Main.hx:82: [object Label].id = sublabel3 have index 1
Main.hx:82: [object Label].id = sublabel1 have index 2
Main.hx:84: 
Main.hx:87: child of hbox1 with index 0 is [object Label]
Main.hx:87: child of hbox1 with index 1 is [object Label]
Main.hx:87: child of hbox1 with index 2 is [object Label]
Main.hx:87: child of hbox1 with index 3 is null
Main.hx:89: 
Main.hx:91: sublabel1's parent is [object HBox]
Main.hx:92: sublabel2's parent is [object HBox]
Main.hx:93: sublabel3's parent is [object HBox]
Main.hx:96: childs count of hbox1 = 0
Main.hx:98: sublabel1's parent is null
Main.hx:99: sublabel2's parent is null
Main.hx:100: sublabel3's parent is null
Main.hx:102: 
Main.hx:113: childs count of hbox1 = 3
Main.hx:116: childs count of hbox1 = 2
Main.hx:118: 
Main.hx:122: root id = vbox1
Main.hx:123: root width = 169.484375
Main.hx:124: root height = 233.640625
Main.hx:125: the parent of hbox1 is null? true
Main.hx:126: childs of root: [[object Label],[object Label],[object Label],[object HBox],[object Button],[object Button],[object Button],[object Box]]
Main.hx:127: root == ui? true
Main.hx:129: 
Main.hx:135: button1 visible and enabled
Main.hx:136: button2 visible and enabled
Main.hx:137: button3 visible and disabled
Main.hx:143: button1 hidden and enabled
Main.hx:144: button2 visible and enabled
Main.hx:145: button3 visible and enabled
Main.hx:160: 
Main.hx:162: component under point x:0, y:0 is [[object Label]]
Main.hx:163: component under point x:10, y:10 is [[object Label]]
Main.hx:164: component under point x:10, y:150 is [[object Button]]
Main.hx:166: 
Main.hx:168: UI elements tree:
Main.hx:172:  [object VBox] with id:vbox1
Main.hx:172:    [object Label] with id:label1
Main.hx:172:    [object Label] with id:label2
Main.hx:172:    [object Label] with id:label3
Main.hx:172:    [object HBox] with id:hbox1
Main.hx:172:      [object Label] with id:null
Main.hx:172:      [object Label] with id:sublabel3
Main.hx:172:    [object Button] with id:button1
Main.hx:172:      [object Label] with id:button-label
Main.hx:172:    [object Button] with id:button2
Main.hx:172:      [object Label] with id:button-label
Main.hx:172:    [object Button] with id:button3
Main.hx:172:      [object Label] with id:button-label
Main.hx:172:    [object Box] with id:box1
Main.hx:172:      [object VBox] with id:vbox11
Main.hx:172:        [object HBox] with id:hbox11
Main.hx:172:          [object ScrollView] with id:scollview11
Main.hx:172:            [object Box] with id:null
Main.hx:172:              [object Label] with id:label4
```
