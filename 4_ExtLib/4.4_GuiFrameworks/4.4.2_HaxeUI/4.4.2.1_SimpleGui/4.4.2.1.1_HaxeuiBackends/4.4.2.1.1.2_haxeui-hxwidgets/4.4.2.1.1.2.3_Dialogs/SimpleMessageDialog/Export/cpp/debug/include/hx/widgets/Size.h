// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Size
#define INCLUDED_hx_widgets_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Size)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Size_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();

	public:
		enum { _hx_ClassId = 0x2619f540 };

		void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.Size")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.widgets.Size"); }
		static hx::ObjectPtr< Size_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static hx::ObjectPtr< Size_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Size","\xe1","\xcc","\x2c","\x37"); }

		static ::cpp::Pointer<  wxSize > defaultSize;
		static ::cpp::Pointer<  wxSize > get_defaultSize();

		static  ::hx::widgets::Size copy( wxSize other);

		int width;
		int height;
		::cpp::Pointer<  wxSize > createPointer();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Size */ 
