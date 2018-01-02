// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_MouseState
#include <hx/widgets/MouseState.h>
#endif

namespace hx{
namespace widgets{


static ::String MouseState_obj_sMemberFields[] = {
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void MouseState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseState_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseState_obj::__mClass;

void MouseState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.MouseState","\x49","\xaa","\xc4","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = MouseState_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseState_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xc03ba76b >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseState_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
