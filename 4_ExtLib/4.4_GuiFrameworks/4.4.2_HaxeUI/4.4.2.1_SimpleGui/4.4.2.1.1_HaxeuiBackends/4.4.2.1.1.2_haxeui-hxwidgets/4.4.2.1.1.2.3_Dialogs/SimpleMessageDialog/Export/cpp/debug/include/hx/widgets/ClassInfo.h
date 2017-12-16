// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ClassInfo
#define INCLUDED_hx_widgets_ClassInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ClassInfo)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ClassInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ClassInfo_obj OBJ_;
		ClassInfo_obj();

	public:
		enum { _hx_ClassId = 0x0a1bdc3f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ClassInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ClassInfo"); }
		static hx::ObjectPtr< ClassInfo_obj > __new();
		static hx::ObjectPtr< ClassInfo_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClassInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ClassInfo","\xa6","\x38","\xcc","\x7a"); }

		::cpp::Pointer<  wxClassInfo > _ref;
		::String className;
		::String get_className();
		::Dynamic get_className_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ClassInfo */ 
