// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_PlatformInfo
#define INCLUDED_hx_widgets_PlatformInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_8d3b7a3c6c60d838
#define INCLUDED_8d3b7a3c6c60d838
#include "wx/platinfo.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,PlatformInfo)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PlatformInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PlatformInfo_obj OBJ_;
		PlatformInfo_obj();

	public:
		enum { _hx_ClassId = 0x4ade235c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PlatformInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.PlatformInfo"); }
		static hx::ObjectPtr< PlatformInfo_obj > __new();
		static hx::ObjectPtr< PlatformInfo_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlatformInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PlatformInfo","\xe1","\x38","\x1b","\xb5"); }

		::cpp::Pointer<  wxPlatformInfo > _ref;
		void destroy();
		::Dynamic destroy_dyn();

		int osMajorVersion;
		int get_osMajorVersion();
		::Dynamic get_osMajorVersion_dyn();

		int osMinorVersion;
		int get_osMinorVersion();
		::Dynamic get_osMinorVersion_dyn();

		::String archName;
		::String get_archName();
		::Dynamic get_archName_dyn();

		::String operatingSystemFamilyName;
		::String get_operatingSystemFamilyName();
		::Dynamic get_operatingSystemFamilyName_dyn();

		 wxOperatingSystemId operatingSystemId;
		 wxOperatingSystemId get_operatingSystemId();

		::String operatingSystemIdName;
		::String get_operatingSystemIdName();
		::Dynamic get_operatingSystemIdName_dyn();

		bool isWindows;
		bool get_isWindows();
		::Dynamic get_isWindows_dyn();

		bool isMac;
		bool get_isMac();
		::Dynamic get_isMac_dyn();

		bool isLinux;
		bool get_isLinux();
		::Dynamic get_isLinux_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PlatformInfo */ 
