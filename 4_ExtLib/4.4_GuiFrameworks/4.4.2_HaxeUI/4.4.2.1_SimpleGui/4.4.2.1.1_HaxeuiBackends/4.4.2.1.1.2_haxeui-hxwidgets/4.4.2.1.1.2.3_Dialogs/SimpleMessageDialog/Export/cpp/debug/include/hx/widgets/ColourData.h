// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ColourData
#define INCLUDED_hx_widgets_ColourData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_d46be5f2643923f7
#define INCLUDED_d46be5f2643923f7
#include "wx/colourdata.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ColourData)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ColourData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ColourData_obj OBJ_;
		ColourData_obj();

	public:
		enum { _hx_ClassId = 0x432db68d };

		void __construct(hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.ColourData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.widgets.ColourData"); }
		static hx::ObjectPtr< ColourData_obj > __new(hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		static hx::ObjectPtr< ColourData_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColourData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColourData","\xb6","\x64","\xec","\x8b"); }

		static  ::hx::widgets::ColourData copy(::cpp::Pointer<  wxColourData > ptr);
		static ::Dynamic copy_dyn();

		int colour;
		bool chooseFull;
		::cpp::Pointer<  wxColourData > createPointer();
		::Dynamic createPointer_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ColourData */ 
