// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_50cad1bdd54eeb84
#define INCLUDED_50cad1bdd54eeb84
#include "wx/sysopt.h"
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemOptions
#include <hx/widgets/SystemOptions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5ec8a995d1773b19_8_getOption,"hx.widgets.SystemOptions","getOption",0x561888ef,"hx.widgets.SystemOptions.getOption","hx/widgets/SystemOptions.hx",8,0x6dbb5b4e)
HX_LOCAL_STACK_FRAME(_hx_pos_5ec8a995d1773b19_14_setOption,"hx.widgets.SystemOptions","setOption",0x396974fb,"hx.widgets.SystemOptions.setOption","hx/widgets/SystemOptions.hx",14,0x6dbb5b4e)
namespace hx{
namespace widgets{

void SystemOptions_obj::__construct() { }

Dynamic SystemOptions_obj::__CreateEmpty() { return new SystemOptions_obj; }

void *SystemOptions_obj::_hx_vtable = 0;

Dynamic SystemOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SystemOptions_obj > _hx_result = new SystemOptions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SystemOptions_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4164b3d0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4164b3d0;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int SystemOptions_obj::getOption(::String name){
            	HX_STACKFRAME(&_hx_pos_5ec8a995d1773b19_8_getOption)
HXLINE(   9)		const char* this1 = name.__s;
HXDLIN(   9)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  10)		 wxString tmp = str;
HXDLIN(  10)		int result = wxSystemOptions::GetOptionInt(tmp);
HXLINE(  11)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemOptions_obj,getOption,return )

void SystemOptions_obj::setOption(::String name,int value){
            	HX_STACKFRAME(&_hx_pos_5ec8a995d1773b19_14_setOption)
HXLINE(  15)		const char* this1 = name.__s;
HXDLIN(  15)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  16)		 wxString tmp = str;
HXDLIN(  16)		wxSystemOptions::SetOption(tmp,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemOptions_obj,setOption,(void))


SystemOptions_obj::SystemOptions_obj()
{
}

bool SystemOptions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getOption") ) { outValue = getOption_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setOption") ) { outValue = setOption_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SystemOptions_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SystemOptions_obj_sStaticStorageInfo = 0;
#endif

static void SystemOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SystemOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class SystemOptions_obj::__mClass;

static ::String SystemOptions_obj_sStaticFields[] = {
	HX_HCSTRING("getOption","\xab","\x5c","\xd1","\xa7"),
	HX_HCSTRING("setOption","\xb7","\x48","\x22","\x8b"),
	::String(null())
};

void SystemOptions_obj::__register()
{
	hx::Object *dummy = new SystemOptions_obj;
	SystemOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.SystemOptions","\xb2","\x4f","\xa6","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemOptions_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SystemOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SystemOptions_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SystemOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SystemOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SystemOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SystemOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
