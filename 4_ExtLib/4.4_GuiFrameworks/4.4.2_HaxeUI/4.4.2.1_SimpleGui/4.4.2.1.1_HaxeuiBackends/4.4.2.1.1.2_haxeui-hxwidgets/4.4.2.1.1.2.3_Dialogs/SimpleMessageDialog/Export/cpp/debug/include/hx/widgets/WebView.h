// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_WebView
#define INCLUDED_hx_widgets_WebView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_c0ef441ddce05964
#define INCLUDED_c0ef441ddce05964
#include "wx/webview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,WebView)
HX_DECLARE_CLASS2(hx,widgets,Window)

#undef RegisterClass
namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES WebView_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef WebView_obj OBJ_;
		WebView_obj();

	public:
		enum { _hx_ClassId = 0x3ccb21fa };

		void __construct( ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.WebView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.WebView"); }
		static hx::ObjectPtr< WebView_obj > __new( ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< WebView_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WebView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WebView","\xf9","\x04","\x44","\x2a"); }

		void loadURL(::String url);
		::Dynamic loadURL_dyn();

		::cpp::Pointer<  wxWebView > webViewRef;
		::cpp::Pointer<  wxWebView > get_webViewRef();
		::Dynamic get_webViewRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_WebView */ 
