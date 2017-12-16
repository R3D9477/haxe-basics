// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
#endif

namespace hx{
namespace widgets{


static ::String ItemContainer_obj_sMemberFields[] = {
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	::String(null()) };

static void ItemContainer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemContainer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class ItemContainer_obj::__mClass;

void ItemContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ItemContainer","\x31","\x15","\x6f","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = ItemContainer_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(ItemContainer_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x112d794f >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemContainer_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
