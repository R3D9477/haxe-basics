// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationComponentRefEntry
#define INCLUDED_haxe_ui_parsers_modules_ModuleAnimationComponentRefEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleAnimationComponentRefEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ModuleAnimationComponentRefEntry_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ModuleAnimationComponentRefEntry_obj OBJ_;
		ModuleAnimationComponentRefEntry_obj();

	public:
		enum { _hx_ClassId = 0x74aa8c11 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry"); }
		static hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > __new();
		static hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ModuleAnimationComponentRefEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ModuleAnimationComponentRefEntry","\x44","\xfc","\x90","\x39"); }

		::String id;
		 ::haxe::ds::StringMap properties;
		 ::haxe::ds::StringMap vars;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ModuleAnimationComponentRefEntry */ 
