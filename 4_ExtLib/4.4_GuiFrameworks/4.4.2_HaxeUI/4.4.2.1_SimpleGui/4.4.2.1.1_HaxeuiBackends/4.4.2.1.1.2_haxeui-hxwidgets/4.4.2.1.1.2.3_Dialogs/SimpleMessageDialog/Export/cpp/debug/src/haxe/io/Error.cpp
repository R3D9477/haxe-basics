// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

::haxe::io::Error Error_obj::Blocked;

::haxe::io::Error Error_obj::Custom( ::Dynamic e)
{
	return hx::CreateEnum< Error_obj >(HX_("Custom",d1,fb,26,74),3,1)->_hx_init(0,e);
}

::haxe::io::Error Error_obj::OutsideBounds;

::haxe::io::Error Error_obj::Overflow;

bool Error_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Blocked",cc,a2,4f,12)) { outValue = Error_obj::Blocked; return true; }
	if (inName==HX_("Custom",d1,fb,26,74)) { outValue = Error_obj::Custom_dyn(); return true; }
	if (inName==HX_("OutsideBounds",5a,c1,82,38)) { outValue = Error_obj::OutsideBounds; return true; }
	if (inName==HX_("Overflow",62,9f,ed,1a)) { outValue = Error_obj::Overflow; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Error_obj)

int Error_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Blocked",cc,a2,4f,12)) return 0;
	if (inName==HX_("Custom",d1,fb,26,74)) return 3;
	if (inName==HX_("OutsideBounds",5a,c1,82,38)) return 2;
	if (inName==HX_("Overflow",62,9f,ed,1a)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,Custom,return)

int Error_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Blocked",cc,a2,4f,12)) return 0;
	if (inName==HX_("Custom",d1,fb,26,74)) return 1;
	if (inName==HX_("OutsideBounds",5a,c1,82,38)) return 0;
	if (inName==HX_("Overflow",62,9f,ed,1a)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Blocked",cc,a2,4f,12)) return Blocked;
	if (inName==HX_("Custom",d1,fb,26,74)) return Custom_dyn();
	if (inName==HX_("OutsideBounds",5a,c1,82,38)) return OutsideBounds;
	if (inName==HX_("Overflow",62,9f,ed,1a)) return Overflow;
	return super::__Field(inName,inCallProp);
}

static ::String Error_obj_sStaticFields[] = {
	HX_("Blocked",cc,a2,4f,12),
	HX_("Overflow",62,9f,ed,1a),
	HX_("OutsideBounds",5a,c1,82,38),
	HX_("Custom",d1,fb,26,74),
	::String(null())
};

static void Error_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::Blocked,"Blocked");
	HX_MARK_MEMBER_NAME(Error_obj::OutsideBounds,"OutsideBounds");
	HX_MARK_MEMBER_NAME(Error_obj::Overflow,"Overflow");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Error_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Error_obj::Blocked,"Blocked");
	HX_VISIT_MEMBER_NAME(Error_obj::OutsideBounds,"OutsideBounds");
	HX_VISIT_MEMBER_NAME(Error_obj::Overflow,"Overflow");
};
#endif

hx::Class Error_obj::__mClass;

Dynamic __Create_Error_obj() { return new Error_obj; }

void Error_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.io.Error","\x68","\x16","\x01","\x55"), hx::TCanCast< Error_obj >,Error_obj_sStaticFields,0,
	&__Create_Error_obj, &__Create,
	&super::__SGetClass(), &CreateError_obj, Error_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Error_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Error_obj::__GetStatic;
}

void Error_obj::__boot()
{
Blocked = hx::CreateEnum< Error_obj >(HX_HCSTRING("Blocked","\xcc","\xa2","\x4f","\x12"),0,0);
OutsideBounds = hx::CreateEnum< Error_obj >(HX_HCSTRING("OutsideBounds","\x5a","\xc1","\x82","\x38"),2,0);
Overflow = hx::CreateEnum< Error_obj >(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"),1,0);
}


} // end namespace haxe
} // end namespace io
