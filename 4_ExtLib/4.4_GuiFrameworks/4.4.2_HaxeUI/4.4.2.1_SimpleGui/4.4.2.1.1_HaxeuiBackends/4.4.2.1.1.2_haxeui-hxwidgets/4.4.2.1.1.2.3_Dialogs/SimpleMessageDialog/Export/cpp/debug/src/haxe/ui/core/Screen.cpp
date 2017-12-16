// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#include <haxe/ui/animation/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#include <haxe/ui/containers/dialogs/DialogButton.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogOptions
#include <haxe/ui/containers/dialogs/DialogOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_DialogEntry
#include <haxe/ui/core/DialogEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_43_new,"haxe.ui.core.Screen","new",0x467c6e5b,"haxe.ui.core.Screen.new","haxe/ui/core/Screen.hx",43,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_50_addComponent,"haxe.ui.core.Screen","addComponent",0xf8075d01,"haxe.ui.core.Screen.addComponent","haxe/ui/core/Screen.hx",50,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_58_removeComponent,"haxe.ui.core.Screen","removeComponent",0xa34db654,"haxe.ui.core.Screen.removeComponent","haxe/ui/core/Screen.hx",58,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_66_setComponentIndex,"haxe.ui.core.Screen","setComponentIndex",0xc2d3d392,"haxe.ui.core.Screen.setComponentIndex","haxe/ui/core/Screen.hx",66,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_74_refreshStyleRootComponents,"haxe.ui.core.Screen","refreshStyleRootComponents",0xe16dc733,"haxe.ui.core.Screen.refreshStyleRootComponents","haxe/ui/core/Screen.hx",74,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_81__refreshStyleComponent,"haxe.ui.core.Screen","_refreshStyleComponent",0xc597d8ad,"haxe.ui.core.Screen._refreshStyleComponent","haxe/ui/core/Screen.hx",81,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_90__onRootComponentResize,"haxe.ui.core.Screen","_onRootComponentResize",0x1304e4d6,"haxe.ui.core.Screen._onRootComponentResize","haxe/ui/core/Screen.hx",90,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_96_messageDialog,"haxe.ui.core.Screen","messageDialog",0x715fc3aa,"haxe.ui.core.Screen.messageDialog","haxe/ui/core/Screen.hx",96,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_144_showDialog,"haxe.ui.core.Screen","showDialog",0x6df2910a,"haxe.ui.core.Screen.showDialog","haxe/ui/core/Screen.hx",144,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_286_hideDialog,"haxe.ui.core.Screen","hideDialog",0x9c03928f,"haxe.ui.core.Screen.hideDialog","haxe/ui/core/Screen.hx",286,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_269_hideDialog,"haxe.ui.core.Screen","hideDialog",0x9c03928f,"haxe.ui.core.Screen.hideDialog","haxe/ui/core/Screen.hx",269,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_301_centerDialog,"haxe.ui.core.Screen","centerDialog",0x5ec77722,"haxe.ui.core.Screen.centerDialog","haxe/ui/core/Screen.hx",301,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_312_registerEvent,"haxe.ui.core.Screen","registerEvent",0xb52f9072,"haxe.ui.core.Screen.registerEvent","haxe/ui/core/Screen.hx",312,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_324_unregisterEvent,"haxe.ui.core.Screen","unregisterEvent",0x7b828b39,"haxe.ui.core.Screen.unregisterEvent","haxe/ui/core/Screen.hx",324,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_330__onMappedEvent,"haxe.ui.core.Screen","_onMappedEvent",0x903426ae,"haxe.ui.core.Screen._onMappedEvent","haxe/ui/core/Screen.hx",330,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_28_get_instance,"haxe.ui.core.Screen","get_instance",0xf85a1e43,"haxe.ui.core.Screen.get_instance","haxe/ui/core/Screen.hx",28,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_190_createDialogOptions,"haxe.ui.core.Screen","createDialogOptions",0x3506bed5,"haxe.ui.core.Screen.createDialogOptions","haxe/ui/core/Screen.hx",190,0xa3acdbf4)
namespace haxe{
namespace ui{
namespace core{

void Screen_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_43_new)
HXLINE(  44)		super::__construct();
HXLINE(  45)		this->rootComponents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->_dialogs =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  47)		this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            	}

