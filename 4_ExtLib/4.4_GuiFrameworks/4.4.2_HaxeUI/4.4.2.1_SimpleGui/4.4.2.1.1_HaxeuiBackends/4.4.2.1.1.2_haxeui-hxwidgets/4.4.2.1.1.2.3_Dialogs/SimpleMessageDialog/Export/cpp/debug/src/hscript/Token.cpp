// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

::hscript::Token Token_obj::TBkClose;

::hscript::Token Token_obj::TBkOpen;

::hscript::Token Token_obj::TBrClose;

::hscript::Token Token_obj::TBrOpen;

::hscript::Token Token_obj::TComma;

::hscript::Token Token_obj::TConst( ::hscript::Const c)
{
	return hx::CreateEnum< Token_obj >(HX_("TConst",6f,b8,85,73),1,1)->_hx_init(0,c);
}

::hscript::Token Token_obj::TDot;

::hscript::Token Token_obj::TDoubleDot;

::hscript::Token Token_obj::TEof;

::hscript::Token Token_obj::TId(::String s)
{
	return hx::CreateEnum< Token_obj >(HX_("TId",4f,fd,3f,00),2,1)->_hx_init(0,s);
}

::hscript::Token Token_obj::TMeta(::String s)
{
	return hx::CreateEnum< Token_obj >(HX_("TMeta",39,31,db,90),15,1)->_hx_init(0,s);
}

::hscript::Token Token_obj::TOp(::String s)
{
	return hx::CreateEnum< Token_obj >(HX_("TOp",95,02,40,00),3,1)->_hx_init(0,s);
}

::hscript::Token Token_obj::TPClose;

::hscript::Token Token_obj::TPOpen;

::hscript::Token Token_obj::TQuestion;

::hscript::Token Token_obj::TSemicolon;

bool Token_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) { outValue = Token_obj::TBkClose; return true; }
	if (inName==HX_("TBkOpen",a7,09,06,d9)) { outValue = Token_obj::TBkOpen; return true; }
	if (inName==HX_("TBrClose",d4,b9,55,ed)) { outValue = Token_obj::TBrClose; return true; }
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) { outValue = Token_obj::TBrOpen; return true; }
	if (inName==HX_("TComma",e1,f0,84,73)) { outValue = Token_obj::TComma; return true; }
	if (inName==HX_("TConst",6f,b8,85,73)) { outValue = Token_obj::TConst_dyn(); return true; }
	if (inName==HX_("TDot",95,e6,b9,37)) { outValue = Token_obj::TDot; return true; }
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) { outValue = Token_obj::TDoubleDot; return true; }
	if (inName==HX_("TEof",c8,a8,ba,37)) { outValue = Token_obj::TEof; return true; }
	if (inName==HX_("TId",4f,fd,3f,00)) { outValue = Token_obj::TId_dyn(); return true; }
	if (inName==HX_("TMeta",39,31,db,90)) { outValue = Token_obj::TMeta_dyn(); return true; }
	if (inName==HX_("TOp",95,02,40,00)) { outValue = Token_obj::TOp_dyn(); return true; }
	if (inName==HX_("TPClose",9c,5c,28,7d)) { outValue = Token_obj::TPClose; return true; }
	if (inName==HX_("TPOpen",66,e7,95,da)) { outValue = Token_obj::TPOpen; return true; }
	if (inName==HX_("TQuestion",9a,cb,98,37)) { outValue = Token_obj::TQuestion; return true; }
	if (inName==HX_("TSemicolon",3d,4b,14,08)) { outValue = Token_obj::TSemicolon; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return 12;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return 11;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 7;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 6;
	if (inName==HX_("TComma",e1,f0,84,73)) return 9;
	if (inName==HX_("TConst",6f,b8,85,73)) return 1;
	if (inName==HX_("TDot",95,e6,b9,37)) return 8;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return 14;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TId",4f,fd,3f,00)) return 2;
	if (inName==HX_("TMeta",39,31,db,90)) return 15;
	if (inName==HX_("TOp",95,02,40,00)) return 3;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 5;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 4;
	if (inName==HX_("TQuestion",9a,cb,98,37)) return 13;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TOp,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return 0;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return 0;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 0;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 0;
	if (inName==HX_("TComma",e1,f0,84,73)) return 0;
	if (inName==HX_("TConst",6f,b8,85,73)) return 1;
	if (inName==HX_("TDot",95,e6,b9,37)) return 0;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return 0;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TId",4f,fd,3f,00)) return 1;
	if (inName==HX_("TMeta",39,31,db,90)) return 1;
	if (inName==HX_("TOp",95,02,40,00)) return 1;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 0;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 0;
	if (inName==HX_("TQuestion",9a,cb,98,37)) return 0;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return TBkClose;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return TBkOpen;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return TBrClose;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return TBrOpen;
	if (inName==HX_("TComma",e1,f0,84,73)) return TComma;
	if (inName==HX_("TConst",6f,b8,85,73)) return TConst_dyn();
	if (inName==HX_("TDot",95,e6,b9,37)) return TDot;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return TDoubleDot;
	if (inName==HX_("TEof",c8,a8,ba,37)) return TEof;
	if (inName==HX_("TId",4f,fd,3f,00)) return TId_dyn();
	if (inName==HX_("TMeta",39,31,db,90)) return TMeta_dyn();
	if (inName==HX_("TOp",95,02,40,00)) return TOp_dyn();
	if (inName==HX_("TPClose",9c,5c,28,7d)) return TPClose;
	if (inName==HX_("TPOpen",66,e7,95,da)) return TPOpen;
	if (inName==HX_("TQuestion",9a,cb,98,37)) return TQuestion;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return TSemicolon;
	return super::__Field(inName,inCallProp);
}

