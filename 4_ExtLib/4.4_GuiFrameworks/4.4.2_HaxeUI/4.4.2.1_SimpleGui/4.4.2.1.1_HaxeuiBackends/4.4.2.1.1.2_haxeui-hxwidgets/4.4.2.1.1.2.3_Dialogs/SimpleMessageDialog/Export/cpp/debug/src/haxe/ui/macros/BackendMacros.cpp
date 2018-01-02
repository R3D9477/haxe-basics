// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_BackendMacros
#include <haxe/ui/macros/BackendMacros.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dcf47e5d58e098b4_11_boot,"haxe.ui.macros.BackendMacros","boot",0xa5882f5a,"haxe.ui.macros.BackendMacros.boot","haxe/ui/macros/BackendMacros.hx",11,0x2225db99)
namespace haxe{
namespace ui{
namespace macros{

void BackendMacros_obj::__construct() { }

Dynamic BackendMacros_obj::__CreateEmpty() { return new BackendMacros_obj; }

void *BackendMacros_obj::_hx_vtable = 0;

Dynamic BackendMacros_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BackendMacros_obj > _hx_result = new BackendMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackendMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69034c7a;
}

 ::haxe::ui::util::Properties BackendMacros_obj::properties;


BackendMacros_obj::BackendMacros_obj()
{
}

bool BackendMacros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { outValue = ( properties ); return true; }
	}
	return false;
}

bool BackendMacros_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=ioValue.Cast<  ::haxe::ui::util::Properties >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BackendMacros_obj_sMemberStorageInfo = 0;
static hx::StaticInfo BackendMacros_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::util::Properties*/ ,(void *) &BackendMacros_obj::properties,HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BackendMacros_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackendMacros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BackendMacros_obj::properties,"properties");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackendMacros_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackendMacros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BackendMacros_obj::properties,"properties");
};

#endif

hx::Class BackendMacros_obj::__mClass;

static ::String BackendMacros_obj_sStaticFields[] = {
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	::String(null())
};

void BackendMacros_obj::__register()
{
	hx::Object *dummy = new BackendMacros_obj;
	BackendMacros_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.macros.BackendMacros","\x46","\x86","\xf7","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BackendMacros_obj::__GetStatic;
	__mClass->mSetStaticField = &BackendMacros_obj::__SetStatic;
	__mClass->mMarkFunc = BackendMacros_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BackendMacros_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BackendMacros_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackendMacros_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackendMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackendMacros_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BackendMacros_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_dcf47e5d58e098b4_11_boot)
HXDLIN(  11)		properties =  ::haxe::ui::util::Properties_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
