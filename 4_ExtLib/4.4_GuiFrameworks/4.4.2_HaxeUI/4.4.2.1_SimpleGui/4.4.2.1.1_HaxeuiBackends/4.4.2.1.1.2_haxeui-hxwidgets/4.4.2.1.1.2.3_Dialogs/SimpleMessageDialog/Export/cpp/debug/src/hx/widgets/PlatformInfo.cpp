// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_8d3b7a3c6c60d838
#define INCLUDED_8d3b7a3c6c60d838
#include "wx/platinfo.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_PlatformInfo
#include <hx/widgets/PlatformInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11a17217511ea231_12_new,"hx.widgets.PlatformInfo","new",0x61469690,"hx.widgets.PlatformInfo.new","hx/widgets/PlatformInfo.hx",12,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_15_destroy,"hx.widgets.PlatformInfo","destroy",0xe08fcb2a,"hx.widgets.PlatformInfo.destroy","hx/widgets/PlatformInfo.hx",15,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_22_get_osMajorVersion,"hx.widgets.PlatformInfo","get_osMajorVersion",0xe573bebc,"hx.widgets.PlatformInfo.get_osMajorVersion","hx/widgets/PlatformInfo.hx",22,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_27_get_osMinorVersion,"hx.widgets.PlatformInfo","get_osMinorVersion",0xed90f840,"hx.widgets.PlatformInfo.get_osMinorVersion","hx/widgets/PlatformInfo.hx",27,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_31_get_archName,"hx.widgets.PlatformInfo","get_archName",0x281a731a,"hx.widgets.PlatformInfo.get_archName","hx/widgets/PlatformInfo.hx",31,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_37_get_operatingSystemFamilyName,"hx.widgets.PlatformInfo","get_operatingSystemFamilyName",0x0f6c8146,"hx.widgets.PlatformInfo.get_operatingSystemFamilyName","hx/widgets/PlatformInfo.hx",37,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_44_get_operatingSystemId,"hx.widgets.PlatformInfo","get_operatingSystemId",0x4820ae12,"hx.widgets.PlatformInfo.get_operatingSystemId","hx/widgets/PlatformInfo.hx",44,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_48_get_operatingSystemIdName,"hx.widgets.PlatformInfo","get_operatingSystemIdName",0x221ebd7d,"hx.widgets.PlatformInfo.get_operatingSystemIdName","hx/widgets/PlatformInfo.hx",48,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_58_get_isWindows,"hx.widgets.PlatformInfo","get_isWindows",0xa1f191c0,"hx.widgets.PlatformInfo.get_isWindows","hx/widgets/PlatformInfo.hx",58,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_63_get_isMac,"hx.widgets.PlatformInfo","get_isMac",0x0d4c1b4c,"hx.widgets.PlatformInfo.get_isMac","hx/widgets/PlatformInfo.hx",63,0x7628741e)
HX_LOCAL_STACK_FRAME(_hx_pos_11a17217511ea231_68_get_isLinux,"hx.widgets.PlatformInfo","get_isLinux",0x7eee65f1,"hx.widgets.PlatformInfo.get_isLinux","hx/widgets/PlatformInfo.hx",68,0x7628741e)
namespace hx{
namespace widgets{

void PlatformInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_12_new)
HXDLIN(  12)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPlatformInfo()));
            	}

Dynamic PlatformInfo_obj::__CreateEmpty() { return new PlatformInfo_obj; }

void *PlatformInfo_obj::_hx_vtable = 0;

Dynamic PlatformInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlatformInfo_obj > _hx_result = new PlatformInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ade235c;
}

void PlatformInfo_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_15_destroy)
HXLINE(  16)		this->_ref->destroy();
HXLINE(  17)		this->_ref = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,destroy,(void))

int PlatformInfo_obj::get_osMajorVersion(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_22_get_osMajorVersion)
HXDLIN(  22)		return this->_ref->ptr->GetOSMajorVersion();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_osMajorVersion,return )

int PlatformInfo_obj::get_osMinorVersion(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_27_get_osMinorVersion)
HXDLIN(  27)		return this->_ref->ptr->GetOSMinorVersion();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_osMinorVersion,return )

::String PlatformInfo_obj::get_archName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_31_get_archName)
HXLINE(  32)		 wxString r = this->_ref->ptr->GetArchName();
HXLINE(  33)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_archName,return )

::String PlatformInfo_obj::get_operatingSystemFamilyName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_37_get_operatingSystemFamilyName)
HXLINE(  38)		 wxString r = this->_ref->ptr->GetOperatingSystemFamilyName();
HXLINE(  39)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_operatingSystemFamilyName,return )

 wxOperatingSystemId PlatformInfo_obj::get_operatingSystemId(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_44_get_operatingSystemId)
HXDLIN(  44)		return this->_ref->ptr->GetOperatingSystemId();
            	}


::String PlatformInfo_obj::get_operatingSystemIdName(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_48_get_operatingSystemIdName)
HXLINE(  49)		 wxString r = this->_ref->ptr->GetOperatingSystemIdName();
HXLINE(  50)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_operatingSystemIdName,return )

