// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_Output
#define INCLUDED_haxe_io_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Output)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Output_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Output_obj OBJ_;
		Output_obj();

	public:
		enum { _hx_ClassId = 0x3473efad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Output")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Output"); }

		hx::ObjectPtr< Output_obj > __new() {
			hx::ObjectPtr< Output_obj > __this = new Output_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Output_obj > __alloc(hx::Ctx *_hx_ctx) {
			Output_obj *__this = (Output_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Output_obj), false, "haxe.io.Output"));
			*(void **)__this = Output_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Output_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Output","\x21","\x83","\x15","\x41"); }

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Output */ 
