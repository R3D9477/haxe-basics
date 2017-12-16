// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#define INCLUDED_haxe_ui_util_GenericConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,GenericConfig)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES GenericConfig_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GenericConfig_obj OBJ_;
		GenericConfig_obj();

	public:
		enum { _hx_ClassId = 0x03811e5d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.GenericConfig")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.util.GenericConfig"); }
		static hx::ObjectPtr< GenericConfig_obj > __new();
		static hx::ObjectPtr< GenericConfig_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericConfig_obj();

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
		::String __ToString() const { return HX_HCSTRING("GenericConfig","\x19","\xb8","\x41","\xfc"); }

		static void __boot();
		static  ::haxe::ds::StringMap cache;
		 ::haxe::ds::StringMap values;
		 ::haxe::ds::StringMap sections;
		 ::haxe::ui::util::GenericConfig addSection(::String name);
		::Dynamic addSection_dyn();

		 ::haxe::ui::util::GenericConfig findBy(::String section,::String field,::String value);
		::Dynamic findBy_dyn();

		bool queryBool(::String q,hx::Null< bool >  defaultValue, ::Dynamic conditionRef);
		::Dynamic queryBool_dyn();

		::String query(::String q,::String defaultValue, ::Dynamic conditionRef);
		::Dynamic query_dyn();

		 ::haxe::ds::StringMap queryValues(::String q, ::Dynamic conditionRef);
		::Dynamic queryValues_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_GenericConfig */ 
