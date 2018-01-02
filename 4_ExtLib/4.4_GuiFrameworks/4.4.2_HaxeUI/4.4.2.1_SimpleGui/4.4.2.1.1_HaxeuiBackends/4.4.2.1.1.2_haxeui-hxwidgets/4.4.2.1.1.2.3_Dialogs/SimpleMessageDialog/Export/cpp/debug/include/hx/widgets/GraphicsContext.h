// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GraphicsContext
#define INCLUDED_hx_widgets_GraphicsContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GraphicsObject
#include <hx/widgets/GraphicsObject.h>
#endif
#ifndef INCLUDED_934d0db102cb1d0b
#define INCLUDED_934d0db102cb1d0b
#include "wx/graphics.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,Brush)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Font)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,GraphicsContext)
HX_DECLARE_CLASS2(hx,widgets,GraphicsObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Pen)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GraphicsContext_obj : public  ::hx::widgets::GraphicsObject_obj
{
	public:
		typedef  ::hx::widgets::GraphicsObject_obj super;
		typedef GraphicsContext_obj OBJ_;
		GraphicsContext_obj();

	public:
		enum { _hx_ClassId = 0x36b9d245 };

		void __construct( ::hx::widgets::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GraphicsContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GraphicsContext"); }
		static hx::ObjectPtr< GraphicsContext_obj > __new( ::hx::widgets::Window window);
		static hx::ObjectPtr< GraphicsContext_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicsContext","\x44","\x4c","\x5c","\x99"); }

		void strokeLine(Float x1,Float y1,Float x2,Float y2);
		::Dynamic strokeLine_dyn();

		 ::hx::widgets::Pen pen;
		 ::hx::widgets::Pen set_pen( ::hx::widgets::Pen value);
		::Dynamic set_pen_dyn();

		 ::hx::widgets::Brush brush;
		 ::hx::widgets::Brush set_brush( ::hx::widgets::Brush value);
		::Dynamic set_brush_dyn();

		void drawText(::String text,Float x,Float y);
		::Dynamic drawText_dyn();

		void drawRoundedRectangle(Float x,Float y,Float width,Float height,Float radius);
		::Dynamic drawRoundedRectangle_dyn();

		void drawBitmap( ::hx::widgets::Bitmap bmp,hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  width,hx::Null< Float >  height);
		::Dynamic drawBitmap_dyn();

		 cpp::Struct<wxAntialiasMode, cpp::EnumHandler> antialiasMode;
		 cpp::Struct<wxAntialiasMode, cpp::EnumHandler> set_antialiasMode( cpp::Struct<wxAntialiasMode, cpp::EnumHandler> value);
		::Dynamic set_antialiasMode_dyn();

		 cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> interpolationQuality;
		 cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> set_interpolationQuality( cpp::Struct<wxInterpolationQuality, cpp::EnumHandler> value);
		::Dynamic set_interpolationQuality_dyn();

		void setFont( ::hx::widgets::Font font,hx::Null< int >  color);

		::cpp::Pointer<  wxGraphicsContext > graphicscontextRef;
		::cpp::Pointer<  wxGraphicsContext > get_graphicscontextRef();
		::Dynamic get_graphicscontextRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GraphicsContext */ 
