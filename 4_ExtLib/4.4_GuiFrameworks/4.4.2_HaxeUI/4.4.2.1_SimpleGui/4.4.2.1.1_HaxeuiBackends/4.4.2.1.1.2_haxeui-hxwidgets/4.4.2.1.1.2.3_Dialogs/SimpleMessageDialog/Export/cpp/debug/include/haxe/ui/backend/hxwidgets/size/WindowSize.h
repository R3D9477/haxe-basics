// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_WindowSize
#define INCLUDED_haxe_ui_backend_hxwidgets_size_WindowSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,size,WindowSize)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{


class HXCPP_CLASS_ATTRIBUTES WindowSize_obj : public  ::haxe::ui::layouts::DelegateLayoutSize_obj
{
	public:
		typedef  ::haxe::ui::layouts::DelegateLayoutSize_obj super;
		typedef WindowSize_obj OBJ_;
		WindowSize_obj();

	public:
		enum { _hx_ClassId = 0x77ebf6b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.size.WindowSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.size.WindowSize"); }
		static hx::ObjectPtr< WindowSize_obj > __new();
		static hx::ObjectPtr< WindowSize_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowSize_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WindowSize","\xf1","\x1c","\xdb","\xcd"); }

		Float get_width();

		Float get_height();

		Float get_usableWidthModifier();

		Float get_usableHeightModifier();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_size_WindowSize */ 