Dynamic Screen_obj::__CreateEmpty() { return new Screen_obj; }

void *Screen_obj::_hx_vtable = 0;

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Screen_obj > _hx_result = new Screen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Screen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x095a7d57) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x095a7d57;
	} else {
		return inClassId==(int)0x772cb325;
	}
}

void Screen_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_50_addComponent)
HXLINE(  51)		this->super::addComponent(component);
HXLINE(  52)		component->ready();
HXLINE(  53)		this->rootComponents->push(component);
HXLINE(  54)		::haxe::ui::focus::FocusManager_obj::get_instance()->pushView(component);
HXLINE(  55)		component->registerEvent(HX_("resize",f4,59,7b,08),this->_onRootComponentResize_dyn());
            	}


void Screen_obj::removeComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_58_removeComponent)
HXLINE(  59)		this->super::removeComponent(component);
HXLINE(  60)		component->set_depth((int)-1);
HXLINE(  61)		this->rootComponents->remove(component);
HXLINE(  62)		component->unregisterEvent(HX_("resize",f4,59,7b,08),this->_onRootComponentResize_dyn());
            	}


void Screen_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_66_setComponentIndex)
HXDLIN(  66)		bool _hx_tmp;
HXDLIN(  66)		if ((index >= (int)0)) {
HXDLIN(  66)			_hx_tmp = (index <= this->rootComponents->length);
            		}
            		else {
HXDLIN(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			this->handleSetComponentIndex(child,index);
HXLINE(  68)			this->rootComponents->remove(child);
HXLINE(  69)			this->rootComponents->insert(index,child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,setComponentIndex,(void))

void Screen_obj::refreshStyleRootComponents(){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_74_refreshStyleRootComponents)
HXDLIN(  74)		int _g = (int)0;
HXDLIN(  74)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN(  74)		while((_g < _g1->length)){
HXDLIN(  74)			 ::haxe::ui::core::Component component = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  74)			_g = (_g + (int)1);
HXLINE(  75)			this->_refreshStyleComponent(component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refreshStyleRootComponents,(void))

void Screen_obj::_refreshStyleComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_81__refreshStyleComponent)
HXDLIN(  81)		int _g = (int)0;
HXDLIN(  81)		::Array< ::Dynamic> _g1 = component->get_childComponents();
HXDLIN(  81)		while((_g < _g1->length)){
HXDLIN(  81)			 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  81)			_g = (_g + (int)1);
HXLINE(  83)			child->invalidate(HX_("style",31,a5,1d,84));
HXLINE(  84)			child->invalidate(HX_("display",42,2a,4a,bb));
HXLINE(  85)			this->_refreshStyleComponent(child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_refreshStyleComponent,(void))

void Screen_obj::_onRootComponentResize( ::haxe::ui::core::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_90__onRootComponentResize)
HXDLIN(  90)		this->_refreshStyleComponent(e->target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_onRootComponentResize,(void))

 ::haxe::ui::containers::dialogs::Dialog Screen_obj::messageDialog(::String message,::String title, ::Dynamic options, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_96_messageDialog)
HXLINE(  97)		 ::haxe::ui::containers::dialogs::Dialog dialog = this->super::messageDialog(message,title,options,callback);
HXLINE(  98)		if (hx::IsNotNull( dialog )) {
HXLINE(  99)			return dialog;
            		}
HXLINE( 102)		 ::haxe::ui::containers::dialogs::DialogOptions dialogOptions =  ::haxe::ui::containers::dialogs::DialogOptions_obj::__alloc( HX_CTX );
HXLINE( 104)		 ::haxe::ui::containers::dialogs::DialogOptions dialogOptions1 = ::haxe::ui::core::Screen_obj::createDialogOptions(options);
HXLINE( 105)		if ((dialogOptions1->buttons->length == (int)0)) {
HXLINE( 106)			dialogOptions1->addStandardButton((int)1);
            		}
HXLINE( 108)		if (hx::IsNotNull( title )) {
HXLINE( 109)			dialogOptions1->title = title;
            		}
HXLINE( 112)		 ::haxe::ui::containers::HBox content =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 113)		content->set_percentWidth((int)100);
HXLINE( 115)		if ((dialogOptions1->icon > (int)0)) {
HXLINE( 116)			 ::haxe::ui::components::Image image =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 117)			image->set_id(HX_("message-dialog-icon",98,31,4e,3a));
HXLINE( 118)			image->set_styleNames(HX_("message-dialog-icon",98,31,4e,3a));
HXLINE( 119)			{
HXLINE( 119)				int _g = dialogOptions1->icon;
HXDLIN( 119)				switch((int)(_g)){
            					case (int)256: {
HXLINE( 121)						image->set_resource(HX_("haxeui-core/styles/default/dialogs/cross-circle.png",fa,1a,08,cf));
            					}
            					break;
            					case (int)512: {
HXLINE( 123)						image->set_resource(HX_("haxeui-core/styles/default/dialogs/information.png",25,33,ff,64));
            					}
            					break;
            					case (int)1024: {
HXLINE( 125)						image->set_resource(HX_("haxeui-core/styles/default/dialogs/exclamation.png",26,15,91,86));
            					}
            					break;
            					case (int)2048: {
HXLINE( 127)						image->set_resource(HX_("haxeui-core/styles/default/dialogs/question.png",23,d3,78,e0));
            					}
            					break;
            				}
            			}
