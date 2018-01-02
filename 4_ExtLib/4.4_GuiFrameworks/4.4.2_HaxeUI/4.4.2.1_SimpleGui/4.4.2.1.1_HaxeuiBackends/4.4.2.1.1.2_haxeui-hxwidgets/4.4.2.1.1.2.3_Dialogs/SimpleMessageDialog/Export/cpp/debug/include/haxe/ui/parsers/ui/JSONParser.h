// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_JSONParser
#define INCLUDED_haxe_ui_parsers_ui_JSONParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_ui_ObjectParser
#include <haxe/ui/parsers/ui/ObjectParser.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,JSONParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ObjectParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES JSONParser_obj : public  ::haxe::ui::parsers::ui::ObjectParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::ui::ObjectParser_obj super;
		typedef JSONParser_obj OBJ_;
		JSONParser_obj();

	public:
		enum { _hx_ClassId = 0x049b71ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.JSONParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.JSONParser"); }
		static hx::ObjectPtr< JSONParser_obj > __new();
		static hx::ObjectPtr< JSONParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JSONParser_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JSONParser","\x27","\x29","\x04","\x6e"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_JSONParser */ 
