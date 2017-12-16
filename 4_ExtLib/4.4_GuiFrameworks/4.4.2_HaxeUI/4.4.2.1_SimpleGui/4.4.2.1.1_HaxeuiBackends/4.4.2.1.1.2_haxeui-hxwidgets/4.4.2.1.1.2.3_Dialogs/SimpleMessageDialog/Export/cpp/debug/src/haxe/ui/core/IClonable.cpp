// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif

namespace haxe{
namespace ui{
namespace core{


static ::String IClonable_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void IClonable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IClonable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IClonable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IClonable_obj::__mClass,"__mClass");
};

#endif

hx::Class IClonable_obj::__mClass;

void IClonable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.IClonable","\xce","\x35","\x82","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IClonable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IClonable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x7e9cb512 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IClonable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
