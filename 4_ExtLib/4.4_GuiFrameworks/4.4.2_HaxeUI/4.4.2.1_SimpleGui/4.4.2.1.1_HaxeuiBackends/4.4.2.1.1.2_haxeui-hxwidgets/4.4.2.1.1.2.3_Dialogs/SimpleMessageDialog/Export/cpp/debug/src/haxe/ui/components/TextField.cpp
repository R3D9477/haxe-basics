// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultIconBehaviour
#include <haxe/ui/components/TextFieldDefaultIconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultPasswordBehaviour
#include <haxe/ui/components/TextFieldDefaultPasswordBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultPlaceholderBehaviour
#include <haxe/ui/components/TextFieldDefaultPlaceholderBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultTextBehaviour
#include <haxe/ui/components/TextFieldDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldLayout
#include <haxe/ui/components/TextFieldLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_17_new,"haxe.ui.components.TextField","new",0xbf7a83d9,"haxe.ui.components.TextField.new","haxe/ui/components/TextField.hx",17,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_27_createDefaults,"haxe.ui.components.TextField","createDefaults",0xd58f4cd5,"haxe.ui.components.TextField.createDefaults","haxe/ui/components/TextField.hx",27,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_38_createChildren,"haxe.ui.components.TextField","createChildren",0x965f9582,"haxe.ui.components.TextField.createChildren","haxe/ui/components/TextField.hx",38,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_48_destroyChildren,"haxe.ui.components.TextField","destroyChildren",0x52511152,"haxe.ui.components.TextField.destroyChildren","haxe/ui/components/TextField.hx",48,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_64_set_text,"haxe.ui.components.TextField","set_text",0x54f0f791,"haxe.ui.components.TextField.set_text","haxe/ui/components/TextField.hx",64,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_74_set_focus,"haxe.ui.components.TextField","set_focus",0xf4d7bc74,"haxe.ui.components.TextField.set_focus","haxe/ui/components/TextField.hx",74,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_84_applyStyle,"haxe.ui.components.TextField","applyStyle",0x8facbe8a,"haxe.ui.components.TextField.applyStyle","haxe/ui/components/TextField.hx",84,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_102_get_empty,"haxe.ui.components.TextField","get_empty",0x7cd7ab1d,"haxe.ui.components.TextField.get_empty","haxe/ui/components/TextField.hx",102,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_111_get_icon,"haxe.ui.components.TextField","get_icon",0x9f4cb8e9,"haxe.ui.components.TextField.get_icon","haxe/ui/components/TextField.hx",111,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_114_set_icon,"haxe.ui.components.TextField","set_icon",0x4daa125d,"haxe.ui.components.TextField.set_icon","haxe/ui/components/TextField.hx",114,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_130_get_password,"haxe.ui.components.TextField","get_password",0x1f076c8b,"haxe.ui.components.TextField.get_password","haxe/ui/components/TextField.hx",130,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_133_set_password,"haxe.ui.components.TextField","set_password",0x34008fff,"haxe.ui.components.TextField.set_password","haxe/ui/components/TextField.hx",133,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_149_get_maxChars,"haxe.ui.components.TextField","get_maxChars",0xc6083909,"haxe.ui.components.TextField.get_maxChars","haxe/ui/components/TextField.hx",149,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_152_set_maxChars,"haxe.ui.components.TextField","set_maxChars",0xdb015c7d,"haxe.ui.components.TextField.set_maxChars","haxe/ui/components/TextField.hx",152,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_170_get_placeholder,"haxe.ui.components.TextField","get_placeholder",0xebb7b003,"haxe.ui.components.TextField.get_placeholder","haxe/ui/components/TextField.hx",170,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_173_set_placeholder,"haxe.ui.components.TextField","set_placeholder",0xe7832d0f,"haxe.ui.components.TextField.set_placeholder","haxe/ui/components/TextField.hx",173,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_204_get_restrictChars,"haxe.ui.components.TextField","get_restrictChars",0xd1e48891,"haxe.ui.components.TextField.get_restrictChars","haxe/ui/components/TextField.hx",204,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_207_set_restrictChars,"haxe.ui.components.TextField","set_restrictChars",0xf552609d,"haxe.ui.components.TextField.set_restrictChars","haxe/ui/components/TextField.hx",207,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_221__onTextChanged,"haxe.ui.components.TextField","_onTextChanged",0x1d43b650,"haxe.ui.components.TextField._onTextChanged","haxe/ui/components/TextField.hx",221,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_233__onMouseDown,"haxe.ui.components.TextField","_onMouseDown",0x982cd770,"haxe.ui.components.TextField._onMouseDown","haxe/ui/components/TextField.hx",233,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_240_validateData,"haxe.ui.components.TextField","validateData",0xb780eb47,"haxe.ui.components.TextField.validateData","haxe/ui/components/TextField.hx",240,0x9dfe9498)
static const ::String _hx_array_data_f06ba367_21[] = {
	HX_("text",ad,cc,f9,4c),HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a918f1d08f9edb8f_282__generateRestrictEReg,"haxe.ui.components.TextField","_generateRestrictEReg",0x0dff99b8,"haxe.ui.components.TextField._generateRestrictEReg","haxe/ui/components/TextField.hx",282,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_b73d2a974849e103_1_cloneComponent,"haxe.ui.components.TextField","cloneComponent",0xfa11e6c7,"haxe.ui.components.TextField.cloneComponent","src/haxe/ui/components/TextField.hx",1,0x56d00a2d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73d2a974849e103_2_self,"haxe.ui.components.TextField","self",0xcf06e1f3,"haxe.ui.components.TextField.self","src/haxe/ui/components/TextField.hx",2,0x56d00a2d)
