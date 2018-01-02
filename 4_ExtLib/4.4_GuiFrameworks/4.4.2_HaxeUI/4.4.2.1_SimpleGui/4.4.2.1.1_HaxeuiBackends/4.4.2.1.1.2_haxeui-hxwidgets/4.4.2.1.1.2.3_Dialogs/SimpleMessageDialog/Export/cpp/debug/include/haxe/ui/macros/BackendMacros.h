// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_macros_BackendMacros
#define INCLUDED_haxe_ui_macros_BackendMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,macros,BackendMacros)
HX_DECLARE_CLASS3(haxe,ui,util,Properties)

namespace haxe{
namespace ui{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES BackendMacros_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BackendMacros_obj OBJ_;
		BackendMacros_obj();

	public:
		enum { _hx_ClassId = 0x69034c7a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.macros.BackendMacros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.macros.BackendMacros"); }

		hx::ObjectPtr< BackendMacros_obj > __new() {
			hx::ObjectPtr< BackendMacros_obj > __this = new BackendMacros_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BackendMacros_obj > __alloc(hx::Ctx *_hx_ctx) {
			BackendMacros_obj *__this = (BackendMacros_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BackendMacros_obj), false, "haxe.ui.macros.BackendMacros"));
			*(void **)__this = BackendMacros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackendMacros_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BackendMacros","\xfb","\x61","\xba","\x0a"); }

		static void __boot();
		static  ::haxe::ui::util::Properties properties;
};

} // end namespace haxe
} // end namespace ui
} // end namespace macros

#endif /* INCLUDED_haxe_ui_macros_BackendMacros */ 
