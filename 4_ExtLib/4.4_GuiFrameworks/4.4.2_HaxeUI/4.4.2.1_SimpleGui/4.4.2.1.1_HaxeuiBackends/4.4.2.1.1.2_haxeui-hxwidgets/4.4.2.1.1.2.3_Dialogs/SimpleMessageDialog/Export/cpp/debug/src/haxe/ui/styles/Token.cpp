// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Token
#include <haxe/ui/styles/Token.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Token Token_obj::TBrClose;

::haxe::ui::styles::Token Token_obj::TBrOpen;

::haxe::ui::styles::Token Token_obj::TComma;

::haxe::ui::styles::Token Token_obj::TDblDot;

::haxe::ui::styles::Token Token_obj::TDot;

::haxe::ui::styles::Token Token_obj::TEof;

::haxe::ui::styles::Token Token_obj::TExclam;

::haxe::ui::styles::Token Token_obj::TFloat(Float f)
{
	return hx::CreateEnum< Token_obj >(HX_("TFloat",a8,84,be,2b),3,1)->_hx_init(0,f);
}

::haxe::ui::styles::Token Token_obj::TIdent(::String i)
{
	return hx::CreateEnum< Token_obj >(HX_("TIdent",fc,01,a1,e0),0,1)->_hx_init(0,i);
}

::haxe::ui::styles::Token Token_obj::TInt(int i)
{
	return hx::CreateEnum< Token_obj >(HX_("TInt",fb,b0,bd,37),2,1)->_hx_init(0,i);
}

::haxe::ui::styles::Token Token_obj::TPClose;

::haxe::ui::styles::Token Token_obj::TPOpen;

::haxe::ui::styles::Token Token_obj::TPercent;

::haxe::ui::styles::Token Token_obj::TSemicolon;

::haxe::ui::styles::Token Token_obj::TSharp;

::haxe::ui::styles::Token Token_obj::TSlash;

::haxe::ui::styles::Token Token_obj::TSpaces;

::haxe::ui::styles::Token Token_obj::TStar;

::haxe::ui::styles::Token Token_obj::TString(::String s)
{
	return hx::CreateEnum< Token_obj >(HX_("TString",45,94,cf,ea),1,1)->_hx_init(0,s);
}

