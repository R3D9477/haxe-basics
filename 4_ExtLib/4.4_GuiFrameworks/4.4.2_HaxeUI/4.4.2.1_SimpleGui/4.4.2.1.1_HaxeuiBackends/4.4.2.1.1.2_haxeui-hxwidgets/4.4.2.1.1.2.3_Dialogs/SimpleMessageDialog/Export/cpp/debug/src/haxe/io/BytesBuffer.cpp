// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1af32ff740468f4b_54_new,"haxe.io.BytesBuffer","new",0x022790dd,"haxe.io.BytesBuffer.new","/usr/share/haxe/std/haxe/io/BytesBuffer.hx",54,0x054745ce)
HX_LOCAL_STACK_FRAME(_hx_pos_1af32ff740468f4b_191_getBytes,"haxe.io.BytesBuffer","getBytes",0x1e9f7258,"haxe.io.BytesBuffer.getBytes","/usr/share/haxe/std/haxe/io/BytesBuffer.hx",191,0x054745ce)
namespace haxe{
namespace io{

void BytesBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1af32ff740468f4b_54_new)
HXDLIN(  54)		this->b = ::Array_obj< unsigned char >::__new();
            	}

Dynamic BytesBuffer_obj::__CreateEmpty() { return new BytesBuffer_obj; }

void *BytesBuffer_obj::_hx_vtable = 0;

Dynamic BytesBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytesBuffer_obj > _hx_result = new BytesBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytesBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x418818bb;
}

 ::haxe::io::Bytes BytesBuffer_obj::getBytes(){
            	HX_GC_STACKFRAME(&_hx_pos_1af32ff740468f4b_191_getBytes)
HXLINE( 212)		 ::haxe::io::Bytes bytes =  ::haxe::io::Bytes_obj::__alloc( HX_CTX ,this->b->length,this->b);
HXLINE( 214)		this->b = null();
HXLINE( 215)		return bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBuffer_obj,getBytes,return )


hx::ObjectPtr< BytesBuffer_obj > BytesBuffer_obj::__new() {
	hx::ObjectPtr< BytesBuffer_obj > __this = new BytesBuffer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BytesBuffer_obj > BytesBuffer_obj::__alloc(hx::Ctx *_hx_ctx) {
	BytesBuffer_obj *__this = (BytesBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytesBuffer_obj), true, "haxe.io.BytesBuffer"));
	*(void **)__this = BytesBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BytesBuffer_obj::BytesBuffer_obj()
{
}

void BytesBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesBuffer);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

hx::Val BytesBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return hx::Val( getBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BytesBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BytesBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(BytesBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BytesBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

static void BytesBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytesBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesBuffer_obj::__mClass;

void BytesBuffer_obj::__register()
{
	hx::Object *dummy = new BytesBuffer_obj;
	BytesBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesBuffer","\x6b","\xde","\xc4","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BytesBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BytesBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytesBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
