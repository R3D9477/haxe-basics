// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry
#include <haxe/ui/parsers/modules/ModuleResourceEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75bb1f39d9107259_34_new,"haxe.ui.parsers.modules.ModuleResourceEntry","new",0xe9977397,"haxe.ui.parsers.modules.ModuleResourceEntry.new","haxe/ui/parsers/modules/Module.hx",34,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleResourceEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_75bb1f39d9107259_34_new)
            	}

Dynamic ModuleResourceEntry_obj::__CreateEmpty() { return new ModuleResourceEntry_obj; }

void *ModuleResourceEntry_obj::_hx_vtable = 0;

Dynamic ModuleResourceEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleResourceEntry_obj > _hx_result = new ModuleResourceEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleResourceEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0881f0e3;
}


ModuleResourceEntry_obj::ModuleResourceEntry_obj()
{
}

void ModuleResourceEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleResourceEntry);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(condition,"condition");
	HX_MARK_END_CLASS();
}

void ModuleResourceEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(condition,"condition");
}

hx::Val ModuleResourceEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return hx::Val( path ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return hx::Val( prefix ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { return hx::Val( condition ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleResourceEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"condition") ) { condition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleResourceEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"));
	outFields->push(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleResourceEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleResourceEntry_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsString,(int)offsetof(ModuleResourceEntry_obj,prefix),HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae")},
	{hx::fsString,(int)offsetof(ModuleResourceEntry_obj,condition),HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleResourceEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleResourceEntry_obj_sMemberFields[] = {
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"),
	HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"),
	::String(null()) };

static void ModuleResourceEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleResourceEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleResourceEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleResourceEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleResourceEntry_obj::__mClass;

void ModuleResourceEntry_obj::__register()
{
	hx::Object *dummy = new ModuleResourceEntry_obj;
	ModuleResourceEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleResourceEntry","\x25","\x5c","\xaa","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleResourceEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleResourceEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleResourceEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleResourceEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleResourceEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleResourceEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
