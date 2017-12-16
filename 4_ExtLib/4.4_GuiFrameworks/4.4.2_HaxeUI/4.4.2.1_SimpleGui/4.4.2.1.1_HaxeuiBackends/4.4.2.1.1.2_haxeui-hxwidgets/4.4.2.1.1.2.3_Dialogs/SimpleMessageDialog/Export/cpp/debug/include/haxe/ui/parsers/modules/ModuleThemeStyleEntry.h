// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c6cdaba87a771c58_72_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleThemeStyleEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleThemeStyleEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleThemeStyleEntry_obj OBJ_;
		ModuleThemeStyleEntry_obj();

	public:
		enum { _hx_ClassId = 0x1dcc3091 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleThemeStyleEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleThemeStyleEntry"); }

		hx::ObjectPtr< ModuleThemeStyleEntry_obj > __new() {
			hx::ObjectPtr< ModuleThemeStyleEntry_obj > __this = new ModuleThemeStyleEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModuleThemeStyleEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModuleThemeStyleEntry_obj *__this = (ModuleThemeStyleEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleThemeStyleEntry_obj), true, "haxe.ui.parsers.modules.ModuleThemeStyleEntry"));
			*(void **)__this = ModuleThemeStyleEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c6cdaba87a771c58_72_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleThemeStyleEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleThemeStyleEntry","\x7e","\xbd","\x31","\xc7"); }

		::String resource;
		::String condition;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry */ 
