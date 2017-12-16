// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_TimerBase
#include <haxe/ui/backend/TimerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonDefaultIconBehaviour
#include <haxe/ui/components/ButtonDefaultIconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonDefaultTextBehaviour
#include <haxe/ui/components/ButtonDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_13057cf4e603c2d2_43_new,"haxe.ui.components.Button","new",0x541d2c0a,"haxe.ui.components.Button.new","haxe/ui/components/Button.hx",43,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_56_createDefaults,"haxe.ui.components.Button","createDefaults",0x55c1a044,"haxe.ui.components.Button.createDefaults","haxe/ui/components/Button.hx",56,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_65_createChildren,"haxe.ui.components.Button","createChildren",0x1691e8f1,"haxe.ui.components.Button.createChildren","haxe/ui/components/Button.hx",65,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_71_destroyChildren,"haxe.ui.components.Button","destroyChildren",0xfe27bf03,"haxe.ui.components.Button.destroyChildren","haxe/ui/components/Button.hx",71,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_94_set_text,"haxe.ui.components.Button","set_text",0x4129fdc0,"haxe.ui.components.Button.set_text","haxe/ui/components/Button.hx",94,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_100_applyStyle,"haxe.ui.components.Button","applyStyle",0xc0d6ee79,"haxe.ui.components.Button.applyStyle","haxe/ui/components/Button.hx",100,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_130_validateData,"haxe.ui.components.Button","validateData",0x2b8a34f6,"haxe.ui.components.Button.validateData","haxe/ui/components/Button.hx",130,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_166_get_icon,"haxe.ui.components.Button","get_icon",0x8b85bf18,"haxe.ui.components.Button.get_icon","haxe/ui/components/Button.hx",166,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_169_set_icon,"haxe.ui.components.Button","set_icon",0x39e3188c,"haxe.ui.components.Button.set_icon","haxe/ui/components/Button.hx",169,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_189_get_toggle,"haxe.ui.components.Button","get_toggle",0x1132fcf3,"haxe.ui.components.Button.get_toggle","haxe/ui/components/Button.hx",189,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_191_set_toggle,"haxe.ui.components.Button","set_toggle",0x14b09b67,"haxe.ui.components.Button.set_toggle","haxe/ui/components/Button.hx",191,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_211__onMouseOver,"haxe.ui.components.Button","_onMouseOver",0x1380ba11,"haxe.ui.components.Button._onMouseOver","haxe/ui/components/Button.hx",211,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_223__onMouseOut,"haxe.ui.components.Button","_onMouseOut",0xfdca9e71,"haxe.ui.components.Button._onMouseOut","haxe/ui/components/Button.hx",223,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_234__onMouseDown,"haxe.ui.components.Button","_onMouseDown",0x0c36211f,"haxe.ui.components.Button._onMouseDown","haxe/ui/components/Button.hx",234,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_248__onRepeatTimer,"haxe.ui.components.Button","_onRepeatTimer",0xd6866c62,"haxe.ui.components.Button._onRepeatTimer","haxe/ui/components/Button.hx",248,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_254__onMouseUp,"haxe.ui.components.Button","_onMouseUp",0x8527f5d8,"haxe.ui.components.Button._onMouseUp","haxe/ui/components/Button.hx",254,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_276__onMouseClick,"haxe.ui.components.Button","_onMouseClick",0x0db9f8eb,"haxe.ui.components.Button._onMouseClick","haxe/ui/components/Button.hx",276,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_286_get_selected,"haxe.ui.components.Button","get_selected",0xfbadbd7a,"haxe.ui.components.Button.get_selected","haxe/ui/components/Button.hx",286,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_13057cf4e603c2d2_288_set_selected,"haxe.ui.components.Button","set_selected",0x10a6e0ee,"haxe.ui.components.Button.set_selected","haxe/ui/components/Button.hx",288,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_get_iconPosition,"haxe.ui.components.Button","get_iconPosition",0xa12af3e1,"haxe.ui.components.Button.get_iconPosition","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_set_iconPosition,"haxe.ui.components.Button","set_iconPosition",0xf76ce155,"haxe.ui.components.Button.set_iconPosition","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_get_fontSize,"haxe.ui.components.Button","get_fontSize",0x1912514f,"haxe.ui.components.Button.get_fontSize","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_set_fontSize,"haxe.ui.components.Button","set_fontSize",0x2e0b74c3,"haxe.ui.components.Button.set_fontSize","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_get_textAlign,"haxe.ui.components.Button","get_textAlign",0x68bf0ed9,"haxe.ui.components.Button.get_textAlign","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_3bbf00518ca4071a_1_set_textAlign,"haxe.ui.components.Button","set_textAlign",0xadc4f0e5,"haxe.ui.components.Button.set_textAlign","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_a1109ccdd6ffcef4_1_cloneComponent,"haxe.ui.components.Button","cloneComponent",0x7a443a36,"haxe.ui.components.Button.cloneComponent","src/haxe/ui/components/Button.hx",1,0x515ecc70)
HX_LOCAL_STACK_FRAME(_hx_pos_a1109ccdd6ffcef4_2_self,"haxe.ui.components.Button","self",0x48b764a2,"haxe.ui.components.Button.self","src/haxe/ui/components/Button.hx",2,0x515ecc70)
namespace haxe{
namespace ui{
namespace components{

void Button_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_43_new)
HXLINE( 283)		this->_selected = false;
HXLINE( 210)		this->_down = false;
HXLINE( 158)		this->repeatInterval = (int)50;
HXLINE( 152)		this->repeater = false;
HXLINE( 146)		this->remainPressed = false;
HXLINE(  47)		super::__construct();
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x23718646) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23718646;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void Button_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_13057cf4e603c2d2_56_createDefaults)
HXLINE(  57)		this->super::createDefaults();
HXLINE(  58)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  58)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ButtonDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  58)		_g->set(HX_("icon",79,e7,b2,45),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ButtonDefaultIconBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  58)		this->defaultBehaviours(_g);
HXLINE(  62)		this->_defaultLayout =  ::haxe::ui::components::ButtonLayout_obj::__alloc( HX_CTX );
            	}


