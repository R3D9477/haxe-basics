// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#include <haxe/ui/focus/FocusInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8939703bfe92536_6_new,"haxe.ui.focus.FocusInfo","new",0xf0315150,"haxe.ui.focus.FocusInfo.new","haxe/ui/focus/FocusManager.hx",6,0xe315a5e0)
namespace haxe{
namespace ui{
namespace focus{

void FocusInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c8939703bfe92536_6_new)
            	}

Dynamic FocusInfo_obj::__CreateEmpty() { return new FocusInfo_obj; }

void *FocusInfo_obj::_hx_vtable = 0;

Dynamic FocusInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FocusInfo_obj > _hx_result = new FocusInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3dcfb628;
}


FocusInfo_obj::FocusInfo_obj()
{
}

void FocusInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusInfo);
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(currentFocus,"currentFocus");
	HX_MARK_END_CLASS();
}

void FocusInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(currentFocus,"currentFocus");
}

hx::Val FocusInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return hx::Val( view ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { return hx::Val( currentFocus ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FocusInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { currentFocus=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("currentFocus","\xdf","\x44","\x95","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FocusInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(FocusInfo_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::haxe::ui::focus::IFocusable*/ ,(int)offsetof(FocusInfo_obj,currentFocus),HX_HCSTRING("currentFocus","\xdf","\x44","\x95","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FocusInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusInfo_obj_sMemberFields[] = {
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("currentFocus","\xdf","\x44","\x95","\x4b"),
	::String(null()) };

static void FocusInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class FocusInfo_obj::__mClass;

void FocusInfo_obj::__register()
{
	hx::Object *dummy = new FocusInfo_obj;
	FocusInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.focus.FocusInfo","\x5e","\xa9","\xc2","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FocusInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FocusInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
