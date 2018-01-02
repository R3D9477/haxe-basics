// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
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
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e27a5813018a057_21_new,"hx.widgets.EvtHandler","new",0x9f8752b6,"hx.widgets.EvtHandler.new","hx/widgets/EvtHandler.hx",21,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_24_bind,"hx.widgets.EvtHandler","bind",0xeef57ea7,"hx.widgets.EvtHandler.bind","hx/widgets/EvtHandler.hx",24,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_45_unbind,"hx.widgets.EvtHandler","unbind",0x282e1400,"hx.widgets.EvtHandler.unbind","hx/widgets/EvtHandler.hx",45,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_67_handleEvent,"hx.widgets.EvtHandler","handleEvent",0x26ad3ba8,"hx.widgets.EvtHandler.handleEvent","hx/widgets/EvtHandler.hx",67,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_73_executeHandlers,"hx.widgets.EvtHandler","executeHandlers",0x38105014,"hx.widgets.EvtHandler.executeHandlers","hx/widgets/EvtHandler.hx",73,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_94_queueEvent,"hx.widgets.EvtHandler","queueEvent",0x187af133,"hx.widgets.EvtHandler.queueEvent","hx/widgets/EvtHandler.hx",94,0x9cef9338)
HX_LOCAL_STACK_FRAME(_hx_pos_5e27a5813018a057_102_get_evtHandlerRef,"hx.widgets.EvtHandler","get_evtHandlerRef",0x3a97bc99,"hx.widgets.EvtHandler.get_evtHandlerRef","hx/widgets/EvtHandler.hx",102,0x9cef9338)
namespace hx{
namespace widgets{

void EvtHandler_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5e27a5813018a057_21_new)
HXDLIN(  21)		this->_eventMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic EvtHandler_obj::__CreateEmpty() { return new EvtHandler_obj; }

void *EvtHandler_obj::_hx_vtable = 0;

Dynamic EvtHandler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EvtHandler_obj > _hx_result = new EvtHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EvtHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350d7ce6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

static ::hx::widgets::Trackable_obj _hx_hx_widgets_EvtHandler__hx_hx_widgets_Trackable= {
};

void *EvtHandler_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfb359cc6: return &_hx_hx_widgets_EvtHandler__hx_hx_widgets_Trackable;
	}
	return super::_hx_getInterface(inHash);
}

void EvtHandler_obj::bind(int event, ::Dynamic fn,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_5e27a5813018a057_24_bind)
HXLINE(  25)		 ::haxe::ds::IntMap mapForId = this->_eventMap->get(id).StaticCast<  ::haxe::ds::IntMap >();
HXLINE(  26)		if (hx::IsNull( mapForId )) {
HXLINE(  27)			mapForId =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  28)			this->_eventMap->set(id,mapForId);
            		}
HXLINE(  31)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(event)) );
HXLINE(  32)		if (hx::IsNull( eventList )) {
HXLINE(  33)			eventList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  34)			mapForId->set(event,eventList);
            		}
HXLINE(  37)		eventList->push(fn);
HXLINE(  39)		if (::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::hx::widgets::Window >())) {
HXLINE(  40)			::cpp::Pointer<  wxWindow > win = hx::TCast<  ::hx::widgets::Window >::cast(hx::ObjectPtr<OBJ_>(this))->get_windowRef();
HXLINE(  41)			win->ptr->Bind(event, &hx::widgets::EvtHandler_obj::onEvent, this, id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EvtHandler_obj,bind,(void))

void EvtHandler_obj::unbind(int event, ::Dynamic fn,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_45_unbind)
HXLINE(  46)		 ::haxe::ds::IntMap mapForId = this->_eventMap->get(id).StaticCast<  ::haxe::ds::IntMap >();
HXLINE(  47)		if (hx::IsNull( mapForId )) {
HXLINE(  48)			return;
            		}
HXLINE(  51)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(event)) );
HXLINE(  52)		if (hx::IsNull( eventList )) {
HXLINE(  53)			return;
            		}
HXLINE(  56)		eventList->remove(fn);
HXLINE(  57)		if ((eventList->length == (int)0)) {
HXLINE(  58)			mapForId->remove(event);
            		}
