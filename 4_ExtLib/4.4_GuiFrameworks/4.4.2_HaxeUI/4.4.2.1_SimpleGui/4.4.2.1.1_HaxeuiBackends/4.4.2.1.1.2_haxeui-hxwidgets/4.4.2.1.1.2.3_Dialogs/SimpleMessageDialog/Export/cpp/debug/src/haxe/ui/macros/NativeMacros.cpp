// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_NativeMacros
#include <haxe/ui/macros/NativeMacros.h>
#endif

namespace haxe{
namespace ui{
namespace macros{

void NativeMacros_obj::__construct() { }

Dynamic NativeMacros_obj::__CreateEmpty() { return new NativeMacros_obj; }

void *NativeMacros_obj::_hx_vtable = 0;

Dynamic NativeMacros_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NativeMacros_obj > _hx_result = new NativeMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x071789c3;
}

bool NativeMacros_obj::_nativeProcessed;


NativeMacros_obj::NativeMacros_obj()
{
}

bool NativeMacros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_nativeProcessed") ) { outValue = ( _nativeProcessed ); return true; }
	}
	return false;
}

bool NativeMacros_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_nativeProcessed") ) { _nativeProcessed=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NativeMacros_obj_sMemberStorageInfo = 0;
static hx::StaticInfo NativeMacros_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &NativeMacros_obj::_nativeProcessed,HX_HCSTRING("_nativeProcessed","\x78","\xa2","\x2c","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void NativeMacros_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeMacros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeMacros_obj::_nativeProcessed,"_nativeProcessed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeMacros_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeMacros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeMacros_obj::_nativeProcessed,"_nativeProcessed");
};

#endif

hx::Class NativeMacros_obj::__mClass;

static ::String NativeMacros_obj_sStaticFields[] = {
	HX_HCSTRING("_nativeProcessed","\x78","\xa2","\x2c","\xfe"),
	::String(null())
};

void NativeMacros_obj::__register()
{
	hx::Object *dummy = new NativeMacros_obj;
	NativeMacros_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.macros.NativeMacros","\x13","\x1e","\x40","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeMacros_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeMacros_obj::__SetStatic;
	__mClass->mMarkFunc = NativeMacros_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NativeMacros_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NativeMacros_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeMacros_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeMacros_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
