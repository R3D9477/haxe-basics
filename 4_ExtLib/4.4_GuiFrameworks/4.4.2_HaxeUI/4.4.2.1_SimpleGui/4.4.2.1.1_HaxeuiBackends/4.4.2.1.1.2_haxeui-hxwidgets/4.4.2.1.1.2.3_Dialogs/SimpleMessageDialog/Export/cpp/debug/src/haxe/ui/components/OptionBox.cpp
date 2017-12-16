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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxDefaultSelectedBehaviour
#include <haxe/ui/components/OptionBoxDefaultSelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxDefaultTextBehaviour
#include <haxe/ui/components/OptionBoxDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxValue
#include <haxe/ui/components/OptionBoxValue.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_37f62898eeef3e5f_16_new,"haxe.ui.components.OptionBox","new",0xdd917122,"haxe.ui.components.OptionBox.new","haxe/ui/components/OptionBox.hx",16,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_34_createDefaults,"haxe.ui.components.OptionBox","createDefaults",0xdb4bc22c,"haxe.ui.components.OptionBox.createDefaults","haxe/ui/components/OptionBox.hx",34,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_44_createChildren,"haxe.ui.components.OptionBox","createChildren",0x9c1c0ad9,"haxe.ui.components.OptionBox.createChildren","haxe/ui/components/OptionBox.hx",44,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_56_destroyChildren,"haxe.ui.components.OptionBox","destroyChildren",0x517b481b,"haxe.ui.components.OptionBox.destroyChildren","haxe/ui/components/OptionBox.hx",56,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_71_get_value,"haxe.ui.components.OptionBox","get_value",0x4bdb7a0a,"haxe.ui.components.OptionBox.get_value","haxe/ui/components/OptionBox.hx",71,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_74_set_value,"haxe.ui.components.OptionBox","set_value",0x2f2c6616,"haxe.ui.components.OptionBox.set_value","haxe/ui/components/OptionBox.hx",74,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_79_set_text,"haxe.ui.components.OptionBox","set_text",0x2bac41a8,"haxe.ui.components.OptionBox.set_text","haxe/ui/components/OptionBox.hx",79,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_89_applyStyle,"haxe.ui.components.OptionBox","applyStyle",0x035ffc61,"haxe.ui.components.OptionBox.applyStyle","haxe/ui/components/OptionBox.hx",89,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_104_validateData,"haxe.ui.components.OptionBox","validateData",0xece08cde,"haxe.ui.components.OptionBox.validateData","haxe/ui/components/OptionBox.hx",104,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_126_set_selected,"haxe.ui.components.OptionBox","set_selected",0xd1fd38d6,"haxe.ui.components.OptionBox.set_selected","haxe/ui/components/OptionBox.hx",126,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_173_get_selected,"haxe.ui.components.OptionBox","get_selected",0xbd041562,"haxe.ui.components.OptionBox.get_selected","haxe/ui/components/OptionBox.hx",173,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_177_toggleSelected,"haxe.ui.components.OptionBox","toggleSelected",0x7fc1cc8d,"haxe.ui.components.OptionBox.toggleSelected","haxe/ui/components/OptionBox.hx",177,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_186_get_groupName,"haxe.ui.components.OptionBox","get_groupName",0xf0581843,"haxe.ui.components.OptionBox.get_groupName","haxe/ui/components/OptionBox.hx",186,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_189_set_groupName,"haxe.ui.components.OptionBox","set_groupName",0x355dfa4f,"haxe.ui.components.OptionBox.set_groupName","haxe/ui/components/OptionBox.hx",189,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_216_get_selectedOption,"haxe.ui.components.OptionBox","get_selectedOption",0xe6089277,"haxe.ui.components.OptionBox.get_selectedOption","haxe/ui/components/OptionBox.hx",216,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_233__onClick,"haxe.ui.components.OptionBox","_onClick",0xc8eed428,"haxe.ui.components.OptionBox._onClick","haxe/ui/components/OptionBox.hx",233,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_239__onMouseOver,"haxe.ui.components.OptionBox","_onMouseOver",0xd4d711f9,"haxe.ui.components.OptionBox._onMouseOver","haxe/ui/components/OptionBox.hx",239,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_244__onMouseOut,"haxe.ui.components.OptionBox","_onMouseOut",0xf32dbb89,"haxe.ui.components.OptionBox._onMouseOut","haxe/ui/components/OptionBox.hx",244,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_7e385c51774598ec_1_getProperty,"haxe.ui.components.OptionBox","getProperty",0x70fb3dcd,"haxe.ui.components.OptionBox.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_7e385c51774598ec_1_setProperty,"haxe.ui.components.OptionBox","setProperty",0x7b6844d9,"haxe.ui.components.OptionBox.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_db15a89caa6378c1_1_cloneComponent,"haxe.ui.components.OptionBox","cloneComponent",0xffce5c1e,"haxe.ui.components.OptionBox.cloneComponent","src/haxe/ui/components/OptionBox.hx",1,0x48061904)
HX_LOCAL_STACK_FRAME(_hx_pos_db15a89caa6378c1_2_self,"haxe.ui.components.OptionBox","self",0x04ff948a,"haxe.ui.components.OptionBox.self","src/haxe/ui/components/OptionBox.hx",2,0x48061904)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_252_optionInGroup,"haxe.ui.components.OptionBox","optionInGroup",0xaaf94d67,"haxe.ui.components.OptionBox.optionInGroup","haxe/ui/components/OptionBox.hx",252,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_37f62898eeef3e5f_267_getGroupOptions,"haxe.ui.components.OptionBox","getGroupOptions",0xe5082f57,"haxe.ui.components.OptionBox.getGroupOptions","haxe/ui/components/OptionBox.hx",267,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37f62898eeef3e5f_16_new)
HXLINE( 121)		this->_selected = false;
HXLINE(  23)		super::__construct();
HXLINE(  25)		if (hx::IsNull( ::haxe::ui::components::OptionBox_obj::_groups )) {
HXLINE(  26)			::haxe::ui::components::OptionBox_obj::_groups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  28)		this->set_groupName(HX_("defaultGroup",be,ee,4f,4f));
            	}

