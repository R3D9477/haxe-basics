// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_HProgress
#define INCLUDED_haxe_ui_components_HProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,HProgress)
HX_DECLARE_CLASS3(haxe,ui,components,Progress)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES HProgress_obj : public  ::haxe::ui::components::Progress_obj
{
	public:
		typedef  ::haxe::ui::components::Progress_obj super;
		typedef HProgress_obj OBJ_;
		HProgress_obj();

	public:
		enum { _hx_ClassId = 0x5d979c45 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.HProgress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.HProgress"); }
		static hx::ObjectPtr< HProgress_obj > __new();
		static hx::ObjectPtr< HProgress_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HProgress_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HProgress","\x15","\x3c","\xc2","\xb3"); }

		void createDefaults();

		void createChildren();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_HProgress */ 
