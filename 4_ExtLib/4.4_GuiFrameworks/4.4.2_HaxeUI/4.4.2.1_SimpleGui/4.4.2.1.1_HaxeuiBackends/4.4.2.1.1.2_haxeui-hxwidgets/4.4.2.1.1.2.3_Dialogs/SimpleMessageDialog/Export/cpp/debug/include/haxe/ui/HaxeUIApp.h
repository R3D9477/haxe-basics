// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_HaxeUIApp
#define INCLUDED_haxe_ui_HaxeUIApp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
HX_DECLARE_CLASS2(haxe,ui,HaxeUIApp)
HX_DECLARE_CLASS2(haxe,ui,Preloader)
HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES HaxeUIApp_obj : public  ::haxe::ui::backend::AppBase_obj
{
	public:
		typedef  ::haxe::ui::backend::AppBase_obj super;
		typedef HaxeUIApp_obj OBJ_;
		HaxeUIApp_obj();

	public:
		enum { _hx_ClassId = 0x771fbbed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.HaxeUIApp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.HaxeUIApp"); }
		static hx::ObjectPtr< HaxeUIApp_obj > __new();
		static hx::ObjectPtr< HaxeUIApp_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeUIApp_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HaxeUIApp","\xa7","\x78","\x9f","\x01"); }

		void ready( ::Dynamic onReady, ::Dynamic onEnd);
		::Dynamic ready_dyn();

		void init( ::Dynamic onReady, ::Dynamic onEnd);

		void handlePreload(::Array< ::Dynamic> list, ::Dynamic onReady, ::Dynamic onEnd, ::haxe::ui::Preloader preloader);
		::Dynamic handlePreload_dyn();

		void addComponent( ::haxe::ui::core::Component component);
		::Dynamic addComponent_dyn();

		void removeComponent( ::haxe::ui::core::Component component);
		::Dynamic removeComponent_dyn();

		void setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		::Array< ::Dynamic> buildPreloadList();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_HaxeUIApp */ 
