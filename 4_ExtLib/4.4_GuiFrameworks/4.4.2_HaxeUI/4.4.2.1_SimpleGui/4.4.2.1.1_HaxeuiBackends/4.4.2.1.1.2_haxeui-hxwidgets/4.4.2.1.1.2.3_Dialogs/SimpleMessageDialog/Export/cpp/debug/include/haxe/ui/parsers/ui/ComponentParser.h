// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#define INCLUDED_haxe_ui_parsers_ui_ComponentParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentInfo)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentParser)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,ResourceResolver)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ComponentParser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentParser_obj OBJ_;
		ComponentParser_obj();

	public:
		enum { _hx_ClassId = 0x310ae04e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.ComponentParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.ComponentParser"); }
		static hx::ObjectPtr< ComponentParser_obj > __new();
		static hx::ObjectPtr< ComponentParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentParser_obj();

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
		::String __ToString() const { return HX_HCSTRING("ComponentParser","\x5c","\xb5","\xe9","\x24"); }

		static void __boot();
		static  ::haxe::ds::StringMap _parsers;
		static  ::haxe::ui::parsers::ui::ComponentParser get(::String extension);
		static ::Dynamic get_dyn();

		static void defaultParsers();
		static ::Dynamic defaultParsers_dyn();

		static void _hx_register(::String extension,hx::Class cls);
		static ::Dynamic _hx_register_dyn();

		static int _nextId;
		static ::String nextId(::String prefix);
		static ::Dynamic nextId_dyn();

		static Float _hx_float(::String value);
		static ::Dynamic _hx_float_dyn();

		static bool isPercentage(::String value);
		static ::Dynamic isPercentage_dyn();

		 ::haxe::ui::parsers::ui::resolvers::ResourceResolver _resourceResolver;
		virtual  ::haxe::ui::parsers::ui::ComponentInfo parse(::String data, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		::Dynamic parse_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_ComponentParser */ 
