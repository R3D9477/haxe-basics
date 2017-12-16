// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_SwitchLayout
#define INCLUDED_haxe_ui_components_SwitchLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,components,SwitchLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SwitchLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef SwitchLayout_obj OBJ_;
		SwitchLayout_obj();

	public:
		enum { _hx_ClassId = 0x3a6b85ae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.SwitchLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.SwitchLayout"); }
		static hx::ObjectPtr< SwitchLayout_obj > __new();
		static hx::ObjectPtr< SwitchLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SwitchLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SwitchLayout","\xde","\xa7","\xea","\x3c"); }

		void repositionChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_SwitchLayout */ 
