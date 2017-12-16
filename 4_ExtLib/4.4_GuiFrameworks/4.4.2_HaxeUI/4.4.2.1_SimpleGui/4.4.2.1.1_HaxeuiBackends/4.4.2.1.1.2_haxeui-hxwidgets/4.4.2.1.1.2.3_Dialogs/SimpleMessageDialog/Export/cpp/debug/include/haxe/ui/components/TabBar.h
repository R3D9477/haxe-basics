// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_TabBar
#define INCLUDED_haxe_ui_components_TabBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,TabBar)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TabBar_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef TabBar_obj OBJ_;
		TabBar_obj();

	public:
		enum { _hx_ClassId = 0x7673886e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TabBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TabBar"); }
		static hx::ObjectPtr< TabBar_obj > __new();
		static hx::ObjectPtr< TabBar_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TabBar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TabBar","\x9e","\xe6","\xd1","\xb0"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int SCROLL_INCREMENT;
		 ::haxe::ui::components::Button _currentButton;
		 ::haxe::ui::containers::HBox _container;
		void createContainer();
		::Dynamic createContainer_dyn();

		void createDefaults();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);

		bool validateLayout();

		 ::haxe::ui::components::Button _scrollLeft;
		 ::haxe::ui::components::Button _scrollRight;
		void showScrollButtons();
		::Dynamic showScrollButtons_dyn();

		 ::Dynamic _containerPosition;
		void scrollLeft();
		::Dynamic scrollLeft_dyn();

		void scrollRight();
		::Dynamic scrollRight_dyn();

		void hideScrollButtons();
		::Dynamic hideScrollButtons_dyn();

		void validateData();

		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		 ::haxe::ui::components::Button selectedButton;
		 ::haxe::ui::components::Button get_selectedButton();
		::Dynamic get_selectedButton_dyn();

		int buttonCount;
		int get_buttonCount();
		::Dynamic get_buttonCount_dyn();

		void resetSelection();
		::Dynamic resetSelection_dyn();

		void _onButtonMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onButtonMouseDown_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TabBar */ 
