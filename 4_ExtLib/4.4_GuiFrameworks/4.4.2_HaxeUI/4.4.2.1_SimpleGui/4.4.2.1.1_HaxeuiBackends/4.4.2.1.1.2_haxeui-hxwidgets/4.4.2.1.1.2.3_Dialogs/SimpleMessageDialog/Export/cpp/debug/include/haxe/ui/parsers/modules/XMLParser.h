// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_XMLParser
#define INCLUDED_haxe_ui_parsers_modules_XMLParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,Module)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,XMLParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES XMLParser_obj : public  ::haxe::ui::parsers::modules::ModuleParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::modules::ModuleParser_obj super;
		typedef XMLParser_obj OBJ_;
		XMLParser_obj();

	public:
		enum { _hx_ClassId = 0x391625a5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.modules.XMLParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.modules.XMLParser"); }
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

		 ::haxe::ui::parsers::modules::Module parse(::String data);

		::String buildCondition( ::Xml parentNode, ::Xml node);
		::Dynamic buildCondition_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_XMLParser */ 
