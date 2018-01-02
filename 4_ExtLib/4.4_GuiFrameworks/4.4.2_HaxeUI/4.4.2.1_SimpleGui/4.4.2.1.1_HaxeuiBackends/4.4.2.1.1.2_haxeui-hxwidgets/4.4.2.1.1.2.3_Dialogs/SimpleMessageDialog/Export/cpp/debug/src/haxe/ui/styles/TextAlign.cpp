// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_TextAlign
#include <haxe/ui/styles/TextAlign.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::TextAlign TextAlign_obj::Center;

::haxe::ui::styles::TextAlign TextAlign_obj::Left;

::haxe::ui::styles::TextAlign TextAlign_obj::Right;

bool TextAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) { outValue = TextAlign_obj::Center; return true; }
	if (inName==HX_("Left",27,34,89,32)) { outValue = TextAlign_obj::Left; return true; }
	if (inName==HX_("Right",bc,7b,91,7c)) { outValue = TextAlign_obj::Right; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextAlign_obj)

int TextAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 2;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 1;
	return super::__FindIndex(inName);
}

int TextAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 0;
	if (inName==HX_("Left",27,34,89,32)) return 0;
	if (inName==HX_("Right",bc,7b,91,7c)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return Center;
	if (inName==HX_("Left",27,34,89,32)) return Left;
	if (inName==HX_("Right",bc,7b,91,7c)) return Right;
	return super::__Field(inName,inCallProp);
}

static ::String TextAlign_obj_sStaticFields[] = {
	HX_("Left",27,34,89,32),
	HX_("Right",bc,7b,91,7c),
	HX_("Center",f5,99,6f,3a),
	::String(null())
};

static void TextAlign_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAlign_obj::Center,"Center");
	HX_MARK_MEMBER_NAME(TextAlign_obj::Left,"Left");
	HX_MARK_MEMBER_NAME(TextAlign_obj::Right,"Right");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextAlign_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::Center,"Center");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::Left,"Left");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::Right,"Right");
};
#endif

hx::Class TextAlign_obj::__mClass;

Dynamic __Create_TextAlign_obj() { return new TextAlign_obj; }

void TextAlign_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.styles.TextAlign","\x7e","\xec","\x13","\x1d"), hx::TCanCast< TextAlign_obj >,TextAlign_obj_sStaticFields,0,
	&__Create_TextAlign_obj, &__Create,
	&super::__SGetClass(), &CreateTextAlign_obj, TextAlign_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TextAlign_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextAlign_obj::__GetStatic;
}

void TextAlign_obj::__boot()
{
Center = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),2,0);
Left = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),0,0);
Right = hx::CreateEnum< TextAlign_obj >(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),1,0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
