// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_modules_ObjectParser
#define INCLUDED_haxe_ui_parsers_modules_ObjectParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,Module)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ModuleParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,modules,ObjectParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES ObjectParser_obj : public  ::haxe::ui::parsers::modules::ModuleParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::modules::ModuleParser_obj super;
		typedef ObjectParser_obj OBJ_;
		ObjectParser_obj();

	public:
		enum { _hx_ClassId = 0x5b91306b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.modules.ObjectParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.modules.ObjectParser"); }
		static hx::ObjectPtr< ObjectParser_obj > __new();
		static hx::ObjectPtr< ObjectParser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ObjectParser","\x1e","\xf5","\xa4","\x8f"); }

		 ::haxe::ui::parsers::modules::Module fromObject( ::Dynamic obj);
		::Dynamic fromObject_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

#endif /* INCLUDED_haxe_ui_parsers_modules_ObjectParser */ 