Dynamic OptionBox_obj::__CreateEmpty() { return new OptionBox_obj; }

void *OptionBox_obj::_hx_vtable = 0;

Dynamic OptionBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OptionBox_obj > _hx_result = new OptionBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7fe57fc6;
	}
}

void OptionBox_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_37f62898eeef3e5f_34_createDefaults)
HXLINE(  35)		this->super::createDefaults();
HXLINE(  36)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  36)		_g->set(HX_("text",ad,cc,f9,4c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::OptionBoxDefaultTextBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  36)		_g->set(HX_("selected",5b,2a,6d,b1),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::OptionBoxDefaultSelectedBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  36)		this->defaultBehaviours(_g);
HXLINE(  40)		this->_defaultLayout =  ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX );
            	}


void OptionBox_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_37f62898eeef3e5f_44_createChildren)
HXDLIN(  44)		if (hx::IsNull( this->_value )) {
HXLINE(  45)			this->_value =  ::haxe::ui::components::OptionBoxValue_obj::__alloc( HX_CTX );
HXLINE(  46)			this->_value->set_id(HX_("optionbox-value",5a,aa,3c,13));
HXLINE(  47)			this->_value->addClass(HX_("optionbox-value",5a,aa,3c,13),null(),null());
HXLINE(  48)			this->addComponent(this->_value);
HXLINE(  50)			this->_value->registerEvent(HX_("click",48,7c,5e,48),this->_onClick_dyn());
HXLINE(  51)			this->_value->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onMouseOver_dyn());
HXLINE(  52)			this->_value->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onMouseOut_dyn());
            		}
            	}


void OptionBox_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_56_destroyChildren)
HXLINE(  57)		if (hx::IsNotNull( this->_value )) {
HXLINE(  58)			this->removeComponent(this->_value,null(),null());
HXLINE(  59)			this->_value = null();
            		}
HXLINE(  61)		if (hx::IsNotNull( this->_label )) {
HXLINE(  62)			this->removeComponent(this->_label,null(),null());
HXLINE(  63)			this->_label = null();
            		}
            	}


 ::haxe::ui::util::VariantType OptionBox_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_71_get_value)
HXDLIN(  71)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->get_selected());
            	}


 ::haxe::ui::util::VariantType OptionBox_obj::set_value( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_74_set_value)
HXLINE(  75)		this->set_selected(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
HXLINE(  76)		return value;
            	}


