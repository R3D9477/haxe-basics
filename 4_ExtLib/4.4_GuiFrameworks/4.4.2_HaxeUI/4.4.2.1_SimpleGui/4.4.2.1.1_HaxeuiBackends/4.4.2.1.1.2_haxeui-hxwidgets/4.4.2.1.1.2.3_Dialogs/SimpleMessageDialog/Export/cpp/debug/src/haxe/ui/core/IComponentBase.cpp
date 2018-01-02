// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

namespace haxe{
namespace ui{
namespace core{


static ::String IComponentBase_obj_sMemberFields[] = {
	HX_HCSTRING("mapEvent","\xde","\x37","\x07","\xed"),
	HX_HCSTRING("handleAddComponent","\x24","\xbe","\xc2","\x5c"),
	::String(null()) };

static void IComponentBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IComponentBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IComponentBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IComponentBase_obj::__mClass,"__mClass");
};

#endif

hx::Class IComponentBase_obj::__mClass;

void IComponentBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.IComponentBase","\xc2","\xd7","\x0e","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IComponentBase_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IComponentBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xbecc81fe >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IComponentBase_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
