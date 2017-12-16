// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

namespace hx{
namespace widgets{

void GDIObject_obj::__construct() { }

Dynamic GDIObject_obj::__CreateEmpty() { return new GDIObject_obj; }

void *GDIObject_obj::_hx_vtable = 0;

Dynamic GDIObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GDIObject_obj > _hx_result = new GDIObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GDIObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03ecca10) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03ecca10;
	} else {
		return inClassId==(int)0x7f575436;
	}
}


GDIObject_obj::GDIObject_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GDIObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GDIObject_obj_sStaticStorageInfo = 0;
#endif

static void GDIObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GDIObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GDIObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GDIObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GDIObject_obj::__mClass;

void GDIObject_obj::__register()
{
	hx::Object *dummy = new GDIObject_obj;
	GDIObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.GDIObject","\x8e","\xe1","\xdf","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GDIObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GDIObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GDIObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GDIObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GDIObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
