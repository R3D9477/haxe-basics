// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Point
#define INCLUDED_hx_widgets_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Point)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Point_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();

	public:
		enum { _hx_ClassId = 0x7a534ef1 };

		void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.Point")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.widgets.Point"); }
		static hx::ObjectPtr< Point_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static hx::ObjectPtr< Point_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"); }

		static ::cpp::Pointer<  wxPoint > defaultPosition;
		static ::cpp::Pointer<  wxPoint > get_defaultPosition();

		static  ::hx::widgets::Point copy( wxPoint other);

		int x;
		int y;
		::cpp::Pointer<  wxPoint > createPointer();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Point */ 
