// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_721c74fa2e6d5326
#define INCLUDED_721c74fa2e6d5326
#include "wx/mstream.h"
#endif
#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryInputStream
#include <hx/widgets/MemoryInputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01fd7e24cd835d95_11_new,"hx.widgets.MemoryInputStream","new",0xc603ae9e,"hx.widgets.MemoryInputStream.new","hx/widgets/MemoryInputStream.hx",11,0x9db04494)
HX_LOCAL_STACK_FRAME(_hx_pos_01fd7e24cd835d95_16_destroy,"hx.widgets.MemoryInputStream","destroy",0x95550238,"hx.widgets.MemoryInputStream.destroy","hx/widgets/MemoryInputStream.hx",16,0x9db04494)
HX_LOCAL_STACK_FRAME(_hx_pos_01fd7e24cd835d95_26_get_memoryinputstreamRef,"hx.widgets.MemoryInputStream","get_memoryinputstreamRef",0x48ade4b5,"hx.widgets.MemoryInputStream.get_memoryinputstreamRef","hx/widgets/MemoryInputStream.hx",26,0x9db04494)
namespace hx{
namespace widgets{

void MemoryInputStream_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_11_new)
HXLINE(  12)		this->_bytes = bytes;
HXLINE(  13)		const char* this1 = this->_bytes->toString().__s;
HXDLIN(  13)		::cpp::Pointer<  wxMemoryInputStream > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMemoryInputStream(this1,this->_bytes->length)));
HXDLIN(  13)		this->_ref = _hx_tmp->reinterpret();
            	}

Dynamic MemoryInputStream_obj::__CreateEmpty() { return new MemoryInputStream_obj; }

void *MemoryInputStream_obj::_hx_vtable = 0;

Dynamic MemoryInputStream_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MemoryInputStream_obj > _hx_result = new MemoryInputStream_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MemoryInputStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c6dbea8) {
		if (inClassId<=(int)0x01bf7192) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01bf7192;
		} else {
			return inClassId==(int)0x3c6dbea8;
		}
	} else {
		return inClassId==(int)0x7ed3b98b;
	}
}

void MemoryInputStream_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_16_destroy)
HXLINE(  17)		this->_ref->destroy();
HXLINE(  18)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryInputStream_obj,destroy,(void))

::cpp::Pointer<  wxMemoryInputStream > MemoryInputStream_obj::get_memoryinputstreamRef(){
            	HX_STACKFRAME(&_hx_pos_01fd7e24cd835d95_26_get_memoryinputstreamRef)
HXDLIN(  26)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MemoryInputStream_obj,get_memoryinputstreamRef,return )


hx::ObjectPtr< MemoryInputStream_obj > MemoryInputStream_obj::__new( ::haxe::io::Bytes bytes) {
	hx::ObjectPtr< MemoryInputStream_obj > __this = new MemoryInputStream_obj();
	__this->__construct(bytes);
	return __this;
}

hx::ObjectPtr< MemoryInputStream_obj > MemoryInputStream_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	MemoryInputStream_obj *__this = (MemoryInputStream_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MemoryInputStream_obj), true, "hx.widgets.MemoryInputStream"));
	*(void **)__this = MemoryInputStream_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

MemoryInputStream_obj::MemoryInputStream_obj()
{
}

void MemoryInputStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MemoryInputStream);
	HX_MARK_MEMBER_NAME(_bytes,"_bytes");
	HX_MARK_MEMBER_NAME(memoryinputstreamRef,"memoryinputstreamRef");
	 ::hx::widgets::StreamBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MemoryInputStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bytes,"_bytes");
	HX_VISIT_MEMBER_NAME(memoryinputstreamRef,"memoryinputstreamRef");
	 ::hx::widgets::StreamBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MemoryInputStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_bytes") ) { return hx::Val( _bytes ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"memoryinputstreamRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_memoryinputstreamRef() : memoryinputstreamRef ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_memoryinputstreamRef") ) { return hx::Val( get_memoryinputstreamRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MemoryInputStream_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_bytes") ) { _bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"memoryinputstreamRef") ) { memoryinputstreamRef=inValue.Cast< ::cpp::Pointer<  wxMemoryInputStream > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MemoryInputStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_bytes","\xac","\x4f","\x7f","\xb9"));
	outFields->push(HX_HCSTRING("memoryinputstreamRef","\x2a","\x62","\xac","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MemoryInputStream_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(MemoryInputStream_obj,_bytes),HX_HCSTRING("_bytes","\xac","\x4f","\x7f","\xb9")},
	{hx::fsObject /*::cpp::Pointer< wxMemoryInputStream >*/ ,(int)offsetof(MemoryInputStream_obj,memoryinputstreamRef),HX_HCSTRING("memoryinputstreamRef","\x2a","\x62","\xac","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MemoryInputStream_obj_sStaticStorageInfo = 0;
#endif

static ::String MemoryInputStream_obj_sMemberFields[] = {
	HX_HCSTRING("_bytes","\xac","\x4f","\x7f","\xb9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("memoryinputstreamRef","\x2a","\x62","\xac","\xa4"),
	HX_HCSTRING("get_memoryinputstreamRef","\xb3","\x7f","\x48","\xe7"),
	::String(null()) };

static void MemoryInputStream_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MemoryInputStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MemoryInputStream_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MemoryInputStream_obj::__mClass,"__mClass");
};

#endif

hx::Class MemoryInputStream_obj::__mClass;

void MemoryInputStream_obj::__register()
{
	hx::Object *dummy = new MemoryInputStream_obj;
	MemoryInputStream_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.MemoryInputStream","\xac","\xc7","\xec","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MemoryInputStream_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MemoryInputStream_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MemoryInputStream_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MemoryInputStream_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MemoryInputStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MemoryInputStream_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
