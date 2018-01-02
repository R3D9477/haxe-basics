// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b370dac7b9543de4_9_getMetric,"hx.widgets.SystemSettings","getMetric",0x09e98e47,"hx.widgets.SystemSettings.getMetric","hx/widgets/SystemSettings.hx",9,0x16c5e0cd)
namespace hx{
namespace widgets{

void SystemSettings_obj::__construct() { }

Dynamic SystemSettings_obj::__CreateEmpty() { return new SystemSettings_obj; }

void *SystemSettings_obj::_hx_vtable = 0;

Dynamic SystemSettings_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SystemSettings_obj > _hx_result = new SystemSettings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SystemSettings_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x63876031) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x63876031;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int SystemSettings_obj::getMetric( cpp::Struct<wxSystemMetric, cpp::EnumHandler> metric, ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_b370dac7b9543de4_9_getMetric)
HXDLIN(   9)		return wxSystemSettings::GetMetric(metric,::hx::widgets::Window_obj::toRaw(window));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemSettings_obj,getMetric,return )


SystemSettings_obj::SystemSettings_obj()
{
}

bool SystemSettings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { outValue = getMetric_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SystemSettings_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SystemSettings_obj_sStaticStorageInfo = 0;
#endif

static void SystemSettings_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemSettings_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SystemSettings_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemSettings_obj::__mClass,"__mClass");
};

#endif

hx::Class SystemSettings_obj::__mClass;

static ::String SystemSettings_obj_sStaticFields[] = {
	HX_HCSTRING("getMetric","\x66","\x11","\xb9","\x85"),
	::String(null())
};

void SystemSettings_obj::__register()
{
	hx::Object *dummy = new SystemSettings_obj;
	SystemSettings_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.SystemSettings","\x0f","\x2a","\xae","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemSettings_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SystemSettings_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SystemSettings_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SystemSettings_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SystemSettings_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SystemSettings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SystemSettings_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
