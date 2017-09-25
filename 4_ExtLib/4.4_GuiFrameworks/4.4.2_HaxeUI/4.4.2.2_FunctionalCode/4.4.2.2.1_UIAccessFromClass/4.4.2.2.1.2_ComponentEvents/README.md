haxe-basics: haxeui access from class
=========================

Sample for OpenFL.

#### Used methods and events:
* [haxe.ui.core.Component](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/Component.hx)
  * methods
    * dispatch
    * registerEvent
    * unregisterEvent
    * includeInLayout
  * events
    * [haxe.ui.core.UIEvent](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/UIEvent.hx)
    * [haxe.ui.core.MouseEvent](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/MouseEvent.hx)
    * [haxe.ui.core.KeyboardEvent](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/KeyboardEvent.hx)
    * [haxe.ui.core.ScrollEvent](https://github.com/haxeui/haxeui-core/blob/master/haxe/ui/core/ScrollEvent.hx)
<br/>
<br/>
Output:

```
Main.hx:16: event type: move
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:16: event type: ready
Main.hx:17:    target: [object HBox]
Main.hx:18: 
Main.hx:16: event type: resize
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:16: event type: resize
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:16: event type: move
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:16: event type: move
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:119: Call events programmatically:
Main.hx:120: 
Main.hx:16: event type: resize
Main.hx:17:    target: [object TextArea]
Main.hx:18: 
Main.hx:31: event type: keyup
Main.hx:32:    target: [object TextArea]
Main.hx:33:    key code: 0
Main.hx:34:    shift key: false
Main.hx:35: 
Main.hx:22: event type: click
Main.hx:23:    target: [object TextArea]
Main.hx:24:    button down: false
Main.hx:25:    touch event: false
Main.hx:26:    delta: 0, X:0, Y:0
```
