// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Switch
#include <haxe/ui/components/Switch.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SwitchLayout
#include <haxe/ui/components/SwitchLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#include <haxe/ui/focus/FocusInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f2ade190d4639e55_16_new,"haxe.ui.components.Switch","new",0x09173d0c,"haxe.ui.components.Switch.new","haxe/ui/components/Switch.hx",16,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_27_createDefaults,"haxe.ui.components.Switch","createDefaults",0x68ce0a82,"haxe.ui.components.Switch.createDefaults","haxe/ui/components/Switch.hx",27,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_32_createChildren,"haxe.ui.components.Switch","createChildren",0x299e532f,"haxe.ui.components.Switch.createChildren","haxe/ui/components/Switch.hx",32,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_44_createChildren,"haxe.ui.components.Switch","createChildren",0x299e532f,"haxe.ui.components.Switch.createChildren","haxe/ui/components/Switch.hx",44,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_54_destroyChildren,"haxe.ui.components.Switch","destroyChildren",0x95f84b05,"haxe.ui.components.Switch.destroyChildren","haxe/ui/components/Switch.hx",54,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_73_get_value,"haxe.ui.components.Switch","get_value",0xf0ea1174,"haxe.ui.components.Switch.get_value","haxe/ui/components/Switch.hx",73,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_76_applyStyle,"haxe.ui.components.Switch","applyStyle",0xcb15e1b7,"haxe.ui.components.Switch.applyStyle","haxe/ui/components/Switch.hx",76,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_88_validateData,"haxe.ui.components.Switch","validateData",0x79daf3b4,"haxe.ui.components.Switch.validateData","haxe/ui/components/Switch.hx",88,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_110_get_selected,"haxe.ui.components.Switch","get_selected",0x49fe7c38,"haxe.ui.components.Switch.get_selected","haxe/ui/components/Switch.hx",110,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_112_set_selected,"haxe.ui.components.Switch","set_selected",0x5ef79fac,"haxe.ui.components.Switch.set_selected","haxe/ui/components/Switch.hx",112,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_126_get_selectedText,"haxe.ui.components.Switch","get_selectedText",0x472ff105,"haxe.ui.components.Switch.get_selectedText","haxe/ui/components/Switch.hx",126,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_128_set_selectedText,"haxe.ui.components.Switch","set_selectedText",0x9d71de79,"haxe.ui.components.Switch.set_selectedText","haxe/ui/components/Switch.hx",128,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_139_get_unselectedText,"haxe.ui.components.Switch","get_unselectedText",0xdb6c8a1e,"haxe.ui.components.Switch.get_unselectedText","haxe/ui/components/Switch.hx",139,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_141_set_unselectedText,"haxe.ui.components.Switch","set_unselectedText",0xb81bbc92,"haxe.ui.components.Switch.set_unselectedText","haxe/ui/components/Switch.hx",141,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_157__onMouseOver,"haxe.ui.components.Switch","_onMouseOver",0x61d178cf,"haxe.ui.components.Switch._onMouseOver","haxe/ui/components/Switch.hx",157,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_163__onMouseOut,"haxe.ui.components.Switch","_onMouseOut",0xeaa08173,"haxe.ui.components.Switch._onMouseOut","haxe/ui/components/Switch.hx",163,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_166__onMouseDown,"haxe.ui.components.Switch","_onMouseDown",0x5a86dfdd,"haxe.ui.components.Switch._onMouseDown","haxe/ui/components/Switch.hx",166,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f2ade190d4639e55_177__onMouseUp,"haxe.ui.components.Switch","_onMouseUp",0x8f66e916,"haxe.ui.components.Switch._onMouseUp","haxe/ui/components/Switch.hx",177,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_93a7a4f62a29282f_1_cloneComponent,"haxe.ui.components.Switch","cloneComponent",0x8d50a474,"haxe.ui.components.Switch.cloneComponent","src/haxe/ui/components/Switch.hx",1,0x0f9951ae)
HX_LOCAL_STACK_FRAME(_hx_pos_93a7a4f62a29282f_2_self,"haxe.ui.components.Switch","self",0xee8c3560,"haxe.ui.components.Switch.self","src/haxe/ui/components/Switch.hx",2,0x0f9951ae)
namespace haxe{
namespace ui{
namespace components{

void Switch_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_16_new)
HXLINE( 154)		this->_down = false;
HXLINE( 136)		this->_unselectedText = HX_("Off",4f,4b,3c,00);
HXLINE( 123)		this->_selectedText = HX_("On",3f,45,00,00);
HXLINE( 107)		this->_selected = false;
HXLINE(  21)		super::__construct();
            	}

Dynamic Switch_obj::__CreateEmpty() { return new Switch_obj; }

void *Switch_obj::_hx_vtable = 0;

Dynamic Switch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Switch_obj > _hx_result = new Switch_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Switch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x0f0a6e48) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f0a6e48;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void Switch_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_f2ade190d4639e55_27_createDefaults)
HXLINE(  28)		this->super::createDefaults();
HXLINE(  29)		this->_defaultLayout =  ::haxe::ui::components::SwitchLayout_obj::__alloc( HX_CTX );
            	}


