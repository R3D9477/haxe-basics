// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#define INCLUDED_haxe_ui_layouts_DefaultLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES DefaultLayout_obj : public  ::haxe::ui::layouts::Layout_obj
{
	public:
		typedef  ::haxe::ui::layouts::Layout_obj super;
		typedef DefaultLayout_obj OBJ_;
		DefaultLayout_obj();

	public:
		enum { _hx_ClassId = 0x652c3c60 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.DefaultLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.DefaultLayout"); }
		static hx::ObjectPtr< DefaultLayout_obj > __new();
		static hx::ObjectPtr< DefaultLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DefaultLayout","\x2b","\xd2","\x21","\x9b"); }

		virtual void resizeChildren();

		virtual void repositionChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_DefaultLayout */ 
