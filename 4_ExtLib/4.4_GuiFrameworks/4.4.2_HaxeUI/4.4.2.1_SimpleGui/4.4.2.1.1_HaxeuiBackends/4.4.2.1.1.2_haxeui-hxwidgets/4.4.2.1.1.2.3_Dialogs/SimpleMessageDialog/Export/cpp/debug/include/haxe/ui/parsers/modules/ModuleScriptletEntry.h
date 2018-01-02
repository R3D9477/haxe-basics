// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_78622f707d62baa9_54_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleScriptletEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleScriptletEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleScriptletEntry_obj OBJ_;
		ModuleScriptletEntry_obj();

	public:
		enum { _hx_ClassId = 0x6129eddb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleScriptletEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleScriptletEntry"); }

		hx::ObjectPtr< ModuleScriptletEntry_obj > __new() {
			hx::ObjectPtr< ModuleScriptletEntry_obj > __this = new ModuleScriptletEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModuleScriptletEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModuleScriptletEntry_obj *__this = (ModuleScriptletEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleScriptletEntry_obj), true, "haxe.ui.parsers.modules.ModuleScriptletEntry"));
			*(void **)__this = ModuleScriptletEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_78622f707d62baa9_54_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleScriptletEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleScriptletEntry","\x8e","\x1d","\x6e","\xb3"); }

		::String classPackage;
		::String className;
		::String classAlias;
		bool keep;
		bool staticClass;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry */ 
