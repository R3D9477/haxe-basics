// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_FillStyle
#include <haxe/ui/styles/FillStyle.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::FillStyle FillStyle_obj::Color(int c)
{
	return hx::CreateEnum< FillStyle_obj >(HX_("Color",43,e1,89,dd),1,1)->_hx_init(0,c);
}

::haxe::ui::styles::FillStyle FillStyle_obj::Gradient(int a,int b,int c,int d)
{
	return hx::CreateEnum< FillStyle_obj >(HX_("Gradient",10,f6,f0,03),2,4)->_hx_init(0,a)->_hx_init(1,b)->_hx_init(2,c)->_hx_init(3,d);
}

::haxe::ui::styles::FillStyle FillStyle_obj::Transparent;

bool FillStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Color",43,e1,89,dd)) { outValue = FillStyle_obj::Color_dyn(); return true; }
	if (inName==HX_("Gradient",10,f6,f0,03)) { outValue = FillStyle_obj::Gradient_dyn(); return true; }
	if (inName==HX_("Transparent",32,c3,ec,06)) { outValue = FillStyle_obj::Transparent; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FillStyle_obj)

int FillStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Color",43,e1,89,dd)) return 1;
	if (inName==HX_("Gradient",10,f6,f0,03)) return 2;
	if (inName==HX_("Transparent",32,c3,ec,06)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FillStyle_obj,Color,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FillStyle_obj,Gradient,return)

int FillStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Color",43,e1,89,dd)) return 1;
	if (inName==HX_("Gradient",10,f6,f0,03)) return 4;
	if (inName==HX_("Transparent",32,c3,ec,06)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FillStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Color",43,e1,89,dd)) return Color_dyn();
	if (inName==HX_("Gradient",10,f6,f0,03)) return Gradient_dyn();
	if (inName==HX_("Transparent",32,c3,ec,06)) return Transparent;
	return super::__Field(inName,inCallProp);
}

static ::String FillStyle_obj_sStaticFields[] = {
	HX_("Transparent",32,c3,ec,06),
	HX_("Color",43,e1,89,dd),
	HX_("Gradient",10,f6,f0,03),
	::String(null())
};

static void FillStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillStyle_obj::Transparent,"Transparent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FillStyle_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FillStyle_obj::Transparent,"Transparent");
};
#endif

hx::Class FillStyle_obj::__mClass;

Dynamic __Create_FillStyle_obj() { return new FillStyle_obj; }

void FillStyle_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.FillStyle","\x54","\xd1","\x59","\xb5"), hx::TCanCast< FillStyle_obj >,FillStyle_obj_sStaticFields,0,
	&__Create_FillStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFillStyle_obj, FillStyle_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FillStyle_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FillStyle_obj::__GetStatic;
}

void FillStyle_obj::__boot()
{
Transparent = hx::CreateEnum< FillStyle_obj >(HX_HCSTRING("Transparent","\x32","\xc3","\xec","\x06"),0,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
