// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#define INCLUDED_haxe_ui_parsers_modules_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,Module)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleAnimationEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleComponentEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModulePluginEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModulePreloadEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModulePropertyEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleResourceEntry)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleScriptletEntry)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES Module_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();

	public:
		enum { _hx_ClassId = 0x03091f21 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.modules.Module")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.modules.Module"); }
		static hx::ObjectPtr< Module_obj > __new();
		static hx::ObjectPtr< Module_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Module","\xcc","\xa8","\x67","\xf5"); }

		::String id;
		::Array< ::Dynamic> resourceEntries;
		::Array< ::Dynamic> componentEntries;
		::Array< ::Dynamic> scriptletEntries;
		 ::haxe::ds::StringMap themeEntries;
		::Array< ::Dynamic> plugins;
		::Array< ::Dynamic> properties;
		::Array< ::Dynamic> animations;
		::Array< ::Dynamic> preload;
		void validate();
		::Dynamic validate_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_Module */ 
