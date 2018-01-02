// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Button
#define INCLUDED_hx_widgets_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_01922b43f2a15a43
#define INCLUDED_01922b43f2a15a43
#include "wx/button.h"
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,Button)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x71441431 };

		void __construct( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Button"); }
		static hx::ObjectPtr< Button_obj > __new( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Button_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		bool _hasBitmap;
		 ::hx::widgets::Bitmap get_bitmap();
		::Dynamic get_bitmap_dyn();

		 ::hx::widgets::Bitmap set_bitmap( ::hx::widgets::Bitmap value);
		::Dynamic set_bitmap_dyn();

		 cpp::Struct<wxDirection, cpp::EnumHandler> bitmapPosition;
		 cpp::Struct<wxDirection, cpp::EnumHandler> set_bitmapPosition( cpp::Struct<wxDirection, cpp::EnumHandler> value);

		::cpp::Pointer<  wxButton > buttonRef;
		::cpp::Pointer<  wxButton > get_buttonRef();
		::Dynamic get_buttonRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Button */ 
