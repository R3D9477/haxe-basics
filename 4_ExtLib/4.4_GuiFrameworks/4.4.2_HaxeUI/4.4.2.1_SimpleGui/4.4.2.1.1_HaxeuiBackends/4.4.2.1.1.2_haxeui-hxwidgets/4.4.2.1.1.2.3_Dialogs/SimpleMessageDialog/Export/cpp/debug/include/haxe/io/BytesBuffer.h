// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_BytesBuffer
#define INCLUDED_haxe_io_BytesBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesBuffer)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES BytesBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BytesBuffer_obj OBJ_;
		BytesBuffer_obj();

	public:
		enum { _hx_ClassId = 0x418818bb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.io.BytesBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.io.BytesBuffer"); }
		static hx::ObjectPtr< BytesBuffer_obj > __new();
		static hx::ObjectPtr< BytesBuffer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytesBuffer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BytesBuffer","\xab","\x73","\x22","\xf6"); }

		::Array< unsigned char > b;
		 ::haxe::io::Bytes getBytes();
		::Dynamic getBytes_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_BytesBuffer */ 
