// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry
#include <haxe/ui/parsers/modules/ModuleThemeStyleEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6cdaba87a771c58_72_new,"haxe.ui.parsers.modules.ModuleThemeStyleEntry","new",0x522b30fd,"haxe.ui.parsers.modules.ModuleThemeStyleEntry.new","haxe/ui/parsers/modules/Module.hx",72,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleThemeStyleEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c6cdaba87a771c58_72_new)
            	}

Dynamic ModuleThemeStyleEntry_obj::__CreateEmpty() { return new ModuleThemeStyleEntry_obj; }

void *ModuleThemeStyleEntry_obj::_hx_vtable = 0;

Dynamic ModuleThemeStyleEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleThemeStyleEntry_obj > _hx_result = new ModuleThemeStyleEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleThemeStyleEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dcc3091;
}


ModuleThemeStyleEntry_obj::ModuleThemeStyleEntry_obj()
{
}

void ModuleThemeStyleEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleThemeStyleEntry);
	HX_MARK_MEMBER_NAME(resource,"resource");
	HX_MARK_MEMBER_NAME(condition,"condition");
	HX_MARK_END_CLASS();
}

void ModuleThemeStyleEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resource,"resource");
	HX_VISIT_MEMBER_NAME(condition,"condition");
}

hx::Val ModuleThemeStyleEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { return hx::Val( resource ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { return hx::Val( condition ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleThemeStyleEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { resource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { condition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleThemeStyleEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));
	outFields->push(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleThemeStyleEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleThemeStyleEntry_obj,resource),HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12")},
	{hx::fsString,(int)offsetof(ModuleThemeStyleEntry_obj,condition),HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleThemeStyleEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleThemeStyleEntry_obj_sMemberFields[] = {
	HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"),
	HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"),
	::String(null()) };

static void ModuleThemeStyleEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleThemeStyleEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleThemeStyleEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleThemeStyleEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleThemeStyleEntry_obj::__mClass;

void ModuleThemeStyleEntry_obj::__register()
{
	hx::Object *dummy = new ModuleThemeStyleEntry_obj;
	ModuleThemeStyleEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleThemeStyleEntry","\x8b","\xee","\x2d","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleThemeStyleEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleThemeStyleEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleThemeStyleEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleThemeStyleEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleThemeStyleEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleThemeStyleEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
