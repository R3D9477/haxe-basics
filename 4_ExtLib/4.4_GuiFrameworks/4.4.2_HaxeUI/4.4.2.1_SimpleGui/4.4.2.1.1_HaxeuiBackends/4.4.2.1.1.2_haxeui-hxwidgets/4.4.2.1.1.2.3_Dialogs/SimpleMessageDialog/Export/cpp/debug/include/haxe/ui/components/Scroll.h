// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Scroll
#define INCLUDED_haxe_ui_components_Scroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
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


class HXCPP_CLASS_ATTRIBUTES Scroll_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Scroll_obj OBJ_;
		Scroll_obj();

	public:
		enum { _hx_ClassId = 0x419aedfd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Scroll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Scroll"); }
		static hx::ObjectPtr< Scroll_obj > __new();
		static hx::ObjectPtr< Scroll_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scroll_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Scroll","\x2d","\x4c","\xf9","\x7b"); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::haxe::ui::components::Button _incButton;
		 ::haxe::ui::components::Button _deincButton;
		 ::haxe::ui::components::Button _thumb;
		virtual void createDefaults();

		void createChildren();

		 ::haxe::ui::util::VariantType get_value();

		 ::haxe::ui::util::VariantType set_value( ::haxe::ui::util::VariantType value);

		void validateData();

		Float _pos;
		Float get_pos();
		::Dynamic get_pos_dyn();

		Float set_pos(Float value);
		::Dynamic set_pos_dyn();

		void animatePos(Float value);
		::Dynamic animatePos_dyn();

		Float _min;
		Float get_min();
		::Dynamic get_min_dyn();

		Float set_min(Float value);
		::Dynamic set_min_dyn();

		Float _max;
		Float get_max();
		::Dynamic get_max_dyn();

		Float set_max(Float value);
		::Dynamic set_max_dyn();

		Float _pageSize;
		Float get_pageSize();
		::Dynamic get_pageSize_dyn();

		Float set_pageSize(Float value);
		::Dynamic set_pageSize_dyn();

		Float _incrementSize;
		Float get_incrementSize();
		::Dynamic get_incrementSize_dyn();

		Float set_incrementSize(Float value);
		::Dynamic set_incrementSize_dyn();

		Float _mouseDownOffset;
		void _onDeinc( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onDeinc_dyn();

		void _onInc( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onInc_dyn();

		virtual void _onThumbMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onThumbMouseDown_dyn();

		virtual void _onScreenMouseMove( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onScreenMouseMove_dyn();

		void _onScreenMouseUp( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onScreenMouseUp_dyn();

		virtual void _onMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseDown_dyn();

		void deincrementValue();
		::Dynamic deincrementValue_dyn();

		void incrementValue();
		::Dynamic incrementValue_dyn();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Scroll */ 
