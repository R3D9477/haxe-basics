// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownDefaultDataSourceBehaviour
#include <haxe/ui/components/DropDownDefaultDataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownDefaultSelectedItemBehaviour
#include <haxe/ui/components/DropDownDefaultSelectedItemBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_452ff4130146a79f_15_new,"haxe.ui.components.DropDown","new",0x0439cb49,"haxe.ui.components.DropDown.new","haxe/ui/components/DropDown.hx",15,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_27_createDefaults,"haxe.ui.components.DropDown","createDefaults",0xb6575b65,"haxe.ui.components.DropDown.createDefaults","haxe/ui/components/DropDown.hx",27,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_36_create,"haxe.ui.components.DropDown","create",0x0ea463b3,"haxe.ui.components.DropDown.create","haxe/ui/components/DropDown.hx",36,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_40_createChildren,"haxe.ui.components.DropDown","createChildren",0x7727a412,"haxe.ui.components.DropDown.createChildren","haxe/ui/components/DropDown.hx",40,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_43_destroyChildren,"haxe.ui.components.DropDown","destroyChildren",0x2095c0c2,"haxe.ui.components.DropDown.destroyChildren","haxe/ui/components/DropDown.hx",43,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_48_onReady,"haxe.ui.components.DropDown","onReady",0x2cc0622d,"haxe.ui.components.DropDown.onReady","haxe/ui/components/DropDown.hx",48,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_56_onDestroy,"haxe.ui.components.DropDown","onDestroy",0x48d77544,"haxe.ui.components.DropDown.onDestroy","haxe/ui/components/DropDown.hx",56,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_62_get_dataSource,"haxe.ui.components.DropDown","get_dataSource",0x484c0aa5,"haxe.ui.components.DropDown.get_dataSource","haxe/ui/components/DropDown.hx",62,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_64_set_dataSource,"haxe.ui.components.DropDown","set_dataSource",0x686bf319,"haxe.ui.components.DropDown.set_dataSource","haxe/ui/components/DropDown.hx",64,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_77_get_selectedIndex,"haxe.ui.components.DropDown","get_selectedIndex",0x387262b7,"haxe.ui.components.DropDown.get_selectedIndex","haxe/ui/components/DropDown.hx",77,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_79_set_selectedIndex,"haxe.ui.components.DropDown","set_selectedIndex",0x5be03ac3,"haxe.ui.components.DropDown.set_selectedIndex","haxe/ui/components/DropDown.hx",79,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_96_get_requireSelection,"haxe.ui.components.DropDown","get_requireSelection",0x6f31f027,"haxe.ui.components.DropDown.get_requireSelection","haxe/ui/components/DropDown.hx",96,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_98_set_requireSelection,"haxe.ui.components.DropDown","set_requireSelection",0x3be9a79b,"haxe.ui.components.DropDown.set_requireSelection","haxe/ui/components/DropDown.hx",98,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_111_get_listWidth,"haxe.ui.components.DropDown","get_listWidth",0xd55960c8,"haxe.ui.components.DropDown.get_listWidth","haxe/ui/components/DropDown.hx",111,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_113_set_listWidth,"haxe.ui.components.DropDown","set_listWidth",0x1a5f42d4,"haxe.ui.components.DropDown.set_listWidth","haxe/ui/components/DropDown.hx",113,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_121_get_listHeight,"haxe.ui.components.DropDown","get_listHeight",0x8f2ac6e5,"haxe.ui.components.DropDown.get_listHeight","haxe/ui/components/DropDown.hx",121,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_123_set_listHeight,"haxe.ui.components.DropDown","set_listHeight",0xaf4aaf59,"haxe.ui.components.DropDown.set_listHeight","haxe/ui/components/DropDown.hx",123,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_131_get_listSize,"haxe.ui.components.DropDown","get_listSize",0x75b4043f,"haxe.ui.components.DropDown.get_listSize","haxe/ui/components/DropDown.hx",131,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_133_set_listSize,"haxe.ui.components.DropDown","set_listSize",0x8aad27b3,"haxe.ui.components.DropDown.set_listSize","haxe/ui/components/DropDown.hx",133,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_141_get_listStyleNames,"haxe.ui.components.DropDown","get_listStyleNames",0xcc57fed5,"haxe.ui.components.DropDown.get_listStyleNames","haxe/ui/components/DropDown.hx",141,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_143_set_listStyleNames,"haxe.ui.components.DropDown","set_listStyleNames",0xa9073149,"haxe.ui.components.DropDown.set_listStyleNames","haxe/ui/components/DropDown.hx",143,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_148_addComponent,"haxe.ui.components.DropDown","addComponent",0xa2f9f253,"haxe.ui.components.DropDown.addComponent","haxe/ui/components/DropDown.hx",148,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_161_onMouseClick,"haxe.ui.components.DropDown","onMouseClick",0xd2c0f1d9,"haxe.ui.components.DropDown.onMouseClick","haxe/ui/components/DropDown.hx",161,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_175_get_selectedItem,"haxe.ui.components.DropDown","get_selectedItem",0xff1f790e,"haxe.ui.components.DropDown.get_selectedItem","haxe/ui/components/DropDown.hx",175,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_178_onItemChange,"haxe.ui.components.DropDown","onItemChange",0x1215dcd9,"haxe.ui.components.DropDown.onItemChange","haxe/ui/components/DropDown.hx",178,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_187_onScreenMouseDown,"haxe.ui.components.DropDown","onScreenMouseDown",0x7b452a65,"haxe.ui.components.DropDown.onScreenMouseDown","haxe/ui/components/DropDown.hx",187,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_198_showList,"haxe.ui.components.DropDown","showList",0xce90b872,"haxe.ui.components.DropDown.showList","haxe/ui/components/DropDown.hx",198,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_248_hideList,"haxe.ui.components.DropDown","hideList",0xbfd7deb7,"haxe.ui.components.DropDown.hideList","haxe/ui/components/DropDown.hx",248,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_262_validateData,"haxe.ui.components.DropDown","validateData",0x2ab535d7,"haxe.ui.components.DropDown.validateData","haxe/ui/components/DropDown.hx",262,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_d27e7cbd05cad2ad_294_cloneComponent,"haxe.ui.components.DropDown","cloneComponent",0xdad9f557,"haxe.ui.components.DropDown.cloneComponent","haxe/ui/macros/Macros.hx",294,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8548f7cc4467bc97_1_self,"haxe.ui.components.DropDown","self",0xb1a61c83,"haxe.ui.components.DropDown.self","src/haxe/ui/components/DropDown.hx",1,0xb39ba091)
HX_LOCAL_STACK_FRAME(_hx_pos_bb057985cc868ebe_1_getProperty,"haxe.ui.components.DropDown","getProperty",0x815496f4,"haxe.ui.components.DropDown.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb057985cc868ebe_1_setProperty,"haxe.ui.components.DropDown","setProperty",0x8bc19e00,"haxe.ui.components.DropDown.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_15_boot,"haxe.ui.components.DropDown","boot",0xa6711529,"haxe.ui.components.DropDown.boot","haxe/ui/components/DropDown.hx",15,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_452ff4130146a79f_16_boot,"haxe.ui.components.DropDown","boot",0xa6711529,"haxe.ui.components.DropDown.boot","haxe/ui/components/DropDown.hx",16,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDown_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_15_new)
HXLINE( 128)		this->_listSize = (int)4;
HXLINE(  93)		this->_requireSelection = false;
HXLINE(  74)		this->_selectedIndex = (int)-1;
HXLINE(  22)		super::__construct();
HXLINE(  23)		this->set_toggle(true);
HXLINE(  24)		this->registerEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn());
            	}

