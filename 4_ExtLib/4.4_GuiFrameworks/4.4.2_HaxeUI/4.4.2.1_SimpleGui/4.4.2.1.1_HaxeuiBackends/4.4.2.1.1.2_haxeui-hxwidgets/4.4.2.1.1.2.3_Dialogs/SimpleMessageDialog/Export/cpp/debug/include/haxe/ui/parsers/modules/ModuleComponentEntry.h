// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a36c8afe4ad39142_43_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleComponentEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleComponentEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleComponentEntry_obj OBJ_;
		ModuleComponentEntry_obj();

	public:
		enum { _hx_ClassId = 0x0247e63e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleComponentEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleComponentEntry"); }

		hx::ObjectPtr< ModuleComponentEntry_obj > __new() {
			hx::ObjectPtr< ModuleComponentEntry_obj > __this = new ModuleComponentEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModuleComponentEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModuleComponentEntry_obj *__this = (ModuleComponentEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleComponentEntry_obj), true, "haxe.ui.parsers.modules.ModuleComponentEntry"));
			*(void **)__this = ModuleComponentEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a36c8afe4ad39142_43_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleComponentEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleComponentEntry","\x61","\xb4","\xe3","\x3e"); }

		::String classPackage;
		::String className;
		::String classAlias;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry */ 
