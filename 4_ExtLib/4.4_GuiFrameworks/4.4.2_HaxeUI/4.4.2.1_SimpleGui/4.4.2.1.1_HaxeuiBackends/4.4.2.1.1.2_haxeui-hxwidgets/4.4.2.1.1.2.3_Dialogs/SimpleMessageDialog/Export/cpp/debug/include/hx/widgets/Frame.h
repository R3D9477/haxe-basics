// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Frame
#define INCLUDED_hx_widgets_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_cef5afac15da51b5
#define INCLUDED_cef5afac15da51b5
#include "wx/frame.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,MenuBar)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Frame_obj : public  ::hx::widgets::TopLevelWindow_obj
{
	public:
		typedef  ::hx::widgets::TopLevelWindow_obj super;
		typedef Frame_obj OBJ_;
		Frame_obj();

	public:
		enum { _hx_ClassId = 0x7c424752 };

		void __construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Frame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Frame"); }
		static hx::ObjectPtr< Frame_obj > __new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Frame_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Frame","\x0d","\xe8","\xb0","\x99"); }

		 ::hx::widgets::MenuBar get_menuBar();
		::Dynamic get_menuBar_dyn();

		 ::hx::widgets::MenuBar set_menuBar( ::hx::widgets::MenuBar value);
		::Dynamic set_menuBar_dyn();

		void center();
		::Dynamic center_dyn();

		::cpp::Pointer<  wxFrame > frameRef;
		::cpp::Pointer<  wxFrame > get_frameRef();
		::Dynamic get_frameRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Frame */ 