Dynamic DropDown_obj::__CreateEmpty() { return new DropDown_obj; }

void *DropDown_obj::_hx_vtable = 0;

Dynamic DropDown_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DropDown_obj > _hx_result = new DropDown_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DropDown_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x23718646) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23718646;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x6c641221 || inClassId==(int)0x7140e8dc;
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (hx::Object::*)())&::haxe::ui::components::DropDown_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::components::DropDown_obj::set_dataSource,
};

void *DropDown_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_components_DropDown__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

void DropDown_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_452ff4130146a79f_27_createDefaults)
HXLINE(  28)		this->super::createDefaults();
HXLINE(  29)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  29)		_g->set(HX_("dataSource",a5,76,d3,1d),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::DropDownDefaultDataSourceBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("selectedItem",0e,e5,59,d6),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::DropDownDefaultSelectedItemBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		this->defaultBehaviours(_g);
            	}


void DropDown_obj::create(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_36_create)
HXDLIN(  36)		this->super::create();
            	}


void DropDown_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_40_createChildren)
HXDLIN(  40)		this->super::createChildren();
            	}


void DropDown_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_43_destroyChildren)
HXLINE(  44)		this->super::destroyChildren();
HXLINE(  45)		this->unregisterEvent(HX_("click",48,7c,5e,48),this->onMouseClick_dyn());
            	}


