// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_XMLParser
#define INCLUDED_haxe_ui_parsers_ui_XMLParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentInfo)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,XMLParser)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,ResourceResolver)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES XMLParser_obj : public  ::haxe::ui::parsers::ui::ComponentParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::ui::ComponentParser_obj super;
		typedef XMLParser_obj OBJ_;
		XMLParser_obj();

	public:
		enum { _hx_ClassId = 0x560e7894 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.XMLParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.XMLParser"); }
		static hx::ObjectPtr< XMLParser_obj > __new();
		static hx::ObjectPtr< XMLParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("XMLParser","\xf6","\xbd","\xa4","\x31"); }

		static bool parseComponent( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseComponent_dyn();

		static void parseImportNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseImportNode_dyn();

		static void parseScriptNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseScriptNode_dyn();

		static void parseStyleNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseStyleNode_dyn();

		static void parseBindNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml);
		static ::Dynamic parseBindNode_dyn();

		static void parseDetails( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml);
		static ::Dynamic parseDetails_dyn();

		static void parseAttributes( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml);
		static ::Dynamic parseAttributes_dyn();

		 ::haxe::ui::parsers::ui::ComponentInfo parse(::String data, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_XMLParser */ 