bool PlatformInfo_obj::get_isWindows(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_58_get_isWindows)
HXDLIN(  58)		if (hx::IsNotEq( this->get_operatingSystemId(),wxOS_WINDOWS_NT )) {
HXDLIN(  58)			return hx::IsEq( this->get_operatingSystemId(),wxOS_WINDOWS_NT );
            		}
            		else {
HXDLIN(  58)			return true;
            		}
HXDLIN(  58)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isWindows,return )

bool PlatformInfo_obj::get_isMac(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_63_get_isMac)
HXDLIN(  63)		bool _hx_tmp;
HXDLIN(  63)		if (hx::IsNotEq( this->get_operatingSystemId(),wxOS_MAC )) {
HXDLIN(  63)			_hx_tmp = hx::IsEq( this->get_operatingSystemId(),wxOS_MAC_OS );
            		}
            		else {
HXDLIN(  63)			_hx_tmp = true;
            		}
HXDLIN(  63)		if (!(_hx_tmp)) {
HXDLIN(  63)			return hx::IsEq( this->get_operatingSystemId(),wxOS_MAC_OSX_DARWIN );
            		}
            		else {
HXDLIN(  63)			return true;
            		}
HXDLIN(  63)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isMac,return )

bool PlatformInfo_obj::get_isLinux(){
            	HX_STACKFRAME(&_hx_pos_11a17217511ea231_68_get_isLinux)
HXDLIN(  68)		return hx::IsEq( this->get_operatingSystemId(),wxOS_UNIX_LINUX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlatformInfo_obj,get_isLinux,return )


hx::ObjectPtr< PlatformInfo_obj > PlatformInfo_obj::__new() {
	hx::ObjectPtr< PlatformInfo_obj > __this = new PlatformInfo_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PlatformInfo_obj > PlatformInfo_obj::__alloc(hx::Ctx *_hx_ctx) {
	PlatformInfo_obj *__this = (PlatformInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PlatformInfo_obj), true, "hx.widgets.PlatformInfo"));
	*(void **)__this = PlatformInfo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlatformInfo_obj::PlatformInfo_obj()
{
}

void PlatformInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformInfo);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(osMajorVersion,"osMajorVersion");
	HX_MARK_MEMBER_NAME(osMinorVersion,"osMinorVersion");
	HX_MARK_MEMBER_NAME(archName,"archName");
	HX_MARK_MEMBER_NAME(operatingSystemFamilyName,"operatingSystemFamilyName");
	HX_MARK_MEMBER_NAME(operatingSystemId,"operatingSystemId");
	HX_MARK_MEMBER_NAME(operatingSystemIdName,"operatingSystemIdName");
	HX_MARK_MEMBER_NAME(isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(isMac,"isMac");
	HX_MARK_MEMBER_NAME(isLinux,"isLinux");
	HX_MARK_END_CLASS();
}

void PlatformInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(osMajorVersion,"osMajorVersion");
	HX_VISIT_MEMBER_NAME(osMinorVersion,"osMinorVersion");
	HX_VISIT_MEMBER_NAME(archName,"archName");
	HX_VISIT_MEMBER_NAME(operatingSystemFamilyName,"operatingSystemFamilyName");
	HX_VISIT_MEMBER_NAME(operatingSystemId,"operatingSystemId");
	HX_VISIT_MEMBER_NAME(operatingSystemIdName,"operatingSystemIdName");
	HX_VISIT_MEMBER_NAME(isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(isMac,"isMac");
	HX_VISIT_MEMBER_NAME(isLinux,"isLinux");
}

