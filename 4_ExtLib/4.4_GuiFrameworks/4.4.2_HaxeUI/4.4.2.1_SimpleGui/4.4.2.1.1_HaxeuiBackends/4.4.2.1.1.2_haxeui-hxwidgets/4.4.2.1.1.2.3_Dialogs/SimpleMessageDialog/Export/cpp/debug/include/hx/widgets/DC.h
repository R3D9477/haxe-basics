// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_DC
#define INCLUDED_hx_widgets_DC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_e91341a8faf5e3a2
#define INCLUDED_e91341a8faf5e3a2
#include "wx/dcclient.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Brush)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Pen)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DC_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef DC_obj OBJ_;
		DC_obj();

	public:
		enum { _hx_ClassId = 0x6e905e56 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.DC"); }
		static hx::ObjectPtr< DC_obj > __new();
		static hx::ObjectPtr< DC_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DC_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DC","\x7f","\x3b","\x00","\x00"); }

		void clear();
		::Dynamic clear_dyn();

		void drawLine(int x1,int y1,int x2,int y2);
		::Dynamic drawLine_dyn();

		void setPen( ::hx::widgets::Pen pen);
		::Dynamic setPen_dyn();

		void setBrush( ::hx::widgets::Brush brush);
		::Dynamic setBrush_dyn();

		void drawText(::String text,int x,int y);
		::Dynamic drawText_dyn();

		void drawRoundedRectangle(int x,int y,int width,int height,Float radius);
		::Dynamic drawRoundedRectangle_dyn();

		void drawCircle(int x,int y,int radius);
		::Dynamic drawCircle_dyn();

		 ::hx::widgets::Brush background;
		 ::hx::widgets::Brush set_background( ::hx::widgets::Brush value);
		::Dynamic set_background_dyn();

		::cpp::Pointer<  wxDC > dcRef;
		::cpp::Pointer<  wxDC > get_dcRef();
		::Dynamic get_dcRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DC */ 