::String OptionBox_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_79_set_text)
HXLINE(  80)		if ((this->_text == value)) {
HXLINE(  81)			return value;
            		}
HXLINE(  84)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  85)		this->_text = value;
HXLINE(  86)		return value;
            	}


void OptionBox_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_89_applyStyle)
HXLINE(  90)		this->super::applyStyle(style);
HXLINE(  91)		if (hx::IsNotNull( this->_label )) {
HXLINE(  92)			this->_label->customStyle->color = style->color;
HXLINE(  93)			this->_label->customStyle->fontName = style->fontName;
HXLINE(  94)			this->_label->customStyle->fontSize = style->fontSize;
HXLINE(  95)			this->_label->customStyle->cursor = style->cursor;
HXLINE(  96)			this->_label->invalidate(HX_("style",31,a5,1d,84));
            		}
            	}


void OptionBox_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_104_validateData)
HXLINE( 105)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("text",ad,cc,f9,4c));
HXDLIN( 105)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp) != this->_text)) {
HXLINE( 106)			this->behaviourSet(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_text));
            		}
HXLINE( 109)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("selected",5b,2a,6d,b1));
HXDLIN( 109)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(_hx_tmp1) != this->_selected)) {
HXLINE( 110)			this->behaviourSet(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_selected));
            		}
HXLINE( 113)		 ::haxe::ui::util::VariantType _hx_tmp2 = this->behaviourGet(HX_("group",3f,b3,f4,99));
HXDLIN( 113)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toString(_hx_tmp2) != this->_groupName)) {
HXLINE( 114)			this->behaviourSet(HX_("group",3f,b3,f4,99),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_groupName));
            		}
            	}


bool OptionBox_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_126_set_selected)
HXLINE( 127)		if ((value == this->_selected)) {
HXLINE( 128)			return value;
            		}
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (hx::IsNotNull( this->_groupName )) {
HXLINE( 131)			_hx_tmp = (value == false);
            		}
            		else {
HXLINE( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(this->_groupName)) );
HXLINE( 133)			bool hasSelection = false;
HXLINE( 134)			if (hx::IsNotNull( arr )) {
HXLINE( 135)				int _g = (int)0;
HXDLIN( 135)				while((_g < arr->length)){
HXLINE( 135)					 ::haxe::ui::components::OptionBox option = arr->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 135)					_g = (_g + (int)1);
HXLINE( 136)					bool _hx_tmp1;
HXDLIN( 136)					if (hx::IsNotEq( option,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 136)						_hx_tmp1 = (option->get_selected() == true);
            					}
            					else {
HXLINE( 136)						_hx_tmp1 = false;
            					}
HXDLIN( 136)					if (_hx_tmp1) {
HXLINE( 137)						hasSelection = true;
HXLINE( 138)						goto _hx_goto_9;
            					}
            				}
            				_hx_goto_9:;
            			}
HXLINE( 142)			if ((hasSelection == false)) {
HXLINE( 143)				return value;
            			}
            		}
HXLINE( 147)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 148)		this->_selected = value;
HXLINE( 158)		bool _hx_tmp2;
HXDLIN( 158)		if (hx::IsNotNull( this->_groupName )) {
HXLINE( 158)			_hx_tmp2 = (value == true);
            		}
            		else {
HXLINE( 158)			_hx_tmp2 = false;
            		}
HXDLIN( 158)		if (_hx_tmp2) {
HXLINE( 159)			::Array< ::Dynamic> arr1 = ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(this->_groupName)) );
HXLINE( 160)			if (hx::IsNotNull( arr1 )) {
HXLINE( 161)				int _g1 = (int)0;
HXDLIN( 161)				while((_g1 < arr1->length)){
HXLINE( 161)					 ::haxe::ui::components::OptionBox option1 = arr1->__get(_g1).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 161)					_g1 = (_g1 + (int)1);
HXLINE( 162)					if (hx::IsNotEq( option1,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 163)						option1->set_selected(false);
            					}
            				}
            			}
            		}
HXLINE( 169)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_selected,return )

bool OptionBox_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_173_get_selected)
HXDLIN( 173)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_selected,return )

bool OptionBox_obj::toggleSelected(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_177_toggleSelected)
HXDLIN( 177)		return this->set_selected(!(this->get_selected()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,toggleSelected,return )

::String OptionBox_obj::get_groupName(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_186_get_groupName)
HXDLIN( 186)		return this->_groupName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_groupName,return )

