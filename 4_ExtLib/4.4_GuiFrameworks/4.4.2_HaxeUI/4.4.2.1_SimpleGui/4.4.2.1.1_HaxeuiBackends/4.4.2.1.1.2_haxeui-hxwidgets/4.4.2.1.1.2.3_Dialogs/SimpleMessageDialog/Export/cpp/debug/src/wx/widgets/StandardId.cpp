// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_StandardId
#include <wx/widgets/StandardId.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c2edfad6db2aac48_6_boot,"wx.widgets.StandardId","boot",0x75185e3c,"wx.widgets.StandardId.boot","wx/widgets/StandardId.hx",6,0x78315c58)
namespace wx{
namespace widgets{

void StandardId_obj::__construct() { }

Dynamic StandardId_obj::__CreateEmpty() { return new StandardId_obj; }

void *StandardId_obj::_hx_vtable = 0;

Dynamic StandardId_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StandardId_obj > _hx_result = new StandardId_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StandardId_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43bf8186;
}

int StandardId_obj::OK;


StandardId_obj::StandardId_obj()
{
}

bool StandardId_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { outValue = ( OK ); return true; }
	}
	return false;
}

bool StandardId_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { OK=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StandardId_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StandardId_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &StandardId_obj::OK,HX_HCSTRING("OK","\x1c","\x45","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StandardId_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StandardId_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StandardId_obj::OK,"OK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StandardId_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StandardId_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StandardId_obj::OK,"OK");
};

#endif

hx::Class StandardId_obj::__mClass;

static ::String StandardId_obj_sStaticFields[] = {
	HX_HCSTRING("OK","\x1c","\x45","\x00","\x00"),
	::String(null())
};

void StandardId_obj::__register()
{
	hx::Object *dummy = new StandardId_obj;
	StandardId_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.StandardId","\xa4","\xc2","\x59","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StandardId_obj::__GetStatic;
	__mClass->mSetStaticField = &StandardId_obj::__SetStatic;
	__mClass->mMarkFunc = StandardId_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StandardId_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StandardId_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StandardId_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StandardId_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StandardId_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StandardId_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c2edfad6db2aac48_6_boot)
HXDLIN(   6)		OK = ::wxID_OK;
            	}
}

} // end namespace wx
} // end namespace widgets
