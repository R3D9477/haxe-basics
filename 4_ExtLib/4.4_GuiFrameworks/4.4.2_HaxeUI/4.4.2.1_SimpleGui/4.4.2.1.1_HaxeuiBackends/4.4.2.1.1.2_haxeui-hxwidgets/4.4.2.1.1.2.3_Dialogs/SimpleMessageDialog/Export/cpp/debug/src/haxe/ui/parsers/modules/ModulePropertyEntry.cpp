// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry
#include <haxe/ui/parsers/modules/ModulePropertyEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf6d170f49e8e6c4_91_new,"haxe.ui.parsers.modules.ModulePropertyEntry","new",0xa86f5f30,"haxe.ui.parsers.modules.ModulePropertyEntry.new","haxe/ui/parsers/modules/Module.hx",91,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModulePropertyEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bf6d170f49e8e6c4_91_new)
            	}

Dynamic ModulePropertyEntry_obj::__CreateEmpty() { return new ModulePropertyEntry_obj; }

void *ModulePropertyEntry_obj::_hx_vtable = 0;

Dynamic ModulePropertyEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModulePropertyEntry_obj > _hx_result = new ModulePropertyEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModulePropertyEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0daddbe0;
}


ModulePropertyEntry_obj::ModulePropertyEntry_obj()
{
}

void ModulePropertyEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModulePropertyEntry);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void ModulePropertyEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val ModulePropertyEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModulePropertyEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModulePropertyEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModulePropertyEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModulePropertyEntry_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(ModulePropertyEntry_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModulePropertyEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModulePropertyEntry_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void ModulePropertyEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModulePropertyEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModulePropertyEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModulePropertyEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModulePropertyEntry_obj::__mClass;

void ModulePropertyEntry_obj::__register()
{
	hx::Object *dummy = new ModulePropertyEntry_obj;
	ModulePropertyEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModulePropertyEntry","\x3e","\x47","\xac","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModulePropertyEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModulePropertyEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModulePropertyEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModulePropertyEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModulePropertyEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModulePropertyEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
