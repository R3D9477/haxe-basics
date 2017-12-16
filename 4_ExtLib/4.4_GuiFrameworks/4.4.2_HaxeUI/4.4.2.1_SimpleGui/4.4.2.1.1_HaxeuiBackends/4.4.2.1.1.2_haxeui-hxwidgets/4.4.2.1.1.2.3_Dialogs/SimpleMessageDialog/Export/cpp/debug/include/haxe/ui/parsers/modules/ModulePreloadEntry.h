// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry
#define INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2b3dce8ae26aed31_129_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModulePreloadEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModulePreloadEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModulePreloadEntry_obj OBJ_;
		ModulePreloadEntry_obj();

	public:
		enum { _hx_ClassId = 0x762dcf72 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModulePreloadEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModulePreloadEntry"); }

		hx::ObjectPtr< ModulePreloadEntry_obj > __new() {
			hx::ObjectPtr< ModulePreloadEntry_obj > __this = new ModulePreloadEntry_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ModulePreloadEntry_obj > __alloc(hx::Ctx *_hx_ctx) {
			ModulePreloadEntry_obj *__this = (ModulePreloadEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModulePreloadEntry_obj), true, "haxe.ui.parsers.modules.ModulePreloadEntry"));
			*(void **)__this = ModulePreloadEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2b3dce8ae26aed31_129_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModulePreloadEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModulePreloadEntry","\xd5","\xbe","\xa4","\x33"); }

		::String type;
		::String id;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry */ 
