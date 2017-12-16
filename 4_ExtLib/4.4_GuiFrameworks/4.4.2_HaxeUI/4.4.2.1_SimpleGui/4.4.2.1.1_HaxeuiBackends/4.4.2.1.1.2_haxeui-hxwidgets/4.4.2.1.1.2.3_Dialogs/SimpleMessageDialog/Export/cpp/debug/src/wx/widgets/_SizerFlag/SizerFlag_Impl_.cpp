// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
#ifndef INCLUDED_wx_widgets__SizerFlag_SizerFlag_Impl_
#include <wx/widgets/_SizerFlag/SizerFlag_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_99d8d16a9e09bcc8_10_fromDirection,"wx.widgets._SizerFlag.SizerFlag_Impl_","fromDirection",0x2f4d1f80,"wx.widgets._SizerFlag.SizerFlag_Impl_.fromDirection","wx/widgets/SizerFlag.hx",10,0xcc43972f)
HX_LOCAL_STACK_FRAME(_hx_pos_99d8d16a9e09bcc8_15_fromStretch,"wx.widgets._SizerFlag.SizerFlag_Impl_","fromStretch",0xf8da7906,"wx.widgets._SizerFlag.SizerFlag_Impl_.fromStretch","wx/widgets/SizerFlag.hx",15,0xcc43972f)
HX_LOCAL_STACK_FRAME(_hx_pos_99d8d16a9e09bcc8_22_orFlags,"wx.widgets._SizerFlag.SizerFlag_Impl_","orFlags",0x45b7d0ef,"wx.widgets._SizerFlag.SizerFlag_Impl_.orFlags","wx/widgets/SizerFlag.hx",22,0xcc43972f)
HX_LOCAL_STACK_FRAME(_hx_pos_99d8d16a9e09bcc8_26_orInt,"wx.widgets._SizerFlag.SizerFlag_Impl_","orInt",0x0d0b7897,"wx.widgets._SizerFlag.SizerFlag_Impl_.orInt","wx/widgets/SizerFlag.hx",26,0xcc43972f)
HX_LOCAL_STACK_FRAME(_hx_pos_99d8d16a9e09bcc8_6_boot,"wx.widgets._SizerFlag.SizerFlag_Impl_","boot",0x4eb43187,"wx.widgets._SizerFlag.SizerFlag_Impl_.boot","wx/widgets/SizerFlag.hx",6,0xcc43972f)
namespace wx{
namespace widgets{
namespace _SizerFlag{

void SizerFlag_Impl__obj::__construct() { }

Dynamic SizerFlag_Impl__obj::__CreateEmpty() { return new SizerFlag_Impl__obj; }

void *SizerFlag_Impl__obj::_hx_vtable = 0;

Dynamic SizerFlag_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SizerFlag_Impl__obj > _hx_result = new SizerFlag_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SizerFlag_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07658fd5;
}

int SizerFlag_Impl__obj::NONE;

int SizerFlag_Impl__obj::fromDirection( cpp::Struct<wxDirection, cpp::EnumHandler> direction){
            	HX_STACKFRAME(&_hx_pos_99d8d16a9e09bcc8_10_fromDirection)
HXDLIN(  10)		return direction;
            	}


int SizerFlag_Impl__obj::fromStretch( cpp::Struct<wxStretch, cpp::EnumHandler> stretch){
            	HX_STACKFRAME(&_hx_pos_99d8d16a9e09bcc8_15_fromStretch)
HXDLIN(  15)		return stretch;
            	}


int SizerFlag_Impl__obj::orFlags(int a,int b){
            	HX_STACKFRAME(&_hx_pos_99d8d16a9e09bcc8_22_orFlags)
HXDLIN(  22)		return ((int)a | (int)b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SizerFlag_Impl__obj,orFlags,return )

int SizerFlag_Impl__obj::orInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_99d8d16a9e09bcc8_26_orInt)
HXDLIN(  26)		return ((int)a | (int)b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SizerFlag_Impl__obj,orInt,return )


SizerFlag_Impl__obj::SizerFlag_Impl__obj()
{
}

bool SizerFlag_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"orInt") ) { outValue = orInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"orFlags") ) { outValue = orFlags_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SizerFlag_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo SizerFlag_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SizerFlag_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SizerFlag_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizerFlag_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SizerFlag_Impl__obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SizerFlag_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizerFlag_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SizerFlag_Impl__obj::NONE,"NONE");
};

#endif

hx::Class SizerFlag_Impl__obj::__mClass;

static ::String SizerFlag_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("orFlags","\x24","\x3b","\x37","\x32"),
	HX_HCSTRING("orInt","\x8c","\x7b","\x0c","\x35"),
	::String(null())
};

void SizerFlag_Impl__obj::__register()
{
	hx::Object *dummy = new SizerFlag_Impl__obj;
	SizerFlag_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets._SizerFlag.SizerFlag_Impl_","\x39","\xb3","\x44","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SizerFlag_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SizerFlag_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SizerFlag_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SizerFlag_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SizerFlag_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SizerFlag_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SizerFlag_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SizerFlag_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_99d8d16a9e09bcc8_6_boot)
HXDLIN(   6)		NONE = (int)0;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace _SizerFlag
