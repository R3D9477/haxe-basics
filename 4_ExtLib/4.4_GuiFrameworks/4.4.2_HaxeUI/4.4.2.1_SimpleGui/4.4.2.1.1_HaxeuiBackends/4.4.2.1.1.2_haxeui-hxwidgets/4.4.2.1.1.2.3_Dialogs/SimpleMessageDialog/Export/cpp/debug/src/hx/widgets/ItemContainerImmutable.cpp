// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
#endif

namespace hx{
namespace widgets{


static ::String ItemContainerImmutable_obj_sMemberFields[] = {
	HX_HCSTRING("setString","\x13","\x9e","\xd7","\x70"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	::String(null()) };

static void ItemContainerImmutable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemContainerImmutable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemContainerImmutable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemContainerImmutable_obj::__mClass,"__mClass");
};

#endif

hx::Class ItemContainerImmutable_obj::__mClass;

void ItemContainerImmutable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ItemContainerImmutable","\xd1","\x44","\x61","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = ItemContainerImmutable_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(ItemContainerImmutable_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x73706cf3 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemContainerImmutable_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
