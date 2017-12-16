// GeneratedByHaxe
#ifndef INCLUDED_haxe_Resource
#define INCLUDED_haxe_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Resource)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Resource_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();

	public:
		enum { _hx_ClassId = 0x75b82b54 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.Resource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.Resource"); }

		hx::ObjectPtr< Resource_obj > __new() {
			hx::ObjectPtr< Resource_obj > __this = new Resource_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Resource_obj > __alloc(hx::Ctx *_hx_ctx) {
			Resource_obj *__this = (Resource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Resource_obj), false, "haxe.Resource"));
			*(void **)__this = Resource_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Resource","\xee","\x18","\x52","\xec"); }

		static ::Array< ::String > listNames();
		static ::Dynamic listNames_dyn();

		static ::String getString(::String name);
		static ::Dynamic getString_dyn();

		static  ::haxe::io::Bytes getBytes(::String name);
		static ::Dynamic getBytes_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Resource */ 
