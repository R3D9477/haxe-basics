// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Unit
#define INCLUDED_haxe_ui_styles_Unit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Unit)
namespace haxe{
namespace ui{
namespace styles{


class Unit_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Unit_obj OBJ_;

	public:
		Unit_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.Unit","\x9e","\xa6","\x3e","\x1b"); }
		::String __ToString() const { return HX_HCSTRING("Unit.","\x0a","\xd9","\x14","\x3a") + _hx_tag; }

		static ::haxe::ui::styles::Unit EM(Float v);
		static ::Dynamic EM_dyn();
		static ::haxe::ui::styles::Unit Percent(Float v);
		static ::Dynamic Percent_dyn();
		static ::haxe::ui::styles::Unit Pix(Float v);
		static ::Dynamic Pix_dyn();
		static ::haxe::ui::styles::Unit REM(Float v);
		static ::Dynamic REM_dyn();
		static ::haxe::ui::styles::Unit VH(Float v);
		static ::Dynamic VH_dyn();
		static ::haxe::ui::styles::Unit VW(Float v);
		static ::Dynamic VW_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Unit */ 
