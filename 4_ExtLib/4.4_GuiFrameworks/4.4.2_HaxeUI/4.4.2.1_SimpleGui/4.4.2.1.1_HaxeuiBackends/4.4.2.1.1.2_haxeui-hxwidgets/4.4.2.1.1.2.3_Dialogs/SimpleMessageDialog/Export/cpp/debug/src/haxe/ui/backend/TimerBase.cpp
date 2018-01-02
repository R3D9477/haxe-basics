// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerBase
#include <haxe/ui/backend/TimerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_Platform
#include <haxe/ui/backend/hxwidgets/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Timer
#include <hx/widgets/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_963f7b7253fd6546_19_new,"haxe.ui.backend.TimerBase","new",0x0410581c,"haxe.ui.backend.TimerBase.new","haxe/ui/backend/TimerBase.hx",19,0xa8d7e2f5)
HX_DEFINE_STACK_FRAME(_hx_pos_963f7b7253fd6546_12_new,"haxe.ui.backend.TimerBase","new",0x0410581c,"haxe.ui.backend.TimerBase.new","haxe/ui/backend/TimerBase.hx",12,0xa8d7e2f5)
HX_LOCAL_STACK_FRAME(_hx_pos_963f7b7253fd6546_24_stop,"haxe.ui.backend.TimerBase","stop",0x8d962cc6,"haxe.ui.backend.TimerBase.stop","haxe/ui/backend/TimerBase.hx",24,0xa8d7e2f5)
namespace haxe{
namespace ui{
namespace backend{

void TimerBase_obj::__construct(int delay, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::hx::widgets::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_963f7b7253fd6546_19_new)
HXLINE(  19)			callback();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_963f7b7253fd6546_12_new)
HXLINE(  13)		bool _hx_tmp;
HXDLIN(  13)		if (::haxe::ui::backend::hxwidgets::Platform_obj::get_isMac()) {
HXLINE(  13)			_hx_tmp = (delay == (int)0);
            		}
            		else {
HXLINE(  13)			_hx_tmp = false;
            		}
HXDLIN(  13)		if (_hx_tmp) {
HXLINE(  14)			delay = (int)1;
            		}
HXLINE(  16)		 ::hx::widgets::Frame frame = ( ( ::hx::widgets::Frame)(::haxe::ui::core::Screen_obj::get_instance()->options->__Field(HX_("frame",2d,78,83,06),hx::paccDynamic)) );
HXLINE(  17)		this->_timer =  ::hx::widgets::Timer_obj::__alloc( HX_CTX ,frame,delay,null(),null());
HXLINE(  18)		frame->bind(::wx::widgets::EventType_obj::TIMER, ::Dynamic(new _hx_Closure_0(callback)),null());
            	}

Dynamic TimerBase_obj::__CreateEmpty() { return new TimerBase_obj; }

void *TimerBase_obj::_hx_vtable = 0;

Dynamic TimerBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TimerBase_obj > _hx_result = new TimerBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TimerBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cb284c4;
}

void TimerBase_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_963f7b7253fd6546_24_stop)
HXDLIN(  24)		this->_timer->stop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TimerBase_obj,stop,(void))


hx::ObjectPtr< TimerBase_obj > TimerBase_obj::__new(int delay, ::Dynamic callback) {
	hx::ObjectPtr< TimerBase_obj > __this = new TimerBase_obj();
	__this->__construct(delay,callback);
	return __this;
}

hx::ObjectPtr< TimerBase_obj > TimerBase_obj::__alloc(hx::Ctx *_hx_ctx,int delay, ::Dynamic callback) {
	TimerBase_obj *__this = (TimerBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TimerBase_obj), true, "haxe.ui.backend.TimerBase"));
	*(void **)__this = TimerBase_obj::_hx_vtable;
	__this->__construct(delay,callback);
	return __this;
}

TimerBase_obj::TimerBase_obj()
{
}

void TimerBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerBase);
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_END_CLASS();
}

void TimerBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
}

hx::Val TimerBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return hx::Val( _timer ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TimerBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::hx::widgets::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TimerBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::widgets::Timer*/ ,(int)offsetof(TimerBase_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TimerBase_obj_sStaticStorageInfo = 0;
#endif

static ::String TimerBase_obj_sMemberFields[] = {
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void TimerBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TimerBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerBase_obj::__mClass,"__mClass");
};

#endif

hx::Class TimerBase_obj::__mClass;

void TimerBase_obj::__register()
{
	hx::Object *dummy = new TimerBase_obj;
	TimerBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.TimerBase","\x2a","\x5a","\xcb","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TimerBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TimerBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimerBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TimerBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimerBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimerBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
