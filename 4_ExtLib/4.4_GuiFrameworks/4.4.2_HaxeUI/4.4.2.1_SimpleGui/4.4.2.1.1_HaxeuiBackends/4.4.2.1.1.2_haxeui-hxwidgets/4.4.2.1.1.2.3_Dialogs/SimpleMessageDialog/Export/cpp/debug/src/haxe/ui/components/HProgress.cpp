// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HProgress
#include <haxe/ui/components/HProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HProgressLayout
#include <haxe/ui/components/HProgressLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a97feb6e11625766_12_new,"haxe.ui.components.HProgress","new",0xf27c8f41,"haxe.ui.components.HProgress.new","haxe/ui/components/HProgress.hx",12,0x3dcaee30)
HX_LOCAL_STACK_FRAME(_hx_pos_a97feb6e11625766_18_createDefaults,"haxe.ui.components.HProgress","createDefaults",0x4d47aa6d,"haxe.ui.components.HProgress.createDefaults","haxe/ui/components/HProgress.hx",18,0x3dcaee30)
HX_LOCAL_STACK_FRAME(_hx_pos_a97feb6e11625766_23_createChildren,"haxe.ui.components.HProgress","createChildren",0x0e17f31a,"haxe.ui.components.HProgress.createChildren","haxe/ui/components/HProgress.hx",23,0x3dcaee30)
HX_LOCAL_STACK_FRAME(_hx_pos_3c9fe1c5995cabbe_1_cloneComponent,"haxe.ui.components.HProgress","cloneComponent",0x71ca445f,"haxe.ui.components.HProgress.cloneComponent","src/haxe/ui/components/HProgress.hx",1,0xf69c63c5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c9fe1c5995cabbe_2_self,"haxe.ui.components.HProgress","self",0x3dced18b,"haxe.ui.components.HProgress.self","src/haxe/ui/components/HProgress.hx",2,0xf69c63c5)
namespace haxe{
namespace ui{
namespace components{

void HProgress_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a97feb6e11625766_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic HProgress_obj::__CreateEmpty() { return new HProgress_obj; }

void *HProgress_obj::_hx_vtable = 0;

Dynamic HProgress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HProgress_obj > _hx_result = new HProgress_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HProgress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d979c45) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x0a86699d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a86699d;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x5d979c45;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void HProgress_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_a97feb6e11625766_18_createDefaults)
HXLINE(  19)		this->super::createDefaults();
HXLINE(  20)		this->_defaultLayout =  ::haxe::ui::components::HProgressLayout_obj::__alloc( HX_CTX );
            	}


void HProgress_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_a97feb6e11625766_23_createChildren)
HXLINE(  24)		this->super::createChildren();
HXLINE(  25)		if (hx::IsLessEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  26)			this->set_componentWidth((int)150);
            		}
HXLINE(  28)		if (hx::IsLessEq( this->get_componentHeight(),(int)0 )) {
HXLINE(  29)			this->set_componentHeight((int)20);
            		}
            	}


 ::haxe::ui::core::Component HProgress_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3c9fe1c5995cabbe_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::HProgress c = ( ( ::haxe::ui::components::HProgress)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component HProgress_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3c9fe1c5995cabbe_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::HProgress_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HProgress_obj > HProgress_obj::__new() {
	hx::ObjectPtr< HProgress_obj > __this = new HProgress_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HProgress_obj > HProgress_obj::__alloc(hx::Ctx *_hx_ctx) {
	HProgress_obj *__this = (HProgress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HProgress_obj), true, "haxe.ui.components.HProgress"));
	*(void **)__this = HProgress_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HProgress_obj::HProgress_obj()
{
}

hx::Val HProgress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HProgress_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HProgress_obj_sStaticStorageInfo = 0;
#endif

static ::String HProgress_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void HProgress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HProgress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HProgress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HProgress_obj::__mClass,"__mClass");
};

#endif

hx::Class HProgress_obj::__mClass;

void HProgress_obj::__register()
{
	hx::Object *dummy = new HProgress_obj;
	HProgress_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HProgress","\xcf","\xda","\xd9","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HProgress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HProgress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HProgress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HProgress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HProgress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HProgress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