namespace haxe{
namespace ui{
namespace components{

void TextField_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_17_new)
HXLINE( 143)		this->_maxChars = (int)-1;
HXLINE( 124)		this->_password = false;
HXLINE(  21)		super::__construct();
            	}

Dynamic TextField_obj::__CreateEmpty() { return new TextField_obj; }

void *TextField_obj::_hx_vtable = 0;

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextField_obj > _hx_result = new TextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextField_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7f5eb4d9;
	}
}

static ::haxe::ui::focus::IFocusable_obj _hx_haxe_ui_components_TextField__hx_haxe_ui_focus_IFocusable= {
	( bool (hx::Object::*)())&::haxe::ui::components::TextField_obj::get_focus,
	( bool (hx::Object::*)(bool))&::haxe::ui::components::TextField_obj::set_focus,
	( bool (hx::Object::*)())&::haxe::ui::components::TextField_obj::get_allowFocus,
	( bool (hx::Object::*)(bool))&::haxe::ui::components::TextField_obj::set_allowFocus,
};

void *TextField_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x04f087c7: return &_hx_haxe_ui_components_TextField__hx_haxe_ui_focus_IFocusable;
	}
	return super::_hx_getInterface(inHash);
}

void TextField_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_27_createDefaults)
HXLINE(  28)		this->super::createDefaults();
HXLINE(  29)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  29)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextFieldDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("icon",79,e7,b2,45),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextFieldDefaultIconBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("password",1b,23,d0,48),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextFieldDefaultPasswordBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("placeholder",73,73,f3,ba),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::TextFieldDefaultPlaceholderBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		this->defaultBehaviours(_g);
HXLINE(  35)		this->_defaultLayout =  ::haxe::ui::components::TextFieldLayout_obj::__alloc( HX_CTX );
            	}


void TextField_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_38_createChildren)
HXLINE(  39)		if (hx::IsEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  40)			this->set_componentWidth((int)150);
            		}
HXLINE(  43)		this->getTextInput()->set_multiline(false);
HXLINE(  44)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE(  45)		this->registerEvent(HX_("change",70,91,72,b7),this->_onTextChanged_dyn());
            	}


void TextField_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_48_destroyChildren)
HXLINE(  49)		this->super::destroyChildren();
HXLINE(  51)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
HXLINE(  52)		this->unregisterEvent(HX_("change",70,91,72,b7),this->_onTextChanged_dyn());
HXLINE(  54)		if (hx::IsNotNull( this->_icon )) {
HXLINE(  55)			this->removeComponent(this->_icon,null(),null());
HXLINE(  56)			this->_icon = null();
            		}
            	}


