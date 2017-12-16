// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Spacer
#include <haxe/ui/components/Spacer.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_884963628546cdcb_10_new,"haxe.ui.components.Spacer","new",0x46b57004,"haxe.ui.components.Spacer.new","haxe/ui/components/Spacer.hx",10,0x878e3a6b)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e9bc95f9cdf5c6_1_cloneComponent,"haxe.ui.components.Spacer","cloneComponent",0x2d4de47c,"haxe.ui.components.Spacer.cloneComponent","src/haxe/ui/components/Spacer.hx",1,0x93e4a5b6)
HX_LOCAL_STACK_FRAME(_hx_pos_c7e9bc95f9cdf5c6_2_self,"haxe.ui.components.Spacer","self",0x9b5a9b68,"haxe.ui.components.Spacer.self","src/haxe/ui/components/Spacer.hx",2,0x93e4a5b6)
namespace haxe{
namespace ui{
namespace components{

void Spacer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_884963628546cdcb_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic Spacer_obj::__CreateEmpty() { return new Spacer_obj; }

void *Spacer_obj::_hx_vtable = 0;

Dynamic Spacer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Spacer_obj > _hx_result = new Spacer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Spacer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x01e5c540) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01e5c540;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component Spacer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_c7e9bc95f9cdf5c6_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Spacer c = ( ( ::haxe::ui::components::Spacer)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Spacer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_c7e9bc95f9cdf5c6_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Spacer_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Spacer_obj > Spacer_obj::__new() {
	hx::ObjectPtr< Spacer_obj > __this = new Spacer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Spacer_obj > Spacer_obj::__alloc(hx::Ctx *_hx_ctx) {
	Spacer_obj *__this = (Spacer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Spacer_obj), true, "haxe.ui.components.Spacer"));
	*(void **)__this = Spacer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Spacer_obj::Spacer_obj()
{
}

hx::Val Spacer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Spacer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Spacer_obj_sStaticStorageInfo = 0;
#endif

static ::String Spacer_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Spacer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spacer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Spacer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spacer_obj::__mClass,"__mClass");
};

#endif

hx::Class Spacer_obj::__mClass;

void Spacer_obj::__register()
{
	hx::Object *dummy = new Spacer_obj;
	Spacer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Spacer","\x12","\x5e","\x3c","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Spacer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Spacer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Spacer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Spacer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Spacer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Spacer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
