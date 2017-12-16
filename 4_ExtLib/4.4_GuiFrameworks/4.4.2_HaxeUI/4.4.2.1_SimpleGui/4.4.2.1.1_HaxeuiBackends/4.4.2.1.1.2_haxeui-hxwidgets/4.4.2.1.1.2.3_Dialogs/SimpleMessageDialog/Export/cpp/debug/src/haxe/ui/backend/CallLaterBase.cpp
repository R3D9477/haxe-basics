// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_CallLaterBase
#include <haxe/ui/backend/CallLaterBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
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
#ifndef INCLUDED_hx_widgets_ThreadEvent
#include <hx/widgets/ThreadEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a442448af8f8164e_10_new,"haxe.ui.backend.CallLaterBase","new",0x948f8465,"haxe.ui.backend.CallLaterBase.new","haxe/ui/backend/CallLaterBase.hx",10,0x959db74c)
HX_LOCAL_STACK_FRAME(_hx_pos_a442448af8f8164e_16_onThreadEvent,"haxe.ui.backend.CallLaterBase","onThreadEvent",0x605c4a56,"haxe.ui.backend.CallLaterBase.onThreadEvent","haxe/ui/backend/CallLaterBase.hx",16,0x959db74c)
namespace haxe{
namespace ui{
namespace backend{

void CallLaterBase_obj::__construct( ::Dynamic fn){
            	HX_GC_STACKFRAME(&_hx_pos_a442448af8f8164e_10_new)
HXLINE(  11)		this->_fn = fn;
HXLINE(  12)		::haxe::ui::core::Screen_obj::get_instance()->get_frame()->bind(::wx::widgets::EventType_obj::THREAD,this->onThreadEvent_dyn(),null());
HXLINE(  13)		 ::hx::widgets::Frame _hx_tmp = ::haxe::ui::core::Screen_obj::get_instance()->get_frame();
HXDLIN(  13)		_hx_tmp->queueEvent( ::hx::widgets::ThreadEvent_obj::__alloc( HX_CTX ,null(),null()));
            	}

Dynamic CallLaterBase_obj::__CreateEmpty() { return new CallLaterBase_obj; }

void *CallLaterBase_obj::_hx_vtable = 0;

Dynamic CallLaterBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallLaterBase_obj > _hx_result = new CallLaterBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallLaterBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57a7dd29;
}

void CallLaterBase_obj::onThreadEvent( ::hx::widgets::Event e){
            	HX_STACKFRAME(&_hx_pos_a442448af8f8164e_16_onThreadEvent)
HXLINE(  17)		::haxe::ui::core::Screen_obj::get_instance()->get_frame()->unbind(::wx::widgets::EventType_obj::THREAD,this->onThreadEvent_dyn(),null());
HXLINE(  18)		this->_fn();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallLaterBase_obj,onThreadEvent,(void))


hx::ObjectPtr< CallLaterBase_obj > CallLaterBase_obj::__new( ::Dynamic fn) {
	hx::ObjectPtr< CallLaterBase_obj > __this = new CallLaterBase_obj();
	__this->__construct(fn);
	return __this;
}

hx::ObjectPtr< CallLaterBase_obj > CallLaterBase_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic fn) {
	CallLaterBase_obj *__this = (CallLaterBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallLaterBase_obj), true, "haxe.ui.backend.CallLaterBase"));
	*(void **)__this = CallLaterBase_obj::_hx_vtable;
	__this->__construct(fn);
	return __this;
}

CallLaterBase_obj::CallLaterBase_obj()
{
}

void CallLaterBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallLaterBase);
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_END_CLASS();
}

void CallLaterBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
}

hx::Val CallLaterBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return hx::Val( _fn ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onThreadEvent") ) { return hx::Val( onThreadEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CallLaterBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CallLaterBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CallLaterBase_obj,_fn),HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CallLaterBase_obj_sStaticStorageInfo = 0;
#endif

static ::String CallLaterBase_obj_sMemberFields[] = {
	HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00"),
	HX_HCSTRING("onThreadEvent","\x11","\x7e","\x9f","\x2c"),
	::String(null()) };

static void CallLaterBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallLaterBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallLaterBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallLaterBase_obj::__mClass,"__mClass");
};

#endif

hx::Class CallLaterBase_obj::__mClass;

void CallLaterBase_obj::__register()
{
	hx::Object *dummy = new CallLaterBase_obj;
	CallLaterBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.CallLaterBase","\xf3","\x6d","\x3a","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallLaterBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CallLaterBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CallLaterBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallLaterBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallLaterBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallLaterBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
