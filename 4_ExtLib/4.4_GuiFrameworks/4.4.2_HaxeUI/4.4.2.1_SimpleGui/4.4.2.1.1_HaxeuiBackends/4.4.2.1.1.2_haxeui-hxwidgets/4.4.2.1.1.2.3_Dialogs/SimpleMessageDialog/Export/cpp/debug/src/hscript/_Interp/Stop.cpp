// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif
namespace hscript{
namespace _Interp{

::hscript::_Interp::Stop Stop_obj::SBreak;

::hscript::_Interp::Stop Stop_obj::SContinue;

::hscript::_Interp::Stop Stop_obj::SReturn( ::Dynamic v)
{
	return hx::CreateEnum< Stop_obj >(HX_("SReturn",63,99,37,b9),2,1)->_hx_init(0,v);
}

bool Stop_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) { outValue = Stop_obj::SBreak; return true; }
	if (inName==HX_("SContinue",da,a7,bf,6f)) { outValue = Stop_obj::SContinue; return true; }
	if (inName==HX_("SReturn",63,99,37,b9)) { outValue = Stop_obj::SReturn_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Stop_obj)

int Stop_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return 0;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return 1;
	if (inName==HX_("SReturn",63,99,37,b9)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stop_obj,SReturn,return)

int Stop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return 0;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return 0;
	if (inName==HX_("SReturn",63,99,37,b9)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val Stop_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return SBreak;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return SContinue;
	if (inName==HX_("SReturn",63,99,37,b9)) return SReturn_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Stop_obj_sStaticFields[] = {
	HX_("SBreak",6c,87,b8,7b),
	HX_("SContinue",da,a7,bf,6f),
	HX_("SReturn",63,99,37,b9),
	::String(null())
};

static void Stop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stop_obj::SBreak,"SBreak");
	HX_MARK_MEMBER_NAME(Stop_obj::SContinue,"SContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stop_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stop_obj::SBreak,"SBreak");
	HX_VISIT_MEMBER_NAME(Stop_obj::SContinue,"SContinue");
};
#endif

hx::Class Stop_obj::__mClass;

Dynamic __Create_Stop_obj() { return new Stop_obj; }

void Stop_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript._Interp.Stop","\xb8","\x6b","\xde","\xd6"), hx::TCanCast< Stop_obj >,Stop_obj_sStaticFields,0,
	&__Create_Stop_obj, &__Create,
	&super::__SGetClass(), &CreateStop_obj, Stop_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Stop_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Stop_obj::__GetStatic;
}

void Stop_obj::__boot()
{
SBreak = hx::CreateEnum< Stop_obj >(HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b"),0,0);
SContinue = hx::CreateEnum< Stop_obj >(HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f"),1,0);
}


} // end namespace hscript
} // end namespace _Interp
