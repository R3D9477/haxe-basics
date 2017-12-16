// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif

namespace haxe{

void MainEvent_obj::__construct() { }

Dynamic MainEvent_obj::__CreateEmpty() { return new MainEvent_obj; }

void *MainEvent_obj::_hx_vtable = 0;

Dynamic MainEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MainEvent_obj > _hx_result = new MainEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ec59813;
}


MainEvent_obj::MainEvent_obj()
{
}

void MainEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainEvent);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(nextRun,"nextRun");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_END_CLASS();
}

void MainEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(nextRun,"nextRun");
	HX_VISIT_MEMBER_NAME(priority,"priority");
}

hx::Val MainEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return hx::Val( f ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextRun") ) { return hx::Val( nextRun ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return hx::Val( priority ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MainEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextRun") ) { nextRun=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("nextRun","\x18","\x74","\x45","\xa5"));
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MainEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MainEvent_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::MainEvent*/ ,(int)offsetof(MainEvent_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::haxe::MainEvent*/ ,(int)offsetof(MainEvent_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(MainEvent_obj,nextRun),HX_HCSTRING("nextRun","\x18","\x74","\x45","\xa5")},
	{hx::fsInt,(int)offsetof(MainEvent_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MainEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String MainEvent_obj_sMemberFields[] = {
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("nextRun","\x18","\x74","\x45","\xa5"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	::String(null()) };

static void MainEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class MainEvent_obj::__mClass;

void MainEvent_obj::__register()
{
	hx::Object *dummy = new MainEvent_obj;
	MainEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.MainEvent","\xb9","\x1a","\x72","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MainEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MainEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MainEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