HXLINE( 130)			content->addComponent(image);
            		}
HXLINE( 133)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 134)		label->set_percentWidth((int)100);
HXLINE( 135)		label->set_text(message);
HXLINE( 136)		label->set_id(HX_("message-dialog-message",08,c9,9d,36));
HXLINE( 137)		label->addClass(HX_("message-dialog-message",08,c9,9d,36),null(),null());
HXLINE( 139)		content->addComponent(label);
HXLINE( 141)		return this->showDialog(content,dialogOptions1,callback);
            	}


 ::haxe::ui::containers::dialogs::Dialog Screen_obj::showDialog( ::haxe::ui::core::Component content, ::Dynamic options, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_144_showDialog)
HXLINE( 145)		 ::haxe::ui::containers::dialogs::Dialog dialog = this->super::showDialog(content,options,callback);
HXLINE( 146)		if (hx::IsNotNull( dialog )) {
HXLINE( 147)			return dialog;
            		}
HXLINE( 150)		 ::haxe::ui::core::Component overlay =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE( 151)		overlay->set_id(HX_("modal-background",4e,93,38,6c));
HXLINE( 152)		overlay->addClass(HX_("modal-background",4e,93,38,6c),null(),null());
HXLINE( 153)		overlay->set_percentWidth(overlay->set_percentHeight((int)100));
HXLINE( 154)		this->addComponent(overlay);
HXLINE( 156)		 ::haxe::ui::containers::dialogs::Dialog dialog1 =  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
HXLINE( 157)		dialog1->callback = callback;
HXLINE( 158)		dialog1->set_dialogOptions(::haxe::ui::core::Screen_obj::createDialogOptions(options));
HXLINE( 159)		content->addClass(HX_("dialog-content",74,a9,c6,55),null(),null());
HXLINE( 160)		dialog1->addComponent(content);
HXLINE( 161)		this->addComponent(dialog1);
HXLINE( 162)		this->centerDialog(dialog1);
HXLINE( 165)		Float x = ((Float)this->get_width() / (Float)(int)2);
HXDLIN( 165)		Float x1 = (x - ((Float)dialog1->get_componentWidth() / (Float)(int)2));
HXLINE( 166)		Float y = ((Float)this->get_height() / (Float)(int)2);
HXDLIN( 166)		Float y1 = (y - ((Float)dialog1->get_componentHeight() / (Float)(int)2));
HXLINE( 167)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 167)		_g->set(HX_("startLeft",89,81,a3,00),x1);
HXDLIN( 167)		_g->set(HX_("startTop",53,13,9c,42),(y1 + (int)20));
HXDLIN( 167)		_g->set(HX_("endLeft",82,c1,d4,29),x1);
HXDLIN( 167)		_g->set(HX_("endTop",7a,b5,78,fa),y1);
HXDLIN( 167)		 ::haxe::ds::StringMap vars = _g;
HXLINE( 173)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 173)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 173)		_g1->set(HX_("target",51,f3,ec,86),dialog1);
HXDLIN( 173)		_hx_tmp->run(HX_("haxe.ui.components.animation.dialog.show",b3,0f,2f,20),_g1,vars,null());
HXLINE( 176)		 ::haxe::ui::core::DialogEntry entry =  ::haxe::ui::core::DialogEntry_obj::__alloc( HX_CTX );
HXLINE( 177)		entry->overlay = overlay;
HXLINE( 178)		entry->dialog = dialog1;
HXLINE( 179)		this->_dialogs->set(dialog1,entry);
HXLINE( 181)		if ((::Lambda_obj::count(this->_dialogs,null()) == (int)1)) {
HXLINE( 182)			int _g2 = (int)0;
HXDLIN( 182)			::Array< ::Dynamic> _g3 = this->rootComponents;
HXDLIN( 182)			while((_g2 < _g3->length)){
HXLINE( 182)				 ::haxe::ui::core::Component r = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 182)				_g2 = (_g2 + (int)1);
HXLINE( 183)				r->addClass(HX_("modal-component",5d,fd,43,3b),null(),null());
            			}
            		}
