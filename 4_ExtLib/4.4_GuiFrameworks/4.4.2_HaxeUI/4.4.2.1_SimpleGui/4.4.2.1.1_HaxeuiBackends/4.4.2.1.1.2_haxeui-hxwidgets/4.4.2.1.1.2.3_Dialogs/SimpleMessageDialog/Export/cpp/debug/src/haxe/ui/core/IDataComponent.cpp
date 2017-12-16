// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif

namespace haxe{
namespace ui{
namespace core{


static ::String IDataComponent_obj_sMemberFields[] = {
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	::String(null()) };

static void IDataComponent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IDataComponent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataComponent_obj::__mClass,"__mClass");
};

#endif

hx::Class IDataComponent_obj::__mClass;

void IDataComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.IDataComponent","\x87","\x95","\x3d","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IDataComponent_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IDataComponent_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xfafb3fc3 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IDataComponent_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
