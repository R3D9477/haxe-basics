// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ArrayString
#define INCLUDED_hx_widgets_ArrayString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ArrayString)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ArrayString_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArrayString_obj OBJ_;
		ArrayString_obj();

	public:
		enum { _hx_ClassId = 0x76ea8cab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ArrayString")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ArrayString"); }
		static hx::ObjectPtr< ArrayString_obj > __new();
		static hx::ObjectPtr< ArrayString_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayString_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ArrayString","\x2a","\x5b","\xaa","\xe2"); }

		static  ::hx::widgets::ArrayString fromArray(::Array< ::String > arr);
		static ::Dynamic fromArray_dyn();

		::cpp::Pointer<  wxArrayString > _ref;
		void destroy();
		::Dynamic destroy_dyn();

		int add(::String str);
		::Dynamic add_dyn();

		::cpp::Pointer<  wxArrayString > arraystringRef;
		::cpp::Pointer<  wxArrayString > get_arraystringRef();
		::Dynamic get_arraystringRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ArrayString */ 
