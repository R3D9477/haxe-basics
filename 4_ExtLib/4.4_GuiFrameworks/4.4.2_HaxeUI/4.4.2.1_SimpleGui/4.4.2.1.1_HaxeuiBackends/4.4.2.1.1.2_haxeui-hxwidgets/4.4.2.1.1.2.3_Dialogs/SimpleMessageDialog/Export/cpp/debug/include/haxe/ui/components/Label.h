// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Label
#define INCLUDED_haxe_ui_components_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Label_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef Label_obj OBJ_;
		Label_obj();

	public:
		enum { _hx_ClassId = 0x4c120604 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Label")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Label"); }
		static hx::ObjectPtr< Label_obj > __new();
		static hx::ObjectPtr< Label_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Label","\xd4","\x7d","\xdc","\x02"); }

		::String _textAlign;
		void createDefaults();

		::String set_text(::String value);

		void applyStyle( ::haxe::ui::styles::Style style);

		void validateData();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

		::String get_textAlign();
		::Dynamic get_textAlign_dyn();

		::String set_textAlign(::String value);
		::Dynamic set_textAlign_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Label */ 
