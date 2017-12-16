// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9e5f3007daf6fcd8_28_listNames,"haxe.Resource","listNames",0xb6810652,"haxe.Resource.listNames","/usr/share/haxe/std/cpp/_std/haxe/Resource.hx",28,0x309b3bab)
HX_LOCAL_STACK_FRAME(_hx_pos_9e5f3007daf6fcd8_31_getString,"haxe.Resource","getString",0x974269cf,"haxe.Resource.getString","/usr/share/haxe/std/cpp/_std/haxe/Resource.hx",31,0x309b3bab)
HX_LOCAL_STACK_FRAME(_hx_pos_9e5f3007daf6fcd8_33_getBytes,"haxe.Resource","getBytes",0x9bc1712d,"haxe.Resource.getBytes","/usr/share/haxe/std/cpp/_std/haxe/Resource.hx",33,0x309b3bab)
namespace haxe{

void Resource_obj::__construct() { }

Dynamic Resource_obj::__CreateEmpty() { return new Resource_obj; }

void *Resource_obj::_hx_vtable = 0;

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Resource_obj > _hx_result = new Resource_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Resource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75b82b54;
}

::Array< ::String > Resource_obj::listNames(){
            	HX_STACKFRAME(&_hx_pos_9e5f3007daf6fcd8_28_listNames)
HXDLIN(  28)		return ::__hxcpp_resource_names();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,listNames,return )

::String Resource_obj::getString(::String name){
            	HX_STACKFRAME(&_hx_pos_9e5f3007daf6fcd8_31_getString)
HXDLIN(  31)		return ::__hxcpp_resource_string(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,getString,return )

 ::haxe::io::Bytes Resource_obj::getBytes(::String name){
            	HX_STACKFRAME(&_hx_pos_9e5f3007daf6fcd8_33_getBytes)
HXLINE(  34)		::Array< unsigned char > array = ::__hxcpp_resource_bytes(name);
HXLINE(  35)		if (hx::IsNull( array )) {
HXLINE(  35)			return null();
            		}
HXLINE(  36)		return ::haxe::io::Bytes_obj::ofData(array);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,getBytes,return )


Resource_obj::Resource_obj()
{
}

bool Resource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listNames") ) { outValue = listNames_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Resource_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Resource_obj_sStaticStorageInfo = 0;
#endif

static void Resource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Resource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

hx::Class Resource_obj::__mClass;

static ::String Resource_obj_sStaticFields[] = {
	HX_HCSTRING("listNames","\x8a","\x4e","\xc5","\xac"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null())
};

void Resource_obj::__register()
{
	hx::Object *dummy = new Resource_obj;
	Resource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Resource","\x36","\x0e","\x12","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Resource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Resource_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Resource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Resource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Resource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Resource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