::String TextField_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_64_set_text)
HXLINE(  65)		if ((value == this->_text)) {
HXLINE(  66)			return value;
            		}
HXLINE(  69)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  70)		value = this->super::set_text(value);
HXLINE(  71)		return value;
            	}


bool TextField_obj::set_focus(bool value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_74_set_focus)
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if ((this->_focus != value)) {
HXLINE(  75)			_hx_tmp = (this->get_allowFocus() == false);
            		}
            		else {
HXLINE(  75)			_hx_tmp = true;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			return value;
            		}
HXLINE(  79)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  80)		this->super::set_focus(value);
HXLINE(  81)		return value;
            	}


void TextField_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_84_applyStyle)
HXLINE(  85)		this->super::applyStyle(style);
HXLINE(  86)		if (hx::IsNotNull( style->icon )) {
HXLINE(  87)			this->set_icon(style->icon);
            		}
HXLINE(  89)		if ((this->hasTextInput() == true)) {
HXLINE(  90)			this->getTextInput()->set_textStyle(style);
            		}
            	}


bool TextField_obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_102_get_empty)
HXDLIN( 102)		if (hx::IsNotNull( this->_text )) {
HXDLIN( 102)			return (this->_text.length == (int)0);
            		}
            		else {
HXDLIN( 102)			return true;
            		}
HXDLIN( 102)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_empty,return )

::String TextField_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_111_get_icon)
HXDLIN( 111)		return this->_iconResource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_icon,return )

::String TextField_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_114_set_icon)
HXLINE( 115)		if ((this->_iconResource == value)) {
HXLINE( 116)			return value;
            		}
HXLINE( 119)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 120)		this->_iconResource = value;
HXLINE( 121)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_icon,return )

bool TextField_obj::get_password(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_130_get_password)
HXDLIN( 130)		return this->_password;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_password,return )

bool TextField_obj::set_password(bool value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_133_set_password)
HXLINE( 134)		if ((this->_password == value)) {
HXLINE( 135)			return value;
            		}
HXLINE( 138)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 139)		this->_password = value;
HXLINE( 140)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_password,return )

int TextField_obj::get_maxChars(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_149_get_maxChars)
HXDLIN( 149)		return this->_maxChars;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars(int value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_152_set_maxChars)
HXLINE( 153)		if ((this->_maxChars == value)) {
HXLINE( 154)			return value;
            		}
HXLINE( 157)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 158)		this->_maxChars = value;
HXLINE( 159)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

::String TextField_obj::get_placeholder(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_170_get_placeholder)
HXDLIN( 170)		return this->_placeholder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_placeholder,return )

::String TextField_obj::set_placeholder(::String value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_173_set_placeholder)
HXLINE( 174)		if ((this->_placeholder == value)) {
HXLINE( 175)			return value;
            		}
HXLINE( 178)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 179)		this->_placeholder = value;
HXLINE( 180)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_placeholder,return )

::String TextField_obj::get_restrictChars(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_204_get_restrictChars)
HXDLIN( 204)		return this->_restrictChars;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrictChars,return )

::String TextField_obj::set_restrictChars(::String value){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_207_set_restrictChars)
HXLINE( 208)		if ((this->_restrictChars == value)) {
HXLINE( 209)			return value;
            		}
HXLINE( 212)		this->_restrictChars = value;
HXLINE( 213)		this->_restrictEReg = this->_generateRestrictEReg();
HXLINE( 215)		return this->_restrictChars;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrictChars,return )

void TextField_obj::_onTextChanged( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_221__onTextChanged)
HXLINE( 222)		::String newText = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviourGet(HX_("text",ad,cc,f9,4c)));
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		bool _hx_tmp1;
HXDLIN( 223)		if (hx::IsNotNull( this->_restrictEReg )) {
HXLINE( 223)			_hx_tmp1 = (newText != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = false;
            		}
HXDLIN( 223)		if (_hx_tmp1) {
HXLINE( 223)			_hx_tmp = !(this->_restrictEReg->match(newText));
            		}
            		else {
HXLINE( 223)			_hx_tmp = false;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			 ::haxe::ui::util::VariantType _hx_tmp2;
HXDLIN( 224)			if (hx::IsNotNull( this->_text )) {
HXLINE( 224)				_hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_text);
            			}
            			else {
HXLINE( 224)				_hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("",00,00,00,00));
            			}
