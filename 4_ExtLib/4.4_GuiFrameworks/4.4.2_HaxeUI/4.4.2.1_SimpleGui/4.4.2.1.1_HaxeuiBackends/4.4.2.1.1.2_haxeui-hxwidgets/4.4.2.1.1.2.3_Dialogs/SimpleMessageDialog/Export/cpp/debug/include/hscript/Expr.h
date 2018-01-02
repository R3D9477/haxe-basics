// GeneratedByHaxe
#ifndef INCLUDED_hscript_Expr
#define INCLUDED_hscript_Expr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Expr)
namespace hscript{


class Expr_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Expr_obj OBJ_;

	public:
		Expr_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.Expr","\x30","\x4b","\xdc","\x98"); }
		::String __ToString() const { return HX_HCSTRING("Expr.","\x39","\x01","\x4d","\x0a") + _hx_tag; }

		static ::hscript::Expr EArray( ::hscript::Expr e, ::hscript::Expr index);
		static ::Dynamic EArray_dyn();
		static ::hscript::Expr EArrayDecl(::Array< ::Dynamic> e);
		static ::Dynamic EArrayDecl_dyn();
		static ::hscript::Expr EBinop(::String op, ::hscript::Expr e1, ::hscript::Expr e2);
		static ::Dynamic EBinop_dyn();
		static ::hscript::Expr EBlock(::Array< ::Dynamic> e);
		static ::Dynamic EBlock_dyn();
		static ::hscript::Expr EBreak;
		static inline ::hscript::Expr EBreak_dyn() { return EBreak; }
		static ::hscript::Expr ECall( ::hscript::Expr e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::hscript::Expr EConst( ::hscript::Const c);
		static ::Dynamic EConst_dyn();
		static ::hscript::Expr EContinue;
		static inline ::hscript::Expr EContinue_dyn() { return EContinue; }
		static ::hscript::Expr EDoWhile( ::hscript::Expr cond, ::hscript::Expr e);
		static ::Dynamic EDoWhile_dyn();
		static ::hscript::Expr EField( ::hscript::Expr e,::String f);
		static ::Dynamic EField_dyn();
		static ::hscript::Expr EFor(::String v, ::hscript::Expr it, ::hscript::Expr e);
		static ::Dynamic EFor_dyn();
		static ::hscript::Expr EFunction(::Array< ::Dynamic> args, ::hscript::Expr e,::String name, ::hscript::CType ret);
		static ::Dynamic EFunction_dyn();
		static ::hscript::Expr EIdent(::String v);
		static ::Dynamic EIdent_dyn();
		static ::hscript::Expr EIf( ::hscript::Expr cond, ::hscript::Expr e1, ::hscript::Expr e2);
		static ::Dynamic EIf_dyn();
		static ::hscript::Expr EMeta(::String name,::Array< ::Dynamic> args, ::hscript::Expr e);
		static ::Dynamic EMeta_dyn();
		static ::hscript::Expr ENew(::String cl,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::hscript::Expr EObject(::Array< ::Dynamic> fl);
		static ::Dynamic EObject_dyn();
		static ::hscript::Expr EParent( ::hscript::Expr e);
		static ::Dynamic EParent_dyn();
		static ::hscript::Expr EReturn( ::hscript::Expr e);
		static ::Dynamic EReturn_dyn();
		static ::hscript::Expr ESwitch( ::hscript::Expr e,::Array< ::Dynamic> cases, ::hscript::Expr defaultExpr);
		static ::Dynamic ESwitch_dyn();
		static ::hscript::Expr ETernary( ::hscript::Expr cond, ::hscript::Expr e1, ::hscript::Expr e2);
		static ::Dynamic ETernary_dyn();
		static ::hscript::Expr EThrow( ::hscript::Expr e);
		static ::Dynamic EThrow_dyn();
		static ::hscript::Expr ETry( ::hscript::Expr e,::String v, ::hscript::CType t, ::hscript::Expr ecatch);
		static ::Dynamic ETry_dyn();
		static ::hscript::Expr EUnop(::String op,bool prefix, ::hscript::Expr e);
		static ::Dynamic EUnop_dyn();
		static ::hscript::Expr EVar(::String n, ::hscript::CType t, ::hscript::Expr e);
		static ::Dynamic EVar_dyn();
		static ::hscript::Expr EWhile( ::hscript::Expr cond, ::hscript::Expr e);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Expr */ 
