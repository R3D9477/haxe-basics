// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Event
#define INCLUDED_hx_widgets_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Event_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();

	public:
		enum { _hx_ClassId = 0x298862bb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Event")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Event"); }
		static hx::ObjectPtr< Event_obj > __new();
		static hx::ObjectPtr< Event_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Event","\xfa","\x37","\xf2","\x08"); }

		static  ::hx::widgets::Event fromPointer(::cpp::Pointer<  wxEvent > ptr);
		static ::Dynamic fromPointer_dyn();

		::cpp::Pointer<  wxEvent > _ref;
		int eventType;
		int get_eventType();
		::Dynamic get_eventType_dyn();

		int id;
		int get_id();
		::Dynamic get_id_dyn();

		void skip(hx::Null< bool >  skip);
		::Dynamic skip_dyn();

		void stopPropagation();
		::Dynamic stopPropagation_dyn();

		 ::Dynamic convertTo(hx::Class clz);
		::Dynamic convertTo_dyn();

		::cpp::Pointer<  wxEvent > eventRef;
		::cpp::Pointer<  wxEvent > get_eventRef();
		::Dynamic get_eventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Event */ 
