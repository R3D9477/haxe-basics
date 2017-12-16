// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

namespace haxe{
namespace ui{
namespace validation{


static ::String IValidating_obj_sMemberFields[] = {
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("updateDisplay","\x39","\x8f","\xb8","\x86"),
	::String(null()) };

static void IValidating_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IValidating_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IValidating_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IValidating_obj::__mClass,"__mClass");
};

#endif

hx::Class IValidating_obj::__mClass;

void IValidating_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.validation.IValidating","\xd9","\xe5","\x18","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IValidating_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IValidating_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x1e962029 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IValidating_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validation
