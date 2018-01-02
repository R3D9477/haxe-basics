// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_BufferedDC
#include <hx/widgets/BufferedDC.h>
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryDC
#include <hx/widgets/MemoryDC.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_13a324c688aca699_6_new,"hx.widgets.BufferedDC","new",0x8b3181ad,"hx.widgets.BufferedDC.new","hx/widgets/BufferedDC.hx",6,0x0e7eb021)
namespace hx{
namespace widgets{

void BufferedDC_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_13a324c688aca699_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic BufferedDC_obj::__CreateEmpty() { return new BufferedDC_obj; }

void *BufferedDC_obj::_hx_vtable = 0;

Dynamic BufferedDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BufferedDC_obj > _hx_result = new BufferedDC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BufferedDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x388295db) {
		if (inClassId<=(int)0x0f70b079) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f70b079;
		} else {
			return inClassId==(int)0x388295db;
		}
	} else {
		return inClassId==(int)0x6e905e56 || inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< BufferedDC_obj > BufferedDC_obj::__new() {
	hx::ObjectPtr< BufferedDC_obj > __this = new BufferedDC_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BufferedDC_obj > BufferedDC_obj::__alloc(hx::Ctx *_hx_ctx) {
	BufferedDC_obj *__this = (BufferedDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BufferedDC_obj), true, "hx.widgets.BufferedDC"));
	*(void **)__this = BufferedDC_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BufferedDC_obj::BufferedDC_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BufferedDC_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BufferedDC_obj_sStaticStorageInfo = 0;
#endif

static void BufferedDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BufferedDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BufferedDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BufferedDC_obj::__mClass,"__mClass");
};

#endif

hx::Class BufferedDC_obj::__mClass;

void BufferedDC_obj::__register()
{
	hx::Object *dummy = new BufferedDC_obj;
	BufferedDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.BufferedDC","\x3b","\x27","\x32","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BufferedDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BufferedDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BufferedDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferedDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferedDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
