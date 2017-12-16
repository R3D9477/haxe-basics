// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_
#include <wx/widgets/_FontFamily/FontFamily_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_14__new,"wx.widgets._FontFamily.FontFamily_Impl_","_new",0xe5e75df4,"wx.widgets._FontFamily.FontFamily_Impl_._new","wx/widgets/FontFamily.hx",14,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_6_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",6,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_7_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",7,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_8_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",8,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_9_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",9,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_10_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",10,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_11_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",11,0x5e3310dd)
HX_LOCAL_STACK_FRAME(_hx_pos_8f0e2de44a39c96f_12_boot,"wx.widgets._FontFamily.FontFamily_Impl_","boot",0xe7e3ccc5,"wx.widgets._FontFamily.FontFamily_Impl_.boot","wx/widgets/FontFamily.hx",12,0x5e3310dd)
namespace wx{
namespace widgets{
namespace _FontFamily{

void FontFamily_Impl__obj::__construct() { }

Dynamic FontFamily_Impl__obj::__CreateEmpty() { return new FontFamily_Impl__obj; }

void *FontFamily_Impl__obj::_hx_vtable = 0;

Dynamic FontFamily_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontFamily_Impl__obj > _hx_result = new FontFamily_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontFamily_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40c9dc5b;
}

int FontFamily_Impl__obj::DEFAULT;

int FontFamily_Impl__obj::DECORATIVE;

int FontFamily_Impl__obj::ROMAN;

int FontFamily_Impl__obj::SCRIPT;

int FontFamily_Impl__obj::SWISS;

int FontFamily_Impl__obj::MODERN;

int FontFamily_Impl__obj::TELETYPE;

int FontFamily_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_14__new)
HXDLIN(  14)		int this1 = i;
HXDLIN(  14)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontFamily_Impl__obj,_new,return )


FontFamily_Impl__obj::FontFamily_Impl__obj()
{
}

bool FontFamily_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FontFamily_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FontFamily_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FontFamily_Impl__obj::DEFAULT,HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::DECORATIVE,HX_HCSTRING("DECORATIVE","\x40","\x8f","\x39","\x2a")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::ROMAN,HX_HCSTRING("ROMAN","\xdd","\x12","\x4e","\x6b")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::SCRIPT,HX_HCSTRING("SCRIPT","\x0b","\xfa","\xe2","\xf9")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::SWISS,HX_HCSTRING("SWISS","\x05","\x63","\xfb","\x03")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::MODERN,HX_HCSTRING("MODERN","\xdf","\xc1","\x49","\x73")},
	{hx::fsInt,(void *) &FontFamily_Impl__obj::TELETYPE,HX_HCSTRING("TELETYPE","\xe4","\xa1","\x65","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FontFamily_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::DECORATIVE,"DECORATIVE");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::ROMAN,"ROMAN");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::SCRIPT,"SCRIPT");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::SWISS,"SWISS");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::MODERN,"MODERN");
	HX_MARK_MEMBER_NAME(FontFamily_Impl__obj::TELETYPE,"TELETYPE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontFamily_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::DECORATIVE,"DECORATIVE");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::ROMAN,"ROMAN");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::SCRIPT,"SCRIPT");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::SWISS,"SWISS");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::MODERN,"MODERN");
	HX_VISIT_MEMBER_NAME(FontFamily_Impl__obj::TELETYPE,"TELETYPE");
};

#endif

hx::Class FontFamily_Impl__obj::__mClass;

static ::String FontFamily_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b"),
	HX_HCSTRING("DECORATIVE","\x40","\x8f","\x39","\x2a"),
	HX_HCSTRING("ROMAN","\xdd","\x12","\x4e","\x6b"),
	HX_HCSTRING("SCRIPT","\x0b","\xfa","\xe2","\xf9"),
	HX_HCSTRING("SWISS","\x05","\x63","\xfb","\x03"),
	HX_HCSTRING("MODERN","\xdf","\xc1","\x49","\x73"),
	HX_HCSTRING("TELETYPE","\xe4","\xa1","\x65","\x4f"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void FontFamily_Impl__obj::__register()
{
	hx::Object *dummy = new FontFamily_Impl__obj;
	FontFamily_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets._FontFamily.FontFamily_Impl_","\xbb","\xe0","\x76","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontFamily_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontFamily_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FontFamily_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontFamily_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontFamily_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontFamily_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontFamily_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontFamily_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_6_boot)
HXDLIN(   6)			int this1 = ::wxFONTFAMILY_DEFAULT;
HXDLIN(   6)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_6_boot)
HXDLIN(   6)		DEFAULT =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_7_boot)
HXDLIN(   7)			int this1 = ::wxFONTFAMILY_DECORATIVE;
HXDLIN(   7)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_7_boot)
HXDLIN(   7)		DECORATIVE =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_8_boot)
HXDLIN(   8)			int this1 = ::wxFONTFAMILY_ROMAN;
HXDLIN(   8)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_8_boot)
HXDLIN(   8)		ROMAN =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_9_boot)
HXDLIN(   9)			int this1 = ::wxFONTFAMILY_SCRIPT;
HXDLIN(   9)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_9_boot)
HXDLIN(   9)		SCRIPT =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_10_boot)
HXDLIN(  10)			int this1 = ::wxFONTFAMILY_SWISS;
HXDLIN(  10)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_10_boot)
HXDLIN(  10)		SWISS =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_11_boot)
HXDLIN(  11)			int this1 = ::wxFONTFAMILY_MODERN;
HXDLIN(  11)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_11_boot)
HXDLIN(  11)		MODERN =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_12_boot)
HXDLIN(  12)			int this1 = ::wxFONTFAMILY_TELETYPE;
HXDLIN(  12)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_8f0e2de44a39c96f_12_boot)
HXDLIN(  12)		TELETYPE =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace _FontFamily
