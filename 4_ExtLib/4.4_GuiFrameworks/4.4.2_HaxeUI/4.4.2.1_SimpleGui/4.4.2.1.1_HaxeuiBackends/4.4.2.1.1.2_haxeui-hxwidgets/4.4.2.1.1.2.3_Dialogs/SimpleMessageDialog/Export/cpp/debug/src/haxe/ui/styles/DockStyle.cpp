// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_DockStyle
#include <haxe/ui/styles/DockStyle.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::DockStyle DockStyle_obj::Bottom;

::haxe::ui::styles::DockStyle DockStyle_obj::Full;

::haxe::ui::styles::DockStyle DockStyle_obj::Left;

::haxe::ui::styles::DockStyle DockStyle_obj::Right;

::haxe::ui::styles::DockStyle DockStyle_obj::Top;

bool DockStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) { outValue = DockStyle_obj::Bottom; return true; }
	if (inName==HX_("Full",af,15,9e,2e)) { outValue = DockStyle_obj::Full; return true; }
	if (inName==HX_("Left",27,34,89,32)) { outValue = DockStyle_obj::Left; return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = DockStyle_obj::Right; return true; }
	if (inName==HX_("Top",75,1e,40,00)) { outValue = DockStyle_obj::Top; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DockStyle_obj)

int DockStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return 3;
	if (inName==HX_("Full",af,15,9e,2e)) return 4;
	if (inName==HX_("Left",27,34,89,32)) return 1;
	if (inName==HX_("Right",bc,7b,91,7c)) return 2;
	if (inName==HX_("Top",75,1e,40,00)) return 0;
	return super::__FindIndex(inName);
}

int DockStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return 0;
	if (inName==HX_("Full",af,15,9e,2e)) return 0;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 0;
	if (inName==HX_("Top",75,1e,40,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val DockStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bottom",0b,5b,0d,9a)) return Bottom;
	if (inName==HX_("Full",af,15,9e,2e)) return Full;
	if (inName==HX_("Left",27,34,89,32)) return Left;
	if (inName==HX_("Right",bc,7b,91,7c)) return Right;
	if (inName==HX_("Top",75,1e,40,00)) return Top;
	return super::__Field(inName,inCallProp);
}

static ::String DockStyle_obj_sStaticFields[] = {
	HX_("Top",75,1e,40,00),
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	HX_("Bottom",0b,5b,0d,9a),
	HX_("Full",af,15,9e,2e),
	::String(null())
};

static void DockStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DockStyle_obj::Bottom,"Bottom");
	HX_MARK_MEMBER_NAME(DockStyle_obj::Full,"Full");
	HX_MARK_MEMBER_NAME(DockStyle_obj::Left,"Left");
	HX_MARK_MEMBER_NAME(DockStyle_obj::Right,"Right");
	HX_MARK_MEMBER_NAME(DockStyle_obj::Top,"Top");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DockStyle_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DockStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DockStyle_obj::Bottom,"Bottom");
	HX_VISIT_MEMBER_NAME(DockStyle_obj::Full,"Full");
	HX_VISIT_MEMBER_NAME(DockStyle_obj::Left,"Left");
	HX_VISIT_MEMBER_NAME(DockStyle_obj::Right,"Right");
	HX_VISIT_MEMBER_NAME(DockStyle_obj::Top,"Top");
};
#endif

hx::Class DockStyle_obj::__mClass;

Dynamic __Create_DockStyle_obj() { return new DockStyle_obj; }

void DockStyle_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.DockStyle","\xe4","\x22","\x09","\x8a"), hx::TCanCast< DockStyle_obj >,DockStyle_obj_sStaticFields,0,
	&__Create_DockStyle_obj, &__Create,
	&super::__SGetClass(), &CreateDockStyle_obj, DockStyle_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , DockStyle_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DockStyle_obj::__GetStatic;
}

void DockStyle_obj::__boot()
{
Bottom = hx::CreateEnum< DockStyle_obj >(HX_HCSTRING("Bottom","\x0b","\x5b","\x0d","\x9a"),3,0);
Full = hx::CreateEnum< DockStyle_obj >(HX_HCSTRING("Full","\xaf","\x15","\x9e","\x2e"),4,0);
Left = hx::CreateEnum< DockStyle_obj >(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),1,0);
Right = hx::CreateEnum< DockStyle_obj >(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),2,0);
Top = hx::CreateEnum< DockStyle_obj >(HX_HCSTRING("Top","\x75","\x1e","\x40","\x00"),0,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
