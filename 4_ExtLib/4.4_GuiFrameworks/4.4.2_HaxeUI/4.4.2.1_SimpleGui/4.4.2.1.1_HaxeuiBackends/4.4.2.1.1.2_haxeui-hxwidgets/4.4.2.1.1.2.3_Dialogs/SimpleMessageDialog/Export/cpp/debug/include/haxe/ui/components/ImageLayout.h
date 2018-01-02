// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_ImageLayout
#define INCLUDED_haxe_ui_components_ImageLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,ImageLayout)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES ImageLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef ImageLayout_obj OBJ_;
		ImageLayout_obj();

	public:
		enum { _hx_ClassId = 0x573d1c75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.ImageLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.ImageLayout"); }
		static hx::ObjectPtr< ImageLayout_obj > __new();
		static hx::ObjectPtr< ImageLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageLayout","\x45","\x50","\x2b","\x85"); }

		::String get_imageScaleMode();
		::Dynamic get_imageScaleMode_dyn();

		::String get_imageHorizontalAlign();
		::Dynamic get_imageHorizontalAlign_dyn();

		::String get_imageVerticalAlign();
		::Dynamic get_imageVerticalAlign_dyn();

		void resizeChildren();

		void repositionChildren();

		 ::haxe::ui::util::Size calcAutoSize(::Array< ::Dynamic> exclusions);

		void updateClipRect( ::haxe::ui::util::Size usz);
		::Dynamic updateClipRect_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_ImageLayout */ 
