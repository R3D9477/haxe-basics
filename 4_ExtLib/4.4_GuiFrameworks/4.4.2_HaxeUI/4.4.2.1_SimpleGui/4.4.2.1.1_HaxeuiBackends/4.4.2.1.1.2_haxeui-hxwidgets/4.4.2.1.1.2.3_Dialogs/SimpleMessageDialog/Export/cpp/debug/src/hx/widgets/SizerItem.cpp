// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SizerItem
#include <hx/widgets/SizerItem.h>
#endif

namespace hx{
namespace widgets{

void SizerItem_obj::__construct() { }

Dynamic SizerItem_obj::__CreateEmpty() { return new SizerItem_obj; }

void *SizerItem_obj::_hx_vtable = 0;

Dynamic SizerItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SizerItem_obj > _hx_result = new SizerItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SizerItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0da280c9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0da280c9;
	} else {
		return inClassId==(int)0x7f575436;
	}
}


SizerItem_obj::SizerItem_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SizerItem_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SizerItem_obj_sStaticStorageInfo = 0;
#endif

static void SizerItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizerItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SizerItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizerItem_obj::__mClass,"__mClass");
};

#endif

hx::Class SizerItem_obj::__mClass;

void SizerItem_obj::__register()
{
	hx::Object *dummy = new SizerItem_obj;
	SizerItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.SizerItem","\x47","\x98","\x95","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SizerItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SizerItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SizerItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SizerItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SizerItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
