// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#define INCLUDED_haxe_ui_layouts_AbsoluteLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,layouts,AbsoluteLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES AbsoluteLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef AbsoluteLayout_obj OBJ_;
		AbsoluteLayout_obj();

	public:
		enum { _hx_ClassId = 0x139603e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.AbsoluteLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.AbsoluteLayout"); }
		static hx::ObjectPtr< AbsoluteLayout_obj > __new();
		static hx::ObjectPtr< AbsoluteLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbsoluteLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AbsoluteLayout","\xa1","\x38","\x01","\xf3"); }

		void repositionChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_AbsoluteLayout */ 
