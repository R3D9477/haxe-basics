// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Button
#define INCLUDED_haxe_ui_components_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TimerBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x23718646 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Button"); }
		static hx::ObjectPtr< Button_obj > __new();
		static hx::ObjectPtr< Button_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		 ::haxe::ui::util::Timer _repeatTimer;
		virtual void createDefaults();

		virtual void createChildren();

		virtual void destroyChildren();

		::String set_text(::String value);

		void applyStyle( ::haxe::ui::styles::Style style);

		virtual void validateData();

		bool remainPressed;
		bool repeater;
		int repeatInterval;
		::String _iconResource;
		::String get_icon();
		::Dynamic get_icon_dyn();

		::String set_icon(::String value);
		::Dynamic set_icon_dyn();

		::String _iconPosition;
		 ::Dynamic _fontSize;
		::String _textAlign;
		bool _toggle;
		bool get_toggle();
		::Dynamic get_toggle_dyn();

		bool set_toggle(bool value);
		::Dynamic set_toggle_dyn();

		bool _down;
		void _onMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOver_dyn();

		void _onMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOut_dyn();

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void _onRepeatTimer();
		::Dynamic _onRepeatTimer_dyn();

		void _onMouseUp( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseUp_dyn();

		void _onMouseClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseClick_dyn();

		bool _selected;
		bool get_selected();
		::Dynamic get_selected_dyn();

		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		::String get_iconPosition();
		::Dynamic get_iconPosition_dyn();

		::String set_iconPosition(::String value);
		::Dynamic set_iconPosition_dyn();

		 ::Dynamic get_fontSize();
		::Dynamic get_fontSize_dyn();

		 ::Dynamic set_fontSize( ::Dynamic value);
		::Dynamic set_fontSize_dyn();

		::String get_textAlign();
		::Dynamic get_textAlign_dyn();

		::String set_textAlign(::String value);
		::Dynamic set_textAlign_dyn();

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Button */ 
