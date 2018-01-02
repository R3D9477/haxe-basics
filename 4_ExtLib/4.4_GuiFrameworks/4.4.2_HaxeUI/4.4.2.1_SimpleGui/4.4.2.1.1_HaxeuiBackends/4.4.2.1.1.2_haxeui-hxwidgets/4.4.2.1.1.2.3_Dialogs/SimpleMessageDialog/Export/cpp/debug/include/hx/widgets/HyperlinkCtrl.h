// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_HyperlinkCtrl
#define INCLUDED_hx_widgets_HyperlinkCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_aff82f6b7e6c9d31
#define INCLUDED_aff82f6b7e6c9d31
#include "wx/hyperlink.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,HyperlinkCtrl)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES HyperlinkCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef HyperlinkCtrl_obj OBJ_;
		HyperlinkCtrl_obj();

	public:
		enum { _hx_ClassId = 0x1cf8bbd2 };

		void __construct( ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.HyperlinkCtrl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.HyperlinkCtrl"); }
		static hx::ObjectPtr< HyperlinkCtrl_obj > __new( ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< HyperlinkCtrl_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HyperlinkCtrl_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HyperlinkCtrl","\x11","\x68","\x28","\xd3"); }

		::cpp::Pointer<  wxHyperlinkCtrl > linkRef;
		::cpp::Pointer<  wxHyperlinkCtrl > get_linkRef();
		::Dynamic get_linkRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_HyperlinkCtrl */ 