void Button_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_65_createChildren)
HXLINE(  66)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  67)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
HXLINE(  68)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            	}


void Button_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_71_destroyChildren)
HXLINE(  72)		this->super::destroyChildren();
HXLINE(  74)		this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  75)		this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
HXLINE(  76)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE(  78)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  79)		if (hx::IsNotNull( label )) {
HXLINE(  80)			this->removeComponent(label,null(),null());
HXLINE(  81)			label = null();
            		}
HXLINE(  84)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  85)		if (hx::IsNotNull( icon )) {
HXLINE(  86)			this->removeComponent(icon,null(),null());
HXLINE(  87)			icon = null();
            		}
            	}


::String Button_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_94_set_text)
HXLINE(  95)		value = this->super::set_text(value);
HXLINE(  96)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  97)		return value;
            	}


void Button_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_100_applyStyle)
HXLINE( 101)		this->super::applyStyle(style);
HXLINE( 102)		if (hx::IsNotNull( style->icon )) {
HXLINE( 103)			this->set_icon(style->icon);
            		}
HXLINE( 106)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (hx::IsNotNull( label )) {
HXLINE( 108)			bool _hx_tmp1;
HXDLIN( 108)			bool _hx_tmp2;
HXDLIN( 108)			if (hx::IsEq( label->customStyle->color,style->color )) {
HXLINE( 108)				_hx_tmp2 = (label->customStyle->fontName != style->fontName);
            			}
            			else {
HXLINE( 108)				_hx_tmp2 = true;
            			}
HXDLIN( 108)			if (!(_hx_tmp2)) {
HXLINE( 108)				_hx_tmp1 = hx::IsNotEq( label->customStyle->fontSize,style->fontSize );
            			}
            			else {
HXLINE( 108)				_hx_tmp1 = true;
            			}
HXDLIN( 108)			if (!(_hx_tmp1)) {
HXLINE( 107)				_hx_tmp = (label->customStyle->cursor != style->cursor);
            			}
            			else {
HXLINE( 107)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 113)			label->customStyle->color = style->color;
HXLINE( 114)			label->customStyle->fontName = style->fontName;
HXLINE( 115)			label->customStyle->fontSize = style->fontSize;
HXLINE( 116)			label->customStyle->cursor = style->cursor;
HXLINE( 117)			label->invalidate(HX_("style",31,a5,1d,84));
            		}
