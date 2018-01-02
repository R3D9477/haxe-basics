// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_OptionBox
#define INCLUDED_haxe_ui_components_OptionBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBox)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBoxValue)
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


class HXCPP_CLASS_ATTRIBUTES OptionBox_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef OptionBox_obj OBJ_;
		OptionBox_obj();

	public:
		enum { _hx_ClassId = 0x7fe57fc6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.OptionBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.OptionBox"); }
		static hx::ObjectPtr< OptionBox_obj > __new();
		static hx::ObjectPtr< OptionBox_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OptionBox","\x76","\x59","\x26","\x24"); }

		static  ::haxe::ds::StringMap _groups;
		static bool optionInGroup(::String value, ::haxe::ui::components::OptionBox option);
		static ::Dynamic optionInGroup_dyn();

		static ::Array< ::Dynamic> getGroupOptions(::String group);
		static ::Dynamic getGroupOptions_dyn();

		 ::haxe::ui::components::OptionBoxValue _value;
		 ::haxe::ui::components::Label _label;
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

		::String _groupName;
		::String get_groupName();
		::Dynamic get_groupName_dyn();

		::String set_groupName(::String value);
		::Dynamic set_groupName_dyn();

		 ::haxe::ui::components::OptionBox selectedOption;
		 ::haxe::ui::components::OptionBox get_selectedOption();
		::Dynamic get_selectedOption_dyn();

		void _onClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onClick_dyn();

		void _onMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOver_dyn();

		void _onMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOut_dyn();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_OptionBox */ 
