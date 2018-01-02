// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StaticBitmap
#define INCLUDED_hx_widgets_StaticBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_eda345e1d8f45319
#define INCLUDED_eda345e1d8f45319
#include "wx/statbmp.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticBitmap)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticBitmap_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef StaticBitmap_obj OBJ_;
		StaticBitmap_obj();

	public:
		enum { _hx_ClassId = 0x6d554dd8 };

		void __construct( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticBitmap"); }
		static hx::ObjectPtr< StaticBitmap_obj > __new( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		static hx::ObjectPtr< StaticBitmap_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticBitmap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticBitmap","\x5d","\x63","\x92","\xd7"); }

		 ::hx::widgets::Bitmap get_bitmap();
		::Dynamic get_bitmap_dyn();

		 ::hx::widgets::Bitmap set_bitmap( ::hx::widgets::Bitmap value);
		::Dynamic set_bitmap_dyn();

		::cpp::Pointer<  wxStaticBitmap > bitmapRef;
		::cpp::Pointer<  wxStaticBitmap > get_bitmapRef();
		::Dynamic get_bitmapRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticBitmap */ 
