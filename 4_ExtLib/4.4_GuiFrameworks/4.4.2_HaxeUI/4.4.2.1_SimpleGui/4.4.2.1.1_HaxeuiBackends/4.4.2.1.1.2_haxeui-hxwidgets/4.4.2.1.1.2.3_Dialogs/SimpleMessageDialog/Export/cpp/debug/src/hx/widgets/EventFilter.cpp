// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_EventFilter
#include <hx/widgets/EventFilter.h>
#endif

namespace hx{
namespace widgets{


static void EventFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class EventFilter_obj::__mClass;

void EventFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.EventFilter","\x35","\xb4","\x4e","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = EventFilter_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0x50f534d3 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventFilter_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
