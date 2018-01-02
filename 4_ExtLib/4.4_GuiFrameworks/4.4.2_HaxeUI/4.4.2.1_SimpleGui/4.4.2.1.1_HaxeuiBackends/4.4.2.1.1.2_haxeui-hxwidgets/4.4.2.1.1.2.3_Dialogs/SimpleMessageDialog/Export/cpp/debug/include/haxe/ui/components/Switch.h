// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Switch
#define INCLUDED_haxe_ui_components_Switch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS3(haxe,ui,components,Switch)
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


class HXCPP_CLASS_ATTRIBUTES Switch_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Switch_obj OBJ_;
		Switch_obj();

	public:
		enum { _hx_ClassId = 0x0f0a6e48 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Switch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Switch"); }
		static hx::ObjectPtr< Switch_obj > __new();
		static hx::ObjectPtr< Switch_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Switch_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Switch","\x14","\xbe","\x0d","\xfa"); }

		 ::haxe::ui::components::Button _button;
		 ::haxe::ui::components::Label _label;
		void createDefaults();

		void createChildren();

		void destroyChildren();

		 ::haxe::ui::util::VariantType get_value();

		void applyStyle( ::haxe::ui::styles::Style style);

		void validateData();

		bool _selected;
		bool get_selected();
		::Dynamic get_selected_dyn();

		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		::String _selectedText;
		::String get_selectedText();
		::Dynamic get_selectedText_dyn();

		::String set_selectedText(::String value);
		::Dynamic set_selectedText_dyn();

		::String _unselectedText;
		::String get_unselectedText();
		::Dynamic get_unselectedText_dyn();

		::String set_unselectedText(::String value);
		::Dynamic set_unselectedText_dyn();

		Float _mouseDownOffsetX;
		Float _mouseDownOffsetY;
		bool _down;
		void _onMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOver_dyn();

		void _onMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOut_dyn();

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void _onMouseUp( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseUp_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Switch */ 
