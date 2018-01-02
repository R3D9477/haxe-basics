// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Progress
#define INCLUDED_haxe_ui_components_Progress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,Progress)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Progress_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Progress_obj OBJ_;
		Progress_obj();

	public:
		enum { _hx_ClassId = 0x0a86699d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Progress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Progress"); }
		static hx::ObjectPtr< Progress_obj > __new();
		static hx::ObjectPtr< Progress_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Progress_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Progress","\xcd","\xb3","\xdc","\x5f"); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::haxe::ui::core::Component _value;
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

		Float _rangeEnd;
		Float get_rangeEnd();
		::Dynamic get_rangeEnd_dyn();

		Float set_rangeEnd(Float value);
		::Dynamic set_rangeEnd_dyn();

		bool _indeterminate;
		bool get_indeterminate();
		::Dynamic get_indeterminate_dyn();

		bool set_indeterminate(bool value);
		::Dynamic set_indeterminate_dyn();

		void validateData();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Progress */ 
