// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MemoryInputStream
#define INCLUDED_hx_widgets_MemoryInputStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_721c74fa2e6d5326
#define INCLUDED_721c74fa2e6d5326
#include "wx/mstream.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,MemoryInputStream)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MemoryInputStream_obj : public  ::hx::widgets::InputStream_obj
{
	public:
		typedef  ::hx::widgets::InputStream_obj super;
		typedef MemoryInputStream_obj OBJ_;
		MemoryInputStream_obj();

	public:
		enum { _hx_ClassId = 0x01bf7192 };

		void __construct( ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MemoryInputStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MemoryInputStream"); }
		static hx::ObjectPtr< MemoryInputStream_obj > __new( ::haxe::io::Bytes bytes);
		static hx::ObjectPtr< MemoryInputStream_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MemoryInputStream_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MemoryInputStream","\x89","\xca","\x66","\xdf"); }

		 ::haxe::io::Bytes _bytes;
		void destroy();
		::Dynamic destroy_dyn();

		::cpp::Pointer<  wxMemoryInputStream > memoryinputstreamRef;
		::cpp::Pointer<  wxMemoryInputStream > get_memoryinputstreamRef();
		::Dynamic get_memoryinputstreamRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MemoryInputStream */ 
