// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MouseEvent
#define INCLUDED_hx_widgets_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_MouseState
#include <hx/widgets/MouseState.h>
#endif
#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,MouseEvent)
HX_DECLARE_CLASS2(hx,widgets,MouseState)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MouseEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();

	public:
		enum { _hx_ClassId = 0x418411ac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MouseEvent"); }
		static hx::ObjectPtr< MouseEvent_obj > __new();
		static hx::ObjectPtr< MouseEvent_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		static  ::hx::widgets::Event fromPointer(::cpp::Pointer<  wxEvent > ptr);
		static ::Dynamic fromPointer_dyn();

		int x;
		int y;
		int get_x();
		::Dynamic get_x_dyn();

		int get_y();
		::Dynamic get_y_dyn();

		::cpp::Pointer<  wxMouseEvent > mouseEventRef;
		::cpp::Pointer<  wxMouseEvent > get_mouseEventRef();
		::Dynamic get_mouseEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MouseEvent */ 
