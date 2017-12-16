// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ContinuousHBox
#include <haxe/ui/containers/ContinuousHBox.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e1d75d4179780a35_10_new,"haxe.ui.containers.ContinuousHBox","new",0xadec69ce,"haxe.ui.containers.ContinuousHBox.new","haxe/ui/containers/ContinuousHBox.hx",10,0xb13c1ee1)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe504b4dfd00692_1_cloneComponent,"haxe.ui.containers.ContinuousHBox","cloneComponent",0x58840af2,"haxe.ui.containers.ContinuousHBox.cloneComponent","src/haxe/ui/containers/ContinuousHBox.hx",1,0xb72f4d2c)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe504b4dfd00692_2_self,"haxe.ui.containers.ContinuousHBox","self",0x843e325e,"haxe.ui.containers.ContinuousHBox.self","src/haxe/ui/containers/ContinuousHBox.hx",2,0xb72f4d2c)
namespace haxe{
namespace ui{
namespace containers{

void ContinuousHBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e1d75d4179780a35_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->set_layout( ::haxe::ui::layouts::HorizontalContinuousLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic ContinuousHBox_obj::__CreateEmpty() { return new ContinuousHBox_obj; }

void *ContinuousHBox_obj::_hx_vtable = 0;

Dynamic ContinuousHBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ContinuousHBox_obj > _hx_result = new ContinuousHBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ContinuousHBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x3588ca82) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3588ca82;
		} else {
			return inClassId==(int)0x41081cbb;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component ContinuousHBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_dfe504b4dfd00692_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::ContinuousHBox c = ( ( ::haxe::ui::containers::ContinuousHBox)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component ContinuousHBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_dfe504b4dfd00692_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::ContinuousHBox_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< ContinuousHBox_obj > ContinuousHBox_obj::__new() {
	hx::ObjectPtr< ContinuousHBox_obj > __this = new ContinuousHBox_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ContinuousHBox_obj > ContinuousHBox_obj::__alloc(hx::Ctx *_hx_ctx) {
	ContinuousHBox_obj *__this = (ContinuousHBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ContinuousHBox_obj), true, "haxe.ui.containers.ContinuousHBox"));
	*(void **)__this = ContinuousHBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ContinuousHBox_obj::ContinuousHBox_obj()
{
}

hx::Val ContinuousHBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ContinuousHBox_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ContinuousHBox_obj_sStaticStorageInfo = 0;
#endif

static ::String ContinuousHBox_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void ContinuousHBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ContinuousHBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#endif

hx::Class ContinuousHBox_obj::__mClass;

void ContinuousHBox_obj::__register()
{
	hx::Object *dummy = new ContinuousHBox_obj;
	ContinuousHBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.ContinuousHBox","\xdc","\x2a","\xac","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ContinuousHBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ContinuousHBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContinuousHBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ContinuousHBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContinuousHBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContinuousHBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
