// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e48612af511670b0_28_new,"cpp.vm.Lock","new",0x9e13fec9,"cpp.vm.Lock.new","/usr/share/haxe/std/cpp/vm/Lock.hx",28,0x031d5522)
HX_LOCAL_STACK_FRAME(_hx_pos_e48612af511670b0_31_wait,"cpp.vm.Lock","wait",0xb95ac7ec,"cpp.vm.Lock.wait","/usr/share/haxe/std/cpp/vm/Lock.hx",31,0x031d5522)
namespace cpp{
namespace vm{

void Lock_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e48612af511670b0_28_new)
HXDLIN(  28)		this->l = ::__hxcpp_lock_create();
            	}

Dynamic Lock_obj::__CreateEmpty() { return new Lock_obj; }

void *Lock_obj::_hx_vtable = 0;

Dynamic Lock_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lock_obj > _hx_result = new Lock_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lock_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5475e2e5;
}

bool Lock_obj::wait( ::Dynamic __o_timeout){
 ::Dynamic timeout = __o_timeout.Default(-1);
            	HX_STACKFRAME(&_hx_pos_e48612af511670b0_31_wait)
HXDLIN(  31)		return ::__hxcpp_lock_wait(this->l,timeout);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Lock_obj,wait,return )


Lock_obj::Lock_obj()
{
}

void Lock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lock);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_END_CLASS();
}

void Lock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
}

hx::Val Lock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return hx::Val( l ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { return hx::Val( wait_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Lock_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Lock_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Lock_obj,l),HX_HCSTRING("l","\x6c","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Lock_obj_sStaticStorageInfo = 0;
#endif

static ::String Lock_obj_sMemberFields[] = {
	HX_HCSTRING("l","\x6c","\x00","\x00","\x00"),
	HX_HCSTRING("wait","\x75","\x5a","\xf2","\x4e"),
	::String(null()) };

static void Lock_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lock_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lock_obj::__mClass,"__mClass");
};

#endif

hx::Class Lock_obj::__mClass;

void Lock_obj::__register()
{
	hx::Object *dummy = new Lock_obj;
	Lock_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Lock","\x57","\xe6","\x10","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Lock_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Lock_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Lock_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lock_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lock_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lock_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
