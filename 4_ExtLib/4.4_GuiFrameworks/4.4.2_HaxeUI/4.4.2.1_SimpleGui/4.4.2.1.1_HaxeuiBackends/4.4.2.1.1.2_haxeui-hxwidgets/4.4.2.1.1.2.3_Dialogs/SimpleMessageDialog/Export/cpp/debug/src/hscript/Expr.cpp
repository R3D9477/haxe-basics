// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
namespace hscript{

::hscript::Expr Expr_obj::EArray( ::hscript::Expr e, ::hscript::Expr index)
{
	return hx::CreateEnum< Expr_obj >(HX_("EArray",14,c3,5c,4f),16,2)->_hx_init(0,e)->_hx_init(1,index);
}

::hscript::Expr Expr_obj::EArrayDecl(::Array< ::Dynamic> e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EArrayDecl",9e,59,bd,01),17,1)->_hx_init(0,e);
}

::hscript::Expr Expr_obj::EBinop(::String op, ::hscript::Expr e1, ::hscript::Expr e2)
{
	return hx::CreateEnum< Expr_obj >(HX_("EBinop",23,6f,cd,dc),6,3)->_hx_init(0,op)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscript::Expr Expr_obj::EBlock(::Array< ::Dynamic> e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EBlock",c8,ca,c9,de),4,1)->_hx_init(0,e);
}

::hscript::Expr Expr_obj::EBreak;

::hscript::Expr Expr_obj::ECall( ::hscript::Expr e,::Array< ::Dynamic> params)
{
	return hx::CreateEnum< Expr_obj >(HX_("ECall",83,4b,39,e7),8,2)->_hx_init(0,e)->_hx_init(1,params);
}

::hscript::Expr Expr_obj::EConst( ::hscript::Const c)
{
	return hx::CreateEnum< Expr_obj >(HX_("EConst",de,4e,2b,74),0,1)->_hx_init(0,c);
}

::hscript::Expr Expr_obj::EContinue;

::hscript::Expr Expr_obj::EDoWhile( ::hscript::Expr cond, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EDoWhile",61,0e,d4,34),24,2)->_hx_init(0,cond)->_hx_init(1,e);
}

::hscript::Expr Expr_obj::EField( ::hscript::Expr e,::String f)
{
	return hx::CreateEnum< Expr_obj >(HX_("EField",35,ea,60,2a),5,2)->_hx_init(0,e)->_hx_init(1,f);
}

::hscript::Expr Expr_obj::EFor(::String v, ::hscript::Expr it, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EFor",c4,37,d1,2d),11,3)->_hx_init(0,v)->_hx_init(1,it)->_hx_init(2,e);
}

::hscript::Expr Expr_obj::EFunction(::Array< ::Dynamic> args, ::hscript::Expr e,::String name, ::hscript::CType ret)
{
	return hx::CreateEnum< Expr_obj >(HX_("EFunction",7d,b4,15,c9),14,4)->_hx_init(0,args)->_hx_init(1,e)->_hx_init(2,name)->_hx_init(3,ret);
}

::hscript::Expr Expr_obj::EIdent(::String v)
{
	return hx::CreateEnum< Expr_obj >(HX_("EIdent",6b,98,46,e1),1,1)->_hx_init(0,v);
}

::hscript::Expr Expr_obj::EIf( ::hscript::Expr cond, ::hscript::Expr e1, ::hscript::Expr e2)
{
	return hx::CreateEnum< Expr_obj >(HX_("EIf",82,9b,34,00),9,3)->_hx_init(0,cond)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscript::Expr Expr_obj::EMeta(::String name,::Array< ::Dynamic> args, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EMeta",aa,7d,d8,ed),25,3)->_hx_init(0,name)->_hx_init(1,args)->_hx_init(2,e);
}

::hscript::Expr Expr_obj::ENew(::String cl,::Array< ::Dynamic> params)
{
	return hx::CreateEnum< Expr_obj >(HX_("ENew",1b,41,d7,2d),18,2)->_hx_init(0,cl)->_hx_init(1,params);
}

::hscript::Expr Expr_obj::EObject(::Array< ::Dynamic> fl)
{
	return hx::CreateEnum< Expr_obj >(HX_("EObject",e4,f4,1c,7f),21,1)->_hx_init(0,fl);
}

::hscript::Expr Expr_obj::EParent( ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EParent",4f,7b,5b,57),3,1)->_hx_init(0,e);
}

::hscript::Expr Expr_obj::EReturn( ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EReturn",d5,1a,0b,73),15,1)->_hx_init(0,e);
}

::hscript::Expr Expr_obj::ESwitch( ::hscript::Expr e,::Array< ::Dynamic> cases, ::hscript::Expr defaultExpr)
{
	return hx::CreateEnum< Expr_obj >(HX_("ESwitch",19,c0,56,2f),23,3)->_hx_init(0,e)->_hx_init(1,cases)->_hx_init(2,defaultExpr);
}

::hscript::Expr Expr_obj::ETernary( ::hscript::Expr cond, ::hscript::Expr e1, ::hscript::Expr e2)
{
	return hx::CreateEnum< Expr_obj >(HX_("ETernary",56,c3,5c,5e),22,3)->_hx_init(0,cond)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscript::Expr Expr_obj::EThrow( ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EThrow",a1,b2,5d,39),19,1)->_hx_init(0,e);
}

::hscript::Expr Expr_obj::ETry( ::hscript::Expr e,::String v, ::hscript::CType t, ::hscript::Expr ecatch)
{
	return hx::CreateEnum< Expr_obj >(HX_("ETry",f6,d9,db,2d),20,4)->_hx_init(0,e)->_hx_init(1,v)->_hx_init(2,t)->_hx_init(3,ecatch);
}

::hscript::Expr Expr_obj::EUnop(::String op,bool prefix, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EUnop",9f,02,29,f3),7,3)->_hx_init(0,op)->_hx_init(1,prefix)->_hx_init(2,e);
}

::hscript::Expr Expr_obj::EVar(::String n, ::hscript::CType t, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EVar",a2,4f,dd,2d),2,3)->_hx_init(0,n)->_hx_init(1,t)->_hx_init(2,e);
}

::hscript::Expr Expr_obj::EWhile( ::hscript::Expr cond, ::hscript::Expr e)
{
	return hx::CreateEnum< Expr_obj >(HX_("EWhile",2c,99,8a,f3),10,2)->_hx_init(0,cond)->_hx_init(1,e);
}

bool Expr_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) { outValue = Expr_obj::EArray_dyn(); return true; }
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) { outValue = Expr_obj::EArrayDecl_dyn(); return true; }
	if (inName==HX_("EBinop",23,6f,cd,dc)) { outValue = Expr_obj::EBinop_dyn(); return true; }
	if (inName==HX_("EBlock",c8,ca,c9,de)) { outValue = Expr_obj::EBlock_dyn(); return true; }
	if (inName==HX_("EBreak",3a,7a,b9,e2)) { outValue = Expr_obj::EBreak; return true; }
	if (inName==HX_("ECall",83,4b,39,e7)) { outValue = Expr_obj::ECall_dyn(); return true; }
	if (inName==HX_("EConst",de,4e,2b,74)) { outValue = Expr_obj::EConst_dyn(); return true; }
	if (inName==HX_("EContinue",cc,e9,8b,e6)) { outValue = Expr_obj::EContinue; return true; }
	if (inName==HX_("EDoWhile",61,0e,d4,34)) { outValue = Expr_obj::EDoWhile_dyn(); return true; }
	if (inName==HX_("EField",35,ea,60,2a)) { outValue = Expr_obj::EField_dyn(); return true; }
	if (inName==HX_("EFor",c4,37,d1,2d)) { outValue = Expr_obj::EFor_dyn(); return true; }
	if (inName==HX_("EFunction",7d,b4,15,c9)) { outValue = Expr_obj::EFunction_dyn(); return true; }
	if (inName==HX_("EIdent",6b,98,46,e1)) { outValue = Expr_obj::EIdent_dyn(); return true; }
	if (inName==HX_("EIf",82,9b,34,00)) { outValue = Expr_obj::EIf_dyn(); return true; }
	if (inName==HX_("EMeta",aa,7d,d8,ed)) { outValue = Expr_obj::EMeta_dyn(); return true; }
	if (inName==HX_("ENew",1b,41,d7,2d)) { outValue = Expr_obj::ENew_dyn(); return true; }
	if (inName==HX_("EObject",e4,f4,1c,7f)) { outValue = Expr_obj::EObject_dyn(); return true; }
	if (inName==HX_("EParent",4f,7b,5b,57)) { outValue = Expr_obj::EParent_dyn(); return true; }
	if (inName==HX_("EReturn",d5,1a,0b,73)) { outValue = Expr_obj::EReturn_dyn(); return true; }
	if (inName==HX_("ESwitch",19,c0,56,2f)) { outValue = Expr_obj::ESwitch_dyn(); return true; }
	if (inName==HX_("ETernary",56,c3,5c,5e)) { outValue = Expr_obj::ETernary_dyn(); return true; }
	if (inName==HX_("EThrow",a1,b2,5d,39)) { outValue = Expr_obj::EThrow_dyn(); return true; }
	if (inName==HX_("ETry",f6,d9,db,2d)) { outValue = Expr_obj::ETry_dyn(); return true; }
	if (inName==HX_("EUnop",9f,02,29,f3)) { outValue = Expr_obj::EUnop_dyn(); return true; }
	if (inName==HX_("EVar",a2,4f,dd,2d)) { outValue = Expr_obj::EVar_dyn(); return true; }
	if (inName==HX_("EWhile",2c,99,8a,f3)) { outValue = Expr_obj::EWhile_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Expr_obj)

int Expr_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 16;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 17;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 6;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 4;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 12;
	if (inName==HX_("ECall",83,4b,39,e7)) return 8;
	if (inName==HX_("EConst",de,4e,2b,74)) return 0;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 13;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return 24;
	if (inName==HX_("EField",35,ea,60,2a)) return 5;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 11;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 14;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 1;
	if (inName==HX_("EIf",82,9b,34,00)) return 9;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 25;
	if (inName==HX_("ENew",1b,41,d7,2d)) return 18;
	if (inName==HX_("EObject",e4,f4,1c,7f)) return 21;
	if (inName==HX_("EParent",4f,7b,5b,57)) return 3;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 15;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 23;
	if (inName==HX_("ETernary",56,c3,5c,5e)) return 22;
	if (inName==HX_("EThrow",a1,b2,5d,39)) return 19;
	if (inName==HX_("ETry",f6,d9,db,2d)) return 20;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 7;
	if (inName==HX_("EVar",a2,4f,dd,2d)) return 2;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EDoWhile,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EWhile,return)

int Expr_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 2;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 1;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 3;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 1;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 0;
	if (inName==HX_("ECall",83,4b,39,e7)) return 2;
	if (inName==HX_("EConst",de,4e,2b,74)) return 1;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 0;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return 2;
	if (inName==HX_("EField",35,ea,60,2a)) return 2;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 3;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 4;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 1;
	if (inName==HX_("EIf",82,9b,34,00)) return 3;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 3;
	if (inName==HX_("ENew",1b,41,d7,2d)) return 2;
	if (inName==HX_("EObject",e4,f4,1c,7f)) return 1;
	if (inName==HX_("EParent",4f,7b,5b,57)) return 1;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 1;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 3;
	if (inName==HX_("ETernary",56,c3,5c,5e)) return 3;
	if (inName==HX_("EThrow",a1,b2,5d,39)) return 1;
	if (inName==HX_("ETry",f6,d9,db,2d)) return 4;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 3;
	if (inName==HX_("EVar",a2,4f,dd,2d)) return 3;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 2;
	return super::__FindArgCount(inName);
}

