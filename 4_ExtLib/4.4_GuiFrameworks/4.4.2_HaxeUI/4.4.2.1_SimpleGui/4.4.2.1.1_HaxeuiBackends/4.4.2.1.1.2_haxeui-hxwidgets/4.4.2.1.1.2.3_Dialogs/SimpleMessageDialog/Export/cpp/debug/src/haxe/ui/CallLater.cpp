// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterBase
#include <haxe/ui/backend/CallLaterBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_62c77a219906a331_7_new,"haxe.ui.CallLater","new",0x309f6a8e,"haxe.ui.CallLater.new","haxe/ui/CallLater.hx",7,0xd3c24742)
namespace haxe{
namespace ui{

void CallLater_obj::__construct( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_62c77a219906a331_7_new)
HXDLIN(   7)		super::__construct(fn);
            	}

Dynamic CallLater_obj::__CreateEmpty() { return new CallLater_obj; }

void *CallLater_obj::_hx_vtable = 0;

Dynamic CallLater_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallLater_obj > _hx_result = new CallLater_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallLater_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x134f3434) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x134f3434;
	} else {
		return inClassId==(int)0x57a7dd29;
	}
}


hx::ObjectPtr< CallLater_obj > CallLater_obj::__new( ::Dynamic fn) {
	hx::ObjectPtr< CallLater_obj > __this = new CallLater_obj();
	__this->__construct(fn);
	return __this;
}

hx::ObjectPtr< CallLater_obj > CallLater_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic fn) {
	CallLater_obj *__this = (CallLater_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallLater_obj), true, "haxe.ui.CallLater"));
	*(void **)__this = CallLater_obj::_hx_vtable;
	__this->__construct(fn);
	return __this;
}

CallLater_obj::CallLater_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CallLater_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CallLater_obj_sStaticStorageInfo = 0;
#endif

static void CallLater_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallLater_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallLater_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallLater_obj::__mClass,"__mClass");
};

#endif

hx::Class CallLater_obj::__mClass;

void CallLater_obj::__register()
{
	hx::Object *dummy = new CallLater_obj;
	CallLater_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.CallLater","\x9c","\xcb","\x1f","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallLater_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallLater_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallLater_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallLater_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallLater_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
