// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TabViewIcons
#define INCLUDED_haxe_ui_backend_hxwidgets_TabViewIcons

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,IconMap)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,TabViewIcons)
HX_DECLARE_CLASS3(haxe,ui,containers,TabView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES TabViewIcons_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TabViewIcons_obj OBJ_;
		TabViewIcons_obj();

	public:
		enum { _hx_ClassId = 0x02fbe385 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.TabViewIcons")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.TabViewIcons"); }

		hx::ObjectPtr< TabViewIcons_obj > __new() {
			hx::ObjectPtr< TabViewIcons_obj > __this = new TabViewIcons_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TabViewIcons_obj > __alloc(hx::Ctx *_hx_ctx) {
			TabViewIcons_obj *__this = (TabViewIcons_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabViewIcons_obj), false, "haxe.ui.backend.hxwidgets.TabViewIcons"));
			*(void **)__this = TabViewIcons_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TabViewIcons_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TabViewIcons","\x40","\x71","\xd7","\x9c"); }

		static void __boot();
		static  ::haxe::ui::backend::hxwidgets::IconMap _map;
		static int get( ::haxe::ui::containers::TabView tabView,::String icon);
		static ::Dynamic get_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_TabViewIcons */ 
