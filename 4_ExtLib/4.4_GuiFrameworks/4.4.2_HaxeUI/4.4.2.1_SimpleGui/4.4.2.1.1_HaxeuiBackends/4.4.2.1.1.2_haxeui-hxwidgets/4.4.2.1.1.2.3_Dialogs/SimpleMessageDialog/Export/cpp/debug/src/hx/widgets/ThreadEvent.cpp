// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_ThreadEvent
#include <hx/widgets/ThreadEvent.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ff319b53176e9cc_6_new,"hx.widgets.ThreadEvent","new",0xab7fa025,"hx.widgets.ThreadEvent.new","hx/widgets/ThreadEvent.hx",6,0xb7d0d36d)
namespace hx{
namespace widgets{

void ThreadEvent_obj::__construct(hx::Null< int >  __o_eventType,hx::Null< int >  __o_id){
int eventType = __o_eventType.Default(-1);
int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_2ff319b53176e9cc_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		if ((eventType == (int)-1)) {
HXLINE(   9)			eventType = ::wx::widgets::EventType_obj::THREAD;
            		}
HXLINE(  11)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxThreadEvent(eventType,id)))->reinterpret();
            	}

Dynamic ThreadEvent_obj::__CreateEmpty() { return new ThreadEvent_obj; }

void *ThreadEvent_obj::_hx_vtable = 0;

Dynamic ThreadEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThreadEvent_obj > _hx_result = new ThreadEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ThreadEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x298862bb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x298862bb;
	} else {
		return inClassId==(int)0x42282a51;
	}
}


hx::ObjectPtr< ThreadEvent_obj > ThreadEvent_obj::__new(hx::Null< int >  __o_eventType,hx::Null< int >  __o_id) {
	hx::ObjectPtr< ThreadEvent_obj > __this = new ThreadEvent_obj();
	__this->__construct(__o_eventType,__o_id);
	return __this;
}

hx::ObjectPtr< ThreadEvent_obj > ThreadEvent_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_eventType,hx::Null< int >  __o_id) {
	ThreadEvent_obj *__this = (ThreadEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ThreadEvent_obj), true, "hx.widgets.ThreadEvent"));
	*(void **)__this = ThreadEvent_obj::_hx_vtable;
	__this->__construct(__o_eventType,__o_id);
	return __this;
}

ThreadEvent_obj::ThreadEvent_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ThreadEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ThreadEvent_obj_sStaticStorageInfo = 0;
#endif

static void ThreadEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThreadEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadEvent_obj::__mClass;

void ThreadEvent_obj::__register()
{
	hx::Object *dummy = new ThreadEvent_obj;
	ThreadEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ThreadEvent","\xb3","\xa9","\x81","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ThreadEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ThreadEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThreadEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
