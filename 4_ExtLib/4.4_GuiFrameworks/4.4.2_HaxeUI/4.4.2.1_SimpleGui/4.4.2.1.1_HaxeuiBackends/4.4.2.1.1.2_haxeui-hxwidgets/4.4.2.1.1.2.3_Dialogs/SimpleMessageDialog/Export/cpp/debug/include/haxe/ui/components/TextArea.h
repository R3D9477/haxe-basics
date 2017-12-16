// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_TextArea
#define INCLUDED_haxe_ui_components_TextArea

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,HScroll)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,TextArea)
HX_DECLARE_CLASS3(haxe,ui,components,VScroll)
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


class HXCPP_CLASS_ATTRIBUTES TextArea_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef TextArea_obj OBJ_;
		TextArea_obj();

	public:
		enum { _hx_ClassId = 0x15d82f92 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TextArea")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TextArea"); }
		static hx::ObjectPtr< TextArea_obj > __new();
		static hx::ObjectPtr< TextArea_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextArea_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TextArea","\xfa","\x9a","\x21","\x1d"); }

		bool get_empty();
		::Dynamic get_empty_dyn();

		::String _placeholder;
		::String get_placeholder();
		::Dynamic get_placeholder_dyn();

		::String set_placeholder(::String value);
		::Dynamic set_placeholder_dyn();

		bool _wrap;
		bool get_wrap();
		::Dynamic get_wrap_dyn();

		bool set_wrap(bool value);
		::Dynamic set_wrap_dyn();

		::String set_text(::String value);

		bool set_focus(bool value);

		void createDefaults();

		void createChildren();

		void destroyChildren();

		void applyStyle( ::haxe::ui::styles::Style style);

		 ::haxe::ui::components::HScroll _hscroll;
		 ::haxe::ui::components::VScroll _vscroll;
		void checkScrolls();
		::Dynamic checkScrolls_dyn();

		void _onMouseWheel( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseWheel_dyn();

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void _onTextChanged( ::haxe::ui::core::UIEvent event);
		::Dynamic _onTextChanged_dyn();

		void _onScrollChange( ::haxe::ui::core::UIEvent e);
		::Dynamic _onScrollChange_dyn();

		void invalidateScroll();
		::Dynamic invalidateScroll_dyn();

		void validateInternal();

		void validateScroll();
		::Dynamic validateScroll_dyn();

		void validateData();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TextArea */ 
