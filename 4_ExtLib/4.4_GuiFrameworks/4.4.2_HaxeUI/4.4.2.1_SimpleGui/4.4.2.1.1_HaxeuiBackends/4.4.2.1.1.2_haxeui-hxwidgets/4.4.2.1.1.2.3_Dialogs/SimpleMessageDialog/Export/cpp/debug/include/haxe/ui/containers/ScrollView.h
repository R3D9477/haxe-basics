// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#define INCLUDED_haxe_ui_containers_ScrollView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,HScroll)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,VScroll)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,ScrollEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ScrollView_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef ScrollView_obj OBJ_;
		ScrollView_obj();

	public:
		enum { _hx_ClassId = 0x1c7b87fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ScrollView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ScrollView"); }
		static hx::ObjectPtr< ScrollView_obj > __new();
		static hx::ObjectPtr< ScrollView_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScrollView","\x32","\xc5","\xbf","\x02"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int INERTIAL_TIME_CONSTANT;
		 ::haxe::ui::containers::Box _contents;
		 ::haxe::ui::components::HScroll _hscroll;
		 ::haxe::ui::components::VScroll _vscroll;
		virtual  ::haxe::ui::layouts::Layout createLayout();

		virtual void createDefaults();

		::String _layoutName;
		::String get_layoutName();
		::Dynamic get_layoutName_dyn();

		::String set_layoutName(::String value);
		::Dynamic set_layoutName_dyn();

		virtual void createChildren();

		virtual void createContentContainer();
		::Dynamic createContentContainer_dyn();

		void destroyChildren();

		Float _vscrollPos;
		Float get_vscrollPos();
		::Dynamic get_vscrollPos_dyn();

		Float set_vscrollPos(Float value);
		::Dynamic set_vscrollPos_dyn();

		Float vscrollMax;
		Float get_vscrollMax();
		::Dynamic get_vscrollMax_dyn();

		Float _hscrollPos;
		Float get_hscrollPos();
		::Dynamic get_hscrollPos_dyn();

		Float set_hscrollPos(Float value);
		::Dynamic set_hscrollPos_dyn();

		 ::Dynamic get_contentWidth();
		::Dynamic get_contentWidth_dyn();

		 ::Dynamic set_contentWidth( ::Dynamic value);
		::Dynamic set_contentWidth_dyn();

		 ::Dynamic get_contentHeight();
		::Dynamic get_contentHeight_dyn();

		 ::Dynamic set_contentHeight( ::Dynamic value);
		::Dynamic set_contentHeight_dyn();

		 ::Dynamic get_percentContentWidth();
		::Dynamic get_percentContentWidth_dyn();

		 ::Dynamic set_percentContentWidth( ::Dynamic value);
		::Dynamic set_percentContentWidth_dyn();

		 ::Dynamic get_percentContentHeight();
		::Dynamic get_percentContentHeight_dyn();

		 ::Dynamic set_percentContentHeight( ::Dynamic value);
		::Dynamic set_percentContentHeight_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);

		void clearContents();
		::Dynamic clearContents_dyn();

		 ::haxe::ui::core::Component addComponentToSuper( ::haxe::ui::core::Component child);
		::Dynamic addComponentToSuper_dyn();

		 ::haxe::ui::core::Component contents;
		 ::haxe::ui::core::Component get_contents();
		::Dynamic get_contents_dyn();

		 ::haxe::ui::core::Component horizontalConstraint;
		virtual  ::haxe::ui::core::Component get_horizontalConstraint();
		::Dynamic get_horizontalConstraint_dyn();

		 ::haxe::ui::core::Component verticalConstraint;
		virtual  ::haxe::ui::core::Component get_verticalConstraint();
		::Dynamic get_verticalConstraint_dyn();

		::String _scrollMode;
		::String get_scrollMode();
		::Dynamic get_scrollMode_dyn();

		::String set_scrollMode(::String value);
		::Dynamic set_scrollMode_dyn();

		 ::Dynamic _hx___onScrollChange;
		Dynamic _hx___onScrollChange_dyn() { return _hx___onScrollChange;}
		 ::Dynamic onScrollChange;
		Dynamic onScrollChange_dyn() { return onScrollChange;}
		 ::Dynamic set_onScrollChange( ::Dynamic value);
		::Dynamic set_onScrollChange_dyn();

		void invalidateScroll();
		::Dynamic invalidateScroll_dyn();

		virtual void validateInternal();

		virtual void validateScroll();
		::Dynamic validateScroll_dyn();

		Float _inertialTimestamp;
		Float _offsetX;
		Float _screenOffsetX;
		Float _inertialAmplitudeX;
		Float _inertialTargetX;
		int _inertiaDirectionX;
		Float _offsetY;
		Float _screenOffsetY;
		Float _inertialAmplitudeY;
		Float _inertialTargetY;
		int _inertiaDirectionY;
		void _onMouseWheel( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseWheel_dyn();

		void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void _onMouseMove( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseMove_dyn();

		void _onMouseUp( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseUp_dyn();

		void inertialScroll();
		::Dynamic inertialScroll_dyn();

		virtual void _onContentsResized( ::haxe::ui::core::UIEvent event);
		::Dynamic _onContentsResized_dyn();

		Float hscrollOffset;
		virtual Float get_hscrollOffset();
		::Dynamic get_hscrollOffset_dyn();

		void checkScrolls();
		::Dynamic checkScrolls_dyn();

		void _onHScroll( ::haxe::ui::core::UIEvent event);
		::Dynamic _onHScroll_dyn();

		void _onVScroll( ::haxe::ui::core::UIEvent event);
		::Dynamic _onVScroll_dyn();

		virtual void updateScrollRect();
		::Dynamic updateScrollRect_dyn();

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ScrollView */ 
