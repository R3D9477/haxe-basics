// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry
#include <haxe/ui/parsers/modules/ModuleComponentEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a36c8afe4ad39142_43_new,"haxe.ui.parsers.modules.ModuleComponentEntry","new",0x8bf7cee6,"haxe.ui.parsers.modules.ModuleComponentEntry.new","haxe/ui/parsers/modules/Module.hx",43,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleComponentEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a36c8afe4ad39142_43_new)
            	}

Dynamic ModuleComponentEntry_obj::__CreateEmpty() { return new ModuleComponentEntry_obj; }

void *ModuleComponentEntry_obj::_hx_vtable = 0;

Dynamic ModuleComponentEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleComponentEntry_obj > _hx_result = new ModuleComponentEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleComponentEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0247e63e;
}


ModuleComponentEntry_obj::ModuleComponentEntry_obj()
{
}

void ModuleComponentEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleComponentEntry);
	HX_MARK_MEMBER_NAME(classPackage,"classPackage");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(classAlias,"classAlias");
	HX_MARK_END_CLASS();
}

void ModuleComponentEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(classPackage,"classPackage");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(classAlias,"classAlias");
}

hx::Val ModuleComponentEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"classAlias") ) { return hx::Val( classAlias ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"classPackage") ) { return hx::Val( classPackage ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleComponentEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"classAlias") ) { classAlias=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"classPackage") ) { classPackage=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleComponentEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleComponentEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleComponentEntry_obj,classPackage),HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a")},
	{hx::fsString,(int)offsetof(ModuleComponentEntry_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(ModuleComponentEntry_obj,classAlias),HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleComponentEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleComponentEntry_obj_sMemberFields[] = {
	HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64"),
	::String(null()) };

static void ModuleComponentEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleComponentEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleComponentEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleComponentEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleComponentEntry_obj::__mClass;

void ModuleComponentEntry_obj::__register()
{
	hx::Object *dummy = new ModuleComponentEntry_obj;
	ModuleComponentEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleComponentEntry","\xf4","\x23","\xa9","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleComponentEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleComponentEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleComponentEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleComponentEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleComponentEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleComponentEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
