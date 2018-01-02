// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
namespace hscript{

::hscript::Const Const_obj::CFloat(Float f)
{
	return hx::CreateEnum< Const_obj >(HX_("CFloat",59,62,ad,5f),1,1)->_hx_init(0,f);
}

::hscript::Const Const_obj::CInt(int v)
{
	return hx::CreateEnum< Const_obj >(HX_("CInt",6c,10,81,2c),0,1)->_hx_init(0,v);
}

::hscript::Const Const_obj::CString(::String s)
{
	return hx::CreateEnum< Const_obj >(HX_("CString",74,b1,e2,27),2,1)->_hx_init(0,s);
}

bool Const_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) { outValue = Const_obj::CFloat_dyn(); return true; }
	if (inName==HX_("CInt",6c,10,81,2c)) { outValue = Const_obj::CInt_dyn(); return true; }
	if (inName==HX_("CString",74,b1,e2,27)) { outValue = Const_obj::CString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Const_obj)

int Const_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return 1;
	if (inName==HX_("CInt",6c,10,81,2c)) return 0;
	if (inName==HX_("CString",74,b1,e2,27)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CString,return)

int Const_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return 1;
	if (inName==HX_("CInt",6c,10,81,2c)) return 1;
	if (inName==HX_("CString",74,b1,e2,27)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val Const_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return CFloat_dyn();
	if (inName==HX_("CInt",6c,10,81,2c)) return CInt_dyn();
	if (inName==HX_("CString",74,b1,e2,27)) return CString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Const_obj_sStaticFields[] = {
	HX_("CInt",6c,10,81,2c),
	HX_("CFloat",59,62,ad,5f),
	HX_("CString",74,b1,e2,27),
	::String(null())
};

static void Const_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void Const_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Const_obj::__mClass,"__mClass");
};
#endif

hx::Class Const_obj::__mClass;

Dynamic __Create_Const_obj() { return new Const_obj; }

void Const_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("hscript.Const","\x08","\xe7","\x23","\xfb"), hx::TCanCast< Const_obj >,Const_obj_sStaticFields,0,
	&__Create_Const_obj, &__Create,
	&super::__SGetClass(), &CreateConst_obj, Const_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Const_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Const_obj::__GetStatic;
}

void Const_obj::__boot()
{
}


} // end namespace hscript
