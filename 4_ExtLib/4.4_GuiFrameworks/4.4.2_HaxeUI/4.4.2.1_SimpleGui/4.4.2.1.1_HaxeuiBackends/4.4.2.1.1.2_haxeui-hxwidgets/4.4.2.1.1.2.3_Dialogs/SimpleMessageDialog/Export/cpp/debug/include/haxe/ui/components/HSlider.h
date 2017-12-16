// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_HSlider
#define INCLUDED_haxe_ui_components_HSlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,HSlider)
HX_DECLARE_CLASS3(haxe,ui,components,Slider)
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


class HXCPP_CLASS_ATTRIBUTES HSlider_obj : public  ::haxe::ui::components::Slider_obj
{
	public:
		typedef  ::haxe::ui::components::Slider_obj super;
		typedef HSlider_obj OBJ_;
		HSlider_obj();

	public:
		enum { _hx_ClassId = 0x7e6e94b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.HSlider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.HSlider"); }
		static hx::ObjectPtr< HSlider_obj > __new();
		static hx::ObjectPtr< HSlider_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HSlider_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HSlider","\x89","\xa0","\xa2","\x56"); }

		void createDefaults();

		void createChildren();

		void _onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onValueMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event);

		void _onScreenMouseMove( ::haxe::ui::core::MouseEvent event);

		Float calcPosFromCoord(Float xpos);
		::Dynamic calcPosFromCoord_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_HSlider */ 