void DropDown_obj::onReady(){
            	HX_GC_STACKFRAME(&_hx_pos_452ff4130146a79f_48_onReady)
HXLINE(  49)		this->super::onReady();
HXLINE(  50)		if (hx::IsNull( this->_itemRenderer )) {
HXLINE(  51)			this->addComponent( ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX ));
            		}
            	}


void DropDown_obj::onDestroy(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_56_onDestroy)
HXDLIN(  56)		this->hideList();
            	}


 ::haxe::ui::data::DataSource DropDown_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_62_get_dataSource)
HXDLIN(  62)		return this->_dataSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource DropDown_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_64_set_dataSource)
HXLINE(  65)		if (hx::IsEq( this->_dataSource,value )) {
HXLINE(  66)			return value;
            		}
HXLINE(  69)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  70)		this->_dataSource = value;
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_dataSource,return )

int DropDown_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_77_get_selectedIndex)
HXDLIN(  77)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedIndex,return )

int DropDown_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_79_set_selectedIndex)
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE(  80)			_hx_tmp = (value >= this->_dataSource->get_size());
            		}
            		else {
HXLINE(  80)			_hx_tmp = true;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			return value;
            		}
HXLINE(  84)		if ((this->_selectedIndex == value)) {
HXLINE(  85)			return value;
            		}
HXLINE(  88)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  89)		this->_selectedIndex = value;
HXLINE(  90)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_selectedIndex,return )

bool DropDown_obj::get_requireSelection(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_96_get_requireSelection)
HXDLIN(  96)		return this->_requireSelection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_requireSelection,return )

bool DropDown_obj::set_requireSelection(bool value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_98_set_requireSelection)
HXLINE(  99)		if ((this->_requireSelection == value)) {
HXLINE( 100)			return value;
            		}
HXLINE( 103)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 104)		this->_requireSelection = value;
HXLINE( 105)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_requireSelection,return )

 ::Dynamic DropDown_obj::get_listWidth(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_111_get_listWidth)
HXDLIN( 111)		return this->_listWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_listWidth,return )

 ::Dynamic DropDown_obj::set_listWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_113_set_listWidth)
HXLINE( 114)		this->_listWidth = value;
HXLINE( 115)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_listWidth,return )

 ::Dynamic DropDown_obj::get_listHeight(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_121_get_listHeight)
HXDLIN( 121)		return this->_listHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_listHeight,return )

 ::Dynamic DropDown_obj::set_listHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_123_set_listHeight)
HXLINE( 124)		this->_listHeight = value;
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_listHeight,return )

int DropDown_obj::get_listSize(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_131_get_listSize)
HXDLIN( 131)		return this->_listSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_listSize,return )

int DropDown_obj::set_listSize(int value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_133_set_listSize)
HXLINE( 134)		this->_listSize = value;
HXLINE( 135)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_listSize,return )

