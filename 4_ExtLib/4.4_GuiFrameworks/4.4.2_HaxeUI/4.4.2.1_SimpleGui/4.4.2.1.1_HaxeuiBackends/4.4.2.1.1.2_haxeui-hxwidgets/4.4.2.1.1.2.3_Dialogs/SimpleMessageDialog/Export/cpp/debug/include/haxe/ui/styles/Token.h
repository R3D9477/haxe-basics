// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Token
#define INCLUDED_haxe_ui_styles_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Token)
namespace haxe{
namespace ui{
namespace styles{


class Token_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Token_obj OBJ_;

	public:
		Token_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.Token","\x9f","\x3d","\xd7","\x28"); }
		::String __ToString() const { return HX_HCSTRING("Token.","\x35","\x8b","\x7b","\xc6") + _hx_tag; }

		static ::haxe::ui::styles::Token TBrClose;
		static inline ::haxe::ui::styles::Token TBrClose_dyn() { return TBrClose; }
		static ::haxe::ui::styles::Token TBrOpen;
		static inline ::haxe::ui::styles::Token TBrOpen_dyn() { return TBrOpen; }
		static ::haxe::ui::styles::Token TComma;
		static inline ::haxe::ui::styles::Token TComma_dyn() { return TComma; }
		static ::haxe::ui::styles::Token TDblDot;
		static inline ::haxe::ui::styles::Token TDblDot_dyn() { return TDblDot; }
		static ::haxe::ui::styles::Token TDot;
		static inline ::haxe::ui::styles::Token TDot_dyn() { return TDot; }
		static ::haxe::ui::styles::Token TEof;
		static inline ::haxe::ui::styles::Token TEof_dyn() { return TEof; }
		static ::haxe::ui::styles::Token TExclam;
		static inline ::haxe::ui::styles::Token TExclam_dyn() { return TExclam; }
		static ::haxe::ui::styles::Token TFloat(Float f);
		static ::Dynamic TFloat_dyn();
		static ::haxe::ui::styles::Token TIdent(::String i);
		static ::Dynamic TIdent_dyn();
		static ::haxe::ui::styles::Token TInt(int i);
		static ::Dynamic TInt_dyn();
		static ::haxe::ui::styles::Token TPClose;
		static inline ::haxe::ui::styles::Token TPClose_dyn() { return TPClose; }
		static ::haxe::ui::styles::Token TPOpen;
		static inline ::haxe::ui::styles::Token TPOpen_dyn() { return TPOpen; }
		static ::haxe::ui::styles::Token TPercent;
		static inline ::haxe::ui::styles::Token TPercent_dyn() { return TPercent; }
		static ::haxe::ui::styles::Token TSemicolon;
		static inline ::haxe::ui::styles::Token TSemicolon_dyn() { return TSemicolon; }
		static ::haxe::ui::styles::Token TSharp;
		static inline ::haxe::ui::styles::Token TSharp_dyn() { return TSharp; }
		static ::haxe::ui::styles::Token TSlash;
		static inline ::haxe::ui::styles::Token TSlash_dyn() { return TSlash; }
		static ::haxe::ui::styles::Token TSpaces;
		static inline ::haxe::ui::styles::Token TSpaces_dyn() { return TSpaces; }
		static ::haxe::ui::styles::Token TStar;
		static inline ::haxe::ui::styles::Token TStar_dyn() { return TStar; }
		static ::haxe::ui::styles::Token TString(::String s);
		static ::Dynamic TString_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Token */ 