HXLINE( 187)		return dialog1;
            	}


bool Screen_obj::hideDialog( ::haxe::ui::containers::dialogs::Dialog dialog){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Screen,_gthis, ::haxe::ui::core::DialogEntry,entry, ::haxe::ui::containers::dialogs::Dialog,dialog) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_286_hideDialog)
HXLINE( 287)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(entry->dialog);
HXLINE( 288)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(entry->overlay);
HXLINE( 289)			_gthis->_dialogs->remove(dialog);
HXLINE( 291)			if ((::Lambda_obj::count(_gthis->_dialogs,null()) == (int)0)) {
HXLINE( 292)				int _g2 = (int)0;
HXDLIN( 292)				::Array< ::Dynamic> _g3 = _gthis->rootComponents;
HXDLIN( 292)				while((_g2 < _g3->length)){
HXLINE( 292)					 ::haxe::ui::core::Component r = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 292)					_g2 = (_g2 + (int)1);
HXLINE( 293)					r->removeClass(HX_("modal-component",5d,fd,43,3b),null(),null());
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_269_hideDialog)
HXDLIN( 269)		 ::haxe::ui::core::Screen _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 270)		if ((this->super::hideDialog(dialog) == true)) {
HXLINE( 271)			return true;
            		}
HXLINE( 274)		 ::haxe::ui::core::DialogEntry entry = this->_dialogs->get(dialog).StaticCast<  ::haxe::ui::core::DialogEntry >();
HXLINE( 275)		if (hx::IsNull( entry )) {
HXLINE( 276)			return false;
            		}
HXLINE( 279)		 ::Dynamic x = dialog->get_left();
HXLINE( 280)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 280)		_g->set(HX_("startLeft",89,81,a3,00),dialog->get_left());
HXDLIN( 280)		_g->set(HX_("startTop",53,13,9c,42),dialog->get_top());
HXDLIN( 280)		_g->set(HX_("endLeft",82,c1,d4,29),x);
HXDLIN( 280)		_g->set(HX_("endTop",7a,b5,78,fa),(dialog->get_top() - (int)20));
HXDLIN( 280)		 ::haxe::ds::StringMap vars = _g;
HXLINE( 286)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 286)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 286)		_g1->set(HX_("target",51,f3,ec,86),dialog);
HXDLIN( 286)		_hx_tmp->run(HX_("haxe.ui.components.animation.dialog.hide",78,6f,ea,18),_g1,vars, ::Dynamic(new _hx_Closure_0(_gthis,entry,dialog)));
HXLINE( 298)		return true;
            	}


void Screen_obj::centerDialog( ::haxe::ui::containers::dialogs::Dialog dialog){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_301_centerDialog)
HXLINE( 302)		dialog->syncValidation();
HXLINE( 303)		Float x = ((Float)this->get_width() / (Float)(int)2);
HXDLIN( 303)		Float x1 = (x - ((Float)dialog->get_componentWidth() / (Float)(int)2));
HXLINE( 304)		Float y = ((Float)this->get_height() / (Float)(int)2);
HXDLIN( 304)		Float y1 = (y - ((Float)dialog->get_componentHeight() / (Float)(int)2));
HXLINE( 305)		dialog->moveComponent(x1,y1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,centerDialog,(void))

