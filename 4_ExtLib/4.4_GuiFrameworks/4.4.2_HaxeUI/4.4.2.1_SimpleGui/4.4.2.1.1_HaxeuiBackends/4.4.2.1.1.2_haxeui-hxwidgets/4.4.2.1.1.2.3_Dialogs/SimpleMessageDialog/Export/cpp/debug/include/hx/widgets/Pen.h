// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Pen
#define INCLUDED_hx_widgets_Pen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_fae0d7f0d9ceb2f8
#define INCLUDED_fae0d7f0d9ceb2f8
#include "wx/pen.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Pen)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Pen_obj : public  ::hx::widgets::GDIObject_obj
{
	public:
		typedef  ::hx::widgets::GDIObject_obj super;
		typedef Pen_obj OBJ_;
		Pen_obj();

	public:
		enum { _hx_ClassId = 0x014f553a };

		void __construct(hx::Null< int >  __o_colour,hx::Null< int >  __o_width);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Pen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Pen"); }
		static hx::ObjectPtr< Pen_obj > __new(hx::Null< int >  __o_colour,hx::Null< int >  __o_width);
		static hx::ObjectPtr< Pen_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour,hx::Null< int >  __o_width);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pen_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Pen","\xb9","\x0c","\x3d","\x00"); }

		int get_colour();
		::Dynamic get_colour_dyn();

		int set_colour(int value);
		::Dynamic set_colour_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int set_width(int value);
		::Dynamic set_width_dyn();

		::cpp::Pointer<  wxPen > penRef;
		::cpp::Pointer<  wxPen > get_penRef();
		::Dynamic get_penRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Pen */ 