::String OptionBox_obj::set_groupName(::String value){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_189_set_groupName)
HXLINE( 190)		if (hx::IsNotNull( value )) {
HXLINE( 191)			::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(value)) );
HXLINE( 192)			if (hx::IsNotNull( arr )) {
HXLINE( 193)				arr->remove(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 197)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 198)		this->_groupName = value;
HXLINE( 199)		::Array< ::Dynamic> arr1 = ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(value)) );
HXLINE( 200)		if (hx::IsNull( arr1 )) {
HXLINE( 201)			arr1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 204)		if ((::haxe::ui::components::OptionBox_obj::optionInGroup(value,hx::ObjectPtr<OBJ_>(this)) == false)) {
HXLINE( 205)			arr1->push(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 207)		::haxe::ui::components::OptionBox_obj::_groups->set(value,arr1);
HXLINE( 209)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_groupName,return )

 ::haxe::ui::components::OptionBox OptionBox_obj::get_selectedOption(){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_216_get_selectedOption)
HXLINE( 217)		::Array< ::Dynamic> arr = ::haxe::ui::components::OptionBox_obj::getGroupOptions(this->_groupName);
HXLINE( 218)		 ::haxe::ui::components::OptionBox selectionOption = null();
HXLINE( 219)		if (hx::IsNotNull( arr )) {
HXLINE( 220)			int _g = (int)0;
HXDLIN( 220)			while((_g < arr->length)){
HXLINE( 220)				 ::haxe::ui::components::OptionBox test = arr->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 220)				_g = (_g + (int)1);
HXLINE( 221)				if ((test->get_selected() == true)) {
HXLINE( 222)					selectionOption = test;
HXLINE( 223)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 227)		return selectionOption;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_selectedOption,return )

void OptionBox_obj::_onClick( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_37f62898eeef3e5f_233__onClick)
HXLINE( 234)		this->toggleSelected();
HXLINE( 235)		 ::haxe::ui::core::UIEvent event1 =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 236)		this->dispatch(event1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onClick,(void))

void OptionBox_obj::_onMouseOver( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_239__onMouseOver)
HXLINE( 240)		this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 241)		this->_value->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseOver,(void))

void OptionBox_obj::_onMouseOut( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_244__onMouseOut)
HXLINE( 245)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
HXLINE( 246)		this->_value->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseOut,(void))

 ::haxe::ui::util::VariantType OptionBox_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_7e385c51774598ec_1_getProperty)
HXDLIN(   1)		if ((name == HX_("selected",5b,2a,6d,b1))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->get_selected());
            		}
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType OptionBox_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_7e385c51774598ec_1_setProperty)
HXDLIN(   1)		if ((name == HX_("selected",5b,2a,6d,b1))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->set_selected(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(v)));
            		}
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


 ::haxe::ui::core::Component OptionBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_db15a89caa6378c1_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::OptionBox c = ( ( ::haxe::ui::components::OptionBox)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_selected(this->get_selected());
HXLINE(   4)		if (hx::IsNotNull( this->get_groupName() )) {
HXLINE(   4)			c->set_groupName(this->get_groupName());
            		}
HXLINE(   6)		return c;
            	}


 ::haxe::ui::core::Component OptionBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_db15a89caa6378c1_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::OptionBox_obj::__alloc( HX_CTX );
            	}


 ::haxe::ds::StringMap OptionBox_obj::_groups;

bool OptionBox_obj::optionInGroup(::String value, ::haxe::ui::components::OptionBox option){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_252_optionInGroup)
HXLINE( 253)		bool exists = false;
HXLINE( 254)		::Array< ::Dynamic> arr = ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(value)) );
HXLINE( 255)		if (hx::IsNotNull( arr )) {
HXLINE( 256)			int _g = (int)0;
HXDLIN( 256)			while((_g < arr->length)){
HXLINE( 256)				 ::haxe::ui::components::OptionBox test = arr->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 256)				_g = (_g + (int)1);
HXLINE( 257)				if (hx::IsEq( test,option )) {
HXLINE( 258)					exists = true;
HXLINE( 259)					goto _hx_goto_25;
            				}
            			}
            			_hx_goto_25:;
            		}
