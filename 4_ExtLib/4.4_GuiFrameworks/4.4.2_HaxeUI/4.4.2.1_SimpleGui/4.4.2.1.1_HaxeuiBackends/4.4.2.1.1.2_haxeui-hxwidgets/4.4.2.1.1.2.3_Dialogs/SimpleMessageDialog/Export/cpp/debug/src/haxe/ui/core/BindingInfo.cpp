// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BindingInfo
#include <haxe/ui/core/BindingInfo.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e1edeea9f638cd7_26_new,"haxe.ui.core.BindingInfo","new",0x181d3ba8,"haxe.ui.core.BindingInfo.new","haxe/ui/core/Component.hx",26,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void BindingInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1e1edeea9f638cd7_26_new)
            	}

Dynamic BindingInfo_obj::__CreateEmpty() { return new BindingInfo_obj; }

void *BindingInfo_obj::_hx_vtable = 0;

Dynamic BindingInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BindingInfo_obj > _hx_result = new BindingInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BindingInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x49505ffa;
}


BindingInfo_obj::BindingInfo_obj()
{
}

void BindingInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BindingInfo);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetProperty,"targetProperty");
	HX_MARK_MEMBER_NAME(sourceProperty,"sourceProperty");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_END_CLASS();
}

void BindingInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetProperty,"targetProperty");
	HX_VISIT_MEMBER_NAME(sourceProperty,"sourceProperty");
	HX_VISIT_MEMBER_NAME(transform,"transform");
}

hx::Val BindingInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return hx::Val( transform ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"targetProperty") ) { return hx::Val( targetProperty ); }
		if (HX_FIELD_EQ(inName,"sourceProperty") ) { return hx::Val( sourceProperty ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BindingInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"targetProperty") ) { targetProperty=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceProperty") ) { sourceProperty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BindingInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd"));
	outFields->push(HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BindingInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(BindingInfo_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsString,(int)offsetof(BindingInfo_obj,targetProperty),HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd")},
	{hx::fsString,(int)offsetof(BindingInfo_obj,sourceProperty),HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d")},
	{hx::fsString,(int)offsetof(BindingInfo_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BindingInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String BindingInfo_obj_sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd"),
	HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	::String(null()) };

static void BindingInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BindingInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BindingInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BindingInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class BindingInfo_obj::__mClass;

void BindingInfo_obj::__register()
{
	hx::Object *dummy = new BindingInfo_obj;
	BindingInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.BindingInfo","\xb6","\x87","\x24","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BindingInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BindingInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BindingInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BindingInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BindingInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BindingInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
