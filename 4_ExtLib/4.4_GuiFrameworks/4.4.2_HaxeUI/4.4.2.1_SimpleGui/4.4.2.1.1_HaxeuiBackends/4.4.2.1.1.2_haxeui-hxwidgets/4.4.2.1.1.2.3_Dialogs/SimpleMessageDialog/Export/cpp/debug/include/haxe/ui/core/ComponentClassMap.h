// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_ComponentClassMap
#define INCLUDED_haxe_ui_core_ComponentClassMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentClassMap)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentClassMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentClassMap_obj OBJ_;
		ComponentClassMap_obj();

	public:
		enum { _hx_ClassId = 0x4c0d9008 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentClassMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentClassMap"); }
		static hx::ObjectPtr< ComponentClassMap_obj > __new();
		static hx::ObjectPtr< ComponentClassMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentClassMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComponentClassMap","\x01","\x2f","\xb7","\x99"); }

		static  ::haxe::ui::core::ComponentClassMap _instance;
		static  ::haxe::ui::core::ComponentClassMap get_instance();
		static ::Dynamic get_instance_dyn();

		static ::String get(::String alias);
		static ::Dynamic get_dyn();

		static void _hx_register(::String alias,::String className);
		static ::Dynamic _hx_register_dyn();

		static  ::Dynamic list();
		static ::Dynamic list_dyn();

		 ::haxe::ds::StringMap _map;
		::String getClassName(::String alias);
		::Dynamic getClassName_dyn();

		void registerClassName(::String alias,::String className);
		::Dynamic registerClassName_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentClassMap */ 
