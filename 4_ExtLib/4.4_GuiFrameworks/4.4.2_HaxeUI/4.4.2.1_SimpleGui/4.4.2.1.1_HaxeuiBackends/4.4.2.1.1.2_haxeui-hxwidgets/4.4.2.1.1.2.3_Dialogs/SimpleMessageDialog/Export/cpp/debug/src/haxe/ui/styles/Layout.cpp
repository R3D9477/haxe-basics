// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Layout
#include <haxe/ui/styles/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Layout Layout_obj::Absolute;

::haxe::ui::styles::Layout Layout_obj::Dock;

::haxe::ui::styles::Layout Layout_obj::Horizontal;

::haxe::ui::styles::Layout Layout_obj::Inline;

::haxe::ui::styles::Layout Layout_obj::Vertical;

bool Layout_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Absolute",97,8a,47,9d)) { outValue = Layout_obj::Absolute; return true; }
	if (inName==HX_("Dock",13,13,47,2d)) { outValue = Layout_obj::Dock; return true; }
	if (inName==HX_("Horizontal",04,01,75,0c)) { outValue = Layout_obj::Horizontal; return true; }
	if (inName==HX_("Inline",79,3e,d4,cd)) { outValue = Layout_obj::Inline; return true; }
	if (inName==HX_("Vertical",96,78,c7,43)) { outValue = Layout_obj::Vertical; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Layout_obj)

int Layout_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Absolute",97,8a,47,9d)) return 2;
	if (inName==HX_("Dock",13,13,47,2d)) return 3;
	if (inName==HX_("Horizontal",04,01,75,0c)) return 0;
	if (inName==HX_("Inline",79,3e,d4,cd)) return 4;
	if (inName==HX_("Vertical",96,78,c7,43)) return 1;
	return super::__FindIndex(inName);
}

int Layout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Absolute",97,8a,47,9d)) return 0;
	if (inName==HX_("Dock",13,13,47,2d)) return 0;
	if (inName==HX_("Horizontal",04,01,75,0c)) return 0;
	if (inName==HX_("Inline",79,3e,d4,cd)) return 0;
	if (inName==HX_("Vertical",96,78,c7,43)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Absolute",97,8a,47,9d)) return Absolute;
	if (inName==HX_("Dock",13,13,47,2d)) return Dock;
	if (inName==HX_("Horizontal",04,01,75,0c)) return Horizontal;
	if (inName==HX_("Inline",79,3e,d4,cd)) return Inline;
	if (inName==HX_("Vertical",96,78,c7,43)) return Vertical;
	return super::__Field(inName,inCallProp);
}

static ::String Layout_obj_sStaticFields[] = {
	HX_("Horizontal",04,01,75,0c),
	HX_("Vertical",96,78,c7,43),
	HX_("Absolute",97,8a,47,9d),
	HX_("Dock",13,13,47,2d),
	HX_("Inline",79,3e,d4,cd),
	::String(null())
};

static void Layout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::Absolute,"Absolute");
	HX_MARK_MEMBER_NAME(Layout_obj::Dock,"Dock");
	HX_MARK_MEMBER_NAME(Layout_obj::Horizontal,"Horizontal");
	HX_MARK_MEMBER_NAME(Layout_obj::Inline,"Inline");
	HX_MARK_MEMBER_NAME(Layout_obj::Vertical,"Vertical");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Layout_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Layout_obj::Absolute,"Absolute");
	HX_VISIT_MEMBER_NAME(Layout_obj::Dock,"Dock");
	HX_VISIT_MEMBER_NAME(Layout_obj::Horizontal,"Horizontal");
	HX_VISIT_MEMBER_NAME(Layout_obj::Inline,"Inline");
	HX_VISIT_MEMBER_NAME(Layout_obj::Vertical,"Vertical");
};
#endif

hx::Class Layout_obj::__mClass;

Dynamic __Create_Layout_obj() { return new Layout_obj; }

void Layout_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.Layout","\x44","\x45","\x50","\x5a"), hx::TCanCast< Layout_obj >,Layout_obj_sStaticFields,0,
	&__Create_Layout_obj, &__Create,
	&super::__SGetClass(), &CreateLayout_obj, Layout_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Layout_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Layout_obj::__GetStatic;
}

void Layout_obj::__boot()
{
Absolute = hx::CreateEnum< Layout_obj >(HX_HCSTRING("Absolute","\x97","\x8a","\x47","\x9d"),2,0);
Dock = hx::CreateEnum< Layout_obj >(HX_HCSTRING("Dock","\x13","\x13","\x47","\x2d"),3,0);
Horizontal = hx::CreateEnum< Layout_obj >(HX_HCSTRING("Horizontal","\x04","\x01","\x75","\x0c"),0,0);
Inline = hx::CreateEnum< Layout_obj >(HX_HCSTRING("Inline","\x79","\x3e","\xd4","\xcd"),4,0);
Vertical = hx::CreateEnum< Layout_obj >(HX_HCSTRING("Vertical","\x96","\x78","\xc7","\x43"),1,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
