// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_TextAlign
#define INCLUDED_haxe_ui_styles_TextAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,TextAlign)
namespace haxe{
namespace ui{
namespace styles{


class TextAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextAlign_obj OBJ_;

	public:
		TextAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.TextAlign","\x7e","\xec","\x13","\x1d"); }
		::String __ToString() const { return HX_HCSTRING("TextAlign.","\x76","\x1a","\x3c","\x6b") + _hx_tag; }

		static ::haxe::ui::styles::TextAlign Center;
		static inline ::haxe::ui::styles::TextAlign Center_dyn() { return Center; }
		static ::haxe::ui::styles::TextAlign Left;
		static inline ::haxe::ui::styles::TextAlign Left_dyn() { return Left; }
		static ::haxe::ui::styles::TextAlign Right;
		static inline ::haxe::ui::styles::TextAlign Right_dyn() { return Right; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_TextAlign */ 
