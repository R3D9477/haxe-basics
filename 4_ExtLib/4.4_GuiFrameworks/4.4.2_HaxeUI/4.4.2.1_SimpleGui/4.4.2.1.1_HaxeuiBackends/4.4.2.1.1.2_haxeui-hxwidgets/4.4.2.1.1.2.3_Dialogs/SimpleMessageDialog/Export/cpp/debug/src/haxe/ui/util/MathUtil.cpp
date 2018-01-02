// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_util_MathUtil
#include <haxe/ui/util/MathUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_8_distance,"haxe.ui.util.MathUtil","distance",0xc95b573f,"haxe.ui.util.MathUtil.distance","haxe/ui/util/MathUtil.hx",8,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_4_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",4,0x1b97ffd9)
HX_LOCAL_STACK_FRAME(_hx_pos_330eb5d3711e5827_5_boot,"haxe.ui.util.MathUtil","boot",0x2173fb3c,"haxe.ui.util.MathUtil.boot","haxe/ui/util/MathUtil.hx",5,0x1b97ffd9)
namespace haxe{
namespace ui{
namespace util{

void MathUtil_obj::__construct() { }

Dynamic MathUtil_obj::__CreateEmpty() { return new MathUtil_obj; }

void *MathUtil_obj::_hx_vtable = 0;

Dynamic MathUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MathUtil_obj > _hx_result = new MathUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x376a4646;
}

int MathUtil_obj::MAX_INT;

int MathUtil_obj::MIN_INT;

Float MathUtil_obj::distance(Float x1,Float y1,Float x2,Float y2){
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_8_distance)
HXDLIN(   8)		return ::Math_obj::sqrt((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MathUtil_obj,distance,return )


MathUtil_obj::MathUtil_obj()
{
}

bool MathUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MathUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MathUtil_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MathUtil_obj::MAX_INT,HX_HCSTRING("MAX_INT","\x54","\x26","\x6d","\x69")},
	{hx::fsInt,(void *) &MathUtil_obj::MIN_INT,HX_HCSTRING("MIN_INT","\x42","\x3c","\x46","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void MathUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_MARK_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MAX_INT,"MAX_INT");
	HX_VISIT_MEMBER_NAME(MathUtil_obj::MIN_INT,"MIN_INT");
};

#endif

hx::Class MathUtil_obj::__mClass;

static ::String MathUtil_obj_sStaticFields[] = {
	HX_HCSTRING("MAX_INT","\x54","\x26","\x6d","\x69"),
	HX_HCSTRING("MIN_INT","\x42","\x3c","\x46","\xda"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null())
};

void MathUtil_obj::__register()
{
	hx::Object *dummy = new MathUtil_obj;
	MathUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.MathUtil","\xa4","\x45","\xa3","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MathUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MathUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MathUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MathUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_4_boot)
HXDLIN(   4)		MAX_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_330eb5d3711e5827_5_boot)
HXDLIN(   5)		MIN_INT = (int)-2147483648;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
