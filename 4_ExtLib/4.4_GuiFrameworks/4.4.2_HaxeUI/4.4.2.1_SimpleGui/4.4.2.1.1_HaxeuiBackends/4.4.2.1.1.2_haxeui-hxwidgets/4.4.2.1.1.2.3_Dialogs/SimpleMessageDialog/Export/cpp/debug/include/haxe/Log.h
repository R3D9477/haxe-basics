// GeneratedByHaxe
#ifndef INCLUDED_haxe_Log
#define INCLUDED_haxe_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Log)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Log_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();

	public:
		enum { _hx_ClassId = 0x0446b9f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.Log")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.Log"); }

		hx::ObjectPtr< Log_obj > __new() {
			hx::ObjectPtr< Log_obj > __this = new Log_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Log_obj > __alloc(hx::Ctx *_hx_ctx) {
			Log_obj *__this = (Log_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Log_obj), false, "haxe.Log"));
			*(void **)__this = Log_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"); }

		static void __boot();
		static ::Dynamic trace;
		static inline ::Dynamic &trace_dyn() {return trace; }

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Log */ 
