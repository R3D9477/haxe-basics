// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Unit
#include <haxe/ui/styles/Unit.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Unit Unit_obj::EM(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("EM",68,3c,00,00),2,1)->_hx_init(0,v);
}

::haxe::ui::styles::Unit Unit_obj::Percent(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("Percent",a5,d2,2b,46),1,1)->_hx_init(0,v);
}

::haxe::ui::styles::Unit Unit_obj::Pix(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("Pix",3f,10,3d,00),0,1)->_hx_init(0,v);
}

::haxe::ui::styles::Unit Unit_obj::REM(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("REM",3a,75,3e,00),3,1)->_hx_init(0,v);
}

::haxe::ui::styles::Unit Unit_obj::VH(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("VH",32,4b,00,00),4,1)->_hx_init(0,v);
}

::haxe::ui::styles::Unit Unit_obj::VW(Float v)
{
	return hx::CreateEnum< Unit_obj >(HX_("VW",41,4b,00,00),5,1)->_hx_init(0,v);
}

bool Unit_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EM",68,3c,00,00)) { outValue = Unit_obj::EM_dyn(); return true; }
	if (inName==HX_("Percent",a5,d2,2b,46)) { outValue = Unit_obj::Percent_dyn(); return true; }
	if (inName==HX_("Pix",3f,10,3d,00)) { outValue = Unit_obj::Pix_dyn(); return true; }
	if (inName==HX_("REM",3a,75,3e,00)) { outValue = Unit_obj::REM_dyn(); return true; }
	if (inName==HX_("VH",32,4b,00,00)) { outValue = Unit_obj::VH_dyn(); return true; }
	if (inName==HX_("VW",41,4b,00,00)) { outValue = Unit_obj::VW_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Unit_obj)

int Unit_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EM",68,3c,00,00)) return 2;
	if (inName==HX_("Percent",a5,d2,2b,46)) return 1;
	if (inName==HX_("Pix",3f,10,3d,00)) return 0;
	if (inName==HX_("REM",3a,75,3e,00)) return 3;
	if (inName==HX_("VH",32,4b,00,00)) return 4;
	if (inName==HX_("VW",41,4b,00,00)) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,EM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,Percent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,Pix,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,REM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,VH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unit_obj,VW,return)

int Unit_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EM",68,3c,00,00)) return 1;
	if (inName==HX_("Percent",a5,d2,2b,46)) return 1;
	if (inName==HX_("Pix",3f,10,3d,00)) return 1;
	if (inName==HX_("REM",3a,75,3e,00)) return 1;
	if (inName==HX_("VH",32,4b,00,00)) return 1;
	if (inName==HX_("VW",41,4b,00,00)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val Unit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EM",68,3c,00,00)) return EM_dyn();
	if (inName==HX_("Percent",a5,d2,2b,46)) return Percent_dyn();
	if (inName==HX_("Pix",3f,10,3d,00)) return Pix_dyn();
	if (inName==HX_("REM",3a,75,3e,00)) return REM_dyn();
	if (inName==HX_("VH",32,4b,00,00)) return VH_dyn();
	if (inName==HX_("VW",41,4b,00,00)) return VW_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Unit_obj_sStaticFields[] = {
	HX_("Pix",3f,10,3d,00),
	HX_("Percent",a5,d2,2b,46),
	HX_("EM",68,3c,00,00),
	HX_("REM",3a,75,3e,00),
	HX_("VH",32,4b,00,00),
	HX_("VW",41,4b,00,00),
	::String(null())
};

static void Unit_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unit_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unit_obj::__mClass,"__mClass");
};
#endif

hx::Class Unit_obj::__mClass;

Dynamic __Create_Unit_obj() { return new Unit_obj; }

void Unit_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.Unit","\x9e","\xa6","\x3e","\x1b"), hx::TCanCast< Unit_obj >,Unit_obj_sStaticFields,0,
	&__Create_Unit_obj, &__Create,
	&super::__SGetClass(), &CreateUnit_obj, Unit_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Unit_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Unit_obj::__GetStatic;
}

void Unit_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
