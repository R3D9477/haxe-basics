// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry
#include <haxe/ui/parsers/modules/ModuleScriptletEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78622f707d62baa9_54_new,"haxe.ui.parsers.modules.ModuleScriptletEntry","new",0x0972d293,"haxe.ui.parsers.modules.ModuleScriptletEntry.new","haxe/ui/parsers/modules/Module.hx",54,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleScriptletEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_78622f707d62baa9_54_new)
            	}

Dynamic ModuleScriptletEntry_obj::__CreateEmpty() { return new ModuleScriptletEntry_obj; }

void *ModuleScriptletEntry_obj::_hx_vtable = 0;

Dynamic ModuleScriptletEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleScriptletEntry_obj > _hx_result = new ModuleScriptletEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleScriptletEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6129eddb;
}


ModuleScriptletEntry_obj::ModuleScriptletEntry_obj()
{
}

void ModuleScriptletEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleScriptletEntry);
	HX_MARK_MEMBER_NAME(classPackage,"classPackage");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(classAlias,"classAlias");
	HX_MARK_MEMBER_NAME(keep,"keep");
	HX_MARK_MEMBER_NAME(staticClass,"staticClass");
	HX_MARK_END_CLASS();
}

void ModuleScriptletEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(classPackage,"classPackage");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(classAlias,"classAlias");
	HX_VISIT_MEMBER_NAME(keep,"keep");
	HX_VISIT_MEMBER_NAME(staticClass,"staticClass");
}

hx::Val ModuleScriptletEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keep") ) { return hx::Val( keep ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"classAlias") ) { return hx::Val( classAlias ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticClass") ) { return hx::Val( staticClass ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"classPackage") ) { return hx::Val( classPackage ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleScriptletEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keep") ) { keep=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"classAlias") ) { classAlias=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticClass") ) { staticClass=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"classPackage") ) { classPackage=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleScriptletEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64"));
	outFields->push(HX_HCSTRING("keep","\x85","\xd0","\x06","\x47"));
	outFields->push(HX_HCSTRING("staticClass","\xaa","\x54","\x25","\x5d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleScriptletEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleScriptletEntry_obj,classPackage),HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a")},
	{hx::fsString,(int)offsetof(ModuleScriptletEntry_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(ModuleScriptletEntry_obj,classAlias),HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64")},
	{hx::fsBool,(int)offsetof(ModuleScriptletEntry_obj,keep),HX_HCSTRING("keep","\x85","\xd0","\x06","\x47")},
	{hx::fsBool,(int)offsetof(ModuleScriptletEntry_obj,staticClass),HX_HCSTRING("staticClass","\xaa","\x54","\x25","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleScriptletEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleScriptletEntry_obj_sMemberFields[] = {
	HX_HCSTRING("classPackage","\x2e","\xd2","\x31","\x2a"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("classAlias","\x38","\x7e","\xaf","\x64"),
	HX_HCSTRING("keep","\x85","\xd0","\x06","\x47"),
	HX_HCSTRING("staticClass","\xaa","\x54","\x25","\x5d"),
	::String(null()) };

static void ModuleScriptletEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleScriptletEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleScriptletEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleScriptletEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleScriptletEntry_obj::__mClass;

void ModuleScriptletEntry_obj::__register()
{
	hx::Object *dummy = new ModuleScriptletEntry_obj;
	ModuleScriptletEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleScriptletEntry","\x21","\x8d","\x33","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleScriptletEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleScriptletEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleScriptletEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleScriptletEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleScriptletEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleScriptletEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
