// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_CheckBox
#define INCLUDED_haxe_ui_components_CheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,CheckBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES CheckBox_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef CheckBox_obj OBJ_;
		CheckBox_obj();

	public:
		enum { _hx_ClassId = 0x3138fc13 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.CheckBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.CheckBox"); }
		static hx::ObjectPtr< CheckBox_obj > __new();
		static hx::ObjectPtr< CheckBox_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CheckBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CheckBox","\x43","\x46","\x8f","\x86"); }

		void createDefaults();

		void createChildren();

		void destroyChildren();

		 ::haxe::ui::util::VariantType get_value();

		 ::haxe::ui::util::VariantType set_value( ::haxe::ui::util::VariantType value);

		::String set_text(::String value);

		void applyStyle( ::haxe::ui::styles::Style style);

		void validateData();

		bool _selected;
		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		bool get_selected();
		::Dynamic get_selected_dyn();

		bool toggleSelected();
		::Dynamic toggleSelected_dyn();

		void _onClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onClick_dyn();

		void _onMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOver_dyn();

		void _onMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOut_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_CheckBox */ 