void Switch_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_f2ade190d4639e55_32_createChildren)
HXDLIN(  32)		 ::haxe::ui::components::Switch _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  33)		if (hx::IsNull( this->_button )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::Switch,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::core::MouseEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_f2ade190d4639e55_44_createChildren)
HXLINE(  44)				_gthis->set_selected(!(_gthis->get_selected()));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  34)			this->_label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  35)			this->_label->set_id(HX_("switch-label",9b,83,49,55));
HXLINE(  36)			this->_label->addClass(HX_("switch-label",9b,83,49,55),null(),null());
HXLINE(  37)			this->_label->set_text(this->_unselectedText);
HXLINE(  38)			this->addComponent(this->_label);
HXLINE(  40)			this->_button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  41)			this->_button->set_id(HX_("switch-button",6b,de,6c,db));
HXLINE(  42)			this->_button->addClass(HX_("switch-button",6b,de,6c,db),null(),null());
HXLINE(  43)			this->_button->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  46)			this->addComponent(this->_button);
            		}
HXLINE(  49)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  50)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
HXLINE(  51)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            	}


void Switch_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_54_destroyChildren)
HXLINE(  55)		this->super::destroyChildren();
HXLINE(  57)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  58)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
HXLINE(  59)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE(  62)		if (hx::IsNotNull( this->_button )) {
HXLINE(  63)			this->removeComponent(this->_button,null(),null());
HXLINE(  64)			this->_button = null();
            		}
            	}


 ::haxe::ui::util::VariantType Switch_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_73_get_value)
HXDLIN(  73)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_selected);
            	}


void Switch_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_76_applyStyle)
HXLINE(  77)		this->super::applyStyle(style);
HXLINE(  79)		if (hx::IsNotNull( this->_button )) {
HXLINE(  80)			this->_button->customStyle->borderRadius = style->borderRadius;
            		}
            	}


void Switch_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_f2ade190d4639e55_88_validateData)
HXLINE(  89)		if ((this->_selected == false)) {
HXLINE(  90)			this->_label->set_text(this->_unselectedText);
HXLINE(  91)			this->_label->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
HXLINE(  92)			this->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            		else {
HXLINE(  94)			this->_label->set_text(this->_selectedText);
HXLINE(  95)			this->_label->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
HXLINE(  96)			this->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
HXLINE(  99)		 ::haxe::ui::core::UIEvent event =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 100)		this->dispatch(event);
            	}


bool Switch_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_110_get_selected)
HXDLIN( 110)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_selected,return )

bool Switch_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_112_set_selected)
HXLINE( 113)		if ((value == this->_selected)) {
HXLINE( 114)			return value;
            		}
HXLINE( 117)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 118)		bool _hx_tmp;
HXDLIN( 118)		if (hx::IsNotNull( this->_layout )) {
HXLINE( 118)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXLINE( 118)			_hx_tmp = true;
            		}
HXDLIN( 118)		if (!(_hx_tmp)) {
HXLINE( 118)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXLINE( 119)		this->_selected = value;
HXLINE( 120)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_selected,return )

::String Switch_obj::get_selectedText(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_126_get_selectedText)
HXDLIN( 126)		return this->_selectedText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_selectedText,return )