hx::Val Expr_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return EArray_dyn();
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return EArrayDecl_dyn();
	if (inName==HX_("EBinop",23,6f,cd,dc)) return EBinop_dyn();
	if (inName==HX_("EBlock",c8,ca,c9,de)) return EBlock_dyn();
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return EBreak;
	if (inName==HX_("ECall",83,4b,39,e7)) return ECall_dyn();
	if (inName==HX_("EConst",de,4e,2b,74)) return EConst_dyn();
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return EContinue;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return EDoWhile_dyn();
	if (inName==HX_("EField",35,ea,60,2a)) return EField_dyn();
	if (inName==HX_("EFor",c4,37,d1,2d)) return EFor_dyn();
	if (inName==HX_("EFunction",7d,b4,15,c9)) return EFunction_dyn();
	if (inName==HX_("EIdent",6b,98,46,e1)) return EIdent_dyn();
	if (inName==HX_("EIf",82,9b,34,00)) return EIf_dyn();
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return EMeta_dyn();
	if (inName==HX_("ENew",1b,41,d7,2d)) return ENew_dyn();
	if (inName==HX_("EObject",e4,f4,1c,7f)) return EObject_dyn();
	if (inName==HX_("EParent",4f,7b,5b,57)) return EParent_dyn();
	if (inName==HX_("EReturn",d5,1a,0b,73)) return EReturn_dyn();
	if (inName==HX_("ESwitch",19,c0,56,2f)) return ESwitch_dyn();
	if (inName==HX_("ETernary",56,c3,5c,5e)) return ETernary_dyn();
	if (inName==HX_("EThrow",a1,b2,5d,39)) return EThrow_dyn();
	if (inName==HX_("ETry",f6,d9,db,2d)) return ETry_dyn();
	if (inName==HX_("EUnop",9f,02,29,f3)) return EUnop_dyn();
	if (inName==HX_("EVar",a2,4f,dd,2d)) return EVar_dyn();
	if (inName==HX_("EWhile",2c,99,8a,f3)) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Expr_obj_sStaticFields[] = {
	HX_("EConst",de,4e,2b,74),
	HX_("EIdent",6b,98,46,e1),
	HX_("EVar",a2,4f,dd,2d),
	HX_("EParent",4f,7b,5b,57),
	HX_("EBlock",c8,ca,c9,de),
	HX_("EField",35,ea,60,2a),
	HX_("EBinop",23,6f,cd,dc),
	HX_("EUnop",9f,02,29,f3),
	HX_("ECall",83,4b,39,e7),
	HX_("EIf",82,9b,34,00),
	HX_("EWhile",2c,99,8a,f3),
	HX_("EFor",c4,37,d1,2d),
	HX_("EBreak",3a,7a,b9,e2),
	HX_("EContinue",cc,e9,8b,e6),
	HX_("EFunction",7d,b4,15,c9),
	HX_("EReturn",d5,1a,0b,73),
	HX_("EArray",14,c3,5c,4f),
	HX_("EArrayDecl",9e,59,bd,01),
	HX_("ENew",1b,41,d7,2d),
	HX_("EThrow",a1,b2,5d,39),
	HX_("ETry",f6,d9,db,2d),
	HX_("EObject",e4,f4,1c,7f),
	HX_("ETernary",56,c3,5c,5e),
	HX_("ESwitch",19,c0,56,2f),
	HX_("EDoWhile",61,0e,d4,34),
	HX_("EMeta",aa,7d,d8,ed),
	::String(null())
};

static void Expr_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_MARK_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Expr_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expr_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_VISIT_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};
#endif

hx::Class Expr_obj::__mClass;

Dynamic __Create_Expr_obj() { return new Expr_obj; }

void Expr_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript.Expr","\x30","\x4b","\xdc","\x98"), hx::TCanCast< Expr_obj >,Expr_obj_sStaticFields,0,
	&__Create_Expr_obj, &__Create,
	&super::__SGetClass(), &CreateExpr_obj, Expr_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Expr_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Expr_obj::__GetStatic;
}

void Expr_obj::__boot()
{
EBreak = hx::CreateEnum< Expr_obj >(HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),12,0);
EContinue = hx::CreateEnum< Expr_obj >(HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),13,0);
}


} // end namespace hscript
