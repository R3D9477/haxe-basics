// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Bitmap
#define INCLUDED_hx_widgets_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Image)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Rect)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Bitmap_obj : public  ::hx::widgets::GDIObject_obj
{
	public:
		typedef  ::hx::widgets::GDIObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();

	public:
		enum { _hx_ClassId = 0x7f83b99a };

		void __construct( ::hx::widgets::Image image);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Bitmap"); }
		static hx::ObjectPtr< Bitmap_obj > __new( ::hx::widgets::Image image);
		static hx::ObjectPtr< Bitmap_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Image image);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"); }

		static  ::hx::widgets::Bitmap fromHaxeResource(::String resourceId);
		static ::Dynamic fromHaxeResource_dyn();

		static  ::hx::widgets::Bitmap fromHaxeBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromHaxeBytes_dyn();

		int width;
		int get_width();
		::Dynamic get_width_dyn();

		int height;
		int get_height();
		::Dynamic get_height_dyn();

		bool isOk;
		bool get_isOk();
		::Dynamic get_isOk_dyn();

		 ::hx::widgets::Bitmap getSubBitmap( ::hx::widgets::Rect rect);
		::Dynamic getSubBitmap_dyn();

		::cpp::Pointer<  wxBitmap > bitmapRef;
		::cpp::Pointer<  wxBitmap > get_bitmapRef();
		::Dynamic get_bitmapRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Bitmap */ 
