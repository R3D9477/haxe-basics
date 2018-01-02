// GeneratedByHaxe
#ifndef INCLUDED_haxe_io_Path
#define INCLUDED_haxe_io_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Path)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Path_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();

	public:
		enum { _hx_ClassId = 0x044b6ab5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Path")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Path"); }

		hx::ObjectPtr< Path_obj > __new() {
			hx::ObjectPtr< Path_obj > __this = new Path_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Path_obj > __alloc(hx::Ctx *_hx_ctx) {
			Path_obj *__this = (Path_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Path_obj), false, "haxe.io.Path"));
			*(void **)__this = Path_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Path_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Path","\xc5","\x11","\x2b","\x35"); }

		static ::String normalize(::String path);
		static ::Dynamic normalize_dyn();

		static ::String addTrailingSlash(::String path);
		static ::Dynamic addTrailingSlash_dyn();

		static ::String removeTrailingSlashes(::String path);
		static ::Dynamic removeTrailingSlashes_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Path */ 
