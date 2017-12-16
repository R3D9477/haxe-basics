// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_VSlider
#define INCLUDED_haxe_ui_components_VSlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Slider)
HX_DECLARE_CLASS3(haxe,ui,components,VSlider)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES VSlider_obj : public  ::haxe::ui::components::Slider_obj
{
	public:
		typedef  ::haxe::ui::components::Slider_obj super;
		typedef VSlider_obj OBJ_;
		VSlider_obj();

	public:
		enum { _hx_ClassId = 0x053e257f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.VSlider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.VSlider"); }
		static hx::ObjectPtr< VSlider_obj > __new();
		static hx::ObjectPtr< VSlider_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VSlider_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VSlider","\x17","\x1f","\xcf","\x9c"); }

		void createDefaults();

		void createChildren();

		void _onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onValueMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onScreenMouseMove( ::haxe::ui::core::MouseEvent event);

		Float calcPosFromCoord(Float ypos);
		::Dynamic calcPosFromCoord_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_VSlider */ 
