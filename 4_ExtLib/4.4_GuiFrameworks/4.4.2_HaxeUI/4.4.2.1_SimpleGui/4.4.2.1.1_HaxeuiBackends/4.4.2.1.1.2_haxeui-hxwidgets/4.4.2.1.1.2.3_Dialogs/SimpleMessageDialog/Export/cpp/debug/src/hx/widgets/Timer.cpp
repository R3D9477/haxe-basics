// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3fabc4d277dfeb98
#define INCLUDED_3fabc4d277dfeb98
#include "wx/timer.h"
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
#ifndef INCLUDED_hx_widgets_Timer
#include <hx/widgets/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5ac74360a9847e3_9_new,"hx.widgets.Timer","new",0xa412a93a,"hx.widgets.Timer.new","hx/widgets/Timer.hx",9,0xd1771678)
HX_LOCAL_STACK_FRAME(_hx_pos_d5ac74360a9847e3_18_start,"hx.widgets.Timer","start",0xb7d5b7bc,"hx.widgets.Timer.start","hx/widgets/Timer.hx",18,0xd1771678)
HX_LOCAL_STACK_FRAME(_hx_pos_d5ac74360a9847e3_22_stop,"hx.widgets.Timer","stop",0xef9ad5e8,"hx.widgets.Timer.stop","hx/widgets/Timer.hx",22,0xd1771678)
HX_LOCAL_STACK_FRAME(_hx_pos_d5ac74360a9847e3_30_get_timerRef,"hx.widgets.Timer","get_timerRef",0x3f4b2a7d,"hx.widgets.Timer.get_timerRef","hx/widgets/Timer.hx",30,0xd1771678)
namespace hx{
namespace widgets{

void Timer_obj::__construct( ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id){
int milliseconds = __o_milliseconds.Default(-1);
bool oneShot = __o_oneShot.Default(false);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d5ac74360a9847e3_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		::cpp::Pointer<  wxTimer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxTimer(::hx::widgets::Window_obj::toRaw(window),id)));
HXDLIN(  11)		this->_ref = _hx_tmp->reinterpret();
HXLINE(  12)		if ((milliseconds > (int)-1)) {
HXLINE(  13)			this->start(milliseconds,oneShot);
            		}
            	}

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f10784e) {
		if (inClassId<=(int)0x350d7ce6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
		} else {
			return inClassId==(int)0x7f10784e;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

bool Timer_obj::start(int milliseconds,hx::Null< bool >  __o_oneShot){
bool oneShot = __o_oneShot.Default(false);
            	HX_STACKFRAME(&_hx_pos_d5ac74360a9847e3_18_start)
HXDLIN(  18)		return this->get_timerRef()->ptr->Start(milliseconds,oneShot);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,start,return )

void Timer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_d5ac74360a9847e3_22_stop)
HXDLIN(  22)		this->get_timerRef()->ptr->Stop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

::cpp::Pointer<  wxTimer > Timer_obj::get_timerRef(){
            	HX_STACKFRAME(&_hx_pos_d5ac74360a9847e3_30_get_timerRef)
HXDLIN(  30)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_timerRef,return )


hx::ObjectPtr< Timer_obj > Timer_obj::__new( ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Timer_obj > __this = new Timer_obj();
	__this->__construct(window,__o_milliseconds,__o_oneShot,__o_id);
	return __this;
}

hx::ObjectPtr< Timer_obj > Timer_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window,hx::Null< int >  __o_milliseconds,hx::Null< bool >  __o_oneShot,hx::Null< int >  __o_id) {
	Timer_obj *__this = (Timer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Timer_obj), true, "hx.widgets.Timer"));
	*(void **)__this = Timer_obj::_hx_vtable;
	__this->__construct(window,__o_milliseconds,__o_oneShot,__o_id);
	return __this;
}

Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(timerRef,"timerRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timerRef,"timerRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timerRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_timerRef() : timerRef ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_timerRef") ) { return hx::Val( get_timerRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Timer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"timerRef") ) { timerRef=inValue.Cast< ::cpp::Pointer<  wxTimer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timerRef","\x8e","\x3a","\x21","\x01"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Timer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxTimer >*/ ,(int)offsetof(Timer_obj,timerRef),HX_HCSTRING("timerRef","\x8e","\x3a","\x21","\x01")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Timer_obj_sStaticStorageInfo = 0;
#endif

static ::String Timer_obj_sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timerRef","\x8e","\x3a","\x21","\x01"),
	HX_HCSTRING("get_timerRef","\x97","\xee","\x3a","\xb6"),
	::String(null()) };

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Object *dummy = new Timer_obj;
	Timer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Timer","\x48","\x44","\x8b","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Timer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