bool Token_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBrClose",d4,b9,55,ed)) { outValue = Token_obj::TBrClose; return true; }
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) { outValue = Token_obj::TBrOpen; return true; }
	if (inName==HX_("TComma",e1,f0,84,73)) { outValue = Token_obj::TComma; return true; }
	if (inName==HX_("TDblDot",6f,5f,2b,8a)) { outValue = Token_obj::TDblDot; return true; }
	if (inName==HX_("TDot",95,e6,b9,37)) { outValue = Token_obj::TDot; return true; }
	if (inName==HX_("TEof",c8,a8,ba,37)) { outValue = Token_obj::TEof; return true; }
	if (inName==HX_("TExclam",3c,e1,82,95)) { outValue = Token_obj::TExclam; return true; }
	if (inName==HX_("TFloat",a8,84,be,2b)) { outValue = Token_obj::TFloat_dyn(); return true; }
	if (inName==HX_("TIdent",fc,01,a1,e0)) { outValue = Token_obj::TIdent_dyn(); return true; }
	if (inName==HX_("TInt",fb,b0,bd,37)) { outValue = Token_obj::TInt_dyn(); return true; }
	if (inName==HX_("TPClose",9c,5c,28,7d)) { outValue = Token_obj::TPClose; return true; }
	if (inName==HX_("TPOpen",66,e7,95,da)) { outValue = Token_obj::TPOpen; return true; }
	if (inName==HX_("TPercent",d1,44,b9,0a)) { outValue = Token_obj::TPercent; return true; }
	if (inName==HX_("TSemicolon",3d,4b,14,08)) { outValue = Token_obj::TSemicolon; return true; }
	if (inName==HX_("TSharp",f6,a3,44,a5)) { outValue = Token_obj::TSharp; return true; }
	if (inName==HX_("TSlash",49,7f,e9,a7)) { outValue = Token_obj::TSlash; return true; }
	if (inName==HX_("TSpaces",61,0c,f4,91)) { outValue = Token_obj::TSpaces; return true; }
	if (inName==HX_("TStar",46,ca,dd,94)) { outValue = Token_obj::TStar; return true; }
	if (inName==HX_("TString",45,94,cf,ea)) { outValue = Token_obj::TString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 14;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 13;
	if (inName==HX_("TComma",e1,f0,84,73)) return 9;
	if (inName==HX_("TDblDot",6f,5f,2b,8a)) return 4;
	if (inName==HX_("TDot",95,e6,b9,37)) return 15;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 10;
	if (inName==HX_("TExclam",3c,e1,82,95)) return 8;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 3;
	if (inName==HX_("TIdent",fc,01,a1,e0)) return 0;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 2;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 7;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 6;
	if (inName==HX_("TPercent",d1,44,b9,0a)) return 11;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 12;
	if (inName==HX_("TSharp",f6,a3,44,a5)) return 5;
	if (inName==HX_("TSlash",49,7f,e9,a7)) return 17;
	if (inName==HX_("TSpaces",61,0c,f4,91)) return 16;
	if (inName==HX_("TStar",46,ca,dd,94)) return 18;
	if (inName==HX_("TString",45,94,cf,ea)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TString,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 0;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 0;
	if (inName==HX_("TComma",e1,f0,84,73)) return 0;
	if (inName==HX_("TDblDot",6f,5f,2b,8a)) return 0;
	if (inName==HX_("TDot",95,e6,b9,37)) return 0;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TExclam",3c,e1,82,95)) return 0;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 1;
	if (inName==HX_("TIdent",fc,01,a1,e0)) return 1;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 1;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 0;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 0;
	if (inName==HX_("TPercent",d1,44,b9,0a)) return 0;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 0;
	if (inName==HX_("TSharp",f6,a3,44,a5)) return 0;
	if (inName==HX_("TSlash",49,7f,e9,a7)) return 0;
	if (inName==HX_("TSpaces",61,0c,f4,91)) return 0;
	if (inName==HX_("TStar",46,ca,dd,94)) return 0;
	if (inName==HX_("TString",45,94,cf,ea)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return TBrClose;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return TBrOpen;
	if (inName==HX_("TComma",e1,f0,84,73)) return TComma;
	if (inName==HX_("TDblDot",6f,5f,2b,8a)) return TDblDot;
	if (inName==HX_("TDot",95,e6,b9,37)) return TDot;
	if (inName==HX_("TEof",c8,a8,ba,37)) return TEof;
	if (inName==HX_("TExclam",3c,e1,82,95)) return TExclam;
	if (inName==HX_("TFloat",a8,84,be,2b)) return TFloat_dyn();
	if (inName==HX_("TIdent",fc,01,a1,e0)) return TIdent_dyn();
	if (inName==HX_("TInt",fb,b0,bd,37)) return TInt_dyn();
	if (inName==HX_("TPClose",9c,5c,28,7d)) return TPClose;
	if (inName==HX_("TPOpen",66,e7,95,da)) return TPOpen;
	if (inName==HX_("TPercent",d1,44,b9,0a)) return TPercent;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return TSemicolon;
	if (inName==HX_("TSharp",f6,a3,44,a5)) return TSharp;
	if (inName==HX_("TSlash",49,7f,e9,a7)) return TSlash;
	if (inName==HX_("TSpaces",61,0c,f4,91)) return TSpaces;
	if (inName==HX_("TStar",46,ca,dd,94)) return TStar;
	if (inName==HX_("TString",45,94,cf,ea)) return TString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Token_obj_sStaticFields[] = {
	HX_("TIdent",fc,01,a1,e0),
	HX_("TString",45,94,cf,ea),
	HX_("TInt",fb,b0,bd,37),
	HX_("TFloat",a8,84,be,2b),
	HX_("TDblDot",6f,5f,2b,8a),
	HX_("TSharp",f6,a3,44,a5),
	HX_("TPOpen",66,e7,95,da),
	HX_("TPClose",9c,5c,28,7d),
	HX_("TExclam",3c,e1,82,95),
	HX_("TComma",e1,f0,84,73),
	HX_("TEof",c8,a8,ba,37),
	HX_("TPercent",d1,44,b9,0a),
	HX_("TSemicolon",3d,4b,14,08),
	HX_("TBrOpen",2e,19,d4,e0),
	HX_("TBrClose",d4,b9,55,ed),
	HX_("TDot",95,e6,b9,37),
	HX_("TSpaces",61,0c,f4,91),
	HX_("TSlash",49,7f,e9,a7),
	HX_("TStar",46,ca,dd,94),
	::String(null())
};

static void Token_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_MARK_MEMBER_NAME(Token_obj::TDblDot,"TDblDot");
	HX_MARK_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_MARK_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_MARK_MEMBER_NAME(Token_obj::TExclam,"TExclam");
	HX_MARK_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_MARK_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TPercent,"TPercent");
	HX_MARK_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
	HX_MARK_MEMBER_NAME(Token_obj::TSharp,"TSharp");
	HX_MARK_MEMBER_NAME(Token_obj::TSlash,"TSlash");
	HX_MARK_MEMBER_NAME(Token_obj::TSpaces,"TSpaces");
	HX_MARK_MEMBER_NAME(Token_obj::TStar,"TStar");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Token_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_VISIT_MEMBER_NAME(Token_obj::TDblDot,"TDblDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_VISIT_MEMBER_NAME(Token_obj::TExclam,"TExclam");
	HX_VISIT_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TPercent,"TPercent");
	HX_VISIT_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
	HX_VISIT_MEMBER_NAME(Token_obj::TSharp,"TSharp");
	HX_VISIT_MEMBER_NAME(Token_obj::TSlash,"TSlash");
	HX_VISIT_MEMBER_NAME(Token_obj::TSpaces,"TSpaces");
	HX_VISIT_MEMBER_NAME(Token_obj::TStar,"TStar");
};
#endif

hx::Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.Token","\x9f","\x3d","\xd7","\x28"), hx::TCanCast< Token_obj >,Token_obj_sStaticFields,0,
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
TBrClose = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed"),14,0);
TBrOpen = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0"),13,0);
TComma = hx::CreateEnum< Token_obj >(HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73"),9,0);
TDblDot = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDblDot","\x6f","\x5f","\x2b","\x8a"),4,0);
TDot = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37"),15,0);
TEof = hx::CreateEnum< Token_obj >(HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37"),10,0);
TExclam = hx::CreateEnum< Token_obj >(HX_HCSTRING("TExclam","\x3c","\xe1","\x82","\x95"),8,0);
TPClose = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d"),7,0);
TPOpen = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda"),6,0);
TPercent = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPercent","\xd1","\x44","\xb9","\x0a"),11,0);
TSemicolon = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08"),12,0);
TSharp = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSharp","\xf6","\xa3","\x44","\xa5"),5,0);
TSlash = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSlash","\x49","\x7f","\xe9","\xa7"),17,0);
TSpaces = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSpaces","\x61","\x0c","\xf4","\x91"),16,0);
TStar = hx::CreateEnum< Token_obj >(HX_HCSTRING("TStar","\x46","\xca","\xdd","\x94"),18,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
