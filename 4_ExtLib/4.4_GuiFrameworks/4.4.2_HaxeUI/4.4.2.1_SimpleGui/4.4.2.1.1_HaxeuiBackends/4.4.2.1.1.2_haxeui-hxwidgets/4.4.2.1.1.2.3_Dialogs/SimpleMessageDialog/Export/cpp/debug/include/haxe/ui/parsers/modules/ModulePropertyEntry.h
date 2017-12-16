// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry
#define INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bf6d170f49e8e6c4_91_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModulePropertyEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModulePropertyEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModulePropertyEntry_obj OBJ_;
		ModulePropertyEntry_obj();

	public:
		enum { _hx_ClassId = 0x0daddbe0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModulePropertyEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModulePropertyEntry"); }

		hx::ObjectPtr< ModulePropertyEntry_obj > __new() {
			hx::ObjectPtr< ModulePropertyEntry_obj > __this = new ModulePropertyEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModulePropertyEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModulePropertyEntry_obj *__this = (ModulePropertyEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModulePropertyEntry_obj), true, "haxe.ui.parsers.modules.ModulePropertyEntry"));
			*(void **)__this = ModulePropertyEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bf6d170f49e8e6c4_91_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModulePropertyEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModulePropertyEntry","\x71","\x63","\xca","\x59"); }

		::String name;
		::String value;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry */ 
