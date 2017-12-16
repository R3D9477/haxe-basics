// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Value
#define INCLUDED_haxe_ui_styles_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Value)
namespace haxe{
namespace ui{
namespace styles{


class Value_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.styles.Value","\x17","\x3a","\x64","\x46"); }
		::String __ToString() const { return HX_HCSTRING("Value.","\xbd","\x77","\x4b","\x84") + _hx_tag; }

		static ::haxe::ui::styles::Value VCall(::String f,::Array< ::Dynamic> vl);
		static ::Dynamic VCall_dyn();
		static ::haxe::ui::styles::Value VFloat(Float v);
		static ::Dynamic VFloat_dyn();
		static ::haxe::ui::styles::Value VGroup(::Array< ::Dynamic> l);
		static ::Dynamic VGroup_dyn();
		static ::haxe::ui::styles::Value VHex(::String v);
		static ::Dynamic VHex_dyn();
		static ::haxe::ui::styles::Value VIdent(::String i);
		static ::Dynamic VIdent_dyn();
		static ::haxe::ui::styles::Value VInt(int v);
		static ::Dynamic VInt_dyn();
		static ::haxe::ui::styles::Value VLabel(::String v, ::haxe::ui::styles::Value val);
		static ::Dynamic VLabel_dyn();
		static ::haxe::ui::styles::Value VList(::Array< ::Dynamic> l);
		static ::Dynamic VList_dyn();
		static ::haxe::ui::styles::Value VSlash;
		static inline ::haxe::ui::styles::Value VSlash_dyn() { return VSlash; }
		static ::haxe::ui::styles::Value VString(::String s);
		static ::Dynamic VString_dyn();
		static ::haxe::ui::styles::Value VUnit(Float v,::String unit);
		static ::Dynamic VUnit_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Value */ 