::String DropDown_obj::get_listStyleNames(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_141_get_listStyleNames)
HXDLIN( 141)		return this->_listStyleNames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_listStyleNames,return )

::String DropDown_obj::set_listStyleNames(::String value){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_143_set_listStyleNames)
HXLINE( 144)		this->_listStyleNames = value;
HXLINE( 145)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,set_listStyleNames,return )

 ::haxe::ui::core::Component DropDown_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_148_addComponent)
HXLINE( 149)		 ::haxe::ui::core::Component r = null();
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 150)			_hx_tmp = hx::IsNull( this->_itemRenderer );
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 151)			this->_itemRenderer = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child);
            		}
            		else {
HXLINE( 156)			r = this->super::addComponent(child);
            		}
HXLINE( 158)		return r;
            	}


void DropDown_obj::onMouseClick( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_161_onMouseClick)
HXLINE( 162)		if (hx::IsEq( this->get_native(),true )) {
HXLINE( 163)			return;
            		}
HXLINE( 166)		if ((this->get_selected() == true)) {
HXLINE( 167)			this->showList();
            		}
            		else {
HXLINE( 169)			this->hideList();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,onMouseClick,(void))

 ::Dynamic DropDown_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_175_get_selectedItem)
HXDLIN( 175)		return this->behaviourGetDynamic(HX_("selectedItem",0e,e5,59,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,get_selectedItem,return )

void DropDown_obj::onItemChange( ::haxe::ui::core::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_452ff4130146a79f_178_onItemChange)
HXLINE( 179)		if (hx::IsNotNull(  ::Dynamic(this->_listview->get_selectedItem()->get_data()->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) )) {
HXLINE( 180)			 ::haxe::ui::data::DataSource _hx_tmp = this->_dataSource;
HXDLIN( 180)			this->set_selectedIndex(_hx_tmp->indexOf(this->_listview->get_selectedItem()->get_data()));
            		}
HXLINE( 182)		this->set_selected(false);
HXLINE( 183)		this->onMouseClick(null());
HXLINE( 184)		this->dispatch( ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,onItemChange,(void))

void DropDown_obj::onScreenMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_187_onScreenMouseDown)
HXLINE( 188)		if ((this->hitTest(event->screenX,event->screenY) == true)) {
HXLINE( 189)			return;
            		}
HXLINE( 191)		bool _hx_tmp;
HXDLIN( 191)		if (hx::IsNotNull( this->_listview )) {
HXLINE( 191)			_hx_tmp = (this->_listview->hitTest(event->screenX,event->screenY) == true);
            		}
            		else {
HXLINE( 191)			_hx_tmp = false;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 192)			return;
            		}
HXLINE( 194)		this->set_selected(!(this->get_selected()));
HXLINE( 195)		this->onMouseClick(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DropDown_obj,onScreenMouseDown,(void))

void DropDown_obj::showList(){
            	HX_GC_STACKFRAME(&_hx_pos_452ff4130146a79f_198_showList)
HXLINE( 199)		if (hx::IsNull( this->_listview )) {
HXLINE( 200)			this->_listview =  ::haxe::ui::containers::ListView_obj::__alloc( HX_CTX );
HXLINE( 201)			if (hx::IsNotNull( this->_itemRenderer )) {
HXLINE( 202)				this->_listview->addComponent(this->_itemRenderer);
            			}
HXLINE( 204)			this->_listview->addClass(HX_("popup",2c,0a,95,c6),null(),null());
HXLINE( 205)			if (hx::IsNotNull( this->get_id() )) {
HXLINE( 206)				 ::haxe::ui::containers::ListView _hx_tmp = this->_listview;
HXDLIN( 206)				_hx_tmp->set_id((this->get_id() + HX_("-popup",df,46,a4,c4)));
HXLINE( 207)				 ::haxe::ui::containers::ListView _hx_tmp1 = this->_listview;
HXDLIN( 207)				_hx_tmp1->addClass((this->get_id() + HX_("-popup",df,46,a4,c4)),null(),null());
            			}
HXLINE( 209)			if (hx::IsNotNull( this->_listStyleNames )) {
HXLINE( 210)				int _g = (int)0;
HXDLIN( 210)				::Array< ::String > _g1 = this->_listStyleNames.split(HX_(" ",20,00,00,00));
HXDLIN( 210)				while((_g < _g1->length)){
HXLINE( 210)					::String s = _g1->__get(_g);
HXDLIN( 210)					_g = (_g + (int)1);
HXLINE( 211)					this->_listview->addClass(s,null(),null());
            				}
            			}
HXLINE( 214)			if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 215)				this->_listview->set_dataSource(this->_dataSource);
            			}