HXDLIN( 224)			this->behaviourSet(HX_("text",ad,cc,f9,4c),_hx_tmp2);
HXLINE( 225)			return;
            		}
HXLINE( 228)		this->set_text(newText);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_onTextChanged,(void))

void TextField_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_233__onMouseDown)
HXDLIN( 233)		::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,_onMouseDown,(void))

void TextField_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_240_validateData)
HXLINE( 241)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("icon",79,e7,b2,45));
HXDLIN( 241)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp) != this->_iconResource)) {
HXLINE( 242)			this->behaviourSet(HX_("icon",79,e7,b2,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_iconResource));
            		}
HXLINE( 245)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("placeholder",73,73,f3,ba));
HXDLIN( 245)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp1) != this->_placeholder)) {
HXLINE( 246)			this->behaviourSet(HX_("placeholder",73,73,f3,ba),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_placeholder));
            		}
HXLINE( 249)		::String text;
HXDLIN( 249)		if (hx::IsNotNull( this->_text )) {
HXLINE( 249)			text = this->_text;
            		}
            		else {
HXLINE( 249)			text = HX_("",00,00,00,00);
            		}
HXLINE( 250)		bool placeholderVisible = this->get_empty();
HXLINE( 253)		bool _hx_tmp2;
HXDLIN( 253)		bool _hx_tmp3;
HXDLIN( 253)		if ((this->_maxChars != (int)-1)) {
HXLINE( 253)			_hx_tmp3 = (text.length > this->_maxChars);
            		}
            		else {
HXLINE( 253)			_hx_tmp3 = false;
            		}
HXDLIN( 253)		if (_hx_tmp3) {
HXLINE( 253)			_hx_tmp2 = (placeholderVisible == false);
            		}
            		else {
HXLINE( 253)			_hx_tmp2 = false;
            		}
HXDLIN( 253)		if (_hx_tmp2) {
HXLINE( 254)			text = text.substr((int)0,this->_maxChars);
HXLINE( 255)			this->_text = text;
            		}
HXLINE( 259)		bool _hx_tmp4;
HXDLIN( 259)		if ((this->get_focus() == false)) {
HXLINE( 259)			_hx_tmp4 = hx::IsNotNull( this->_placeholder );
            		}
            		else {
HXLINE( 259)			_hx_tmp4 = false;
            		}
HXDLIN( 259)		if (_hx_tmp4) {
HXLINE( 260)			if ((text == HX_("",00,00,00,00))) {
HXLINE( 261)				text = this->_placeholder;
HXLINE( 262)				this->behaviourSet(HX_("password",1b,23,d0,48),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 263)				this->addClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            			else {
HXLINE( 265)				this->behaviourSet(HX_("password",1b,23,d0,48),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_password));
HXLINE( 266)				this->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
            			}
            		}
            		else {
HXLINE( 268)			if ((placeholderVisible == true)) {
HXLINE( 269)				text = HX_("",00,00,00,00);
HXLINE( 270)				this->removeClass(HX_(":empty",13,28,8d,a0),null(),null());
HXLINE( 271)				this->behaviourSet(HX_("password",1b,23,d0,48),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_password));
            			}
            		}
