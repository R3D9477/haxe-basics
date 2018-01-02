// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_VariantType
#define INCLUDED_haxe_ui_util_VariantType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,styles,Unit)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
namespace haxe{
namespace ui{
namespace util{


class VariantType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VariantType_obj OBJ_;

	public:
		VariantType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.ui.util.VariantType","\x65","\x1a","\x43","\xde"); }
		::String __ToString() const { return HX_HCSTRING("VariantType.","\x8f","\xe9","\x77","\xaa") + _hx_tag; }

		static ::haxe::ui::util::VariantType _hx_Bool(bool s);
		static ::Dynamic _hx_Bool_dyn();
		static ::haxe::ui::util::VariantType DataSource( ::haxe::ui::data::DataSource s);
		static ::Dynamic DataSource_dyn();
		static ::haxe::ui::util::VariantType _hx_Float(Float s);
		static ::Dynamic _hx_Float_dyn();
		static ::haxe::ui::util::VariantType _hx_Int(int s);
		static ::Dynamic _hx_Int_dyn();
		static ::haxe::ui::util::VariantType String(::String s);
		static ::Dynamic String_dyn();
		static ::haxe::ui::util::VariantType Unit( ::haxe::ui::styles::Unit s);
		static ::Dynamic Unit_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_VariantType */ 
