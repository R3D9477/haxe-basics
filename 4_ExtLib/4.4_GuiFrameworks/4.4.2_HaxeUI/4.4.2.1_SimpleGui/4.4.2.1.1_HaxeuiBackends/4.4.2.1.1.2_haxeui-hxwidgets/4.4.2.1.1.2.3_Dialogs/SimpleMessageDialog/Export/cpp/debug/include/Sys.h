// GeneratedByHaxe
#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)



class HXCPP_CLASS_ATTRIBUTES Sys_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();

	public:
		enum { _hx_ClassId = 0x003f64ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Sys"); }

		hx::ObjectPtr< Sys_obj > __new() {
			hx::ObjectPtr< Sys_obj > __this = new Sys_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Sys_obj > __alloc(hx::Ctx *_hx_ctx) {
			Sys_obj *__this = (Sys_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sys_obj), false, "Sys"));
			*(void **)__this = Sys_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static ::Array< ::String > args();
		static ::Dynamic args_dyn();

		static ::String programPath();
		static ::Dynamic programPath_dyn();

};


#endif /* INCLUDED_Sys */ 
