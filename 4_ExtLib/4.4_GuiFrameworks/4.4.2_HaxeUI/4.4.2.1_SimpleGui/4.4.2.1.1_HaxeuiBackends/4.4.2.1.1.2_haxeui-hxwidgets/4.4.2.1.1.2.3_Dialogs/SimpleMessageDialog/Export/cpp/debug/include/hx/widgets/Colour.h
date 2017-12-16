// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Colour
#define INCLUDED_hx_widgets_Colour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Colour)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Colour_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef Colour_obj OBJ_;
		Colour_obj();

	public:
		enum { _hx_ClassId = 0x5dea7a8b };

		void __construct(hx::Null< int >  __o_colour);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Colour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Colour"); }
		static hx::ObjectPtr< Colour_obj > __new(hx::Null< int >  __o_colour);
		static hx::ObjectPtr< Colour_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Colour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Colour","\x6c","\x3c","\x1b","\xfb"); }

		static  ::hx::widgets::Colour copy(::cpp::Pointer<  wxColour > ptr);
		static ::Dynamic copy_dyn();

		static int convertColor(int c);
		static ::Dynamic convertColor_dyn();

		int rgb;
		::cpp::Pointer<  wxColour > createPointer();
		::Dynamic createPointer_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Colour */ 
