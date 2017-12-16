// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayout
#define INCLUDED_haxe_ui_layouts_DelegateLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES DelegateLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef DelegateLayout_obj OBJ_;
		DelegateLayout_obj();

	public:
		enum { _hx_ClassId = 0x1ba2bb36 };

		void __construct( ::haxe::ui::layouts::DelegateLayoutSize size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.DelegateLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.DelegateLayout"); }
		static hx::ObjectPtr< DelegateLayout_obj > __new( ::haxe::ui::layouts::DelegateLayoutSize size);
		static hx::ObjectPtr< DelegateLayout_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::layouts::DelegateLayoutSize size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DelegateLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DelegateLayout","\xef","\xef","\x0d","\xfb"); }

		 ::haxe::ui::layouts::DelegateLayoutSize _size;
		 ::haxe::ui::util::Size calcAutoSize(::Array< ::Dynamic> exclusions);

		 ::haxe::ui::util::Size get_usableSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_DelegateLayout */ 
