// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_Platform
#include <haxe/ui/backend/hxwidgets/Platform.h>
#endif
#ifndef INCLUDED_hx_widgets_PlatformInfo
#include <hx/widgets/PlatformInfo.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da4b27c32cd2017c_9_get_name,"haxe.ui.backend.hxwidgets.Platform","get_name",0x4ebe7294,"haxe.ui.backend.hxwidgets.Platform.get_name","haxe/ui/backend/hxwidgets/Platform.hx",9,0x8f442d2e)
HX_LOCAL_STACK_FRAME(_hx_pos_da4b27c32cd2017c_28_get_isWindows,"haxe.ui.backend.hxwidgets.Platform","get_isWindows",0xe261b2d0,"haxe.ui.backend.hxwidgets.Platform.get_isWindows","haxe/ui/backend/hxwidgets/Platform.hx",28,0x8f442d2e)
HX_LOCAL_STACK_FRAME(_hx_pos_da4b27c32cd2017c_33_get_isMac,"haxe.ui.backend.hxwidgets.Platform","get_isMac",0xc2b2745c,"haxe.ui.backend.hxwidgets.Platform.get_isMac","haxe/ui/backend/hxwidgets/Platform.hx",33,0x8f442d2e)
HX_LOCAL_STACK_FRAME(_hx_pos_da4b27c32cd2017c_38_get_isLinux,"haxe.ui.backend.hxwidgets.Platform","get_isLinux",0x1d692301,"haxe.ui.backend.hxwidgets.Platform.get_isLinux","haxe/ui/backend/hxwidgets/Platform.hx",38,0x8f442d2e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void Platform_obj::__construct() { }

Dynamic Platform_obj::__CreateEmpty() { return new Platform_obj; }

void *Platform_obj::_hx_vtable = 0;

Dynamic Platform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Platform_obj > _hx_result = new Platform_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Platform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b888dfc;
}

::String Platform_obj::_name;

::String Platform_obj::name;

::String Platform_obj::get_name(){
            	HX_GC_STACKFRAME(&_hx_pos_da4b27c32cd2017c_9_get_name)
HXLINE(  10)		if (hx::IsNull( ::haxe::ui::backend::hxwidgets::Platform_obj::_name )) {
HXLINE(  11)			 ::hx::widgets::PlatformInfo info =  ::hx::widgets::PlatformInfo_obj::__alloc( HX_CTX );
HXLINE(  12)			if (info->get_isMac()) {
HXLINE(  13)				::haxe::ui::backend::hxwidgets::Platform_obj::_name = HX_("mac",8f,0a,53,00);
            			}
            			else {
HXLINE(  14)				if (info->get_isLinux()) {
HXLINE(  15)					::haxe::ui::backend::hxwidgets::Platform_obj::_name = HX_("linux",f4,eb,01,75);
            				}
            				else {
HXLINE(  16)					if (info->get_isWindows()) {
HXLINE(  17)						::haxe::ui::backend::hxwidgets::Platform_obj::_name = HX_("windows",83,de,74,e8);
            					}
            				}
            			}
            		}
HXLINE(  20)		return ::haxe::ui::backend::hxwidgets::Platform_obj::_name;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_name,return )

bool Platform_obj::isWindows;

bool Platform_obj::get_isWindows(){
            	HX_STACKFRAME(&_hx_pos_da4b27c32cd2017c_28_get_isWindows)
HXDLIN(  28)		return (::haxe::ui::backend::hxwidgets::Platform_obj::get_name() == HX_("windows",83,de,74,e8));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_isWindows,return )

bool Platform_obj::isMac;

bool Platform_obj::get_isMac(){
            	HX_STACKFRAME(&_hx_pos_da4b27c32cd2017c_33_get_isMac)
HXDLIN(  33)		return (::haxe::ui::backend::hxwidgets::Platform_obj::get_name() == HX_("mac",8f,0a,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_isMac,return )

bool Platform_obj::isLinux;

bool Platform_obj::get_isLinux(){
            	HX_STACKFRAME(&_hx_pos_da4b27c32cd2017c_38_get_isLinux)
HXDLIN(  38)		return (::haxe::ui::backend::hxwidgets::Platform_obj::get_name() == HX_("linux",f4,eb,01,75));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Platform_obj,get_isLinux,return )


Platform_obj::Platform_obj()
{
}

bool Platform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = ( inCallProp == hx::paccAlways ? get_name() : name ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { outValue = ( _name ); return true; }
		if (HX_FIELD_EQ(inName,"isMac") ) { outValue = ( inCallProp == hx::paccAlways ? get_isMac() : isMac ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { outValue = ( inCallProp == hx::paccAlways ? get_isLinux() : isLinux ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { outValue = get_name_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( inCallProp == hx::paccAlways ? get_isWindows() : isWindows ); return true; }
		if (HX_FIELD_EQ(inName,"get_isMac") ) { outValue = get_isMac_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isLinux") ) { outValue = get_isLinux_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isWindows") ) { outValue = get_isWindows_dyn(); return true; }
	}
	return false;
}

bool Platform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"isMac") ) { isMac=ioValue.Cast< bool >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLinux") ) { isLinux=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Platform_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Platform_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Platform_obj::_name,HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc")},
	{hx::fsString,(void *) &Platform_obj::name,HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(void *) &Platform_obj::isWindows,HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec")},
	{hx::fsBool,(void *) &Platform_obj::isMac,HX_HCSTRING("isMac","\xc5","\x34","\x51","\xc1")},
	{hx::fsBool,(void *) &Platform_obj::isLinux,HX_HCSTRING("isLinux","\xaa","\x8f","\x87","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Platform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Platform_obj::_name,"_name");
	HX_MARK_MEMBER_NAME(Platform_obj::name,"name");
	HX_MARK_MEMBER_NAME(Platform_obj::isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(Platform_obj::isMac,"isMac");
	HX_MARK_MEMBER_NAME(Platform_obj::isLinux,"isLinux");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Platform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Platform_obj::_name,"_name");
	HX_VISIT_MEMBER_NAME(Platform_obj::name,"name");
	HX_VISIT_MEMBER_NAME(Platform_obj::isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(Platform_obj::isMac,"isMac");
	HX_VISIT_MEMBER_NAME(Platform_obj::isLinux,"isLinux");
};

#endif

hx::Class Platform_obj::__mClass;

static ::String Platform_obj_sStaticFields[] = {
	HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("isWindows","\xb9","\x5b","\x73","\xec"),
	HX_HCSTRING("get_isWindows","\x90","\x2f","\xd7","\xad"),
	HX_HCSTRING("isMac","\xc5","\x34","\x51","\xc1"),
	HX_HCSTRING("get_isMac","\x1c","\x91","\xfa","\x04"),
	HX_HCSTRING("isLinux","\xaa","\x8f","\x87","\x11"),
	HX_HCSTRING("get_isLinux","\xc1","\xef","\x81","\x97"),
	::String(null())
};

void Platform_obj::__register()
{
	hx::Object *dummy = new Platform_obj;
	Platform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.Platform","\xae","\xb3","\x6b","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Platform_obj::__GetStatic;
	__mClass->mSetStaticField = &Platform_obj::__SetStatic;
	__mClass->mMarkFunc = Platform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Platform_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Platform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Platform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Platform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Platform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
