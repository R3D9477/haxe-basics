// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MenuBar
#define INCLUDED_hx_widgets_MenuBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_bc23844531366d98
#define INCLUDED_bc23844531366d98
#include "wx/menu.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Menu)
HX_DECLARE_CLASS2(hx,widgets,MenuBar)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MenuBar_obj : public  ::hx::widgets::Window_obj
{
	public:
		typedef  ::hx::widgets::Window_obj super;
		typedef MenuBar_obj OBJ_;
		MenuBar_obj();

	public:
		enum { _hx_ClassId = 0x011780b9 };

		void __construct(hx::Null< int >  __o_style,hx::Null< bool >  __o_create);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MenuBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MenuBar"); }
		static hx::ObjectPtr< MenuBar_obj > __new(hx::Null< int >  __o_style,hx::Null< bool >  __o_create);
		static hx::ObjectPtr< MenuBar_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_style,hx::Null< bool >  __o_create);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuBar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MenuBar","\x54","\x59","\x9c","\x87"); }

		void append( ::hx::widgets::Menu menu,::String title);
		::Dynamic append_dyn();

		::cpp::Pointer<  wxMenuBar > menuBarRef;
		::cpp::Pointer<  wxMenuBar > get_menuBarRef();
		::Dynamic get_menuBarRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MenuBar */ 
