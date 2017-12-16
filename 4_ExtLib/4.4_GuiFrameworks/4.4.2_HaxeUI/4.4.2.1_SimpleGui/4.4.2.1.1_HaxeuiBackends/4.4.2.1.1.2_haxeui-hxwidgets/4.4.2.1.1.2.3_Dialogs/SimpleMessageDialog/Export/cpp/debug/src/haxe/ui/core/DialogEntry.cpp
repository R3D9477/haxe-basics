// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_DialogEntry
#include <haxe/ui/core/DialogEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bbac88761a9e2dd9_15_new,"haxe.ui.core.DialogEntry","new",0x507c3b5f,"haxe.ui.core.DialogEntry.new","haxe/ui/core/Screen.hx",15,0xa3acdbf4)
namespace haxe{
namespace ui{
namespace core{

void DialogEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bbac88761a9e2dd9_15_new)
            	}

Dynamic DialogEntry_obj::__CreateEmpty() { return new DialogEntry_obj; }

void *DialogEntry_obj::_hx_vtable = 0;

Dynamic DialogEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogEntry_obj > _hx_result = new DialogEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10397831;
}


DialogEntry_obj::DialogEntry_obj()
{
}

void DialogEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogEntry);
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(dialog,"dialog");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_END_CLASS();
}

void DialogEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(dialog,"dialog");
	HX_VISIT_MEMBER_NAME(callback,"callback");
}

hx::Val DialogEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dialog") ) { return hx::Val( dialog ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { return hx::Val( overlay ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DialogEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dialog") ) { dialog=inValue.Cast<  ::haxe::ui::containers::dialogs::Dialog >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("dialog","\xc8","\x04","\x33","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DialogEntry_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(DialogEntry_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*::haxe::ui::containers::dialogs::Dialog*/ ,(int)offsetof(DialogEntry_obj,dialog),HX_HCSTRING("dialog","\xc8","\x04","\x33","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DialogEntry_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DialogEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogEntry_obj_sMemberFields[] = {
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("dialog","\xc8","\x04","\x33","\xb1"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	::String(null()) };

static void DialogEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class DialogEntry_obj::__mClass;

void DialogEntry_obj::__register()
{
	hx::Object *dummy = new DialogEntry_obj;
	DialogEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.DialogEntry","\xed","\x9f","\x0d","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DialogEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DialogEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
