// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventMapper
#include <haxe/ui/backend/hxwidgets/EventMapper.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c388d041371b9a45_6_boot,"haxe.ui.backend.hxwidgets.EventMapper","boot",0xe9f40a00,"haxe.ui.backend.hxwidgets.EventMapper.boot","haxe/ui/backend/hxwidgets/EventMapper.hx",6,0x6406c2c0)
HX_LOCAL_STACK_FRAME(_hx_pos_c388d041371b9a45_15_boot,"haxe.ui.backend.hxwidgets.EventMapper","boot",0xe9f40a00,"haxe.ui.backend.hxwidgets.EventMapper.boot","haxe/ui/backend/hxwidgets/EventMapper.hx",15,0x6406c2c0)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void EventMapper_obj::__construct() { }

Dynamic EventMapper_obj::__CreateEmpty() { return new EventMapper_obj; }

void *EventMapper_obj::_hx_vtable = 0;

Dynamic EventMapper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventMapper_obj > _hx_result = new EventMapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventMapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x579bb7d2;
}

 ::haxe::ds::StringMap EventMapper_obj::HAXEUI_TO_WX;

 ::haxe::ds::IntMap EventMapper_obj::WX_TO_HAXEUI;


EventMapper_obj::EventMapper_obj()
{
}

bool EventMapper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"HAXEUI_TO_WX") ) { outValue = ( HAXEUI_TO_WX ); return true; }
		if (HX_FIELD_EQ(inName,"WX_TO_HAXEUI") ) { outValue = ( WX_TO_HAXEUI ); return true; }
	}
	return false;
}

bool EventMapper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"HAXEUI_TO_WX") ) { HAXEUI_TO_WX=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"WX_TO_HAXEUI") ) { WX_TO_HAXEUI=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EventMapper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo EventMapper_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &EventMapper_obj::HAXEUI_TO_WX,HX_HCSTRING("HAXEUI_TO_WX","\x60","\x92","\x69","\x92")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &EventMapper_obj::WX_TO_HAXEUI,HX_HCSTRING("WX_TO_HAXEUI","\xa0","\x74","\x81","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void EventMapper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventMapper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventMapper_obj::HAXEUI_TO_WX,"HAXEUI_TO_WX");
	HX_MARK_MEMBER_NAME(EventMapper_obj::WX_TO_HAXEUI,"WX_TO_HAXEUI");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventMapper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventMapper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventMapper_obj::HAXEUI_TO_WX,"HAXEUI_TO_WX");
	HX_VISIT_MEMBER_NAME(EventMapper_obj::WX_TO_HAXEUI,"WX_TO_HAXEUI");
};

#endif

hx::Class EventMapper_obj::__mClass;

static ::String EventMapper_obj_sStaticFields[] = {
	HX_HCSTRING("HAXEUI_TO_WX","\x60","\x92","\x69","\x92"),
	HX_HCSTRING("WX_TO_HAXEUI","\xa0","\x74","\x81","\xbd"),
	::String(null())
};

void EventMapper_obj::__register()
{
	hx::Object *dummy = new EventMapper_obj;
	EventMapper_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.EventMapper","\x60","\xad","\x25","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventMapper_obj::__GetStatic;
	__mClass->mSetStaticField = &EventMapper_obj::__SetStatic;
	__mClass->mMarkFunc = EventMapper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EventMapper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventMapper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventMapper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventMapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventMapper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EventMapper_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c388d041371b9a45_6_boot)
HXDLIN(   6)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(   6)			_g->set(HX_("mousemove",b6,6f,dc,09),::wx::widgets::EventType_obj::MOTION);
HXDLIN(   6)			_g->set(HX_("mouseover",f9,1d,34,0b),::wx::widgets::EventType_obj::ENTER_WINDOW);
HXDLIN(   6)			_g->set(HX_("mouseout",89,2f,36,a4),::wx::widgets::EventType_obj::LEAVE_WINDOW);
HXDLIN(   6)			_g->set(HX_("mousedown",07,85,e9,03),::wx::widgets::EventType_obj::LEFT_DOWN);
HXDLIN(   6)			_g->set(HX_("mouseup",c0,0f,73,c0),::wx::widgets::EventType_obj::LEFT_UP);
HXDLIN(   6)			_g->set(HX_("click",48,7c,5e,48),::wx::widgets::EventType_obj::BUTTON);
HXDLIN(   6)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c388d041371b9a45_6_boot)
HXDLIN(   6)		HAXEUI_TO_WX =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c388d041371b9a45_15_boot)
HXDLIN(  15)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::MOTION,HX_("mousemove",b6,6f,dc,09));
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::ENTER_WINDOW,HX_("mouseover",f9,1d,34,0b));
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::LEAVE_WINDOW,HX_("mouseout",89,2f,36,a4));
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::LEFT_DOWN,HX_("mousedown",07,85,e9,03));
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::LEFT_UP,HX_("mouseup",c0,0f,73,c0));
HXDLIN(  15)			_g->set(::wx::widgets::EventType_obj::BUTTON,HX_("click",48,7c,5e,48));
HXDLIN(  15)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c388d041371b9a45_15_boot)
HXDLIN(  15)		WX_TO_HAXEUI =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
