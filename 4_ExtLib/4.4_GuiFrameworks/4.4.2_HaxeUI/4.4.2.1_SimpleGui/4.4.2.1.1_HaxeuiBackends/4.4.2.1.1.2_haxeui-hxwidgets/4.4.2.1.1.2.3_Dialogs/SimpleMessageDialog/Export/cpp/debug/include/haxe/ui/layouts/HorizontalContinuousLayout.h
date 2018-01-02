// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#define INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,HorizontalContinuousLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,HorizontalLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES HorizontalContinuousLayout_obj : public  ::haxe::ui::layouts::HorizontalLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::HorizontalLayout_obj super;
		typedef HorizontalContinuousLayout_obj OBJ_;
		HorizontalContinuousLayout_obj();

	public:
		enum { _hx_ClassId = 0x5be69ae8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.HorizontalContinuousLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.HorizontalContinuousLayout"); }
		static hx::ObjectPtr< HorizontalContinuousLayout_obj > __new();
		static hx::ObjectPtr< HorizontalContinuousLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HorizontalContinuousLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HorizontalContinuousLayout","\x3d","\x02","\xc9","\x11"); }

		void resizeChildren();

		void repositionChildren();

		 ::haxe::ui::util::Size get_usableSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout */ 