HXLINE( 217)			this->_listview->registerEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn());
            		}
HXLINE( 219)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_listview);
HXLINE( 221)		 ::haxe::ui::containers::ListView _hx_tmp2 = this->_listview;
HXDLIN( 221)		_hx_tmp2->set_left(this->get_screenLeft());
HXLINE( 222)		 ::haxe::ui::containers::ListView _hx_tmp3 = this->_listview;
HXDLIN( 222)		Float _hx_tmp4 = this->get_screenTop();
HXDLIN( 222)		_hx_tmp3->set_top((_hx_tmp4 + this->get_componentHeight()));
HXLINE( 223)		if (hx::IsNull( this->_listWidth )) {
HXLINE( 224)			 ::haxe::ui::containers::ListView _hx_tmp5 = this->_listview;
HXDLIN( 224)			_hx_tmp5->set_width(::Math_obj::ffloor(this->get_componentWidth()));
            		}
            		else {
HXLINE( 226)			this->_listview->set_width(this->_listWidth);
            		}
HXLINE( 229)		 ::Dynamic listHeight = this->_listHeight;
HXLINE( 230)		if (hx::IsNull( this->_listHeight )) {
HXLINE( 231)			int n = this->_listSize;
HXLINE( 232)			if ((n > this->_listview->get_itemCount())) {
HXLINE( 233)				n = this->_listview->get_itemCount();
            			}
HXLINE( 235)			this->_listview->syncValidation();
HXLINE( 236)			Float listHeight1 = (n * this->_listview->get_itemHeight());
HXDLIN( 236)			Float listHeight2 = this->_listview->get_layout()->get_paddingTop();
HXDLIN( 236)			listHeight = (listHeight1 + (listHeight2 + this->_listview->get_layout()->get_paddingBottom()));
            		}
HXLINE( 238)		this->_listview->set_height(listHeight);
HXLINE( 239)		this->_listview->syncValidation();
HXLINE( 241)		Float _hx_tmp6 = this->_listview->get_screenTop();
HXDLIN( 241)		Float _hx_tmp7 = (_hx_tmp6 + this->_listview->get_height());
HXDLIN( 241)		if ((_hx_tmp7 > ::haxe::ui::core::Screen_obj::get_instance()->get_height())) {
HXLINE( 242)			 ::haxe::ui::containers::ListView _hx_tmp8 = this->_listview;
HXDLIN( 242)			Float _hx_tmp9 = this->get_screenTop();
HXDLIN( 242)			_hx_tmp8->set_top((_hx_tmp9 - this->_listview->get_height()));
            		}
HXLINE( 245)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,showList,(void))

void DropDown_obj::hideList(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_248_hideList)
HXLINE( 249)		if (hx::IsNotNull( this->_listview )) {
HXLINE( 250)			if (hx::IsNotNull( this->_listview->get_selectedItem() )) {
HXLINE( 251)				this->_listview->get_selectedItem()->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            			}
HXLINE( 253)			::haxe::ui::core::Screen_obj::get_instance()->removeComponent(this->_listview);
            		}
HXLINE( 255)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropDown_obj,hideList,(void))

void DropDown_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_262_validateData)
HXLINE( 263)		if (hx::IsNotNull( this->_listview )) {
HXLINE( 264)			this->_listview->set_dataSource(this->_dataSource);
            		}
