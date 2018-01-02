// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_macros_NativeMacros
#define INCLUDED_haxe_ui_macros_NativeMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,macros,NativeMacros)

namespace haxe{
namespace ui{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES NativeMacros_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeMacros_obj OBJ_;
		NativeMacros_obj();

	public:
		enum { _hx_ClassId = 0x071789c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.macros.NativeMacros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.macros.NativeMacros"); }

		hx::ObjectPtr< NativeMacros_obj > __new() {
			hx::ObjectPtr< NativeMacros_obj > __this = new NativeMacros_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NativeMacros_obj > __alloc(hx::Ctx *_hx_ctx) {
			NativeMacros_obj *__this = (NativeMacros_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NativeMacros_obj), false, "haxe.ui.macros.NativeMacros"));
			*(void **)__this = NativeMacros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeMacros_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeMacros","\xfe","\xef","\xb4","\x2d"); }

		static bool _nativeProcessed;
};

} // end namespace haxe
} // end namespace ui
} // end namespace macros

#endif /* INCLUDED_haxe_ui_macros_NativeMacros */ 
