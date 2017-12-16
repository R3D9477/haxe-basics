// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ListItem
#define INCLUDED_hx_widgets_ListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ListItem)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ListItem_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef ListItem_obj OBJ_;
		ListItem_obj();

	public:
		enum { _hx_ClassId = 0x23189490 };

		void __construct(::String text,hx::Null< int >  __o_image,hx::Null< int >  __o_column,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ListItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ListItem"); }
		static hx::ObjectPtr< ListItem_obj > __new(::String text,hx::Null< int >  __o_image,hx::Null< int >  __o_column,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ListItem_obj > __alloc(hx::Ctx *_hx_ctx,::String text,hx::Null< int >  __o_image,hx::Null< int >  __o_column,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListItem_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListItem","\xb1","\x50","\x66","\xff"); }

		int get_id();
		::Dynamic get_id_dyn();

		int set_id(int value);
		::Dynamic set_id_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		int get_image();
		::Dynamic get_image_dyn();

		int set_image(int value);
		::Dynamic set_image_dyn();

		int get_column();
		::Dynamic get_column_dyn();

		int set_column(int value);
		::Dynamic set_column_dyn();

		::cpp::Pointer<  wxListItem > listItemRef;
		::cpp::Pointer<  wxListItem > get_listItemRef();
		::Dynamic get_listItemRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ListItem */ 