HXLINE( 274)		this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(text));
HXLINE( 275)		this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_f06ba367_21,2));
            	}


 ::EReg TextField_obj::_generateRestrictEReg(){
            	HX_GC_STACKFRAME(&_hx_pos_a918f1d08f9edb8f_282__generateRestrictEReg)
HXLINE( 283)		if (hx::IsNull( this->_restrictChars )) {
HXLINE( 284)			return null();
            		}
HXLINE( 287)		 ::EReg excludeEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^(.+)",a6,4f,13,03),HX_("g",67,00,00,00));
HXLINE( 288)		::String excludeChars = null();
HXLINE( 289)		::String includeChars = null();
HXLINE( 290)		if (excludeEReg->match(this->_restrictChars)) {
HXLINE( 291)			includeChars = excludeEReg->matchedLeft();
HXLINE( 292)			excludeChars = excludeEReg->matched((int)1);
            		}
            		else {
HXLINE( 294)			includeChars = this->_restrictChars;
            		}
HXLINE( 297)		if ((includeChars.length == (int)0)) {
HXLINE( 297)			includeChars = HX_(".",2e,00,00,00);
            		}
            		else {
HXLINE( 297)			includeChars = ((HX_("[",5b,00,00,00) + includeChars) + HX_("]",5d,00,00,00));
            		}
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (hx::IsNotNull( excludeChars )) {
HXLINE( 299)			_hx_tmp = (excludeChars.length > (int)0);
            		}
            		else {
HXLINE( 299)			_hx_tmp = false;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 300)			return  ::EReg_obj::__alloc( HX_CTX ,((((HX_("^((?=[^",1f,48,02,75) + excludeChars) + HX_("])",2c,51,00,00)) + includeChars) + HX_(")+$",02,42,1f,00)),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 302)			return  ::EReg_obj::__alloc( HX_CTX ,((HX_("^",5e,00,00,00) + includeChars) + HX_("+$",99,25,00,00)),HX_("",00,00,00,00));
            		}
HXLINE( 299)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,_generateRestrictEReg,return )

 ::haxe::ui::core::Component TextField_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b73d2a974849e103_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::TextField c = ( ( ::haxe::ui::components::TextField)(this->super::cloneComponent()) );
HXLINE(   3)		if (hx::IsNotNull( this->get_icon() )) {
HXLINE(   3)			c->set_icon(this->get_icon());
            		}
HXLINE(   5)		c->set_password(this->get_password());
HXLINE(   6)		c->set_maxChars(this->get_maxChars());
HXLINE(   7)		if (hx::IsNotNull( this->get_placeholder() )) {
HXLINE(   7)			c->set_placeholder(this->get_placeholder());
            		}
HXLINE(   9)		if (hx::IsNotNull( this->get_restrictChars() )) {
HXLINE(   9)			c->set_restrictChars(this->get_restrictChars());
            		}
