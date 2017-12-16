// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_75bb1f39d9107259_34_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleResourceEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleResourceEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleResourceEntry_obj OBJ_;
		ModuleResourceEntry_obj();

	public:
		enum { _hx_ClassId = 0x0881f0e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleResourceEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleResourceEntry"); }

		hx::ObjectPtr< ModuleResourceEntry_obj > __new() {
			hx::ObjectPtr< ModuleResourceEntry_obj > __this = new ModuleResourceEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModuleResourceEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModuleResourceEntry_obj *__this = (ModuleResourceEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleResourceEntry_obj), true, "haxe.ui.parsers.modules.ModuleResourceEntry"));
			*(void **)__this = ModuleResourceEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_75bb1f39d9107259_34_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleResourceEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleResourceEntry","\x58","\x78","\xc8","\x3e"); }

		::String path;
		::String prefix;
		::String condition;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry */ 
