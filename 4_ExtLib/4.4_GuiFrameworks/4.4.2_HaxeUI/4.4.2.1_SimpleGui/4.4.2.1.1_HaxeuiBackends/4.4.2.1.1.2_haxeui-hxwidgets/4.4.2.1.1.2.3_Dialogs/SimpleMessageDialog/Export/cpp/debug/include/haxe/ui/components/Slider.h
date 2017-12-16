// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Slider
#define INCLUDED_haxe_ui_components_Slider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,animation,Animation)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,Slider)
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


class HXCPP_CLASS_ATTRIBUTES Slider_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();

	public:
		enum { _hx_ClassId = 0x6a3adc11 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Slider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Slider"); }
		static hx::ObjectPtr< Slider_obj > __new();
		static hx::ObjectPtr< Slider_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Slider","\x41","\x3a","\x99","\xa4"); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::haxe::ui::core::Component _valueBackground;
		 ::haxe::ui::core::Component _value;
		 ::haxe::ui::components::Button _rangeStartThumb;
		 ::haxe::ui::components::Button _rangeEndThumb;
		virtual void createDefaults();

		virtual void createChildren();

		void destroyChildren();

		 ::haxe::ui::util::VariantType get_value();

		 ::haxe::ui::util::VariantType set_value( ::haxe::ui::util::VariantType value);

		Float _pos;
		Float get_pos();
		::Dynamic get_pos_dyn();

		Float set_pos(Float value);
		::Dynamic set_pos_dyn();

		 ::haxe::ui::animation::Animation _currentAnimation;
		void animatePos(Float value, ::Dynamic callback);
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

		Float _rangeStart;
		Float get_rangeStart();
		::Dynamic get_rangeStart_dyn();

		Float set_rangeStart(Float value);
		::Dynamic set_rangeStart_dyn();

		void animateRangeStart(Float value);
		::Dynamic animateRangeStart_dyn();

		Float _rangeEnd;
		Float get_rangeEnd();
		::Dynamic get_rangeEnd_dyn();

		Float set_rangeEnd(Float value);
		::Dynamic set_rangeEnd_dyn();

		void animateRangeEnd(Float value);
		::Dynamic animateRangeEnd_dyn();

		void setRange(Float start,Float end);
		::Dynamic setRange_dyn();

		void validateData();

		Float _mouseDownOffset;
		 ::haxe::ui::components::Button _activeThumb;
		virtual void _onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onValueBackgroundMouseDown_dyn();

		virtual void _onValueMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onValueMouseDown_dyn();

		virtual void _onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onRangeEndThumbMouseDown_dyn();

		virtual void _onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onRangeStartThumbMouseDown_dyn();

		virtual void _onScreenMouseMove( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onScreenMouseMove_dyn();

		void _onScreenMouseUp( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onScreenMouseUp_dyn();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Slider */ 
