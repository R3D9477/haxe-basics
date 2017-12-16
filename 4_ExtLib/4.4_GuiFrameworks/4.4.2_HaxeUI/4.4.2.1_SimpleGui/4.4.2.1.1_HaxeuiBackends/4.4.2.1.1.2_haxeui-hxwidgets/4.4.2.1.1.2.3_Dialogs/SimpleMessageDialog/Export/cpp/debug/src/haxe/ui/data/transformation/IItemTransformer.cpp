// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

namespace haxe{
namespace ui{
namespace data{
namespace transformation{


static ::String IItemTransformer_obj_sMemberFields[] = {
	HX_HCSTRING("transformFrom","\xf6","\x24","\x10","\x71"),
	::String(null()) };

static void IItemTransformer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IItemTransformer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IItemTransformer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IItemTransformer_obj::__mClass,"__mClass");
};

#endif

hx::Class IItemTransformer_obj::__mClass;

void IItemTransformer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.data.transformation.IItemTransformer","\x50","\x8e","\x32","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IItemTransformer_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IItemTransformer_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xc4b4b36a >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IItemTransformer_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
} // end namespace transformation
