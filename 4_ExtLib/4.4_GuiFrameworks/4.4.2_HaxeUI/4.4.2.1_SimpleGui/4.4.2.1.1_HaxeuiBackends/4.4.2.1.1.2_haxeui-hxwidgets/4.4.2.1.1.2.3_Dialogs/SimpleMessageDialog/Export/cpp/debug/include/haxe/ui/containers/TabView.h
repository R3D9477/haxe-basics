// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_TabView
#define INCLUDED_haxe_ui_containers_TabView

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
HX_DECLARE_CLASS3(haxe,ui,containers,TabView)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TabView_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef TabView_obj OBJ_;
		TabView_obj();

	public:
		enum { _hx_ClassId = 0x0abdf4ee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TabView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TabView"); }
		static hx::ObjectPtr< TabView_obj > __new();
		static hx::ObjectPtr< TabView_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TabView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TabView","\x3a","\x2f","\x16","\x14"); }

		 ::haxe::ui::components::TabBar _tabs;
		 ::haxe::ui::containers::VBox _content;
		::Array< ::Dynamic> _views;
		void createDefaults();

		void createChildren();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);

		 ::Dynamic findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String searchType);

		 ::haxe::ui::core::Component _currentView;
		int _pageIndex;
		int get_pageIndex();
		::Dynamic get_pageIndex_dyn();

		int set_pageIndex(int value);
		::Dynamic set_pageIndex_dyn();

		 ::haxe::ui::core::Component selectedPage;
		 ::haxe::ui::core::Component get_selectedPage();
		::Dynamic get_selectedPage_dyn();

		::Array< ::Dynamic> pages;
		::Array< ::Dynamic> get_pages();
		::Dynamic get_pages_dyn();

		int pageCount;
		int get_pageCount();
		::Dynamic get_pageCount_dyn();

		 ::haxe::ui::components::Button selectedButton;
		 ::haxe::ui::components::Button get_selectedButton();
		::Dynamic get_selectedButton_dyn();

		void removeAllTabs();
		::Dynamic removeAllTabs_dyn();

		 ::Dynamic _hx___onBeforeChange;
		Dynamic _hx___onBeforeChange_dyn() { return _hx___onBeforeChange;}
		 ::Dynamic onBeforeChange;
		Dynamic onBeforeChange_dyn() { return onBeforeChange;}
		 ::Dynamic set_onBeforeChange( ::Dynamic value);
		::Dynamic set_onBeforeChange_dyn();

		void validateData();

		void onBeforeTabsChange( ::haxe::ui::core::UIEvent event);
		::Dynamic onBeforeTabsChange_dyn();

		void _onTabsChange( ::haxe::ui::core::UIEvent event);
		::Dynamic _onTabsChange_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TabView */ 
