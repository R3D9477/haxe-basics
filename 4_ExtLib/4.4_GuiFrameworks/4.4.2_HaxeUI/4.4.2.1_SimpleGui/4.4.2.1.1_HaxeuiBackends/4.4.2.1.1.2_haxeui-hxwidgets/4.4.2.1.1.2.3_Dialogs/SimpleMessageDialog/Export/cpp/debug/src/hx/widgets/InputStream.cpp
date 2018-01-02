// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

namespace hx{
namespace widgets{

void InputStream_obj::__construct() { }

Dynamic InputStream_obj::__CreateEmpty() { return new InputStream_obj; }

void *InputStream_obj::_hx_vtable = 0;

Dynamic InputStream_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InputStream_obj > _hx_result = new InputStream_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c6dbea8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c6dbea8;
	} else {
		return inClassId==(int)0x7ed3b98b;
	}
}


InputStream_obj::InputStream_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *InputStream_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *InputStream_obj_sStaticStorageInfo = 0;
#endif

static void InputStream_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InputStream_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputStream_obj::__mClass,"__mClass");
};

#endif

hx::Class InputStream_obj::__mClass;

void InputStream_obj::__register()
{
	hx::Object *dummy = new InputStream_obj;
	InputStream_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.InputStream","\xed","\x38","\x2d","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InputStream_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InputStream_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InputStream_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputStream_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
