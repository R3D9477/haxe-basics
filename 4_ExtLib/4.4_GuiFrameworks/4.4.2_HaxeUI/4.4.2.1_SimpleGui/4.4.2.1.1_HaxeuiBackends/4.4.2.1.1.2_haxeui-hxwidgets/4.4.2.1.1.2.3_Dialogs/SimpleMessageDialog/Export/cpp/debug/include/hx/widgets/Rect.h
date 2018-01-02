// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Rect
#define INCLUDED_hx_widgets_Rect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Rect)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Rect_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Rect_obj OBJ_;
		Rect_obj();

	public:
		enum { _hx_ClassId = 0x256da1a3 };

		void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.Rect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.widgets.Rect"); }
		static hx::ObjectPtr< Rect_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static hx::ObjectPtr< Rect_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rect_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rect","\x44","\x79","\x80","\x36"); }

		static  ::hx::widgets::Rect copy(::cpp::Pointer<  wxRect > ptr);
		static ::Dynamic copy_dyn();

		int x;
		int y;
		int width;
		int height;
		::cpp::Pointer<  wxRect > createPointer();
		::Dynamic createPointer_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Rect */ 
