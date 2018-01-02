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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxDefaultSelectedBehaviour
#include <haxe/ui/components/CheckBoxDefaultSelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxDefaultTextBehaviour
#include <haxe/ui/components/CheckBoxDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
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
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_16_new,"haxe.ui.components.CheckBox","new",0x772f963b,"haxe.ui.components.CheckBox.new","haxe/ui/components/CheckBox.hx",16,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_24_createDefaults,"haxe.ui.components.CheckBox","createDefaults",0xa0f771b3,"haxe.ui.components.CheckBox.createDefaults","haxe/ui/components/CheckBox.hx",24,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_33_createChildren,"haxe.ui.components.CheckBox","createChildren",0x61c7ba60,"haxe.ui.components.CheckBox.createChildren","haxe/ui/components/CheckBox.hx",33,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_47_destroyChildren,"haxe.ui.components.CheckBox","destroyChildren",0x82092eb4,"haxe.ui.components.CheckBox.destroyChildren","haxe/ui/components/CheckBox.hx",47,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_65_get_value,"haxe.ui.components.CheckBox","get_value",0x99bbf7e3,"haxe.ui.components.CheckBox.get_value","haxe/ui/components/CheckBox.hx",65,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_68_set_value,"haxe.ui.components.CheckBox","set_value",0x7d0ce3ef,"haxe.ui.components.CheckBox.set_value","haxe/ui/components/CheckBox.hx",68,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_73_set_text,"haxe.ui.components.CheckBox","set_text",0x289401ef,"haxe.ui.components.CheckBox.set_text","haxe/ui/components/CheckBox.hx",73,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_79_applyStyle,"haxe.ui.components.CheckBox","applyStyle",0xd9ed9c68,"haxe.ui.components.CheckBox.applyStyle","haxe/ui/components/CheckBox.hx",79,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_101_validateData,"haxe.ui.components.CheckBox","validateData",0xba1b7ca5,"haxe.ui.components.CheckBox.validateData","haxe/ui/components/CheckBox.hx",101,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_117_set_selected,"haxe.ui.components.CheckBox","set_selected",0x9f38289d,"haxe.ui.components.CheckBox.set_selected","haxe/ui/components/CheckBox.hx",117,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_127_get_selected,"haxe.ui.components.CheckBox","get_selected",0x8a3f0529,"haxe.ui.components.CheckBox.get_selected","haxe/ui/components/CheckBox.hx",127,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_131_toggleSelected,"haxe.ui.components.CheckBox","toggleSelected",0x456d7c14,"haxe.ui.components.CheckBox.toggleSelected","haxe/ui/components/CheckBox.hx",131,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_138__onClick,"haxe.ui.components.CheckBox","_onClick",0xc5d6946f,"haxe.ui.components.CheckBox._onClick","haxe/ui/components/CheckBox.hx",138,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_141__onMouseOver,"haxe.ui.components.CheckBox","_onMouseOver",0xa21201c0,"haxe.ui.components.CheckBox._onMouseOver","haxe/ui/components/CheckBox.hx",141,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_cf8a2fb8cb554c8e_147__onMouseOut,"haxe.ui.components.CheckBox","_onMouseOut",0xd88c21a2,"haxe.ui.components.CheckBox._onMouseOut","haxe/ui/components/CheckBox.hx",147,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_492ca70e78c54b95_1_cloneComponent,"haxe.ui.components.CheckBox","cloneComponent",0xc57a0ba5,"haxe.ui.components.CheckBox.cloneComponent","src/haxe/ui/components/CheckBox.hx",1,0x4df3f9df)
HX_LOCAL_STACK_FRAME(_hx_pos_492ca70e78c54b95_2_self,"haxe.ui.components.CheckBox","self",0xd5c1e551,"haxe.ui.components.CheckBox.self","src/haxe/ui/components/CheckBox.hx",2,0x4df3f9df)
namespace haxe{
namespace ui{
namespace components{

void CheckBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_16_new)
HXLINE( 111)		this->_selected = false;
HXLINE(  18)		super::__construct();
            	}

Dynamic CheckBox_obj::__CreateEmpty() { return new CheckBox_obj; }

void *CheckBox_obj::_hx_vtable = 0;

Dynamic CheckBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBox_obj > _hx_result = new CheckBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x3138fc13) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3138fc13;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void CheckBox_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_24_createDefaults)
HXLINE(  25)		this->super::createDefaults();
HXLINE(  26)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  26)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::CheckBoxDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  26)		_g->set(HX_("selected",5b,2a,6d,b1),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::CheckBoxDefaultSelectedBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  26)		this->defaultBehaviours(_g);
HXLINE(  30)		this->_defaultLayout =  ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX );
            	}


void CheckBox_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_33_createChildren)
HXLINE(  34)		 ::haxe::ui::components::CheckBoxValue checkboxValue = ( ( ::haxe::ui::components::CheckBoxValue)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null())) );
HXLINE(  35)		if (hx::IsNull( checkboxValue )) {
HXLINE(  36)			checkboxValue =  ::haxe::ui::components::CheckBoxValue_obj::__alloc( HX_CTX );
HXLINE(  37)			checkboxValue->set_id(HX_("checkbox-value",a7,22,05,00));
HXLINE(  38)			checkboxValue->addClass(HX_("checkbox-value",a7,22,05,00),null(),null());
HXLINE(  39)			this->addComponent(checkboxValue);
            		}
HXLINE(  42)		this->registerEvent(HX_("click",48,7c,5e,48),this->_onClick_dyn());
HXLINE(  43)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  44)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
            	}