HXLINE( 120)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE( 121)		bool _hx_tmp3;
HXDLIN( 121)		if (hx::IsNotNull( icon )) {
HXLINE( 121)			_hx_tmp3 = (icon->customStyle->cursor != style->cursor);
            		}
            		else {
HXLINE( 121)			_hx_tmp3 = false;
            		}
HXDLIN( 121)		if (_hx_tmp3) {
HXLINE( 122)			icon->customStyle->cursor = style->cursor;
HXLINE( 123)			icon->invalidate(HX_("style",31,a5,1d,84));
            		}
            	}


void Button_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_130_validateData)
HXLINE( 131)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("text",ad,cc,f9,4c));
HXDLIN( 131)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp) != this->_text)) {
HXLINE( 132)			this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_text));
            		}
HXLINE( 135)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("icon",79,e7,b2,45));
HXDLIN( 135)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp1) != this->_iconResource)) {
HXLINE( 136)			this->behaviourSet(HX_("icon",79,e7,b2,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_iconResource));
            		}
            	}


::String Button_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_166_get_icon)
HXDLIN( 166)		return this->_iconResource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icon,return )

::String Button_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_169_set_icon)
HXLINE( 170)		if ((this->_iconResource == value)) {
HXLINE( 171)			return value;
            		}
HXLINE( 174)		this->_iconResource = value;
HXLINE( 175)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icon,return )

bool Button_obj::get_toggle(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_189_get_toggle)
HXDLIN( 189)		return this->_toggle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_toggle,return )

bool Button_obj::set_toggle(bool value){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_191_set_toggle)
HXLINE( 192)		if ((value == this->_toggle)) {
HXLINE( 193)			return value;
            		}
HXLINE( 196)		if ((value == false)) {
HXLINE( 197)			this->unregisterEvent(HX_("click",48,7c,5e,48),this->_onMouseClick_dyn());
HXLINE( 198)			this->set_selected(false);
            		}
            		else {
HXLINE( 200)			this->registerEvent(HX_("click",48,7c,5e,48),this->_onMouseClick_dyn());
            		}
HXLINE( 203)		this->_toggle = value;
HXLINE( 204)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_toggle,return )

void Button_obj::_onMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_211__onMouseOver)
HXLINE( 212)		bool _hx_tmp;
HXDLIN( 212)		if ((this->_toggle == true)) {
HXLINE( 212)			_hx_tmp = this->hasClass(HX_(":down",9c,9d,ab,a7));
            		}
            		else {
HXLINE( 212)			_hx_tmp = false;
            		}
HXDLIN( 212)		if (_hx_tmp) {
HXLINE( 213)			return;
            		}
HXLINE( 216)		bool _hx_tmp1;
HXDLIN( 216)		if ((event->buttonDown != false)) {
HXLINE( 216)			_hx_tmp1 = (this->_down == false);
            		}
            		else {
HXLINE( 216)			_hx_tmp1 = true;
            		}
HXDLIN( 216)		if (_hx_tmp1) {
HXLINE( 217)			this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
            		else {
HXLINE( 219)			this->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOver,(void))

void Button_obj::_onMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_223__onMouseOut)
HXLINE( 224)		bool _hx_tmp;
HXDLIN( 224)		if ((this->_toggle == true)) {
HXLINE( 224)			_hx_tmp = (this->_selected == true);
            		}
            		else {
HXLINE( 224)			_hx_tmp = false;
            		}
HXDLIN( 224)		if (_hx_tmp) {
HXLINE( 225)			return;
            		}
HXLINE( 228)		if ((this->remainPressed == false)) {
HXLINE( 229)			this->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            		}
HXLINE( 231)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOut,(void))

void Button_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_13057cf4e603c2d2_234__onMouseDown)
HXLINE( 235)		bool _hx_tmp;
HXDLIN( 235)		if (hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo() )) {
HXLINE( 235)			_hx_tmp = hx::IsNotNull( ::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus );
            		}
            		else {
HXLINE( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXLINE( 236)			::haxe::ui::focus::IFocusable_obj::set_focus(::haxe::ui::focus::FocusManager_obj::get_instance()->get_focusInfo()->currentFocus,false);
            		}
HXLINE( 238)		this->_down = true;
HXLINE( 239)		this->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 240)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
HXLINE( 242)		if ((this->repeater == true)) {
HXLINE( 243)			this->_repeatTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,this->repeatInterval,this->_onRepeatTimer_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseDown,(void))

