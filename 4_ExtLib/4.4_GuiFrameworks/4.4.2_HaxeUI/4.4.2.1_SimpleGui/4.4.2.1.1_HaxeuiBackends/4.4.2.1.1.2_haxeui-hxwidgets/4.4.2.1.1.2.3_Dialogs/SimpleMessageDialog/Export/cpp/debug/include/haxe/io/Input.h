// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_Input
#define INCLUDED_haxe_io_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Input_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();

	public:
		enum { _hx_ClassId = 0x5c18cd32 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Input"); }

		hx::ObjectPtr< Input_obj > __new() {
			hx::ObjectPtr< Input_obj > __this = new Input_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Input_obj > __alloc(hx::Ctx *_hx_ctx) {
			Input_obj *__this = (Input_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Input_obj), false, "haxe.io.Input"));
			*(void **)__this = Input_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		virtual int readByte();
		::Dynamic readByte_dyn();

		virtual int readBytes( ::haxe::io::Bytes s,int pos,int len);
		::Dynamic readBytes_dyn();

		void readFullBytes( ::haxe::io::Bytes s,int pos,int len);
		::Dynamic readFullBytes_dyn();

		::String readString(int len);
		::Dynamic readString_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Input */ 
