// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_config_XMLParser
#define INCLUDED_haxe_ui_parsers_config_XMLParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_config_ConfigParser
#include <haxe/ui/parsers/config/ConfigParser.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,parsers,config,ConfigParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,config,XMLParser)
HX_DECLARE_CLASS3(haxe,ui,util,GenericConfig)

namespace haxe{
namespace ui{
namespace parsers{
namespace config{


class HXCPP_CLASS_ATTRIBUTES XMLParser_obj : public  ::haxe::ui::parsers::config::ConfigParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::config::ConfigParser_obj super;
		typedef XMLParser_obj OBJ_;
		XMLParser_obj();

	public:
		enum { _hx_ClassId = 0x0cafecba };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.config.XMLParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.config.XMLParser"); }
		static hx::ObjectPtr< XMLParser_obj > __new();
		static hx::ObjectPtr< XMLParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("XMLParser","\xf6","\xbd","\xa4","\x31"); }

		 ::haxe::ui::util::GenericConfig parse(::String data);

		void parseAddionalConfig( ::Xml node, ::haxe::ui::util::GenericConfig parent);
		::Dynamic parseAddionalConfig_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace config

#endif /* INCLUDED_haxe_ui_parsers_config_XMLParser */ 