HXLINE( 267)		this->behaviourSet(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(this->_dataSource));
HXLINE( 269)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 270)			bool _hx_tmp;
HXDLIN( 270)			bool _hx_tmp1;
HXDLIN( 270)			if ((this->_requireSelection == true)) {
HXLINE( 270)				_hx_tmp1 = (this->_selectedIndex < (int)0);
            			}
            			else {
HXLINE( 270)				_hx_tmp1 = false;
            			}
HXDLIN( 270)			if (_hx_tmp1) {
HXLINE( 270)				_hx_tmp = (this->_dataSource->get_size() > (int)0);
            			}
            			else {
HXLINE( 270)				_hx_tmp = false;
            			}
HXDLIN( 270)			if (_hx_tmp) {
HXLINE( 271)				this->_selectedIndex = (int)0;
            			}
HXLINE( 274)			if ((this->_selectedIndex >= (int)0)) {
HXLINE( 275)				this->_text = ( (::String)(this->_dataSource->get(this->_selectedIndex)->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
            			}
            		}
HXLINE( 281)		this->super::validateData();
            	}


 ::haxe::ui::core::Component DropDown_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d27e7cbd05cad2ad_294_cloneComponent)
HXLINE(   1)		 ::haxe::ui::components::DropDown c = ( ( ::haxe::ui::components::DropDown)(this->super::cloneComponent()) );
HXLINE( 288)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 289)			c->set_dataSource(this->_dataSource->clone());
            		}
HXLINE(   1)		return c;
            	}


 ::haxe::ui::core::Component DropDown_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8548f7cc4467bc97_1_self)
HXDLIN(   1)		return  ::haxe::ui::components::DropDown_obj::__alloc( HX_CTX );
            	}


 ::haxe::ui::util::VariantType DropDown_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_bb057985cc868ebe_1_getProperty)
