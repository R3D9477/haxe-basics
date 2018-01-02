// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_DeferredBindingInfo
#include <haxe/ui/core/DeferredBindingInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2395352ec32ced9a_36_new,"haxe.ui.core.DeferredBindingInfo","new",0x9cf63a49,"haxe.ui.core.DeferredBindingInfo.new","haxe/ui/core/Component.hx",36,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void DeferredBindingInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2395352ec32ced9a_36_new)
            	}

Dynamic DeferredBindingInfo_obj::__CreateEmpty() { return new DeferredBindingInfo_obj; }

void *DeferredBindingInfo_obj::_hx_vtable = 0;

Dynamic DeferredBindingInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DeferredBindingInfo_obj > _hx_result = new DeferredBindingInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DeferredBindingInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e2a6437;
}


DeferredBindingInfo_obj::DeferredBindingInfo_obj()
{
}

void DeferredBindingInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DeferredBindingInfo);
	HX_MARK_MEMBER_NAME(targetId,"targetId");
	HX_MARK_MEMBER_NAME(sourceId,"sourceId");
	HX_MARK_MEMBER_NAME(targetProperty,"targetProperty");
	HX_MARK_MEMBER_NAME(sourceProperty,"sourceProperty");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_END_CLASS();
}

void DeferredBindingInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(targetId,"targetId");
	HX_VISIT_MEMBER_NAME(sourceId,"sourceId");
	HX_VISIT_MEMBER_NAME(targetProperty,"targetProperty");
	HX_VISIT_MEMBER_NAME(sourceProperty,"sourceProperty");
	HX_VISIT_MEMBER_NAME(transform,"transform");
}

hx::Val DeferredBindingInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"targetId") ) { return hx::Val( targetId ); }
		if (HX_FIELD_EQ(inName,"sourceId") ) { return hx::Val( sourceId ); }
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

hx::Val DeferredBindingInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"targetId") ) { targetId=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceId") ) { sourceId=inValue.Cast< ::String >(); return inValue; }
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

void DeferredBindingInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("targetId","\x8c","\x69","\x8d","\xd2"));
	outFields->push(HX_HCSTRING("sourceId","\x96","\x1d","\xa4","\x66"));
	outFields->push(HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd"));
	outFields->push(HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DeferredBindingInfo_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DeferredBindingInfo_obj,targetId),HX_HCSTRING("targetId","\x8c","\x69","\x8d","\xd2")},
	{hx::fsString,(int)offsetof(DeferredBindingInfo_obj,sourceId),HX_HCSTRING("sourceId","\x96","\x1d","\xa4","\x66")},
	{hx::fsString,(int)offsetof(DeferredBindingInfo_obj,targetProperty),HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd")},
	{hx::fsString,(int)offsetof(DeferredBindingInfo_obj,sourceProperty),HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d")},
	{hx::fsString,(int)offsetof(DeferredBindingInfo_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DeferredBindingInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String DeferredBindingInfo_obj_sMemberFields[] = {
	HX_HCSTRING("targetId","\x8c","\x69","\x8d","\xd2"),
	HX_HCSTRING("sourceId","\x96","\x1d","\xa4","\x66"),
	HX_HCSTRING("targetProperty","\xc6","\x30","\xe4","\xbd"),
	HX_HCSTRING("sourceProperty","\x50","\x88","\xd0","\x3d"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	::String(null()) };

static void DeferredBindingInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeferredBindingInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DeferredBindingInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeferredBindingInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class DeferredBindingInfo_obj::__mClass;

void DeferredBindingInfo_obj::__register()
{
	hx::Object *dummy = new DeferredBindingInfo_obj;
	DeferredBindingInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.DeferredBindingInfo","\xd7","\x61","\x4f","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DeferredBindingInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DeferredBindingInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DeferredBindingInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DeferredBindingInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DeferredBindingInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DeferredBindingInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
