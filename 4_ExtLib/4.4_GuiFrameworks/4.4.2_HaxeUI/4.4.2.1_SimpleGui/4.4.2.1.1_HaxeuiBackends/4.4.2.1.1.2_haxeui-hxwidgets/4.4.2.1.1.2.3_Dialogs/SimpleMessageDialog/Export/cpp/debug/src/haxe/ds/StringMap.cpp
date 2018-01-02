// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_52_new,"haxe.ds.StringMap","new",0x0f13f0c6,"haxe.ds.StringMap.new","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",52,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_55_set,"haxe.ds.StringMap","set",0x0f17bc08,"haxe.ds.StringMap.set","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",55,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_59_get,"haxe.ds.StringMap","get",0x0f0ea0fc,"haxe.ds.StringMap.get","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",59,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_63_exists,"haxe.ds.StringMap","exists",0xd35fc136,"haxe.ds.StringMap.exists","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",63,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_67_remove,"haxe.ds.StringMap","remove",0x18083f9e,"haxe.ds.StringMap.remove","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",67,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_70_keys,"haxe.ds.StringMap","keys",0x20631ace,"haxe.ds.StringMap.keys","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",70,0x911cf5ce)
HX_LOCAL_STACK_FRAME(_hx_pos_22bae1b4f3b43c4a_75_iterator,"haxe.ds.StringMap","iterator",0x40ccf7c8,"haxe.ds.StringMap.iterator","/usr/share/haxe/std/cpp/_std/haxe/ds/StringMap.hx",75,0x911cf5ce)
namespace haxe{
namespace ds{

void StringMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_52_new)
            	}

Dynamic StringMap_obj::__CreateEmpty() { return new StringMap_obj; }

void *StringMap_obj::_hx_vtable = 0;

Dynamic StringMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringMap_obj > _hx_result = new StringMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fd15eaa;
}

static ::haxe::IMap_obj _hx_haxe_ds_StringMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::get_dc94b8fa,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::StringMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::exists_5889326f,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::remove_5889326f,
};

bool StringMap_obj::remove_5889326f( ::Dynamic k) {
			return remove(k);
}

bool StringMap_obj::exists_5889326f( ::Dynamic k) {
			return exists(k);
}

void StringMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic StringMap_obj::get_dc94b8fa( ::Dynamic k) {
			return get(k);
}
void *StringMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_StringMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void StringMap_obj::set(::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_55_set)
HXDLIN(  55)		::__string_hash_set(this->h,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))

 ::Dynamic StringMap_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_59_get)
HXDLIN(  59)		return ::__string_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,get,return )

bool StringMap_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_63_exists)
HXDLIN(  63)		return ::__string_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,exists,return )

bool StringMap_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_67_remove)
HXDLIN(  67)		return ::__string_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,remove,return )

 ::Dynamic StringMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_70_keys)
HXLINE(  71)		::Array< ::String > a = ::__string_hash_keys(this->h);
HXLINE(  72)		return a->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keys,return )

 ::Dynamic StringMap_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_22bae1b4f3b43c4a_75_iterator)
HXLINE(  76)		::cpp::VirtualArray a = ::__string_hash_values(this->h);
HXLINE(  77)		return a->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,iterator,return )


hx::ObjectPtr< StringMap_obj > StringMap_obj::__new() {
	hx::ObjectPtr< StringMap_obj > __this = new StringMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< StringMap_obj > StringMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	StringMap_obj *__this = (StringMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringMap_obj), true, "haxe.ds.StringMap"));
	*(void **)__this = StringMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

hx::Val StringMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StringMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StringMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StringMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StringMap_obj_sStaticStorageInfo = 0;
#endif

static ::String StringMap_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

static void StringMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#endif

hx::Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	hx::Object *dummy = new StringMap_obj;
	StringMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.StringMap","\xd4","\xd5","\xd6","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StringMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
