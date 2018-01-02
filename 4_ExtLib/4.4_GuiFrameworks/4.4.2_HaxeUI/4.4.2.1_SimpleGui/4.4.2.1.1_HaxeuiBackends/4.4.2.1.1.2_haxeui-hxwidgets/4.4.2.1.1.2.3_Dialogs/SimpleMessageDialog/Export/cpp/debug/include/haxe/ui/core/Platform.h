// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_Platform
#define INCLUDED_haxe_ui_core_Platform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,PlatformBase)
HX_DECLARE_CLASS3(haxe,ui,core,Platform)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Platform_obj : public  ::haxe::ui::backend::PlatformBase_obj
{
	public:
		typedef  ::haxe::ui::backend::PlatformBase_obj super;
		typedef Platform_obj OBJ_;
		Platform_obj();

	public:
		enum { _hx_ClassId = 0x4b345710 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.core.Platform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.core.Platform"); }
		static hx::ObjectPtr< Platform_obj > __new();
		static hx::ObjectPtr< Platform_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Platform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Platform","\xd3","\x6e","\xab","\x41"); }

		static void __boot();
		static ::String METRIC_VSCROLL_WIDTH;
		static ::String METRIC_HSCROLL_HEIGHT;
		static Float vscrollWidth;
		static Float get_vscrollWidth();
		static ::Dynamic get_vscrollWidth_dyn();

		static Float hscrollHeight;
		static Float get_hscrollHeight();
		static ::Dynamic get_hscrollHeight_dyn();

		static  ::haxe::ui::core::Platform _instance;
		static  ::haxe::ui::core::Platform instance;
		static  ::haxe::ui::core::Platform get_instance();
		static ::Dynamic get_instance_dyn();

		Float getMetric(::String id);

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Platform */ 