void CheckBox_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_47_destroyChildren)
HXLINE(  48)		 ::haxe::ui::components::CheckBoxValue value = ( ( ::haxe::ui::components::CheckBoxValue)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null())) );
HXLINE(  49)		if (hx::IsNotNull( value )) {
HXLINE(  50)			this->removeComponent(value,null(),null());
HXLINE(  51)			value = null();
            		}
HXLINE(  54)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  55)		if (hx::IsNotNull( label )) {
HXLINE(  56)			this->removeComponent(label,null(),null());
HXLINE(  57)			label = null();
            		}
            	}


 ::haxe::ui::util::VariantType CheckBox_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_65_get_value)
HXDLIN(  65)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->get_selected());
            	}


 ::haxe::ui::util::VariantType CheckBox_obj::set_value( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_68_set_value)
HXLINE(  69)		this->set_selected(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
HXLINE(  70)		return value;
            	}


::String CheckBox_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_73_set_text)
HXLINE(  74)		value = this->super::set_text(value);
HXLINE(  75)		this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE(  76)		return value;
            	}


void CheckBox_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_79_applyStyle)
HXLINE(  80)		this->super::applyStyle(style);
HXLINE(  82)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null())) );
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (hx::IsNotNull( label )) {
HXLINE(  84)			bool _hx_tmp1;
HXDLIN(  84)			bool _hx_tmp2;
HXDLIN(  84)			if (hx::IsEq( label->customStyle->color,style->color )) {
HXLINE(  84)				_hx_tmp2 = (label->customStyle->fontName != style->fontName);
            			}
            			else {
HXLINE(  84)				_hx_tmp2 = true;
            			}
HXDLIN(  84)			if (!(_hx_tmp2)) {
HXLINE(  84)				_hx_tmp1 = hx::IsNotEq( label->customStyle->fontSize,style->fontSize );
            			}
            			else {
HXLINE(  84)				_hx_tmp1 = true;
            			}
HXDLIN(  84)			if (!(_hx_tmp1)) {
HXLINE(  83)				_hx_tmp = (label->customStyle->cursor != style->cursor);
            			}
            			else {
HXLINE(  83)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  83)			_hx_tmp = false;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  89)			label->customStyle->color = style->color;
HXLINE(  90)			label->customStyle->fontName = style->fontName;
HXLINE(  91)			label->customStyle->fontSize = style->fontSize;
HXLINE(  92)			label->customStyle->cursor = style->cursor;
HXLINE(  93)			label->invalidate(HX_("style",31,a5,1d,84));
            		}
            	}


void CheckBox_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_101_validateData)
HXLINE( 102)		this->behaviourSet(HX_("selected",5b,2a,6d,b1),this->get_value());
HXLINE( 104)		 ::haxe::ui::core::UIEvent event =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 105)		this->dispatch(event);
            	}


bool CheckBox_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_117_set_selected)
HXLINE( 118)		if ((value == this->_selected)) {
HXLINE( 119)			return value;
            		}
HXLINE( 121)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 122)		this->_selected = value;
HXLINE( 123)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_selected,return )

bool CheckBox_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_127_get_selected)
HXDLIN( 127)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_selected,return )

bool CheckBox_obj::toggleSelected(){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_131_toggleSelected)
HXDLIN( 131)		return this->set_selected(!(this->get_selected()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,toggleSelected,return )

void CheckBox_obj::_onClick( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_138__onClick)
HXDLIN( 138)		this->toggleSelected();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onClick,(void))

void CheckBox_obj::_onMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_141__onMouseOver)
HXLINE( 142)		this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 143)		 ::haxe::ui::components::CheckBoxValue value = ( ( ::haxe::ui::components::CheckBoxValue)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null())) );
HXLINE( 144)		value->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseOver,(void))

void CheckBox_obj::_onMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_cf8a2fb8cb554c8e_147__onMouseOut)
HXLINE( 148)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 149)		 ::haxe::ui::components::CheckBoxValue value = ( ( ::haxe::ui::components::CheckBoxValue)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null())) );
HXLINE( 150)		value->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseOut,(void))

 ::haxe::ui::core::Component CheckBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_492ca70e78c54b95_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::CheckBox c = ( ( ::haxe::ui::components::CheckBox)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_selected(this->get_selected());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component CheckBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_492ca70e78c54b95_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::CheckBox_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new() {
	hx::ObjectPtr< CheckBox_obj > __this = new CheckBox_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__alloc(hx::Ctx *_hx_ctx) {
	CheckBox_obj *__this = (CheckBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBox_obj), true, "haxe.ui.components.CheckBox"));
	*(void **)__this = CheckBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBox_obj::CheckBox_obj()
{
}

hx::Val CheckBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selected() ); }
		if (HX_FIELD_EQ(inName,"_onClick") ) { return hx::Val( _onClick_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return hx::Val( _selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return hx::Val( _onMouseOut_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return hx::Val( _onMouseOver_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"toggleSelected") ) { return hx::Val( toggleSelected_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CheckBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CheckBox_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CheckBox_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CheckBox_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBox_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("toggleSelected","\x0f","\x5a","\x4a","\xa6"),
	HX_HCSTRING("_onClick","\x2a","\x74","\x54","\x18"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void CheckBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CheckBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBox_obj::__mClass;

void CheckBox_obj::__register()
{
	hx::Object *dummy = new CheckBox_obj;
	CheckBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.CheckBox","\xc9","\x5c","\x0b","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CheckBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CheckBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