void Button_obj::_onRepeatTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_13057cf4e603c2d2_248__onRepeatTimer)
HXDLIN( 248)		bool _hx_tmp;
HXDLIN( 248)		if (this->hasClass(HX_(":hover",42,d3,17,5c))) {
HXDLIN( 248)			_hx_tmp = (this->_down == true);
            		}
            		else {
HXDLIN( 248)			_hx_tmp = false;
            		}
HXDLIN( 248)		if (_hx_tmp) {
HXLINE( 249)			 ::haxe::ui::core::MouseEvent event =  ::haxe::ui::core::MouseEvent_obj::__alloc( HX_CTX ,HX_("click",48,7c,5e,48));
HXLINE( 250)			this->dispatch(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,_onRepeatTimer,(void))

void Button_obj::_onMouseUp( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_254__onMouseUp)
HXLINE( 255)		event->cancel();
HXLINE( 256)		this->_down = false;
HXLINE( 257)		this->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
HXLINE( 259)		if ((this->_toggle == true)) {
HXLINE( 260)			return;
            		}
HXLINE( 263)		this->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if ((event->touchEvent == false)) {
HXLINE( 264)			_hx_tmp = this->hitTest(event->screenX,event->screenY);
            		}
            		else {
HXLINE( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (_hx_tmp) {
HXLINE( 265)			this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
HXLINE( 268)		bool _hx_tmp1 = hx::IsNotNull( this->_repeatTimer );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseUp,(void))

void Button_obj::_onMouseClick( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_276__onMouseClick)
HXLINE( 277)		this->_selected = !(this->_selected);
HXLINE( 278)		if ((this->_selected == false)) {
HXLINE( 279)			this->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseClick,(void))

bool Button_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_286_get_selected)
HXDLIN( 286)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_selected,return )

bool Button_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_288_set_selected)
HXLINE( 289)		bool _hx_tmp;
HXDLIN( 289)		if ((value != this->_selected)) {
HXLINE( 289)			_hx_tmp = (this->_toggle == false);
            		}
            		else {
HXLINE( 289)			_hx_tmp = true;
            		}
HXDLIN( 289)		if (_hx_tmp) {
HXLINE( 290)			return value;
            		}
HXLINE( 292)		this->_selected = value;
HXLINE( 293)		if ((this->_selected == false)) {
HXLINE( 294)			this->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
            		}
            		else {
HXLINE( 296)			this->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
            		}
HXLINE( 298)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 299)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_selected,return )

::String Button_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_get_iconPosition)
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->get_style() )) {
HXDLIN(   1)			_hx_tmp = hx::IsNull( this->get_style()->iconPosition );
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (_hx_tmp) {
HXDLIN(   1)			return null();
            		}
HXDLIN(   1)		return this->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconPosition,return )

::String Button_obj::set_iconPosition(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_set_iconPosition)
HXDLIN(   1)		if ((this->customStyle->iconPosition == value)) {
HXDLIN(   1)			return value;
            		}
HXDLIN(   1)		if (hx::IsNull( this->_style )) {
HXDLIN(   1)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
            		}
HXDLIN(   1)		this->customStyle->iconPosition = value;
HXDLIN(   1)		this->invalidate(HX_("style",31,a5,1d,84));
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->_layout )) {
HXDLIN(   1)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (!(_hx_tmp)) {
HXDLIN(   1)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXDLIN(   1)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconPosition,return )

 ::Dynamic Button_obj::get_fontSize(){
            	HX_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_get_fontSize)
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->get_style() )) {
HXDLIN(   1)			_hx_tmp = hx::IsNull( this->get_style()->fontSize );
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (_hx_tmp) {
HXDLIN(   1)			return null();
            		}
HXDLIN(   1)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->get_style()->fontSize);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_fontSize,return )

 ::Dynamic Button_obj::set_fontSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_set_fontSize)
HXDLIN(   1)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->customStyle->fontSize),value )) {
HXDLIN(   1)			return value;
            		}
HXDLIN(   1)		if (hx::IsNull( this->_style )) {
HXDLIN(   1)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
            		}
