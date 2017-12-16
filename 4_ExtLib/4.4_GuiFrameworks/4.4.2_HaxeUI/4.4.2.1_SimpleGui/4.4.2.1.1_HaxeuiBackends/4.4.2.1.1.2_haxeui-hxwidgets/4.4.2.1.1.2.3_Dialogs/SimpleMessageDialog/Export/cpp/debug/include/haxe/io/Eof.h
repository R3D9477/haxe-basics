// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_Eof
#define INCLUDED_haxe_io_Eof

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f9cd114f27426261_28_new)
HX_DECLARE_CLASS2(haxe,io,Eof)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Eof_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Eof_obj OBJ_;
		Eof_obj();

	public:
		enum { _hx_ClassId = 0x41324090 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Eof")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Eof"); }

		hx::ObjectPtr< Eof_obj > __new() {
			hx::ObjectPtr< Eof_obj > __this = new Eof_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Eof_obj > __alloc(hx::Ctx *_hx_ctx) {
			Eof_obj *__this = (Eof_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Eof_obj), false, "haxe.io.Eof"));
			*(void **)__this = Eof_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f9cd114f27426261_28_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Eof_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Eof","\x9c","\xbc","\x34","\x00"); }

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Eof */ 
