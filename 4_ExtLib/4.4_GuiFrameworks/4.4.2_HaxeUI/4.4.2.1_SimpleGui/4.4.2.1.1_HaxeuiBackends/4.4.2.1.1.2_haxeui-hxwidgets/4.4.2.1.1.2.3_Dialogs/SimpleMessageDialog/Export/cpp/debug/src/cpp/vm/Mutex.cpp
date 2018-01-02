// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76855d4db60a73b0_28_new,"cpp.vm.Mutex","new",0xabb3ca05,"cpp.vm.Mutex.new","/usr/share/haxe/std/cpp/vm/Mutex.hx",28,0x71a7c450)
HX_LOCAL_STACK_FRAME(_hx_pos_76855d4db60a73b0_31_acquire,"cpp.vm.Mutex","acquire",0xc3527bfb,"cpp.vm.Mutex.acquire","/usr/share/haxe/std/cpp/vm/Mutex.hx",31,0x71a7c450)
HX_LOCAL_STACK_FRAME(_hx_pos_76855d4db60a73b0_37_release,"cpp.vm.Mutex","release",0x675bb5ec,"cpp.vm.Mutex.release","/usr/share/haxe/std/cpp/vm/Mutex.hx",37,0x71a7c450)
namespace cpp{
namespace vm{

void Mutex_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_76855d4db60a73b0_28_new)
HXDLIN(  28)		this->m = ::__hxcpp_mutex_create();
            	}

Dynamic Mutex_obj::__CreateEmpty() { return new Mutex_obj; }

void *Mutex_obj::_hx_vtable = 0;

Dynamic Mutex_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mutex_obj > _hx_result = new Mutex_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mutex_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a1b6345;
}

void Mutex_obj::acquire(){
            	HX_STACKFRAME(&_hx_pos_76855d4db60a73b0_31_acquire)
HXDLIN(  31)		::__hxcpp_mutex_acquire(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,acquire,(void))

void Mutex_obj::release(){
            	HX_STACKFRAME(&_hx_pos_76855d4db60a73b0_37_release)
HXDLIN(  37)		::__hxcpp_mutex_release(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,release,(void))


Mutex_obj::Mutex_obj()
{
}

void Mutex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mutex);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Mutex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

hx::Val Mutex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return hx::Val( m ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return hx::Val( acquire_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Mutex_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mutex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Mutex_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Mutex_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Mutex_obj_sStaticStorageInfo = 0;
#endif

static ::String Mutex_obj_sMemberFields[] = {
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("acquire","\xd6","\x4b","\xe4","\xb4"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	::String(null()) };

static void Mutex_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mutex_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

#endif

hx::Class Mutex_obj::__mClass;

void Mutex_obj::__register()
{
	hx::Object *dummy = new Mutex_obj;
	Mutex_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Mutex","\x93","\x63","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Mutex_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Mutex_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mutex_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mutex_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mutex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mutex_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
