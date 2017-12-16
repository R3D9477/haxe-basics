// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlPulse
#define INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlPulse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,ControlPulse)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,HxWidgetsBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES ControlPulse_obj : public  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj super;
		typedef ControlPulse_obj OBJ_;
		ControlPulse_obj();

	public:
		enum { _hx_ClassId = 0x0332b3ff };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.behaviours.ControlPulse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.behaviours.ControlPulse"); }
		static hx::ObjectPtr< ControlPulse_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< ControlPulse_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ControlPulse_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ControlPulse","\x9c","\x46","\x74","\x57"); }

		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlPulse */ 
