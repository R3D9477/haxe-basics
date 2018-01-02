// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

namespace hx{
namespace widgets{

void StreamBase_obj::__construct() { }

Dynamic StreamBase_obj::__CreateEmpty() { return new StreamBase_obj; }

void *StreamBase_obj::_hx_vtable = 0;

Dynamic StreamBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StreamBase_obj > _hx_result = new StreamBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StreamBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c6dbea8;
}


StreamBase_obj::StreamBase_obj()
{
}

void StreamBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StreamBase);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_END_CLASS();
}

void StreamBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
}

hx::Val StreamBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StreamBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxStreamBase > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StreamBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StreamBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxStreamBase >*/ ,(int)offsetof(StreamBase_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StreamBase_obj_sStaticStorageInfo = 0;
#endif

static ::String StreamBase_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	::String(null()) };

static void StreamBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StreamBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StreamBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StreamBase_obj::__mClass,"__mClass");
};

#endif

hx::Class StreamBase_obj::__mClass;

void StreamBase_obj::__register()
{
	hx::Object *dummy = new StreamBase_obj;
	StreamBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.StreamBase","\x4e","\xa9","\x67","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StreamBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StreamBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StreamBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StreamBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StreamBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StreamBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