HXDLIN(   1)		this->customStyle->fontSize = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value);
HXDLIN(   1)		this->invalidate(HX_("style",31,a5,1d,84));
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->_layout )) {
HXDLIN(   1)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (!(_hx_tmp)) {
HXDLIN(   1)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXDLIN(   1)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_fontSize,return )

::String Button_obj::get_textAlign(){
            	HX_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_get_textAlign)
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->get_style() )) {
HXDLIN(   1)			_hx_tmp = hx::IsNull( this->get_style()->textAlign );
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (_hx_tmp) {
HXDLIN(   1)			return null();
            		}
HXDLIN(   1)		return this->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_textAlign,return )

::String Button_obj::set_textAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3bbf00518ca4071a_1_set_textAlign)
HXDLIN(   1)		if ((this->customStyle->textAlign == value)) {
HXDLIN(   1)			return value;
            		}
HXDLIN(   1)		if (hx::IsNull( this->_style )) {
HXDLIN(   1)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
            		}
HXDLIN(   1)		this->customStyle->textAlign = value;
HXDLIN(   1)		this->invalidate(HX_("style",31,a5,1d,84));
HXDLIN(   1)		bool _hx_tmp;
HXDLIN(   1)		if (hx::IsNotNull( this->_layout )) {
HXDLIN(   1)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXDLIN(   1)			_hx_tmp = true;
            		}
HXDLIN(   1)		if (!(_hx_tmp)) {
HXDLIN(   1)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXDLIN(   1)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_textAlign,return )

 ::haxe::ui::core::Component Button_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a1109ccdd6ffcef4_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Button c = ( ( ::haxe::ui::components::Button)(this->super::cloneComponent()) );
HXLINE(   3)		c->remainPressed = this->remainPressed;
HXLINE(   4)		c->repeater = this->repeater;
HXLINE(   5)		c->repeatInterval = this->repeatInterval;
HXLINE(   6)		if (hx::IsNotNull( this->get_icon() )) {
HXLINE(   6)			c->set_icon(this->get_icon());
            		}
HXLINE(   8)		c->set_toggle(this->get_toggle());
HXLINE(   9)		if (hx::IsNotNull( this->get_iconPosition() )) {
HXLINE(   9)			c->set_iconPosition(this->get_iconPosition());
            		}
HXLINE(  11)		if (hx::IsNotNull( this->get_fontSize() )) {
HXLINE(  11)			c->set_fontSize(this->get_fontSize());
            		}
HXLINE(  13)		if (hx::IsNotNull( this->get_textAlign() )) {
HXLINE(  13)			c->set_textAlign(this->get_textAlign());
            		}
