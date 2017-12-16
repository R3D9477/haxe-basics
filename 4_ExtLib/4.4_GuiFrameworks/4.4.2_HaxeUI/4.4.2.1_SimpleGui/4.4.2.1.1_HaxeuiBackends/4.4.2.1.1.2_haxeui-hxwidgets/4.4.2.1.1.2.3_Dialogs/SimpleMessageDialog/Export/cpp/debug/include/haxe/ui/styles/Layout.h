// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Layout
#define INCLUDED_haxe_ui_styles_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Layout)
namespace haxe{
namespace ui{
namespace styles{


class Layout_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Layout_obj OBJ_;

	public:
		Layout_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.Layout","\x44","\x45","\x50","\x5a"); }
		::String __ToString() const { return HX_HCSTRING("Layout.","\x24","\x4e","\x31","\x16") + _hx_tag; }

		static ::haxe::ui::styles::Layout Absolute;
		static inline ::haxe::ui::styles::Layout Absolute_dyn() { return Absolute; }
		static ::haxe::ui::styles::Layout Dock;
		static inline ::haxe::ui::styles::Layout Dock_dyn() { return Dock; }
		static ::haxe::ui::styles::Layout Horizontal;
		static inline ::haxe::ui::styles::Layout Horizontal_dyn() { return Horizontal; }
		static ::haxe::ui::styles::Layout Inline;
		static inline ::haxe::ui::styles::Layout Inline_dyn() { return Inline; }
		static ::haxe::ui::styles::Layout Vertical;
		static inline ::haxe::ui::styles::Layout Vertical_dyn() { return Vertical; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Layout */ 
