// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_8_getMetric,"haxe.ui.backend.PlatformBase","getMetric",0xc3799ca8,"haxe.ui.backend.PlatformBase.getMetric","haxe/ui/backend/PlatformBase.hx",8,0x3041c20d)
namespace haxe{
namespace ui{
namespace backend{

void PlatformBase_obj::__construct() { }

Dynamic PlatformBase_obj::__CreateEmpty() { return new PlatformBase_obj; }

void *PlatformBase_obj::_hx_vtable = 0;

Dynamic PlatformBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlatformBase_obj > _hx_result = new PlatformBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f3979e6;
}

Float PlatformBase_obj::getMetric(::String id){
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_8_getMetric)
HXLINE(   9)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("patform.metrics.hscroll.height",f2,dd,e6,aa)) ){
HXLINE(  13)			return ::hx::widgets::SystemSettings_obj::getMetric(wxSYS_HSCROLL_Y,null());
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("patform.metrics.vscroll.width",69,87,e4,8d)) ){
HXLINE(  11)			return ::hx::widgets::SystemSettings_obj::getMetric(wxSYS_VSCROLL_X,null());
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  15)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlatformBase_obj,getMetric,return )


PlatformBase_obj::PlatformBase_obj()
{
}

hx::Val PlatformBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { return hx::Val( getMetric_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PlatformBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PlatformBase_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformBase_obj_sMemberFields[] = {
	HX_HCSTRING("getMetric","\x66","\x11","\xb9","\x85"),
	::String(null()) };

static void PlatformBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlatformBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformBase_obj::__mClass,"__mClass");
};

#endif

hx::Class PlatformBase_obj::__mClass;

void PlatformBase_obj::__register()
{
	hx::Object *dummy = new PlatformBase_obj;
	PlatformBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.PlatformBase","\x30","\xa5","\x0a","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlatformBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PlatformBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlatformBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlatformBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
