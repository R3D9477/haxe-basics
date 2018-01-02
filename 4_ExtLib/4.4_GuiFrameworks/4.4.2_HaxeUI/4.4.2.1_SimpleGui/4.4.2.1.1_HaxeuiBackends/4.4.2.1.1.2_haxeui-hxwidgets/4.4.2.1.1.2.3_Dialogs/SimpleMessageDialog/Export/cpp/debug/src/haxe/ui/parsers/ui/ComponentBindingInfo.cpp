// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo
#include <haxe/ui/parsers/ui/ComponentBindingInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_05bec680eb51dc45_72_new,"haxe.ui.parsers.ui.ComponentBindingInfo","new",0x78528d76,"haxe.ui.parsers.ui.ComponentBindingInfo.new","haxe/ui/parsers/ui/ComponentInfo.hx",72,0x65fc7ec1)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void ComponentBindingInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_05bec680eb51dc45_72_new)
            	}

Dynamic ComponentBindingInfo_obj::__CreateEmpty() { return new ComponentBindingInfo_obj; }

void *ComponentBindingInfo_obj::_hx_vtable = 0;

Dynamic ComponentBindingInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentBindingInfo_obj > _hx_result = new ComponentBindingInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentBindingInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67a622a0;
}


ComponentBindingInfo_obj::ComponentBindingInfo_obj()
{
}

void ComponentBindingInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentBindingInfo);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_END_CLASS();
}

void ComponentBindingInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(transform,"transform");
}

hx::Val ComponentBindingInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return hx::Val( source ); }
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return hx::Val( transform ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ComponentBindingInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentBindingInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComponentBindingInfo_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ComponentBindingInfo_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsString,(int)offsetof(ComponentBindingInfo_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsString,(int)offsetof(ComponentBindingInfo_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ComponentBindingInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentBindingInfo_obj_sMemberFields[] = {
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	::String(null()) };

static void ComponentBindingInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentBindingInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentBindingInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentBindingInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentBindingInfo_obj::__mClass;

void ComponentBindingInfo_obj::__register()
{
	hx::Object *dummy = new ComponentBindingInfo_obj;
	ComponentBindingInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.ComponentBindingInfo","\x84","\x5a","\xfd","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComponentBindingInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentBindingInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentBindingInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentBindingInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentBindingInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentBindingInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