HXLINE(  61)		if (::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::hx::widgets::Window >())) {
HXLINE(  62)			::cpp::Pointer<  wxWindow > win = hx::TCast<  ::hx::widgets::Window >::cast(hx::ObjectPtr<OBJ_>(this))->get_windowRef();
HXLINE(  63)			win->ptr->Unbind(event, &hx::widgets::EvtHandler_obj::onEvent, this, id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EvtHandler_obj,unbind,(void))

void EvtHandler_obj::handleEvent(::cpp::Pointer<  wxEvent > e){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_67_handleEvent)
HXLINE(  68)		::cpp::Pointer<  wxEvent > tmp = e;
HXDLIN(  68)		this->executeHandlers(tmp,e->ptr->GetId());
HXLINE(  69)		::cpp::Pointer<  wxEvent > tmp1 = e;
HXDLIN(  69)		this->executeHandlers(tmp1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,handleEvent,(void))

void EvtHandler_obj::executeHandlers(::cpp::Pointer<  wxEvent > e,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_73_executeHandlers)
HXLINE(  74)		 ::haxe::ds::IntMap mapForId = this->_eventMap->get(id).StaticCast<  ::haxe::ds::IntMap >();
HXLINE(  75)		if (hx::IsNull( mapForId )) {
HXLINE(  76)			return;
            		}
HXLINE(  79)		::Array< ::Dynamic> eventList = ( (::Array< ::Dynamic>)(mapForId->get(e->ptr->GetEventType())) );
HXLINE(  80)		if (hx::IsNull( eventList )) {
HXLINE(  81)			return;
            		}
HXLINE(  84)		{
HXLINE(  84)			int _g = (int)0;
HXDLIN(  84)			while((_g < eventList->length)){
HXLINE(  84)				 ::Dynamic fn = eventList->__get(_g);
HXDLIN(  84)				_g = (_g + (int)1);
HXLINE(  85)				::cpp::Pointer<  wxEvent > tmp = e;
HXDLIN(  85)				fn(::hx::widgets::Event_obj::fromPointer(tmp));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EvtHandler_obj,executeHandlers,(void))

void EvtHandler_obj::queueEvent( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_94_queueEvent)
HXDLIN(  94)		 wxEvtHandler * _hx_tmp = this->get_evtHandlerRef()->ptr;
HXDLIN(  94)		(*(_hx_tmp)).QueueEvent(event->get_eventRef()->get_raw());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EvtHandler_obj,queueEvent,(void))

::cpp::Pointer<  wxEvtHandler > EvtHandler_obj::get_evtHandlerRef(){
            	HX_STACKFRAME(&_hx_pos_5e27a5813018a057_102_get_evtHandlerRef)
HXDLIN( 102)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EvtHandler_obj,get_evtHandlerRef,return )


hx::ObjectPtr< EvtHandler_obj > EvtHandler_obj::__new() {
	hx::ObjectPtr< EvtHandler_obj > __this = new EvtHandler_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< EvtHandler_obj > EvtHandler_obj::__alloc(hx::Ctx *_hx_ctx) {
	EvtHandler_obj *__this = (EvtHandler_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EvtHandler_obj), true, "hx.widgets.EvtHandler"));
	*(void **)__this = EvtHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EvtHandler_obj::EvtHandler_obj()
{
}

void EvtHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EvtHandler);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(evtHandlerRef,"evtHandlerRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EvtHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(evtHandlerRef,"evtHandlerRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val EvtHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return hx::Val( bind_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unbind") ) { return hx::Val( unbind_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return hx::Val( _eventMap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"queueEvent") ) { return hx::Val( queueEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return hx::Val( handleEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"evtHandlerRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_evtHandlerRef() : evtHandlerRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"executeHandlers") ) { return hx::Val( executeHandlers_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_evtHandlerRef") ) { return hx::Val( get_evtHandlerRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EvtHandler_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"evtHandlerRef") ) { evtHandlerRef=inValue.Cast< ::cpp::Pointer<  wxEvtHandler > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EvtHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08"));
	outFields->push(HX_HCSTRING("evtHandlerRef","\x6c","\x04","\x0d","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EvtHandler_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(EvtHandler_obj,_eventMap),HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08")},
	{hx::fsObject /*::cpp::Pointer< wxEvtHandler >*/ ,(int)offsetof(EvtHandler_obj,evtHandlerRef),HX_HCSTRING("evtHandlerRef","\x6c","\x04","\x0d","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EvtHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String EvtHandler_obj_sMemberFields[] = {
	HX_HCSTRING("_eventMap","\x01","\x7e","\x68","\x08"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("unbind","\x96","\xfc","\xeb","\x5e"),
	HX_HCSTRING("handleEvent","\x52","\x73","\x0e","\x28"),
	HX_HCSTRING("executeHandlers","\xbe","\xa4","\xf7","\xe9"),
	HX_HCSTRING("queueEvent","\xc9","\xdc","\x67","\x46"),
	HX_HCSTRING("evtHandlerRef","\x6c","\x04","\x0d","\xae"),
	HX_HCSTRING("get_evtHandlerRef","\xc3","\x0f","\x7d","\xb4"),
	::String(null()) };

static void EvtHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EvtHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EvtHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EvtHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class EvtHandler_obj::__mClass;

void EvtHandler_obj::__register()
{
	hx::Object *dummy = new EvtHandler_obj;
	EvtHandler_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.EvtHandler","\xc4","\x7f","\x96","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EvtHandler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EvtHandler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EvtHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EvtHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EvtHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EvtHandler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