::String Switch_obj::set_selectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_128_set_selectedText)
HXLINE( 129)		this->_selectedText = value;
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if (this->_ready) {
HXLINE( 130)			_hx_tmp = (this->_selected == true);
            		}
            		else {
HXLINE( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			this->_label->set_text(this->_selectedText);
            		}
HXLINE( 133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_selectedText,return )

::String Switch_obj::get_unselectedText(){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_139_get_unselectedText)
HXDLIN( 139)		return this->_unselectedText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Switch_obj,get_unselectedText,return )

::String Switch_obj::set_unselectedText(::String value){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_141_set_unselectedText)
HXLINE( 142)		this->_unselectedText = value;
HXLINE( 143)		bool _hx_tmp;
HXDLIN( 143)		if (this->_ready) {
HXLINE( 143)			_hx_tmp = (this->_selected == false);
            		}
            		else {
HXLINE( 143)			_hx_tmp = false;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 144)			this->_label->set_text(this->_unselectedText);
            		}
HXLINE( 146)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,set_unselectedText,return )

void Switch_obj::_onMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_157__onMouseOver)
HXDLIN( 157)		if ((this->_down == false)) {
HXLINE( 158)			this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,_onMouseOver,(void))

void Switch_obj::_onMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_163__onMouseOut)
HXDLIN( 163)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,_onMouseOut,(void))

void Switch_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_166__onMouseDown)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if (hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo() )) {
HXLINE( 167)			_hx_tmp = hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus );
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 168)			::haxe::ui::focus::IFocusable_obj::set_focus(::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus,false);
            		}
HXLINE( 170)		this->_down = true;
HXLINE( 172)		this->_mouseDownOffsetX = event->screenX;
HXLINE( 173)		this->_mouseDownOffsetY = event->screenY;
HXLINE( 174)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,_onMouseDown,(void))

void Switch_obj::_onMouseUp( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_f2ade190d4639e55_177__onMouseUp)
HXLINE( 178)		this->_down = false;
HXLINE( 181)		Float x1 = event->screenX;
HXDLIN( 181)		Float y1 = event->screenY;
HXDLIN( 181)		Float x2 = this->_mouseDownOffsetX;
HXDLIN( 181)		Float y2 = this->_mouseDownOffsetY;
HXDLIN( 181)		if ((::Math_obj::sqrt((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)))) < (int)5)) {
HXLINE( 182)			this->set_selected(!(this->get_selected()));
            		}
            		else {
HXLINE( 184)			Float event1 = event->screenX;
HXDLIN( 184)			Float _hx_tmp = this->get_screenLeft();
HXDLIN( 184)			this->set_selected(((event1 - ((Float)(_hx_tmp + this->get_componentWidth()) / (Float)(int)2)) > (int)0));
            		}