void Screen_obj::registerEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_312_registerEvent)
HXDLIN( 312)		if ((this->supportsEvent(type) == true)) {
HXLINE( 313)			if ((this->_eventMap->add(type,listener) == true)) {
HXLINE( 314)				this->mapEvent(type,this->_onMappedEvent_dyn());
            			}
            		}
            		else {
HXLINE( 318)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 318)			_hx_tmp(((HX_("WARNING: Screen event \"",6a,2d,85,06) + type) + HX_("\" not supported",63,74,ed,1c)),hx::SourceInfo(HX_("Screen.hx",b2,d2,b2,d9),318,HX_("haxe.ui.core.Screen",e9,a4,c1,d3),HX_("registerEvent",b7,8a,2d,6b)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,registerEvent,(void))

void Screen_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_324_unregisterEvent)
HXDLIN( 324)		if ((this->_eventMap->remove(type,listener) == true)) {
HXLINE( 325)			this->unmapEvent(type,this->_onMappedEvent_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,unregisterEvent,(void))

void Screen_obj::_onMappedEvent( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_330__onMappedEvent)
HXDLIN( 330)		this->_eventMap->invoke(event->type,event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_onMappedEvent,(void))

 ::haxe::ui::core::Screen Screen_obj::_instance;

 ::haxe::ui::core::Screen Screen_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_28_get_instance)
HXLINE(  29)		if (hx::IsNull( ::haxe::ui::core::Screen_obj::_instance )) {
HXLINE(  30)			::haxe::ui::core::Screen_obj::_instance =  ::haxe::ui::core::Screen_obj::__alloc( HX_CTX );
            		}
HXLINE(  32)		return ::haxe::ui::core::Screen_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_instance,return )

 ::haxe::ui::containers::dialogs::DialogOptions Screen_obj::createDialogOptions( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_190_createDialogOptions)
HXLINE( 191)		if (::Std_obj::is(options,hx::ClassOf< ::haxe::ui::containers::dialogs::DialogOptions >())) {
HXLINE( 192)			return hx::TCast<  ::haxe::ui::containers::dialogs::DialogOptions >::cast(options);
            		}
HXLINE( 195)		 ::haxe::ui::containers::dialogs::DialogOptions dialogOptions =  ::haxe::ui::containers::dialogs::DialogOptions_obj::__alloc( HX_CTX );
HXLINE( 197)		 ::Dynamic o =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 198)		if (hx::IsNull( options )) {
HXLINE( 199)			o =  ::Dynamic(hx::Anon_obj::Create(0));
            		}
            		else {
HXLINE( 200)			if (::Std_obj::is(options,hx::ClassOf< int >())) {
HXLINE( 201)				int n = hx::TCast< int >::cast(options);
HXLINE( 202)				o->__SetField(HX_("buttons",41,52,75,ca),::cpp::VirtualArray_obj::__new(1)->init(0,n),hx::paccDynamic);
HXLINE( 203)				o->__SetField(HX_("icon",79,e7,b2,45),n,hx::paccDynamic);
            			}
            			else {
HXLINE( 205)				o = options;
            			}
            		}
HXLINE( 208)		if (hx::IsNull(  ::Dynamic(o->__Field(HX_("buttons",41,52,75,ca),hx::paccDynamic)) )) {
HXLINE( 209)			o->__SetField(HX_("buttons",41,52,75,ca),::cpp::VirtualArray_obj::__new(1)->init(0,(int)1),hx::paccDynamic);
            		}
            		else {
HXLINE( 210)			if (::Std_obj::is( ::Dynamic(o->__Field(HX_("buttons",41,52,75,ca),hx::paccDynamic)),hx::ClassOf< int >())) {
HXLINE( 211)				o->__SetField(HX_("buttons",41,52,75,ca),::cpp::VirtualArray_obj::__new(1)->init(0, ::Dynamic(options->__Field(HX_("buttons",41,52,75,ca),hx::paccDynamic))),hx::paccDynamic);
            			}
            		}
