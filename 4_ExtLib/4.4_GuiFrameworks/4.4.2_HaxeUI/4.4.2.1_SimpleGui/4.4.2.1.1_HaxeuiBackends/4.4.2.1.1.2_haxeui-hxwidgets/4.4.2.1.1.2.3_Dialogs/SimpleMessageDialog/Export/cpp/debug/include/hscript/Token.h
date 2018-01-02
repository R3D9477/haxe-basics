// GeneratedByHaxe
#ifndef INCLUDED_hscript_Token
#define INCLUDED_hscript_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Token)
namespace hscript{


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
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.Token","\x9e","\x70","\xf1","\xc4"); }
		::String __ToString() const { return HX_HCSTRING("Token.","\x35","\x8b","\x7b","\xc6") + _hx_tag; }

		static ::hscript::Token TBkClose;
		static inline ::hscript::Token TBkClose_dyn() { return TBkClose; }
		static ::hscript::Token TBkOpen;
		static inline ::hscript::Token TBkOpen_dyn() { return TBkOpen; }
		static ::hscript::Token TBrClose;
		static inline ::hscript::Token TBrClose_dyn() { return TBrClose; }
		static ::hscript::Token TBrOpen;
		static inline ::hscript::Token TBrOpen_dyn() { return TBrOpen; }
		static ::hscript::Token TComma;
		static inline ::hscript::Token TComma_dyn() { return TComma; }
		static ::hscript::Token TConst( ::hscript::Const c);
		static ::Dynamic TConst_dyn();
		static ::hscript::Token TDot;
		static inline ::hscript::Token TDot_dyn() { return TDot; }
		static ::hscript::Token TDoubleDot;
		static inline ::hscript::Token TDoubleDot_dyn() { return TDoubleDot; }
		static ::hscript::Token TEof;
		static inline ::hscript::Token TEof_dyn() { return TEof; }
		static ::hscript::Token TId(::String s);
		static ::Dynamic TId_dyn();
		static ::hscript::Token TMeta(::String s);
		static ::Dynamic TMeta_dyn();
		static ::hscript::Token TOp(::String s);
		static ::Dynamic TOp_dyn();
		static ::hscript::Token TPClose;
		static inline ::hscript::Token TPClose_dyn() { return TPClose; }
		static ::hscript::Token TPOpen;
		static inline ::hscript::Token TPOpen_dyn() { return TPOpen; }
		static ::hscript::Token TQuestion;
		static inline ::hscript::Token TQuestion_dyn() { return TQuestion; }
		static ::hscript::Token TSemicolon;
		static inline ::hscript::Token TSemicolon_dyn() { return TSemicolon; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Token */ 
