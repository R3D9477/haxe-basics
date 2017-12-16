// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#define INCLUDED_haxe_ui_layouts_HorizontalLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,HorizontalLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES HorizontalLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef HorizontalLayout_obj OBJ_;
		HorizontalLayout_obj();

	public:
		enum { _hx_ClassId = 0x232229d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.HorizontalLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.HorizontalLayout"); }
		static hx::ObjectPtr< HorizontalLayout_obj > __new();
		static hx::ObjectPtr< HorizontalLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HorizontalLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HorizontalLayout","\xce","\xbe","\x4e","\x1b"); }

		virtual void repositionChildren();

		virtual  ::haxe::ui::util::Size get_usableSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_HorizontalLayout */ 
