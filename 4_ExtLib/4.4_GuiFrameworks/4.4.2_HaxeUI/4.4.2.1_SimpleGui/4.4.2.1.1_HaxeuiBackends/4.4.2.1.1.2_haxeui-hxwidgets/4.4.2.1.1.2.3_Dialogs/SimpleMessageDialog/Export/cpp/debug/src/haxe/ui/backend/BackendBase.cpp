// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_BackendBase
#include <haxe/ui/backend/BackendBase.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4658afbb0c827e31_4_boot,"haxe.ui.backend.BackendBase","boot",0x3094cdc7,"haxe.ui.backend.BackendBase.boot","haxe/ui/backend/BackendBase.hx",4,0x610d73c6)
namespace haxe{
namespace ui{
namespace backend{

void BackendBase_obj::__construct() { }

Dynamic BackendBase_obj::__CreateEmpty() { return new BackendBase_obj; }

void *BackendBase_obj::_hx_vtable = 0;

Dynamic BackendBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BackendBase_obj > _hx_result = new BackendBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackendBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05aa7377;
}

::String BackendBase_obj::id;


BackendBase_obj::BackendBase_obj()
{
}

bool BackendBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = ( id ); return true; }
	}
	return false;
}

bool BackendBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BackendBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo BackendBase_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &BackendBase_obj::id,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BackendBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackendBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BackendBase_obj::id,"id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackendBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackendBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BackendBase_obj::id,"id");
};

#endif

hx::Class BackendBase_obj::__mClass;

static ::String BackendBase_obj_sStaticFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	::String(null())
};

void BackendBase_obj::__register()
{
	hx::Object *dummy = new BackendBase_obj;
	BackendBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.BackendBase","\xf9","\x7e","\xa9","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BackendBase_obj::__GetStatic;
	__mClass->mSetStaticField = &BackendBase_obj::__SetStatic;
	__mClass->mMarkFunc = BackendBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BackendBase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BackendBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackendBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackendBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackendBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BackendBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4658afbb0c827e31_4_boot)
HXDLIN(   4)		id = HX_("hxwidgets",1f,43,1f,aa);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
