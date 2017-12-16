// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif

namespace hx{
namespace widgets{


static void TextEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEntry_obj::__mClass;

void TextEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.TextEntry","\x88","\x8a","\x59","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = TextEntry_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xc39007a6 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEntry_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
