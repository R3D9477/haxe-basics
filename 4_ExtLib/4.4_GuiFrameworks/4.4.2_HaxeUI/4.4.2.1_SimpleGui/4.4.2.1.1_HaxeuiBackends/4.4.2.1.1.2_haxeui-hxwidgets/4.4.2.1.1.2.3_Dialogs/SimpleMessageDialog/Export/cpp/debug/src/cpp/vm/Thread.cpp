// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7359b14db3bf483d_66___compare,"cpp.vm.Thread","__compare",0x3204cb4d,"cpp.vm.Thread.__compare","/usr/share/haxe/std/cpp/vm/Thread.hx",66,0x70514563)
namespace cpp{
namespace vm{

void Thread_obj::__construct() { }

Dynamic Thread_obj::__CreateEmpty() { return new Thread_obj; }

void *Thread_obj::_hx_vtable = 0;

Dynamic Thread_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Thread_obj > _hx_result = new Thread_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Thread_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69432498;
}

int Thread_obj::__compare( ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_7359b14db3bf483d_66___compare)
HXDLIN(  66)		if (hx::IsEq( this->handle, ::Dynamic(t->__Field(HX_("handle",a8,83,fd,b7),hx::paccDynamic)) )) {
HXDLIN(  66)			return (int)0;
            		}
            		else {
HXDLIN(  66)			return (int)1;
            		}
HXDLIN(  66)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,__compare,return )


Thread_obj::Thread_obj()
{
}

void Thread_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Thread);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Thread_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

hx::Val Thread_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__compare") ) { return hx::Val( __compare_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Thread_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Thread_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Thread_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Thread_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Thread_obj_sStaticStorageInfo = 0;
#endif

static ::String Thread_obj_sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("__compare","\x85","\x69","\xb7","\x04"),
	::String(null()) };

static void Thread_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Thread_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#endif

hx::Class Thread_obj::__mClass;

void Thread_obj::__register()
{
	hx::Object *dummy = new Thread_obj;
	Thread_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Thread","\x36","\x38","\xcb","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Thread_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Thread_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Thread_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Thread_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Thread_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Thread_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