HXLINE( 214)		if (hx::IsNull(  ::Dynamic(o->__Field(HX_("title",98,15,3b,10),hx::paccDynamic)) )) {
HXLINE( 215)			o->__SetField(HX_("title",98,15,3b,10),HX_("HaxeUI",1a,c8,2e,f3),hx::paccDynamic);
            		}
HXLINE( 218)		::cpp::VirtualArray buttons = ( (::cpp::VirtualArray)(o->__Field(HX_("buttons",41,52,75,ca),hx::paccDynamic)) );
HXLINE( 219)		{
HXLINE( 219)			int _g = (int)0;
HXDLIN( 219)			while((_g < buttons->get_length())){
HXLINE( 219)				 ::Dynamic b = buttons->__get(_g);
HXDLIN( 219)				_g = (_g + (int)1);
HXLINE( 220)				if (::Std_obj::is(b,hx::ClassOf< int >())) {
HXLINE( 221)					if ((((int)b & (int)(int)1) == (int)1)) {
HXLINE( 222)						dialogOptions->addStandardButton((int)1);
            					}
HXLINE( 224)					if ((((int)b & (int)(int)2) == (int)2)) {
HXLINE( 225)						dialogOptions->addStandardButton((int)2);
            					}
HXLINE( 227)					if ((((int)b & (int)(int)4) == (int)4)) {
HXLINE( 228)						dialogOptions->addStandardButton((int)4);
            					}
HXLINE( 230)					if ((((int)b & (int)(int)8) == (int)8)) {
HXLINE( 231)						dialogOptions->addStandardButton((int)8);
            					}
HXLINE( 233)					if ((((int)b & (int)(int)16) == (int)16)) {
HXLINE( 234)						dialogOptions->addStandardButton((int)16);
            					}
HXLINE( 236)					if ((((int)b & (int)(int)32) == (int)32)) {
HXLINE( 237)						dialogOptions->addStandardButton((int)32);
            					}
            				}
            				else {
HXLINE( 240)					 ::haxe::ui::containers::dialogs::DialogButton dialogButton =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 241)					dialogButton->id = ( (::String)(b->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) );
HXLINE( 242)					dialogButton->text = ( (::String)(b->__Field(HX_("text",ad,cc,f9,4c),hx::paccDynamic)) );
HXLINE( 243)					dialogButton->icon = ( (::String)(b->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) );
HXLINE( 244)					if (hx::IsNotNull(  ::Dynamic(b->__Field(HX_("closesDialog",e3,a0,6b,12),hx::paccDynamic)) )) {
HXLINE( 245)						dialogButton->closesDialog = ( (bool)(b->__Field(HX_("closesDialog",e3,a0,6b,12),hx::paccDynamic)) );
            					}
HXLINE( 247)					dialogOptions->addButton(dialogButton);
            				}
            			}
            		}
HXLINE( 251)		if (hx::IsNotNull(  ::Dynamic(o->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) )) {
HXLINE( 252)			if ((((int) ::Dynamic(o->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) & (int)(int)256) == (int)256)) {
HXLINE( 253)				dialogOptions->icon = (int)256;
            			}
            			else {
HXLINE( 254)				if ((((int) ::Dynamic(o->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) & (int)(int)512) == (int)512)) {
HXLINE( 255)					dialogOptions->icon = (int)512;
            				}
            				else {
HXLINE( 256)					if ((((int) ::Dynamic(o->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) & (int)(int)1024) == (int)1024)) {
HXLINE( 257)						dialogOptions->icon = (int)1024;
            					}
            					else {
HXLINE( 258)						if ((((int) ::Dynamic(o->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) & (int)(int)2048) == (int)2048)) {
HXLINE( 259)							dialogOptions->icon = (int)2048;
            						}
            					}
            				}
            			}
            		}
HXLINE( 263)		dialogOptions->title = ( (::String)(o->__Field(HX_("title",98,15,3b,10),hx::paccDynamic)) );
HXLINE( 264)		dialogOptions->styleNames = ( (::String)(o->__Field(HX_("styleNames",d7,e8,7a,16),hx::paccDynamic)) );
HXLINE( 266)		return dialogOptions;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,createDialogOptions,return )


