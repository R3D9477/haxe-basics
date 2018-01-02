// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_AppConsole
#include <hx/widgets/AppConsole.h>
#endif
#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cbd0daf39bbdc774_6_new,"hx.widgets.AppConsole","new",0x120ae3c5,"hx.widgets.AppConsole.new","hx/widgets/AppConsole.hx",6,0x61c11909)
namespace hx{
namespace widgets{

void AppConsole_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cbd0daf39bbdc774_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic AppConsole_obj::__CreateEmpty() { return new AppConsole_obj; }

void *AppConsole_obj::_hx_vtable = 0;

Dynamic AppConsole_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AppConsole_obj > _hx_result = new AppConsole_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppConsole_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350d7ce6) {
		if (inClassId<=(int)0x30719a75) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x30719a75;
		} else {
			return inClassId==(int)0x350d7ce6;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

static ::hx::widgets::EventFilter_obj _hx_hx_widgets_AppConsole__hx_hx_widgets_EventFilter= {
};

void *AppConsole_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x50f534d3: return &_hx_hx_widgets_AppConsole__hx_hx_widgets_EventFilter;
	}
	return super::_hx_getInterface(inHash);
}


hx::ObjectPtr< AppConsole_obj > AppConsole_obj::__new() {
	hx::ObjectPtr< AppConsole_obj > __this = new AppConsole_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AppConsole_obj > AppConsole_obj::__alloc(hx::Ctx *_hx_ctx) {
	AppConsole_obj *__this = (AppConsole_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AppConsole_obj), true, "hx.widgets.AppConsole"));
	*(void **)__this = AppConsole_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppConsole_obj::AppConsole_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AppConsole_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AppConsole_obj_sStaticStorageInfo = 0;
#endif

static void AppConsole_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppConsole_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AppConsole_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppConsole_obj::__mClass,"__mClass");
};

#endif

hx::Class AppConsole_obj::__mClass;

void AppConsole_obj::__register()
{
	hx::Object *dummy = new AppConsole_obj;
	AppConsole_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.AppConsole","\x53","\x9d","\xfa","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AppConsole_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AppConsole_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AppConsole_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppConsole_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppConsole_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
