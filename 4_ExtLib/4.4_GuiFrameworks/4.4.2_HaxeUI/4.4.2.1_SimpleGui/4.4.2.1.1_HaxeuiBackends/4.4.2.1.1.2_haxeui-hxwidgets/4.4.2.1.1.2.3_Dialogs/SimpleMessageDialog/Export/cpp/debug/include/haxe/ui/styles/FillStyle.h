// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_FillStyle
#define INCLUDED_haxe_ui_styles_FillStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,FillStyle)
namespace haxe{
namespace ui{
namespace styles{


class FillStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FillStyle_obj OBJ_;

	public:
		FillStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.FillStyle","\x54","\xd1","\x59","\xb5"); }
		::String __ToString() const { return HX_HCSTRING("FillStyle.","\xe0","\x70","\x1e","\x10") + _hx_tag; }

		static ::haxe::ui::styles::FillStyle Color(int c);
		static ::Dynamic Color_dyn();
		static ::haxe::ui::styles::FillStyle Gradient(int a,int b,int c,int d);
		static ::Dynamic Gradient_dyn();
		static ::haxe::ui::styles::FillStyle Transparent;
		static inline ::haxe::ui::styles::FillStyle Transparent_dyn() { return Transparent; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_FillStyle */ 
