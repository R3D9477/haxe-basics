// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_ObjectParser
#define INCLUDED_haxe_ui_parsers_ui_ObjectParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentInfo)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ObjectParser)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,ResourceResolver)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ObjectParser_obj : public  ::haxe::ui::parsers::ui::ComponentParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::ui::ComponentParser_obj super;
		typedef ObjectParser_obj OBJ_;
		ObjectParser_obj();

	public:
		enum { _hx_ClassId = 0x350ca508 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.ObjectParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.ObjectParser"); }
		static hx::ObjectPtr< ObjectParser_obj > __new();
		static hx::ObjectPtr< ObjectParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ObjectParser","\x1e","\xf5","\xa4","\x8f"); }

		static void parseComponent( ::haxe::ui::parsers::ui::ComponentInfo component, ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseComponent_dyn();

		static void parseImport( ::haxe::ui::parsers::ui::ComponentInfo component, ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		static ::Dynamic parseImport_dyn();

		 ::haxe::ui::parsers::ui::ComponentInfo fromObject( ::Dynamic obj, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver);
		::Dynamic fromObject_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_ObjectParser */ 
