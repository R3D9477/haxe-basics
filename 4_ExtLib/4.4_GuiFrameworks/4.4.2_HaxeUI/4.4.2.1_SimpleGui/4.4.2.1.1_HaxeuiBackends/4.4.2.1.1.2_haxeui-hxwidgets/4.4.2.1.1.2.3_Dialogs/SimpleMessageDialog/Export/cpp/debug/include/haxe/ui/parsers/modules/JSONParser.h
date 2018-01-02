// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_JSONParser
#define INCLUDED_haxe_ui_parsers_modules_JSONParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_modules_ObjectParser
#include <haxe/ui/parsers/modules/ObjectParser.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,JSONParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,Module)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ObjectParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES JSONParser_obj : public  ::haxe::ui::parsers::modules::ObjectParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::modules::ObjectParser_obj super;
		typedef JSONParser_obj OBJ_;
		JSONParser_obj();

	public:
		enum { _hx_ClassId = 0x39f30734 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.modules.JSONParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.modules.JSONParser"); }
		static hx::ObjectPtr< JSONParser_obj > __new();
		static hx::ObjectPtr< JSONParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JSONParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JSONParser","\x27","\x29","\x04","\x6e"); }

		 ::haxe::ui::parsers::modules::Module parse(::String data);

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_JSONParser */ 
