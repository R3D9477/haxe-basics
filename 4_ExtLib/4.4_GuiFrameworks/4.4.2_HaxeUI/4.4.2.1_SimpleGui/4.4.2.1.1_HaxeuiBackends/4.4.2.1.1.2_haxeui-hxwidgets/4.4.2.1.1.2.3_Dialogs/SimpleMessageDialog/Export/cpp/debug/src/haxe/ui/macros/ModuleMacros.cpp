// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_ModuleMacros
#include <haxe/ui/macros/ModuleMacros.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dd6dd5de6196fbde_15_boot,"haxe.ui.macros.ModuleMacros","boot",0xd174a378,"haxe.ui.macros.ModuleMacros.boot","haxe/ui/macros/ModuleMacros.hx",15,0x24485495)
namespace haxe{
namespace ui{
namespace macros{

void ModuleMacros_obj::__construct() { }

Dynamic ModuleMacros_obj::__CreateEmpty() { return new ModuleMacros_obj; }

void *ModuleMacros_obj::_hx_vtable = 0;

Dynamic ModuleMacros_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleMacros_obj > _hx_result = new ModuleMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d2c8334;
}

::Array< ::Dynamic> ModuleMacros_obj::_modules;

bool ModuleMacros_obj::_modulesProcessed;


ModuleMacros_obj::ModuleMacros_obj()
{
}

bool ModuleMacros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_modules") ) { outValue = ( _modules ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_modulesProcessed") ) { outValue = ( _modulesProcessed ); return true; }
	}
	return false;
}

bool ModuleMacros_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_modules") ) { _modules=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_modulesProcessed") ) { _modulesProcessed=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ModuleMacros_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ModuleMacros_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ModuleMacros_obj::_modules,HX_HCSTRING("_modules","\xc8","\x3b","\xb3","\x31")},
	{hx::fsBool,(void *) &ModuleMacros_obj::_modulesProcessed,HX_HCSTRING("_modulesProcessed","\xa6","\x9f","\x99","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ModuleMacros_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleMacros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ModuleMacros_obj::_modules,"_modules");
	HX_MARK_MEMBER_NAME(ModuleMacros_obj::_modulesProcessed,"_modulesProcessed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleMacros_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleMacros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ModuleMacros_obj::_modules,"_modules");
	HX_VISIT_MEMBER_NAME(ModuleMacros_obj::_modulesProcessed,"_modulesProcessed");
};

#endif

hx::Class ModuleMacros_obj::__mClass;

static ::String ModuleMacros_obj_sStaticFields[] = {
	HX_HCSTRING("_modules","\xc8","\x3b","\xb3","\x31"),
	HX_HCSTRING("_modulesProcessed","\xa6","\x9f","\x99","\x58"),
	::String(null())
};

void ModuleMacros_obj::__register()
{
	hx::Object *dummy = new ModuleMacros_obj;
	ModuleMacros_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.macros.ModuleMacros","\xe8","\x86","\x5b","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ModuleMacros_obj::__GetStatic;
	__mClass->mSetStaticField = &ModuleMacros_obj::__SetStatic;
	__mClass->mMarkFunc = ModuleMacros_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ModuleMacros_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ModuleMacros_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleMacros_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleMacros_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ModuleMacros_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd6dd5de6196fbde_15_boot)
HXDLIN(  15)		_modules = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
