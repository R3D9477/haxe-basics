// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MenuItem
#define INCLUDED_hx_widgets_MenuItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_bc23844531366d98
#define INCLUDED_bc23844531366d98
#include "wx/menu.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Menu)
HX_DECLARE_CLASS2(hx,widgets,MenuItem)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MenuItem_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef MenuItem_obj OBJ_;
		MenuItem_obj();

	public:
		enum { _hx_ClassId = 0x4992f251 };

		void __construct( ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MenuItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MenuItem"); }
		static hx::ObjectPtr< MenuItem_obj > __new( ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id);
		static hx::ObjectPtr< MenuItem_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuItem_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MenuItem","\x72","\xae","\xe0","\x25"); }

		 ::hx::widgets::Bitmap bitmap;
		 ::hx::widgets::Bitmap set_bitmap( ::hx::widgets::Bitmap value);
		::Dynamic set_bitmap_dyn();

		::cpp::Pointer<  wxMenuItem > menuitemRef;
		::cpp::Pointer<  wxMenuItem > get_menuitemRef();
		::Dynamic get_menuitemRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MenuItem */ 