HXLINE( 263)		return exists;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionBox_obj,optionInGroup,return )

::Array< ::Dynamic> OptionBox_obj::getGroupOptions(::String group){
            	HX_STACKFRAME(&_hx_pos_37f62898eeef3e5f_267_getGroupOptions)
HXDLIN( 267)		return ( (::Array< ::Dynamic>)(::haxe::ui::components::OptionBox_obj::_groups->get(group)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,getGroupOptions,return )


hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__new() {
	hx::ObjectPtr< OptionBox_obj > __this = new OptionBox_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__alloc(hx::Ctx *_hx_ctx) {
	OptionBox_obj *__this = (OptionBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OptionBox_obj), true, "haxe.ui.components.OptionBox"));
	*(void **)__this = OptionBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionBox_obj::OptionBox_obj()
{
}

void OptionBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBox);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_groupName,"_groupName");
	HX_MARK_MEMBER_NAME(selectedOption,"selectedOption");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_groupName,"_groupName");
	HX_VISIT_MEMBER_NAME(selectedOption,"selectedOption");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val OptionBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
		if (HX_FIELD_EQ(inName,"_label") ) { return hx::Val( _label ); }
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
		if (HX_FIELD_EQ(inName,"groupName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_groupName() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"_groupName") ) { return hx::Val( _groupName ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return hx::Val( _onMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return hx::Val( _onMouseOver_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_groupName") ) { return hx::Val( get_groupName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_groupName") ) { return hx::Val( set_groupName_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"toggleSelected") ) { return hx::Val( toggleSelected_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedOption") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedOption() : selectedOption ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedOption") ) { return hx::Val( get_selectedOption_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionBox_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { outValue = ( _groups ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionInGroup") ) { outValue = optionInGroup_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGroupOptions") ) { outValue = getGroupOptions_dyn(); return true; }
	}
	return false;
}

hx::Val OptionBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::components::OptionBoxValue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupName") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_groupName(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_groupName") ) { _groupName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedOption") ) { selectedOption=inValue.Cast<  ::haxe::ui::components::OptionBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void OptionBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("_groupName","\xeb","\xd8","\x83","\x33"));
	outFields->push(HX_HCSTRING("groupName","\x2a","\x5d","\xe1","\xd7"));
	outFields->push(HX_HCSTRING("selectedOption","\x30","\x28","\xd9","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OptionBox_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::OptionBoxValue*/ ,(int)offsetof(OptionBox_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsObject /*::haxe::ui::components::Label*/ ,(int)offsetof(OptionBox_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsBool,(int)offsetof(OptionBox_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{hx::fsString,(int)offsetof(OptionBox_obj,_groupName),HX_HCSTRING("_groupName","\xeb","\xd8","\x83","\x33")},
	{hx::fsObject /*::haxe::ui::components::OptionBox*/ ,(int)offsetof(OptionBox_obj,selectedOption),HX_HCSTRING("selectedOption","\x30","\x28","\xd9","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo OptionBox_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &OptionBox_obj::_groups,HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionBox_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
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
	HX_HCSTRING("_groupName","\xeb","\xd8","\x83","\x33"),
	HX_HCSTRING("get_groupName","\x01","\x31","\x45","\x99"),
	HX_HCSTRING("set_groupName","\x0d","\x13","\x4b","\xde"),
	HX_HCSTRING("selectedOption","\x30","\x28","\xd9","\xae"),
	HX_HCSTRING("get_selectedOption","\xf9","\x08","\x73","\x4a"),
	HX_HCSTRING("_onClick","\x2a","\x74","\x54","\x18"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void OptionBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#endif

hx::Class OptionBox_obj::__mClass;

static ::String OptionBox_obj_sStaticFields[] = {
	HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"),
	HX_HCSTRING("optionInGroup","\x25","\x66","\xe6","\x53"),
	HX_HCSTRING("getGroupOptions","\x95","\x73","\xfb","\x75"),
	::String(null())
};

void OptionBox_obj::__register()
{
	hx::Object *dummy = new OptionBox_obj;
	OptionBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.OptionBox","\x30","\xf8","\x3d","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionBox_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionBox_obj::__SetStatic;
	__mClass->mMarkFunc = OptionBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OptionBox_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OptionBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
