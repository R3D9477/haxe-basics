// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_EvtHandler
#define INCLUDED_hx_widgets_EvtHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES EvtHandler_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef EvtHandler_obj OBJ_;
		EvtHandler_obj();

	public:
		enum { _hx_ClassId = 0x350d7ce6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.EvtHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.EvtHandler"); }
		static hx::ObjectPtr< EvtHandler_obj > __new();
		static hx::ObjectPtr< EvtHandler_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EvtHandler_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("EvtHandler","\x47","\x43","\x5b","\x0d"); }

		 ::haxe::ds::IntMap _eventMap;
		virtual void bind(int event, ::Dynamic fn,hx::Null< int >  id);
		::Dynamic bind_dyn();

		void unbind(int event, ::Dynamic fn,hx::Null< int >  id);
		::Dynamic unbind_dyn();

		void handleEvent(::cpp::Pointer<  wxEvent > e);
		::Dynamic handleEvent_dyn();

		void executeHandlers(::cpp::Pointer<  wxEvent > e,hx::Null< int >  id);
		::Dynamic executeHandlers_dyn();

		virtual void queueEvent( ::hx::widgets::Event event);
		::Dynamic queueEvent_dyn();

		::cpp::Pointer<  wxEvtHandler > evtHandlerRef;
		::cpp::Pointer<  wxEvtHandler > get_evtHandlerRef();
		::Dynamic get_evtHandlerRef_dyn();


void onEvent(wxEvent & e) {
    e.ResumePropagation(wxEVENT_PROPAGATE_MAX);
    e.Skip();
    this->handleEvent(::cpp::Pointer_obj::fromRaw(&e));
}

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_EvtHandler */ 
