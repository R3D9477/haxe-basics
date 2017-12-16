// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif

namespace haxe{


static ::String IMap_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	::String(null()) };

static void IMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMap_obj::__mClass,"__mClass");
};

#endif

hx::Class IMap_obj::__mClass;

void IMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.IMap","\x1b","\x07","\x35","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IMap_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x09c2bd39 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IMap_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
