// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#define INCLUDED_hx_widgets_TopLevelWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_76c96c3c0bae3300
#define INCLUDED_76c96c3c0bae3300
#include "wx/toplevel.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TopLevelWindow_obj : public  ::hx::widgets::NonOwnedWindow_obj
{
	public:
		typedef  ::hx::widgets::NonOwnedWindow_obj super;
		typedef TopLevelWindow_obj OBJ_;
		TopLevelWindow_obj();

	public:
		enum { _hx_ClassId = 0x2d54613e };

		void __construct( ::hx::widgets::Window parent, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TopLevelWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.TopLevelWindow"); }
		static hx::ObjectPtr< TopLevelWindow_obj > __new( ::hx::widgets::Window parent, ::Dynamic id);
		static hx::ObjectPtr< TopLevelWindow_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TopLevelWindow_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TopLevelWindow","\x1f","\x6c","\xdb","\xe0"); }

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		::cpp::Pointer<  wxTopLevelWindow > topLevelWindowRef;
		::cpp::Pointer<  wxTopLevelWindow > get_topLevelWindowRef();
		::Dynamic get_topLevelWindowRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TopLevelWindow */ 