HXLINE(  11)		return c;
            	}


 ::haxe::ui::core::Component TextField_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b73d2a974849e103_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TextField_obj > TextField_obj::__new() {
	hx::ObjectPtr< TextField_obj > __this = new TextField_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextField_obj > TextField_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextField_obj *__this = (TextField_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextField_obj), true, "haxe.ui.components.TextField"));
	*(void **)__this = TextField_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_iconResource,"_iconResource");
	HX_MARK_MEMBER_NAME(_password,"_password");
	HX_MARK_MEMBER_NAME(_maxChars,"_maxChars");
	HX_MARK_MEMBER_NAME(_placeholder,"_placeholder");
	HX_MARK_MEMBER_NAME(_restrictEReg,"_restrictEReg");
	HX_MARK_MEMBER_NAME(_restrictChars,"_restrictChars");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_iconResource,"_iconResource");
	HX_VISIT_MEMBER_NAME(_password,"_password");
	HX_VISIT_MEMBER_NAME(_maxChars,"_maxChars");
	HX_VISIT_MEMBER_NAME(_placeholder,"_placeholder");
	HX_VISIT_MEMBER_NAME(_restrictEReg,"_restrictEReg");
	HX_VISIT_MEMBER_NAME(_restrictChars,"_restrictChars");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return hx::Val( _icon ); }
		if (HX_FIELD_EQ(inName,"empty") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_empty() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return hx::Val( set_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_password() ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_maxChars() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_focus") ) { return hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_empty") ) { return hx::Val( get_empty_dyn() ); }
		if (HX_FIELD_EQ(inName,"_password") ) { return hx::Val( _password ); }
		if (HX_FIELD_EQ(inName,"_maxChars") ) { return hx::Val( _maxChars ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_placeholder() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_password") ) { return hx::Val( get_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_password") ) { return hx::Val( set_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return hx::Val( get_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return hx::Val( set_maxChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"_placeholder") ) { return hx::Val( _placeholder ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconResource") ) { return hx::Val( _iconResource ); }
		if (HX_FIELD_EQ(inName,"_restrictEReg") ) { return hx::Val( _restrictEReg ); }
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_restrictChars() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_restrictChars") ) { return hx::Val( _restrictChars ); }
		if (HX_FIELD_EQ(inName,"_onTextChanged") ) { return hx::Val( _onTextChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_placeholder") ) { return hx::Val( get_placeholder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_placeholder") ) { return hx::Val( set_placeholder_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return hx::Val( get_restrictChars_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return hx::Val( set_restrictChars_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_generateRestrictEReg") ) { return hx::Val( _generateRestrictEReg_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_password(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_maxChars(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_password") ) { _password=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxChars") ) { _maxChars=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"placeholder") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_placeholder(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_placeholder") ) { _placeholder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconResource") ) { _iconResource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_restrictEReg") ) { _restrictEReg=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_restrictChars(inValue.Cast< ::String >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_restrictChars") ) { _restrictChars=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"));
	outFields->push(HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90"));
	outFields->push(HX_HCSTRING("password","\x1b","\x23","\xd0","\x48"));
	outFields->push(HX_HCSTRING("_maxChars","\xf8","\xe6","\x66","\x37"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20"));
	outFields->push(HX_HCSTRING("placeholder","\x73","\x73","\xf3","\xba"));
	outFields->push(HX_HCSTRING("_restrictEReg","\x2a","\xf6","\xb3","\x0c"));
	outFields->push(HX_HCSTRING("_restrictChars","\x42","\xf8","\x7d","\xf8"));
	outFields->push(HX_HCSTRING("restrictChars","\x01","\x08","\x2c","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextField_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::Image*/ ,(int)offsetof(TextField_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{hx::fsString,(int)offsetof(TextField_obj,_iconResource),HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0")},
	{hx::fsBool,(int)offsetof(TextField_obj,_password),HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90")},
	{hx::fsInt,(int)offsetof(TextField_obj,_maxChars),HX_HCSTRING("_maxChars","\xf8","\xe6","\x66","\x37")},
	{hx::fsString,(int)offsetof(TextField_obj,_placeholder),HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20")},
	{hx::fsObject /*::EReg*/ ,(int)offsetof(TextField_obj,_restrictEReg),HX_HCSTRING("_restrictEReg","\x2a","\xf6","\xb3","\x0c")},
	{hx::fsString,(int)offsetof(TextField_obj,_restrictChars),HX_HCSTRING("_restrictChars","\x42","\xf8","\x7d","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextField_obj_sStaticStorageInfo = 0;
#endif

static ::String TextField_obj_sMemberFields[] = {
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("_iconResource","\x46","\x34","\x4d","\xa0"),
	HX_HCSTRING("get_icon","\x02","\xa3","\x6d","\xc5"),
	HX_HCSTRING("set_icon","\x76","\xfc","\xca","\x73"),
	HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90"),
	HX_HCSTRING("get_password","\x24","\xd7","\xe9","\xfd"),
	HX_HCSTRING("set_password","\x98","\xfa","\xe2","\x12"),
	HX_HCSTRING("_maxChars","\xf8","\xe6","\x66","\x37"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("_placeholder","\x74","\x21","\xfd","\x20"),
	HX_HCSTRING("get_placeholder","\x0a","\x2b","\xd5","\x7b"),
	HX_HCSTRING("set_placeholder","\x16","\xa8","\xa0","\x77"),
	HX_HCSTRING("_restrictEReg","\x2a","\xf6","\xb3","\x0c"),
	HX_HCSTRING("_restrictChars","\x42","\xf8","\x7d","\xf8"),
	HX_HCSTRING("get_restrictChars","\x58","\x13","\x9c","\xc0"),
	HX_HCSTRING("set_restrictChars","\x64","\xeb","\x09","\xe4"),
	HX_HCSTRING("_onTextChanged","\x29","\xb9","\x88","\x49"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_generateRestrictEReg","\xff","\x93","\x01","\x05"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void TextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
};

#endif

hx::Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	hx::Object *dummy = new TextField_obj;
	TextField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextField","\x67","\xa3","\x6b","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
