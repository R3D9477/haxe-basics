// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

namespace hx{
namespace widgets{


static void WithImages_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WithImages_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WithImages_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WithImages_obj::__mClass,"__mClass");
};

#endif

hx::Class WithImages_obj::__mClass;

void WithImages_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.WithImages","\xfb","\xc3","\x48","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = WithImages_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0x08bfc11d >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WithImages_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