static ::String Token_obj_sStaticFields[] = {
	HX_("TEof",c8,a8,ba,37),
	HX_("TConst",6f,b8,85,73),
	HX_("TId",4f,fd,3f,00),
	HX_("TOp",95,02,40,00),
	HX_("TPOpen",66,e7,95,da),
	HX_("TPClose",9c,5c,28,7d),
	HX_("TBrOpen",2e,19,d4,e0),
	HX_("TBrClose",d4,b9,55,ed),
	HX_("TDot",95,e6,b9,37),
	HX_("TComma",e1,f0,84,73),
	HX_("TSemicolon",3d,4b,14,08),
	HX_("TBkOpen",a7,09,06,d9),
	HX_("TBkClose",3b,33,d6,20),
	HX_("TQuestion",9a,cb,98,37),
	HX_("TDoubleDot",04,85,f4,8f),
	HX_("TMeta",39,31,db,90),
	::String(null())
};

static void Token_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_MARK_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_MARK_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_MARK_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_MARK_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_MARK_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_MARK_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Token_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_VISIT_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_VISIT_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_VISIT_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};
#endif

hx::Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript.Token","\x9e","\x70","\xf1","\xc4"), hx::TCanCast< Token_obj >,Token_obj_sStaticFields,0,
	&__Create_Token_obj, &__Create,
	&super::__SGetClass(), &CreateToken_obj, Token_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Token_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Token_obj::__GetStatic;
}

void Token_obj::__boot()
{
TBkClose = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20"),12,0);
TBkOpen = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9"),11,0);
TBrClose = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed"),7,0);
TBrOpen = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0"),6,0);
TComma = hx::CreateEnum< Token_obj >(HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73"),9,0);
TDot = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37"),8,0);
TDoubleDot = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f"),14,0);
TEof = hx::CreateEnum< Token_obj >(HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37"),0,0);
TPClose = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d"),5,0);
TPOpen = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda"),4,0);
TQuestion = hx::CreateEnum< Token_obj >(HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37"),13,0);
TSemicolon = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08"),10,0);
}


} // end namespace hscript
