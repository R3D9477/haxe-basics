// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif

namespace haxe{
namespace ui{
namespace focus{


static ::String IFocusable_obj_sMemberFields[] = {
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("get_allowFocus","\xd8","\xa2","\x4a","\xa5"),
	HX_HCSTRING("set_allowFocus","\x4c","\x8b","\x6a","\xc5"),
	::String(null()) };

static void IFocusable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFocusable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFocusable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFocusable_obj::__mClass,"__mClass");
};

#endif

hx::Class IFocusable_obj::__mClass;

void IFocusable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.focus.IFocusable","\xd1","\x63","\x92","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFocusable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFocusable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x04f087c7 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFocusable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
