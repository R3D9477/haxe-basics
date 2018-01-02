// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultIndeterminateBehaviour
#define INCLUDED_haxe_ui_components_ProgressDefaultIndeterminateBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,animation,Animation)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,Progress)
HX_DECLARE_CLASS3(haxe,ui,components,ProgressDefaultIndeterminateBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
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


class HXCPP_CLASS_ATTRIBUTES ProgressDefaultIndeterminateBehaviour_obj : public  ::haxe::ui::core::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::core::Behaviour_obj super;
		typedef ProgressDefaultIndeterminateBehaviour_obj OBJ_;
		ProgressDefaultIndeterminateBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x0de161a2 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.ProgressDefaultIndeterminateBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour"); }
		static hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgressDefaultIndeterminateBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ProgressDefaultIndeterminateBehaviour","\x56","\x5f","\x79","\xd9"); }

		bool _value;
		 ::haxe::ui::animation::Animation _animation;
		void set( ::haxe::ui::util::VariantType value);

		 ::haxe::ui::util::VariantType get();

		void startIndeterminateAnimation( ::haxe::ui::components::Progress progress);
		::Dynamic startIndeterminateAnimation_dyn();

		void stopIndeterminateAnimation( ::haxe::ui::components::Progress progress);
		::Dynamic stopIndeterminateAnimation_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_ProgressDefaultIndeterminateBehaviour */ 
