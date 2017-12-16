// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Menu
#define INCLUDED_hx_widgets_Menu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_bc23844531366d98
#define INCLUDED_bc23844531366d98
#include "wx/menu.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Menu)
HX_DECLARE_CLASS2(hx,widgets,MenuItem)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Menu_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef Menu_obj OBJ_;
		Menu_obj();

	public:
		enum { _hx_ClassId = 0x221f9a1e };

		void __construct(::String text,hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Menu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Menu"); }
		static hx::ObjectPtr< Menu_obj > __new(::String text,hx::Null< int >  __o_style);
		static hx::ObjectPtr< Menu_obj > __alloc(hx::Ctx *_hx_ctx,::String text,hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Menu_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Menu","\xbf","\x71","\x32","\x33"); }

		 ::hx::widgets::MenuItem appendItem( ::hx::widgets::MenuItem menuItem);
		::Dynamic appendItem_dyn();

		 ::hx::widgets::MenuItem append(int id,::String text);
		::Dynamic append_dyn();

		 ::hx::widgets::MenuItem appendCheckItem(int id,::String text);
		::Dynamic appendCheckItem_dyn();

		 ::hx::widgets::MenuItem appendRadioItem(int id,::String text);
		::Dynamic appendRadioItem_dyn();

		 ::hx::widgets::MenuItem appendSeparator();
		::Dynamic appendSeparator_dyn();

		 ::hx::widgets::MenuItem appendSubMenu( ::hx::widgets::Menu menu,::String text);
		::Dynamic appendSubMenu_dyn();

		::cpp::Pointer<  wxMenu > menuRef;
		::cpp::Pointer<  wxMenu > get_menuRef();
		::Dynamic get_menuRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Menu */ 
