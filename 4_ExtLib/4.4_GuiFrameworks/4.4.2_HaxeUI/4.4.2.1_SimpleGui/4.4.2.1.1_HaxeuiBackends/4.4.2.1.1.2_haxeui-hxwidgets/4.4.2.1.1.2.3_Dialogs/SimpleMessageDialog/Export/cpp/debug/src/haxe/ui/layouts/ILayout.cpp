// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif

namespace haxe{
namespace ui{
namespace layouts{


static void ILayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ILayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ILayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ILayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ILayout_obj::__mClass;

void ILayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.ILayout","\x1c","\xea","\xaa","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = ILayout_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xcbfa36e4 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ILayout_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
