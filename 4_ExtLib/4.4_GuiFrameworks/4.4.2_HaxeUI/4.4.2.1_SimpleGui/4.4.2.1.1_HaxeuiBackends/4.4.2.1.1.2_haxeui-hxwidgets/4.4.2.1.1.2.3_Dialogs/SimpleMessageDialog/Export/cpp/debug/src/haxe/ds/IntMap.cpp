// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea7d64f2778d6ef4_53_new,"haxe.ds.IntMap","new",0x7222c4b6,"haxe.ds.IntMap.new","/usr/share/haxe/std/cpp/_std/haxe/ds/IntMap.hx",53,0x7404b096)
HX_LOCAL_STACK_FRAME(_hx_pos_ea7d64f2778d6ef4_56_set,"haxe.ds.IntMap","set",0x72268ff8,"haxe.ds.IntMap.set","/usr/share/haxe/std/cpp/_std/haxe/ds/IntMap.hx",56,0x7404b096)
HX_LOCAL_STACK_FRAME(_hx_pos_ea7d64f2778d6ef4_60_get,"haxe.ds.IntMap","get",0x721d74ec,"haxe.ds.IntMap.get","/usr/share/haxe/std/cpp/_std/haxe/ds/IntMap.hx",60,0x7404b096)
HX_LOCAL_STACK_FRAME(_hx_pos_ea7d64f2778d6ef4_64_exists,"haxe.ds.IntMap","exists",0x63ba0346,"haxe.ds.IntMap.exists","/usr/share/haxe/std/cpp/_std/haxe/ds/IntMap.hx",64,0x7404b096)
HX_LOCAL_STACK_FRAME(_hx_pos_ea7d64f2778d6ef4_68_remove,"haxe.ds.IntMap","remove",0xa86281ae,"haxe.ds.IntMap.remove","/usr/share/haxe/std/cpp/_std/haxe/ds/IntMap.hx",68,0x7404b096)
namespace haxe{
namespace ds{

void IntMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea7d64f2778d6ef4_53_new)
            	}

Dynamic IntMap_obj::__CreateEmpty() { return new IntMap_obj; }

void *IntMap_obj::_hx_vtable = 0;

Dynamic IntMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IntMap_obj > _hx_result = new IntMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IntMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50b86242;
}

static ::haxe::IMap_obj _hx_haxe_ds_IntMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ds::IntMap_obj::get_dc94b8fa,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::IntMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::IntMap_obj::exists_5889326f,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::IntMap_obj::remove_5889326f,
};

bool IntMap_obj::remove_5889326f( ::Dynamic k) {
			return remove(k);
}

bool IntMap_obj::exists_5889326f( ::Dynamic k) {
			return exists(k);
}

void IntMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic IntMap_obj::get_dc94b8fa( ::Dynamic k) {
			return get(k);
}
void *IntMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_IntMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void IntMap_obj::set(int key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea7d64f2778d6ef4_56_set)
HXDLIN(  56)		::__int_hash_set(this->h,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntMap_obj,set,(void))

 ::Dynamic IntMap_obj::get(int key){
            	HX_STACKFRAME(&_hx_pos_ea7d64f2778d6ef4_60_get)
HXDLIN(  60)		return ::__int_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,get,return )

bool IntMap_obj::exists(int key){
            	HX_STACKFRAME(&_hx_pos_ea7d64f2778d6ef4_64_exists)
HXDLIN(  64)		return ::__int_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,exists,return )

bool IntMap_obj::remove(int key){
            	HX_STACKFRAME(&_hx_pos_ea7d64f2778d6ef4_68_remove)
HXDLIN(  68)		return ::__int_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,remove,return )


hx::ObjectPtr< IntMap_obj > IntMap_obj::__new() {
	hx::ObjectPtr< IntMap_obj > __this = new IntMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< IntMap_obj > IntMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	IntMap_obj *__this = (IntMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IntMap_obj), true, "haxe.ds.IntMap"));
	*(void **)__this = IntMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IntMap_obj::IntMap_obj()
{
}

void IntMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void IntMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

hx::Val IntMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IntMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IntMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(IntMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IntMap_obj_sStaticStorageInfo = 0;
#endif

static ::String IntMap_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	::String(null()) };

static void IntMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IntMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntMap_obj::__mClass,"__mClass");
};

#endif

hx::Class IntMap_obj::__mClass;

void IntMap_obj::__register()
{
	hx::Object *dummy = new IntMap_obj;
	IntMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.IntMap","\xc4","\xf1","\x10","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IntMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IntMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IntMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
