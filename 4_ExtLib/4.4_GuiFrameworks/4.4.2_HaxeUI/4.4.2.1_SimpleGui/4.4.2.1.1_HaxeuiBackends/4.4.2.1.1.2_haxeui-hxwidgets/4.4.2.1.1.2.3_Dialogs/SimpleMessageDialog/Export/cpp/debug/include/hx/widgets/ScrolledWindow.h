// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ScrolledWindow
#define INCLUDED_hx_widgets_ScrolledWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_12c1599105de71f3
#define INCLUDED_12c1599105de71f3
#include "wx/scrolwin.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,ScrolledWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ScrolledWindow_obj : public  ::hx::widgets::Window_obj
{
	public:
		typedef  ::hx::widgets::Window_obj super;
		typedef ScrolledWindow_obj OBJ_;
		ScrolledWindow_obj();

	public:
		enum { _hx_ClassId = 0x6f2df217 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ScrolledWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ScrolledWindow"); }
		static hx::ObjectPtr< ScrolledWindow_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ScrolledWindow_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrolledWindow_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScrolledWindow","\xdc","\x32","\xff","\xb2"); }

		void setScrollbars(int pixelsPerUnitX,int pixelsPerUnitY,int noUnitsX,int noUnitsY,hx::Null< int >  xPos,hx::Null< int >  yPos,hx::Null< bool >  noRefresh);
		::Dynamic setScrollbars_dyn();

		::cpp::Pointer<  wxScrolledWindow > scrolledWindowRef;
		::cpp::Pointer<  wxScrolledWindow > get_scrolledWindowRef();
		::Dynamic get_scrolledWindowRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ScrolledWindow */ 