HXLINE( 187)		if (this->hitTest(event->screenX,event->screenY)) {
HXLINE( 188)			this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
HXLINE( 191)		this->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Switch_obj,_onMouseUp,(void))

 ::haxe::ui::core::Component Switch_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_93a7a4f62a29282f_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Switch c = ( ( ::haxe::ui::components::Switch)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_selected(this->get_selected());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component Switch_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_93a7a4f62a29282f_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Switch_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Switch_obj > Switch_obj::__new() {
	hx::ObjectPtr< Switch_obj > __this = new Switch_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Switch_obj > Switch_obj::__alloc(hx::Ctx *_hx_ctx) {
	Switch_obj *__this = (Switch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Switch_obj), true, "haxe.ui.components.Switch"));
	*(void **)__this = Switch_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Switch_obj::Switch_obj()
{
}

void Switch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Switch);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_selectedText,"_selectedText");
	HX_MARK_MEMBER_NAME(_unselectedText,"_unselectedText");
	HX_MARK_MEMBER_NAME(_mouseDownOffsetX,"_mouseDownOffsetX");
	HX_MARK_MEMBER_NAME(_mouseDownOffsetY,"_mouseDownOffsetY");
	HX_MARK_MEMBER_NAME(_down,"_down");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Switch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_selectedText,"_selectedText");
	HX_VISIT_MEMBER_NAME(_unselectedText,"_unselectedText");
	HX_VISIT_MEMBER_NAME(_mouseDownOffsetX,"_mouseDownOffsetX");
	HX_VISIT_MEMBER_NAME(_mouseDownOffsetY,"_mouseDownOffsetY");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Switch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return hx::Val( _down ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return hx::Val( _label ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return hx::Val( _button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selected() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return hx::Val( _selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return hx::Val( _onMouseUp_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return hx::Val( _onMouseOut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedText") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedText() ); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return hx::Val( _onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedText") ) { return hx::Val( _selectedText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"unselectedText") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_unselectedText() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_unselectedText") ) { return hx::Val( _unselectedText ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedText") ) { return hx::Val( get_selectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedText") ) { return hx::Val( set_selectedText_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDownOffsetX") ) { return hx::Val( _mouseDownOffsetX ); }
		if (HX_FIELD_EQ(inName,"_mouseDownOffsetY") ) { return hx::Val( _mouseDownOffsetY ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_unselectedText") ) { return hx::Val( get_unselectedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_unselectedText") ) { return hx::Val( set_unselectedText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Switch_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedText") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedText(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedText") ) { _selectedText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unselectedText") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_unselectedText(inValue.Cast< ::String >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_unselectedText") ) { _unselectedText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDownOffsetX") ) { _mouseDownOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDownOffsetY") ) { _mouseDownOffsetY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Switch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_button","\x91","\x73","\x57","\x48"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("_selectedText","\x87","\x7f","\x02","\xc0"));
	outFields->push(HX_HCSTRING("selectedText","\xa8","\xec","\x93","\xdd"));
	outFields->push(HX_HCSTRING("_unselectedText","\x20","\x3d","\xe1","\x18"));
	outFields->push(HX_HCSTRING("unselectedText","\x81","\xf4","\x80","\xcf"));
	outFields->push(HX_HCSTRING("_mouseDownOffsetX","\x5d","\xf1","\x45","\x22"));
	outFields->push(HX_HCSTRING("_mouseDownOffsetY","\x5e","\xf1","\x45","\x22"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Switch_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Switch_obj,_button),HX_HCSTRING("_button","\x91","\x73","\x57","\x48")},
	{hx::fsObject /*::haxe::ui::components::Label*/ ,(int)offsetof(Switch_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsBool,(int)offsetof(Switch_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{hx::fsString,(int)offsetof(Switch_obj,_selectedText),HX_HCSTRING("_selectedText","\x87","\x7f","\x02","\xc0")},
	{hx::fsString,(int)offsetof(Switch_obj,_unselectedText),HX_HCSTRING("_unselectedText","\x20","\x3d","\xe1","\x18")},
	{hx::fsFloat,(int)offsetof(Switch_obj,_mouseDownOffsetX),HX_HCSTRING("_mouseDownOffsetX","\x5d","\xf1","\x45","\x22")},
	{hx::fsFloat,(int)offsetof(Switch_obj,_mouseDownOffsetY),HX_HCSTRING("_mouseDownOffsetY","\x5e","\xf1","\x45","\x22")},
	{hx::fsBool,(int)offsetof(Switch_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Switch_obj_sStaticStorageInfo = 0;
#endif

static ::String Switch_obj_sMemberFields[] = {
	HX_HCSTRING("_button","\x91","\x73","\x57","\x48"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("_selectedText","\x87","\x7f","\x02","\xc0"),
	HX_HCSTRING("get_selectedText","\x31","\xd9","\x32","\xe2"),
	HX_HCSTRING("set_selectedText","\xa5","\xc6","\x74","\x38"),
	HX_HCSTRING("_unselectedText","\x20","\x3d","\xe1","\x18"),
	HX_HCSTRING("get_unselectedText","\x4a","\xd5","\x1a","\x6b"),
	HX_HCSTRING("set_unselectedText","\xbe","\x07","\xca","\x47"),
	HX_HCSTRING("_mouseDownOffsetX","\x5d","\xf1","\x45","\x22"),
	HX_HCSTRING("_mouseDownOffsetY","\x5e","\xf1","\x45","\x22"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Switch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Switch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Switch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Switch_obj::__mClass,"__mClass");
};

#endif

hx::Class Switch_obj::__mClass;

void Switch_obj::__register()
{
	hx::Object *dummy = new Switch_obj;
	Switch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Switch","\x1a","\x07","\x61","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Switch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Switch_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Switch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Switch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Switch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Switch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
