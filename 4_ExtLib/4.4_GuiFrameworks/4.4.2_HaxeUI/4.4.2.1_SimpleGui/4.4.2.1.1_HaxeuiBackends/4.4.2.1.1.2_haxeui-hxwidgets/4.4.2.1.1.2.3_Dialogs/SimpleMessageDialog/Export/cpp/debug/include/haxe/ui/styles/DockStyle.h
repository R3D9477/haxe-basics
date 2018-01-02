// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_DockStyle
#define INCLUDED_haxe_ui_styles_DockStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,DockStyle)
namespace haxe{
namespace ui{
namespace styles{


class DockStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DockStyle_obj OBJ_;

	public:
		DockStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.DockStyle","\xe4","\x22","\x09","\x8a"); }
		::String __ToString() const { return HX_HCSTRING("DockStyle.","\x50","\x7d","\xd6","\x54") + _hx_tag; }

		static ::haxe::ui::styles::DockStyle Bottom;
		static inline ::haxe::ui::styles::DockStyle Bottom_dyn() { return Bottom; }
		static ::haxe::ui::styles::DockStyle Full;
		static inline ::haxe::ui::styles::DockStyle Full_dyn() { return Full; }
		static ::haxe::ui::styles::DockStyle Left;
		static inline ::haxe::ui::styles::DockStyle Left_dyn() { return Left; }
		static ::haxe::ui::styles::DockStyle Right;
		static inline ::haxe::ui::styles::DockStyle Right_dyn() { return Right; }
		static ::haxe::ui::styles::DockStyle Top;
		static inline ::haxe::ui::styles::DockStyle Top_dyn() { return Top; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_DockStyle */ 
