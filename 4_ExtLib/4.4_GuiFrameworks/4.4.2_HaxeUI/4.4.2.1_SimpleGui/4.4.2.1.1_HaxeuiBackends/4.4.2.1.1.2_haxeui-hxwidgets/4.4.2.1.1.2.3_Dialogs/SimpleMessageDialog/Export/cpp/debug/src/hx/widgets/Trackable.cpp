// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

namespace hx{
namespace widgets{


static void Trackable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Trackable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Trackable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Trackable_obj::__mClass,"__mClass");
};

#endif

hx::Class Trackable_obj::__mClass;

void Trackable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Trackable","\xa8","\x1f","\xff","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = Trackable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xfb359cc6 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Trackable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
