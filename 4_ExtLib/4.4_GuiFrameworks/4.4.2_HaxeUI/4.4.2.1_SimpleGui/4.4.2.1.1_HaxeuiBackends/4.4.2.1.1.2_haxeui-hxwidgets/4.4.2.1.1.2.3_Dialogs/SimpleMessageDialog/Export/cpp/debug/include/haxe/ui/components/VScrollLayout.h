// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_VScrollLayout
#define INCLUDED_haxe_ui_components_VScrollLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,components,VScrollLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES VScrollLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef VScrollLayout_obj OBJ_;
		VScrollLayout_obj();

	public:
		enum { _hx_ClassId = 0x32673c75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.VScrollLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.VScrollLayout"); }
		static hx::ObjectPtr< VScrollLayout_obj > __new();
		static hx::ObjectPtr< VScrollLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VScrollLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VScrollLayout","\x0d","\x78","\x37","\xe7"); }

		void resizeChildren();

		void repositionChildren();

		Float get_usableHeight();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_VScrollLayout */ 
