// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_macros_ComponentMacros
#define INCLUDED_haxe_ui_macros_ComponentMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,macros,ComponentMacros)

namespace haxe{
namespace ui{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES ComponentMacros_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentMacros_obj OBJ_;
		ComponentMacros_obj();

	public:
		enum { _hx_ClassId = 0x1a247ba3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.macros.ComponentMacros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.macros.ComponentMacros"); }

		hx::ObjectPtr< ComponentMacros_obj > __new() {
			hx::ObjectPtr< ComponentMacros_obj > __this = new ComponentMacros_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ComponentMacros_obj > __alloc(hx::Ctx *_hx_ctx) {
			ComponentMacros_obj *__this = (ComponentMacros_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentMacros_obj), false, "haxe.ui.macros.ComponentMacros"));
			*(void **)__this = ComponentMacros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentMacros_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComponentMacros","\x64","\xb3","\xec","\xe7"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace macros

#endif /* INCLUDED_haxe_ui_macros_ComponentMacros */ 
