// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Font
#define INCLUDED_hx_widgets_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_782aa7a696219a25
#define INCLUDED_782aa7a696219a25
#include "wx/font.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Font)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Font_obj : public  ::hx::widgets::GDIObject_obj
{
	public:
		typedef  ::hx::widgets::GDIObject_obj super;
		typedef Font_obj OBJ_;
		Font_obj();

	public:
		enum { _hx_ClassId = 0x1d86b24e };

		void __construct(hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Font"); }
		static hx::ObjectPtr< Font_obj > __new(hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined);
		static hx::ObjectPtr< Font_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"); }

		static  ::hx::widgets::Font copy( wxFont other);

		int _size;
		int _family;
		int _style;
		int _weight;
		bool _underlined;
		int get_size();

		int set_size(int value);

		int get_family();

		int set_family(int value);

		int get_style();

		int set_style(int value);

		int get_weight();

		int set_weight(int value);

		bool get_underlined();

		bool set_underlined(bool value);

		::cpp::Pointer<  wxFont > createPointer();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Font */ 
