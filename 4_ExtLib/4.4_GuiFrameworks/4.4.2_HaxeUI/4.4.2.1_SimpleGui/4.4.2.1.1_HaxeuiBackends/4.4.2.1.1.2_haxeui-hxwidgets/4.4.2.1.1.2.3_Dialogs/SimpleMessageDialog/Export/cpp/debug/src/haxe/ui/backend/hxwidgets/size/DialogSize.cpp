// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_73d5db1815414fb9
#define INCLUDED_73d5db1815414fb9
#include "wx/settings.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_DialogSize
#include <haxe/ui/backend/hxwidgets/size/DialogSize.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_SystemSettings
#include <hx/widgets/SystemSettings.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_9_new,"haxe.ui.backend.hxwidgets.size.DialogSize","new",0x2494ab4d,"haxe.ui.backend.hxwidgets.size.DialogSize.new","haxe/ui/backend/hxwidgets/size/DialogSize.hx",9,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_11_get_width,"haxe.ui.backend.hxwidgets.size.DialogSize","get_width",0xa8cb5d0a,"haxe.ui.backend.hxwidgets.size.DialogSize.get_width","haxe/ui/backend/hxwidgets/size/DialogSize.hx",11,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_15_get_height,"haxe.ui.backend.hxwidgets.size.DialogSize","get_height",0xbf758463,"haxe.ui.backend.hxwidgets.size.DialogSize.get_height","haxe/ui/backend/hxwidgets/size/DialogSize.hx",15,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_18_get_usableWidthModifier,"haxe.ui.backend.hxwidgets.size.DialogSize","get_usableWidthModifier",0x9de2a369,"haxe.ui.backend.hxwidgets.size.DialogSize.get_usableWidthModifier","haxe/ui/backend/hxwidgets/size/DialogSize.hx",18,0x18663a84)
HX_LOCAL_STACK_FRAME(_hx_pos_7a5e6f289804d9c5_23_get_usableHeightModifier,"haxe.ui.backend.hxwidgets.size.DialogSize","get_usableHeightModifier",0xd2a66cf2,"haxe.ui.backend.hxwidgets.size.DialogSize.get_usableHeightModifier","haxe/ui/backend/hxwidgets/size/DialogSize.hx",23,0x18663a84)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void DialogSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic DialogSize_obj::__CreateEmpty() { return new DialogSize_obj; }

void *DialogSize_obj::_hx_vtable = 0;

Dynamic DialogSize_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogSize_obj > _hx_result = new DialogSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350255fb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x350255fb;
	} else {
		return inClassId==(int)0x6117b38f;
	}
}

Float DialogSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_11_get_width)
HXDLIN(  11)		return this->component->window->get_bestSize()->width;
            	}


Float DialogSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_15_get_height)
HXDLIN(  15)		return this->component->window->get_bestSize()->height;
            	}


Float DialogSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_18_get_usableWidthModifier)
HXLINE(  19)		int m = (int)6;
HXLINE(  20)		return m;
            	}


Float DialogSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_7a5e6f289804d9c5_23_get_usableHeightModifier)
HXLINE(  24)		int m = ::hx::widgets::SystemSettings_obj::getMetric(wxSYS_CAPTION_Y,null());
HXLINE(  25)		return m;
            	}



hx::ObjectPtr< DialogSize_obj > DialogSize_obj::__new() {
	hx::ObjectPtr< DialogSize_obj > __this = new DialogSize_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DialogSize_obj > DialogSize_obj::__alloc(hx::Ctx *_hx_ctx) {
	DialogSize_obj *__this = (DialogSize_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogSize_obj), true, "haxe.ui.backend.hxwidgets.size.DialogSize"));
	*(void **)__this = DialogSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DialogSize_obj::DialogSize_obj()
{
}

hx::Val DialogSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usableWidthModifier") ) { return hx::Val( get_usableWidthModifier_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_usableHeightModifier") ) { return hx::Val( get_usableHeightModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DialogSize_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DialogSize_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogSize_obj_sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_usableWidthModifier","\xfc","\xe3","\xaa","\xe8"),
	HX_HCSTRING("get_usableHeightModifier","\xff","\xac","\x16","\xf7"),
	::String(null()) };

static void DialogSize_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogSize_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogSize_obj::__mClass,"__mClass");
};

#endif

hx::Class DialogSize_obj::__mClass;

void DialogSize_obj::__register()
{
	hx::Object *dummy = new DialogSize_obj;
	DialogSize_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.size.DialogSize","\xdb","\x00","\x18","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogSize_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DialogSize_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DialogSize_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogSize_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogSize_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
