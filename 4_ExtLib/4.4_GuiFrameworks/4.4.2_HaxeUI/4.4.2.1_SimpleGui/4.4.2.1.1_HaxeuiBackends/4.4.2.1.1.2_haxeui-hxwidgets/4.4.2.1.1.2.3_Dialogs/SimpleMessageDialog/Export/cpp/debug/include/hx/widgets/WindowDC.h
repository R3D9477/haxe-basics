// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_WindowDC
#define INCLUDED_hx_widgets_WindowDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_e91341a8faf5e3a2
#define INCLUDED_e91341a8faf5e3a2
#include "wx/dcclient.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS2(hx,widgets,WindowDC)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES WindowDC_obj : public  ::hx::widgets::DC_obj
{
	public:
		typedef  ::hx::widgets::DC_obj super;
		typedef WindowDC_obj OBJ_;
		WindowDC_obj();

	public:
		enum { _hx_ClassId = 0x7b31ab6e };

		void __construct( ::hx::widgets::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.WindowDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.WindowDC"); }
		static hx::ObjectPtr< WindowDC_obj > __new( ::hx::widgets::Window window);
		static hx::ObjectPtr< WindowDC_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowDC_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WindowDC","\x8f","\x67","\x7f","\x57"); }

		::cpp::Pointer<  wxWindowDC > windowDCRef;
		::cpp::Pointer<  wxWindowDC > get_windowDCRef();
		::Dynamic get_windowDCRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_WindowDC */ 
