// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Engine
#define INCLUDED_haxe_ui_styles_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,styles,CssClass)
HX_DECLARE_CLASS3(haxe,ui,styles,Engine)
HX_DECLARE_CLASS3(haxe,ui,styles,Rule)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Engine_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();

	public:
		enum { _hx_ClassId = 0x334475be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.Engine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.Engine"); }
		static hx::ObjectPtr< Engine_obj > __new();
		static hx::ObjectPtr< Engine_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Engine","\xe2","\xbb","\x18","\x31"); }

		static bool ruleMatch( ::haxe::ui::styles::CssClass c, ::haxe::ui::core::Component d);
		static ::Dynamic ruleMatch_dyn();

		::Array< ::Dynamic> rules;
		 ::haxe::ui::styles::Style applyClasses( ::haxe::ui::core::Component c,hx::Null< bool >  set);
		::Dynamic applyClasses_dyn();

		int sortByPriority( ::haxe::ui::styles::Rule r1, ::haxe::ui::styles::Rule r2);
		::Dynamic sortByPriority_dyn();

		void addRules(::String text);
		::Dynamic addRules_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Engine */ 