HXDLIN(   1)		if ((name == HX_("selectedIndex",b7,76,56,b4))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(this->get_selectedIndex());
            		}
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType DropDown_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_bb057985cc868ebe_1_setProperty)
HXDLIN(   1)		if ((name == HX_("selectedIndex",b7,76,56,b4))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(this->set_selectedIndex(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
            		}
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


int DropDown_obj::NO_SELECTION;


hx::ObjectPtr< DropDown_obj > DropDown_obj::__new() {
	hx::ObjectPtr< DropDown_obj > __this = new DropDown_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DropDown_obj > DropDown_obj::__alloc(hx::Ctx *_hx_ctx) {
	DropDown_obj *__this = (DropDown_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DropDown_obj), true, "haxe.ui.components.DropDown"));
	*(void **)__this = DropDown_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DropDown_obj::DropDown_obj()
{
}

void DropDown_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropDown);
	HX_MARK_MEMBER_NAME(_listview,"_listview");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_requireSelection,"_requireSelection");
	HX_MARK_MEMBER_NAME(_listWidth,"_listWidth");
	HX_MARK_MEMBER_NAME(_listHeight,"_listHeight");
	HX_MARK_MEMBER_NAME(_listSize,"_listSize");
	HX_MARK_MEMBER_NAME(_listStyleNames,"_listStyleNames");
	HX_MARK_MEMBER_NAME(selectedItem,"selectedItem");
	 ::haxe::ui::components::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropDown_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_listview,"_listview");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_requireSelection,"_requireSelection");
	HX_VISIT_MEMBER_NAME(_listWidth,"_listWidth");
	HX_VISIT_MEMBER_NAME(_listHeight,"_listHeight");
	HX_VISIT_MEMBER_NAME(_listSize,"_listSize");
	HX_VISIT_MEMBER_NAME(_listStyleNames,"_listStyleNames");
	HX_VISIT_MEMBER_NAME(selectedItem,"selectedItem");
	 ::haxe::ui::components::Button_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DropDown_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { return hx::Val( onReady_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_listSize() ); }
		if (HX_FIELD_EQ(inName,"showList") ) { return hx::Val( showList_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideList") ) { return hx::Val( hideList_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { return hx::Val( _listview ); }
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return hx::Val( onDestroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"listWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_listWidth() ); }
		if (HX_FIELD_EQ(inName,"_listSize") ) { return hx::Val( _listSize ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"_listWidth") ) { return hx::Val( _listWidth ); }
		if (HX_FIELD_EQ(inName,"listHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_listHeight() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return hx::Val( _dataSource ); }
		if (HX_FIELD_EQ(inName,"_listHeight") ) { return hx::Val( _listHeight ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return hx::Val( get_listSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_listSize") ) { return hx::Val( set_listSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return hx::Val( onMouseClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedItem() : selectedItem ); }
		if (HX_FIELD_EQ(inName,"onItemChange") ) { return hx::Val( onItemChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return hx::Val( _itemRenderer ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"get_listWidth") ) { return hx::Val( get_listWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_listWidth") ) { return hx::Val( set_listWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"get_listHeight") ) { return hx::Val( get_listHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_listHeight") ) { return hx::Val( set_listHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"listStyleNames") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_listStyleNames() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_listStyleNames") ) { return hx::Val( _listStyleNames ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requireSelection") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_requireSelection() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return hx::Val( get_selectedItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"_requireSelection") ) { return hx::Val( _requireSelection ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return hx::Val( onScreenMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_listStyleNames") ) { return hx::Val( get_listStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_listStyleNames") ) { return hx::Val( set_listStyleNames_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_requireSelection") ) { return hx::Val( get_requireSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_requireSelection") ) { return hx::Val( set_requireSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DropDown_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_listSize(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { _listview=inValue.Cast<  ::haxe::ui::containers::ListView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_listWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_listSize") ) { _listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		if (HX_FIELD_EQ(inName,"_listWidth") ) { _listWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_listHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast<  ::haxe::ui::data::DataSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_listHeight") ) { _listHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { selectedItem=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listStyleNames") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_listStyleNames(inValue.Cast< ::String >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_listStyleNames") ) { _listStyleNames=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requireSelection") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_requireSelection(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_requireSelection") ) { _requireSelection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropDown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_listview","\x22","\xcd","\x00","\x8b"));
	outFields->push(HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"));
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("_requireSelection","\x86","\x4a","\x8d","\x4a"));
	outFields->push(HX_HCSTRING("requireSelection","\x27","\x5c","\x12","\xb2"));
	outFields->push(HX_HCSTRING("_listWidth","\x89","\xf0","\x45","\x3c"));
	outFields->push(HX_HCSTRING("listWidth","\xc8","\x74","\xa3","\xe0"));
	outFields->push(HX_HCSTRING("_listHeight","\x04","\x00","\x3c","\x37"));
	outFields->push(HX_HCSTRING("listHeight","\xe5","\x32","\xb2","\x64"));
	outFields->push(HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73"));
	outFields->push(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));
	outFields->push(HX_HCSTRING("_listStyleNames","\x74","\xb3","\x65","\x01"));
	outFields->push(HX_HCSTRING("listStyleNames","\xd5","\x6a","\x05","\xb8"));
	outFields->push(HX_HCSTRING("selectedItem","\x0e","\xe5","\x59","\xd6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DropDown_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::containers::ListView*/ ,(int)offsetof(DropDown_obj,_listview),HX_HCSTRING("_listview","\x22","\xcd","\x00","\x8b")},
	{hx::fsObject /*::haxe::ui::core::ItemRenderer*/ ,(int)offsetof(DropDown_obj,_itemRenderer),HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79")},
	{hx::fsObject /*::haxe::ui::data::DataSource*/ ,(int)offsetof(DropDown_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{hx::fsInt,(int)offsetof(DropDown_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsBool,(int)offsetof(DropDown_obj,_requireSelection),HX_HCSTRING("_requireSelection","\x86","\x4a","\x8d","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DropDown_obj,_listWidth),HX_HCSTRING("_listWidth","\x89","\xf0","\x45","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DropDown_obj,_listHeight),HX_HCSTRING("_listHeight","\x04","\x00","\x3c","\x37")},
	{hx::fsInt,(int)offsetof(DropDown_obj,_listSize),HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73")},
	{hx::fsString,(int)offsetof(DropDown_obj,_listStyleNames),HX_HCSTRING("_listStyleNames","\x74","\xb3","\x65","\x01")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DropDown_obj,selectedItem),HX_HCSTRING("selectedItem","\x0e","\xe5","\x59","\xd6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo DropDown_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DropDown_obj::NO_SELECTION,HX_HCSTRING("NO_SELECTION","\x6e","\x63","\x0c","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String DropDown_obj_sMemberFields[] = {
	HX_HCSTRING("_listview","\x22","\xcd","\x00","\x8b"),
	HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("onReady","\xc4","\x3e","\xf8","\x7c"),
	HX_HCSTRING("onDestroy","\x9b","\xe5","\x30","\xfc"),
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("_requireSelection","\x86","\x4a","\x8d","\x4a"),
	HX_HCSTRING("get_requireSelection","\x30","\xc1","\x7c","\xd0"),
	HX_HCSTRING("set_requireSelection","\xa4","\x78","\x34","\x9d"),
	HX_HCSTRING("_listWidth","\x89","\xf0","\x45","\x3c"),
	HX_HCSTRING("get_listWidth","\x9f","\x48","\x07","\xa2"),
	HX_HCSTRING("set_listWidth","\xab","\x2a","\x0d","\xe7"),
	HX_HCSTRING("_listHeight","\x04","\x00","\x3c","\x37"),
	HX_HCSTRING("get_listHeight","\x2e","\xbb","\xa7","\xda"),
	HX_HCSTRING("set_listHeight","\xa2","\xa3","\xc7","\xfa"),
	HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73"),
	HX_HCSTRING("get_listSize","\x48","\x24","\x62","\xe1"),
	HX_HCSTRING("set_listSize","\xbc","\x47","\x5b","\xf6"),
	HX_HCSTRING("_listStyleNames","\x74","\xb3","\x65","\x01"),
	HX_HCSTRING("get_listStyleNames","\x9e","\x4b","\x9f","\x53"),
	HX_HCSTRING("set_listStyleNames","\x12","\x7e","\x4e","\x30"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("onMouseClick","\xe2","\x11","\x6f","\x3e"),
	HX_HCSTRING("selectedItem","\x0e","\xe5","\x59","\xd6"),
	HX_HCSTRING("get_selectedItem","\x97","\xd1","\xf8","\xda"),
	HX_HCSTRING("onItemChange","\xe2","\xfc","\xc3","\x7d"),
	HX_HCSTRING("onScreenMouseDown","\xbc","\x49","\x99","\xfd"),
	HX_HCSTRING("showList","\xfb","\xdf","\x39","\xaf"),
	HX_HCSTRING("hideList","\x40","\x06","\x81","\xa0"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	::String(null()) };

static void DropDown_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropDown_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DropDown_obj::NO_SELECTION,"NO_SELECTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropDown_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropDown_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DropDown_obj::NO_SELECTION,"NO_SELECTION");
};

#endif

hx::Class DropDown_obj::__mClass;

static ::String DropDown_obj_sStaticFields[] = {
	HX_HCSTRING("NO_SELECTION","\x6e","\x63","\x0c","\xb2"),
	::String(null())
};

void DropDown_obj::__register()
{
	hx::Object *dummy = new DropDown_obj;
	DropDown_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.DropDown","\xd7","\x72","\x36","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DropDown_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DropDown_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DropDown_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DropDown_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropDown_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDown_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDown_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DropDown_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("selectedIndex",b7,76,56,b4), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_452ff4130146a79f_16_boot)
HXDLIN(  16)		NO_SELECTION = (int)-1;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