hx::Val PlatformInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isMac() : isMac ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLinux") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isLinux() : isLinux ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"archName") ) { return hx::Val( inCallProp == hx::paccAlways ? get_archName() : archName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isWindows() : isWindows ); }
		if (HX_FIELD_EQ(inName,"get_isMac") ) { return hx::Val( get_isMac_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isLinux") ) { return hx::Val( get_isLinux_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_archName") ) { return hx::Val( get_archName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isWindows") ) { return hx::Val( get_isWindows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"osMajorVersion") ) { return hx::Val( inCallProp == hx::paccAlways ? get_osMajorVersion() : osMajorVersion ); }
		if (HX_FIELD_EQ(inName,"osMinorVersion") ) { return hx::Val( inCallProp == hx::paccAlways ? get_osMinorVersion() : osMinorVersion ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_osMajorVersion") ) { return hx::Val( get_osMajorVersion_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_osMinorVersion") ) { return hx::Val( get_osMinorVersion_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"operatingSystemIdName") ) { return hx::Val( inCallProp == hx::paccAlways ? get_operatingSystemIdName() : operatingSystemIdName ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"operatingSystemFamilyName") ) { return hx::Val( inCallProp == hx::paccAlways ? get_operatingSystemFamilyName() : operatingSystemFamilyName ); }
		if (HX_FIELD_EQ(inName,"get_operatingSystemIdName") ) { return hx::Val( get_operatingSystemIdName_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_operatingSystemFamilyName") ) { return hx::Val( get_operatingSystemFamilyName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PlatformInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxPlatformInfo > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isMac") ) { isMac=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { isLinux=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"archName") ) { archName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"osMajorVersion") ) { osMajorVersion=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"osMinorVersion") ) { osMinorVersion=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"operatingSystemIdName") ) { operatingSystemIdName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"operatingSystemFamilyName") ) { operatingSystemFamilyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("osMajorVersion","\x23","\x2e","\xb6","\x31"));
	outFields->push(HX_HCSTRING("osMinorVersion","\xa7","\x67","\xd3","\x39"));
	outFields->push(HX_HCSTRING("archName","\x41","\xcb","\x85","\xdb"));
	outFields->push(HX_HCSTRING("operatingSystemFamilyName","\x3f","\x8d","\xf7","\xfa"));
	outFields->push(HX_HCSTRING("operatingSystemId","\x0b","\x99","\xe2","\x33"));
	outFields->push(HX_HCSTRING("operatingSystemIdName","\xf6","\x18","\xe4","\xa4"));
	outFields->push(HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec"));
	outFields->push(HX_HCSTRING("isMac","\xc5","\x34","\x51","\xc1"));
	outFields->push(HX_HCSTRING("isLinux","\xaa","\x8f","\x87","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PlatformInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxPlatformInfo >*/ ,(int)offsetof(PlatformInfo_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{hx::fsInt,(int)offsetof(PlatformInfo_obj,osMajorVersion),HX_HCSTRING("osMajorVersion","\x23","\x2e","\xb6","\x31")},
	{hx::fsInt,(int)offsetof(PlatformInfo_obj,osMinorVersion),HX_HCSTRING("osMinorVersion","\xa7","\x67","\xd3","\x39")},
	{hx::fsString,(int)offsetof(PlatformInfo_obj,archName),HX_HCSTRING("archName","\x41","\xcb","\x85","\xdb")},
	{hx::fsString,(int)offsetof(PlatformInfo_obj,operatingSystemFamilyName),HX_HCSTRING("operatingSystemFamilyName","\x3f","\x8d","\xf7","\xfa")},
	{hx::fsObject /*wxOperatingSystemId*/ ,(int)offsetof(PlatformInfo_obj,operatingSystemId),HX_HCSTRING("operatingSystemId","\x0b","\x99","\xe2","\x33")},
	{hx::fsString,(int)offsetof(PlatformInfo_obj,operatingSystemIdName),HX_HCSTRING("operatingSystemIdName","\xf6","\x18","\xe4","\xa4")},
	{hx::fsBool,(int)offsetof(PlatformInfo_obj,isWindows),HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec")},
	{hx::fsBool,(int)offsetof(PlatformInfo_obj,isMac),HX_HCSTRING("isMac","\xc5","\x34","\x51","\xc1")},
	{hx::fsBool,(int)offsetof(PlatformInfo_obj,isLinux),HX_HCSTRING("isLinux","\xaa","\x8f","\x87","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PlatformInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String PlatformInfo_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("osMajorVersion","\x23","\x2e","\xb6","\x31"),
	HX_HCSTRING("get_osMajorVersion","\xec","\x0e","\x50","\xcd"),
	HX_HCSTRING("osMinorVersion","\xa7","\x67","\xd3","\x39"),
	HX_HCSTRING("get_osMinorVersion","\x70","\x48","\x6d","\xd5"),
	HX_HCSTRING("archName","\x41","\xcb","\x85","\xdb"),
	HX_HCSTRING("get_archName","\x4a","\x7f","\x9f","\x90"),
	HX_HCSTRING("operatingSystemFamilyName","\x3f","\x8d","\xf7","\xfa"),
	HX_HCSTRING("get_operatingSystemFamilyName","\x16","\xbf","\x36","\xe3"),
	HX_HCSTRING("operatingSystemIdName","\xf6","\x18","\xe4","\xa4"),
	HX_HCSTRING("get_operatingSystemIdName","\x4d","\xd3","\xe1","\xaa"),
	HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec"),
	HX_HCSTRING("get_isWindows","\x90","\x2f","\xd7","\xad"),
	HX_HCSTRING("isMac","\xc5","\x34","\x51","\xc1"),
	HX_HCSTRING("get_isMac","\x1c","\x91","\xfa","\x04"),
	HX_HCSTRING("isLinux","\xaa","\x8f","\x87","\x11"),
	HX_HCSTRING("get_isLinux","\xc1","\xef","\x81","\x97"),
	::String(null()) };

static void PlatformInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlatformInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class PlatformInfo_obj::__mClass;

void PlatformInfo_obj::__register()
{
	hx::Object *dummy = new PlatformInfo_obj;
	PlatformInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.PlatformInfo","\x9e","\x4e","\xfc","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlatformInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PlatformInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlatformInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlatformInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