HXLINE(  15)		return c;
            	}


 ::haxe::ui::core::Component Button_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a1109ccdd6ffcef4_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Button_obj > Button_obj::__new() {
	hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Button_obj > Button_obj::__alloc(hx::Ctx *_hx_ctx) {
	Button_obj *__this = (Button_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "haxe.ui.components.Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_MARK_MEMBER_NAME(remainPressed,"remainPressed");
	HX_MARK_MEMBER_NAME(repeater,"repeater");
	HX_MARK_MEMBER_NAME(repeatInterval,"repeatInterval");
	HX_MARK_MEMBER_NAME(_iconResource,"_iconResource");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_fontSize,"_fontSize");
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	HX_MARK_MEMBER_NAME(_toggle,"_toggle");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_repeatTimer,"_repeatTimer");
	HX_VISIT_MEMBER_NAME(remainPressed,"remainPressed");
	HX_VISIT_MEMBER_NAME(repeater,"repeater");
	HX_VISIT_MEMBER_NAME(repeatInterval,"repeatInterval");
	HX_VISIT_MEMBER_NAME(_iconResource,"_iconResource");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_fontSize,"_fontSize");
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	HX_VISIT_MEMBER_NAME(_toggle,"_toggle");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return hx::Val( _down ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_toggle() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_toggle") ) { return hx::Val( _toggle ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"repeater") ) { return hx::Val( repeater ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return hx::Val( set_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selected() ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_fontSize() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fontSize") ) { return hx::Val( _fontSize ); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return hx::Val( _selected ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_textAlign() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return hx::Val( _textAlign ); }
		if (HX_FIELD_EQ(inName,"get_toggle") ) { return hx::Val( get_toggle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toggle") ) { return hx::Val( set_toggle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return hx::Val( _onMouseUp_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return hx::Val( _onMouseOut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { return hx::Val( _repeatTimer ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return hx::Val( _onMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_iconPosition() ); }
		if (HX_FIELD_EQ(inName,"get_fontSize") ) { return hx::Val( get_fontSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fontSize") ) { return hx::Val( set_fontSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remainPressed") ) { return hx::Val( remainPressed ); }
		if (HX_FIELD_EQ(inName,"_iconResource") ) { return hx::Val( _iconResource ); }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return hx::Val( _iconPosition ); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return hx::Val( _onMouseClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return hx::Val( get_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return hx::Val( set_textAlign_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { return hx::Val( repeatInterval ); }
		if (HX_FIELD_EQ(inName,"_onRepeatTimer") ) { return hx::Val( _onRepeatTimer_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return hx::Val( get_iconPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return hx::Val( set_iconPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Button_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_toggle(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_toggle") ) { _toggle=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { repeater=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selected(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_fontSize(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fontSize") ) { _fontSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textAlign(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _textAlign=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_repeatTimer") ) { _repeatTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_iconPosition(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remainPressed") ) { remainPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconResource") ) { _iconResource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { repeatInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_repeatTimer","\x6b","\xbc","\x66","\x47"));
	outFields->push(HX_HCSTRING("remainPressed","\x96","\x4e","\x12","\xdb"));
	outFields->push(HX_HCSTRING("repeater","\x88","\xbc","\x55","\x10"));
	outFields->push(HX_HCSTRING("repeatInterval","\xc0","\x1f","\x6a","\x45"));
	outFields->push(HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"));
	outFields->push(HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16"));
	outFields->push(HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"));
	outFields->push(HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd"));
	outFields->push(HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	outFields->push(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::util::Timer*/ ,(int)offsetof(Button_obj,_repeatTimer),HX_HCSTRING("_repeatTimer","\x6b","\xbc","\x66","\x47")},
	{hx::fsBool,(int)offsetof(Button_obj,remainPressed),HX_HCSTRING("remainPressed","\x96","\x4e","\x12","\xdb")},
	{hx::fsBool,(int)offsetof(Button_obj,repeater),HX_HCSTRING("repeater","\x88","\xbc","\x55","\x10")},
	{hx::fsInt,(int)offsetof(Button_obj,repeatInterval),HX_HCSTRING("repeatInterval","\xc0","\x1f","\x6a","\x45")},
	{hx::fsString,(int)offsetof(Button_obj,_iconResource),HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0")},
	{hx::fsString,(int)offsetof(Button_obj,_iconPosition),HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,_fontSize),HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16")},
	{hx::fsString,(int)offsetof(Button_obj,_textAlign),HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16")},
	{hx::fsBool,(int)offsetof(Button_obj,_toggle),HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd")},
	{hx::fsBool,(int)offsetof(Button_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{hx::fsBool,(int)offsetof(Button_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_HCSTRING("_repeatTimer","\x6b","\xbc","\x66","\x47"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("remainPressed","\x96","\x4e","\x12","\xdb"),
	HX_HCSTRING("repeater","\x88","\xbc","\x55","\x10"),
	HX_HCSTRING("repeatInterval","\xc0","\x1f","\x6a","\x45"),
	HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0"),
	HX_HCSTRING("get_icon","\x02","\xa3","\x6d","\xc5"),
	HX_HCSTRING("set_icon","\x76","\xfc","\xca","\x73"),
	HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"),
	HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16"),
	HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"),
	HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd"),
	HX_HCSTRING("get_toggle","\x5d","\x2f","\xcb","\x7f"),
	HX_HCSTRING("set_toggle","\xd1","\xcd","\x48","\x83"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onRepeatTimer","\xcc","\x1b","\x99","\x82"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("get_iconPosition","\xcb","\xd1","\xd7","\x7a"),
	HX_HCSTRING("set_iconPosition","\x3f","\xbf","\x19","\xd1"),
	HX_HCSTRING("get_fontSize","\x39","\x72","\xeb","\x83"),
	HX_HCSTRING("set_fontSize","\xad","\x95","\xe4","\x98"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Button_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Button_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Object *dummy = new Button_obj;
	Button_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Button","\x18","\x1f","\xc8","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Button_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Button_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
