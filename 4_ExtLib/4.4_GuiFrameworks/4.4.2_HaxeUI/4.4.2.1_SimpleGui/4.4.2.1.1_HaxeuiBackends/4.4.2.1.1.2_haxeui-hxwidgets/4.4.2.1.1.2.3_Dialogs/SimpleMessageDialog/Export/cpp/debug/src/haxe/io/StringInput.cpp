// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc28e000b1cccd8b_31_new,"haxe.io.StringInput","new",0x8fd1998b,"haxe.io.StringInput.new","/usr/share/haxe/std/haxe/io/StringInput.hx",31,0x80bf6ce0)
namespace haxe{
namespace io{

void StringInput_obj::__construct(::String s){
            	HX_STACKFRAME(&_hx_pos_dc28e000b1cccd8b_31_new)
HXDLIN(  31)		super::__construct(::haxe::io::Bytes_obj::ofString(s),null(),null());
            	}

Dynamic StringInput_obj::__CreateEmpty() { return new StringInput_obj; }

void *StringInput_obj::_hx_vtable = 0;

Dynamic StringInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringInput_obj > _hx_result = new StringInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StringInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a23a54d) {
		if (inClassId<=(int)0x2a8878af) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2a8878af;
		} else {
			return inClassId==(int)0x4a23a54d;
		}
	} else {
		return inClassId==(int)0x5c18cd32;
	}
}


hx::ObjectPtr< StringInput_obj > StringInput_obj::__new(::String s) {
	hx::ObjectPtr< StringInput_obj > __this = new StringInput_obj();
	__this->__construct(s);
	return __this;
}

hx::ObjectPtr< StringInput_obj > StringInput_obj::__alloc(hx::Ctx *_hx_ctx,::String s) {
	StringInput_obj *__this = (StringInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringInput_obj), true, "haxe.io.StringInput"));
	*(void **)__this = StringInput_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

StringInput_obj::StringInput_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringInput_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringInput_obj_sStaticStorageInfo = 0;
#endif

static void StringInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringInput_obj::__mClass,"__mClass");
};

#endif

hx::Class StringInput_obj::__mClass;

void StringInput_obj::__register()
{
	hx::Object *dummy = new StringInput_obj;
	StringInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.StringInput","\x19","\x78","\xf5","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
