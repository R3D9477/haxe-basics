// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_hx_widgets_App
#include <hx/widgets/App.h>
#endif
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
#ifndef INCLUDED_wx_widgets_Entry
#include <wx/widgets/Entry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc46ed79f42626d1_12_new,"hx.widgets.App","new",0x6858ed56,"hx.widgets.App.new","hx/widgets/App.hx",12,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_21_init,"hx.widgets.App","init",0xe22f755a,"hx.widgets.App.init","hx/widgets/App.hx",21,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_27_run,"hx.widgets.App","run",0x685c0441,"hx.widgets.App.run","hx/widgets/App.hx",27,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_30_exit,"hx.widgets.App","exit",0xdf923168,"hx.widgets.App.exit","hx/widgets/App.hx",30,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_44_get_appRef,"hx.widgets.App","get_appRef",0xcddcecc5,"hx.widgets.App.get_appRef","hx/widgets/App.hx",44,0x19b9a55c)
HX_LOCAL_STACK_FRAME(_hx_pos_cc46ed79f42626d1_36_setInstance,"hx.widgets.App","setInstance",0x1abdec4d,"hx.widgets.App.setInstance","hx/widgets/App.hx",36,0x19b9a55c)
namespace hx{
namespace widgets{

void App_obj::__construct(hx::Null< bool >  __o_setInstance){
bool setInstance = __o_setInstance.Default(true);
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_12_new)
HXLINE(  13)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxApp()))->reinterpret();
HXLINE(  14)		if (setInstance) {
HXLINE(  15)			::hx::widgets::App_obj::setInstance(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  18)		super::__construct();
            	}

Dynamic App_obj::__CreateEmpty() { return new App_obj; }

void *App_obj::_hx_vtable = 0;

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< App_obj > _hx_result = new App_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool App_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x30719a75) {
		if (inClassId<=(int)0x0143fd02) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0143fd02;
		} else {
			return inClassId==(int)0x30719a75;
		}
	} else {
		return inClassId==(int)0x350d7ce6 || inClassId==(int)0x7f575436;
	}
}

bool App_obj::init(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_21_init)
HXLINE(  22)		::wx::widgets::Entry_obj::start(::Sys_obj::args());
HXLINE(  23)		return this->get_appRef()->ptr->OnInit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,init,return )

void App_obj::run(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_27_run)
HXDLIN(  27)		this->get_appRef()->ptr->OnRun();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,run,(void))

void App_obj::exit(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_30_exit)
HXLINE(  31)		this->get_appRef()->ptr->OnExit();
HXLINE(  32)		::wx::widgets::Entry_obj::cleanup();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,exit,(void))

::cpp::Pointer<  wxApp > App_obj::get_appRef(){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_44_get_appRef)
HXDLIN(  44)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,get_appRef,return )

void App_obj::setInstance( ::hx::widgets::App instance){
            	HX_STACKFRAME(&_hx_pos_cc46ed79f42626d1_36_setInstance)
HXDLIN(  36)		wxApp::SetInstance(instance->get_appRef()->get_raw());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(App_obj,setInstance,(void))


hx::ObjectPtr< App_obj > App_obj::__new(hx::Null< bool >  __o_setInstance) {
	hx::ObjectPtr< App_obj > __this = new App_obj();
	__this->__construct(__o_setInstance);
	return __this;
}

hx::ObjectPtr< App_obj > App_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_setInstance) {
	App_obj *__this = (App_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(App_obj), true, "hx.widgets.App"));
	*(void **)__this = App_obj::_hx_vtable;
	__this->__construct(__o_setInstance);
	return __this;
}

App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(appRef,"appRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appRef,"appRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

hx::Val App_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"exit") ) { return hx::Val( exit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"appRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_appRef() : appRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_appRef") ) { return hx::Val( get_appRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool App_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"setInstance") ) { outValue = setInstance_dyn(); return true; }
	}
	return false;
}

hx::Val App_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"appRef") ) { appRef=inValue.Cast< ::cpp::Pointer<  wxApp > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("appRef","\x32","\x6f","\xc5","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo App_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxApp >*/ ,(int)offsetof(App_obj,appRef),HX_HCSTRING("appRef","\x32","\x6f","\xc5","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *App_obj_sStaticStorageInfo = 0;
#endif

static ::String App_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("appRef","\x32","\x6f","\xc5","\x8f"),
	HX_HCSTRING("get_appRef","\xfb","\xde","\x4c","\x80"),
	::String(null()) };

static void App_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void App_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#endif

hx::Class App_obj::__mClass;

static ::String App_obj_sStaticFields[] = {
	HX_HCSTRING("setInstance","\x57","\xe9","\x41","\x8a"),
	::String(null())
};

void App_obj::__register()
{
	hx::Object *dummy = new App_obj;
	App_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.App","\x64","\x4a","\x9e","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &App_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = App_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(App_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(App_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< App_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = App_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = App_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = App_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
