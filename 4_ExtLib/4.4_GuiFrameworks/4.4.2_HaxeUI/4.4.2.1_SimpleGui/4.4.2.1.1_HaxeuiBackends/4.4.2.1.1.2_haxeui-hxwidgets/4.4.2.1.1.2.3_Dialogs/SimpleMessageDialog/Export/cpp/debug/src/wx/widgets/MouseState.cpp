// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_MouseState
#include <wx/widgets/MouseState.h>
#endif

namespace wx{
namespace widgets{


static ::String MouseState_obj_sMemberFields[] = {
	HX_HCSTRING("GetX","\x22","\x2f","\x3b","\x2f"),
	HX_HCSTRING("GetY","\x23","\x2f","\x3b","\x2f"),
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
	__mClass->mName = HX_HCSTRING("wx.widgets.MouseState","\xd8","\xab","\xcf","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = MouseState_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseState_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x43356aba >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseState_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
