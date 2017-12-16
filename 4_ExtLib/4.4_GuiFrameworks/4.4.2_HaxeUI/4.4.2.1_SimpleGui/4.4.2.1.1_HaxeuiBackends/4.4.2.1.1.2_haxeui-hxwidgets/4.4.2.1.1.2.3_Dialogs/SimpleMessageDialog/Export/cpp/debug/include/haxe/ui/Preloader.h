// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_Preloader
#define INCLUDED_haxe_ui_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS2(haxe,ui,Preloader)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		enum { _hx_ClassId = 0x7fba9fc4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.Preloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.Preloader"); }
		static hx::ObjectPtr< Preloader_obj > __new();
		static hx::ObjectPtr< Preloader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Preloader","\x56","\xc4","\x4e","\x24"); }

		void createChildren();

		bool validateLayout();

		int _current;
		int _max;
		void progress(int current,int max);
		::Dynamic progress_dyn();

		void increment();
		::Dynamic increment_dyn();

		void complete();
		::Dynamic complete_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_Preloader */ 
