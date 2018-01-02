// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_TextField
#define INCLUDED_haxe_ui_components_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Image)
HX_DECLARE_CLASS3(haxe,ui,components,TextField)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TextField_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();

	public:
		enum { _hx_ClassId = 0x7f5eb4d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TextField"); }
		static hx::ObjectPtr< TextField_obj > __new();
		static hx::ObjectPtr< TextField_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"); }

		 ::haxe::ui::components::Image _icon;
		void createDefaults();

		void createChildren();

		void destroyChildren();

		::String set_text(::String value);

		bool set_focus(bool value);

		void applyStyle( ::haxe::ui::styles::Style style);

		bool get_empty();
		::Dynamic get_empty_dyn();

		::String _iconResource;
		::String get_icon();
		::Dynamic get_icon_dyn();

		::String set_icon(::String value);
		::Dynamic set_icon_dyn();

		bool _password;
		bool get_password();
		::Dynamic get_password_dyn();

		bool set_password(bool value);
		::Dynamic set_password_dyn();

		int _maxChars;
		int get_maxChars();
		::Dynamic get_maxChars_dyn();

		int set_maxChars(int value);
		::Dynamic set_maxChars_dyn();

		::String _placeholder;
		::String get_placeholder();
		::Dynamic get_placeholder_dyn();

		::String set_placeholder(::String value);
		::Dynamic set_placeholder_dyn();

		 ::EReg _restrictEReg;
		::String _restrictChars;
		::String get_restrictChars();
		::Dynamic get_restrictChars_dyn();

		::String set_restrictChars(::String value);
		::Dynamic set_restrictChars_dyn();

		void _onTextChanged( ::haxe::ui::core::UIEvent event);
		::Dynamic _onTextChanged_dyn();

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void validateData();

		 ::EReg _generateRestrictEReg();
		::Dynamic _generateRestrictEReg_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TextField */ 
