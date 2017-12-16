// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Absolute
#include <haxe/ui/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#include <haxe/ui/layouts/AbsoluteLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4b8b1051983c5060_10_new,"haxe.ui.containers.Absolute","new",0x7f7f7813,"haxe.ui.containers.Absolute.new","haxe/ui/containers/Absolute.hx",10,0xede106fc)
HX_LOCAL_STACK_FRAME(_hx_pos_10d0445cc903330b_1_cloneComponent,"haxe.ui.containers.Absolute","cloneComponent",0x4a6848cd,"haxe.ui.containers.Absolute.cloneComponent","src/haxe/ui/containers/Absolute.hx",1,0x8d211b07)
HX_LOCAL_STACK_FRAME(_hx_pos_10d0445cc903330b_2_self,"haxe.ui.containers.Absolute","self",0x1357a079,"haxe.ui.containers.Absolute.self","src/haxe/ui/containers/Absolute.hx",2,0x8d211b07)
namespace haxe{
namespace ui{
namespace containers{

void Absolute_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4b8b1051983c5060_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->set_layout( ::haxe::ui::layouts::AbsoluteLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic Absolute_obj::__CreateEmpty() { return new Absolute_obj; }

void *Absolute_obj::_hx_vtable = 0;

Dynamic Absolute_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Absolute_obj > _hx_result = new Absolute_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Absolute_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x41081cbb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x41081cbb;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x796cc263;
	}
}

 ::haxe::ui::core::Component Absolute_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_10d0445cc903330b_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::Absolute c = ( ( ::haxe::ui::containers::Absolute)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Absolute_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_10d0445cc903330b_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::Absolute_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Absolute_obj > Absolute_obj::__new() {
	hx::ObjectPtr< Absolute_obj > __this = new Absolute_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Absolute_obj > Absolute_obj::__alloc(hx::Ctx *_hx_ctx) {
	Absolute_obj *__this = (Absolute_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Absolute_obj), true, "haxe.ui.containers.Absolute"));
	*(void **)__this = Absolute_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Absolute_obj::Absolute_obj()
{
}

hx::Val Absolute_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Absolute_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Absolute_obj_sStaticStorageInfo = 0;
#endif

static ::String Absolute_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Absolute_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Absolute_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Absolute_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Absolute_obj::__mClass,"__mClass");
};

#endif

hx::Class Absolute_obj::__mClass;

void Absolute_obj::__register()
{
	hx::Object *dummy = new Absolute_obj;
	Absolute_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.Absolute","\xa1","\x72","\x9f","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Absolute_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Absolute_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Absolute_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Absolute_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Absolute_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Absolute_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