hx::ObjectPtr< Screen_obj > Screen_obj::__new() {
	hx::ObjectPtr< Screen_obj > __this = new Screen_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Screen_obj > Screen_obj::__alloc(hx::Ctx *_hx_ctx) {
	Screen_obj *__this = (Screen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Screen_obj), true, "haxe.ui.core.Screen"));
	*(void **)__this = Screen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(rootComponents,"rootComponents");
	HX_MARK_MEMBER_NAME(_dialogs,"_dialogs");
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	 ::haxe::ui::backend::ScreenBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rootComponents,"rootComponents");
	HX_VISIT_MEMBER_NAME(_dialogs,"_dialogs");
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	 ::haxe::ui::backend::ScreenBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Screen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_dialogs") ) { return hx::Val( _dialogs ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return hx::Val( _eventMap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showDialog") ) { return hx::Val( showDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideDialog") ) { return hx::Val( hideDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerDialog") ) { return hx::Val( centerDialog_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"messageDialog") ) { return hx::Val( messageDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return hx::Val( registerEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { return hx::Val( rootComponents ); }
		if (HX_FIELD_EQ(inName,"_onMappedEvent") ) { return hx::Val( _onMappedEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return hx::Val( unregisterEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return hx::Val( setComponentIndex_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_refreshStyleComponent") ) { return hx::Val( _refreshStyleComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onRootComponentResize") ) { return hx::Val( _onRootComponentResize_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"refreshStyleRootComponents") ) { return hx::Val( refreshStyleRootComponents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Screen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createDialogOptions") ) { outValue = createDialogOptions_dyn(); return true; }
	}
	return false;
}

hx::Val Screen_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_dialogs") ) { _dialogs=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { rootComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::Screen >(); return true; }
	}
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rootComponents","\xd8","\x65","\x3e","\x27"));
	outFields->push(HX_HCSTRING("_dialogs","\x2c","\x84","\x29","\x95"));
	outFields->push(HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Screen_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Screen_obj,rootComponents),HX_HCSTRING("rootComponents","\xd8","\x65","\x3e","\x27")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Screen_obj,_dialogs),HX_HCSTRING("_dialogs","\x2c","\x84","\x29","\x95")},
	{hx::fsObject /*::haxe::ui::util::EventMap*/ ,(int)offsetof(Screen_obj,_eventMap),HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Screen_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Screen*/ ,(void *) &Screen_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Screen_obj_sMemberFields[] = {
	HX_HCSTRING("rootComponents","\xd8","\x65","\x3e","\x27"),
	HX_HCSTRING("_dialogs","\x2c","\x84","\x29","\x95"),
	HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("setComponentIndex","\x57","\xd4","\xfc","\xa2"),
	HX_HCSTRING("refreshStyleRootComponents","\xce","\x05","\x73","\x2d"),
	HX_HCSTRING("_refreshStyleComponent","\xc8","\xed","\x1c","\x75"),
	HX_HCSTRING("_onRootComponentResize","\xf1","\xf9","\x89","\xc2"),
	HX_HCSTRING("messageDialog","\xef","\xbd","\x5d","\x27"),
	HX_HCSTRING("showDialog","\xa5","\xa9","\xa7","\x1a"),
	HX_HCSTRING("hideDialog","\x2a","\xab","\xb8","\x48"),
	HX_HCSTRING("centerDialog","\x7d","\x2c","\x68","\x75"),
	HX_HCSTRING("registerEvent","\xb7","\x8a","\x2d","\x6b"),
	HX_HCSTRING("unregisterEvent","\xbe","\x60","\xa7","\x28"),
	HX_HCSTRING("_onMappedEvent","\xc9","\x28","\x71","\x18"),
	::String(null()) };

static void Screen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Screen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#endif

hx::Class Screen_obj::__mClass;

static ::String Screen_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	HX_HCSTRING("createDialogOptions","\xda","\x3a","\x05","\x32"),
	::String(null())
};

void Screen_obj::__register()
{
	hx::Object *dummy = new Screen_obj;
	Screen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.Screen","\xe9","\xa4","\xc1","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Screen_obj::__GetStatic;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = Screen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Screen_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Screen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Screen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Screen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Screen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Screen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
