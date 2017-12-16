// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_BytesOutput
#define INCLUDED_haxe_io_BytesOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesBuffer)
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Output)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES BytesOutput_obj : public  ::haxe::io::Output_obj
{
	public:
		typedef  ::haxe::io::Output_obj super;
		typedef BytesOutput_obj OBJ_;
		BytesOutput_obj();

	public:
		enum { _hx_ClassId = 0x7d746abc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.io.BytesOutput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.io.BytesOutput"); }
		static hx::ObjectPtr< BytesOutput_obj > __new();
		static hx::ObjectPtr< BytesOutput_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytesOutput_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BytesOutput","\xac","\xc5","\x0e","\x32"); }

		 ::haxe::io::BytesBuffer b;
		void writeByte(int c);
		::Dynamic writeByte_dyn();

		 ::haxe::io::Bytes getBytes();
		::Dynamic getBytes_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_BytesOutput */ 
