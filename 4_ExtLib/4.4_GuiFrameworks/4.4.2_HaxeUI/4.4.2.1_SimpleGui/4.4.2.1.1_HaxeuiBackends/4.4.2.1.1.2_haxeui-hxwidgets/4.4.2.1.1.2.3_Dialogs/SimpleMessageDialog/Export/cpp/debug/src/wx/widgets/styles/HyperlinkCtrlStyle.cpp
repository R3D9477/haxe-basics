// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_HyperlinkCtrlStyle
#include <wx/widgets/styles/HyperlinkCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f59f112986dbda10_6_boot,"wx.widgets.styles.HyperlinkCtrlStyle","boot",0x7a60b5c0,"wx.widgets.styles.HyperlinkCtrlStyle.boot","wx/widgets/styles/HyperlinkCtrlStyle.hx",6,0x71bc3f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f59f112986dbda10_7_boot,"wx.widgets.styles.HyperlinkCtrlStyle","boot",0x7a60b5c0,"wx.widgets.styles.HyperlinkCtrlStyle.boot","wx/widgets/styles/HyperlinkCtrlStyle.hx",7,0x71bc3f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f59f112986dbda10_8_boot,"wx.widgets.styles.HyperlinkCtrlStyle","boot",0x7a60b5c0,"wx.widgets.styles.HyperlinkCtrlStyle.boot","wx/widgets/styles/HyperlinkCtrlStyle.hx",8,0x71bc3f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f59f112986dbda10_9_boot,"wx.widgets.styles.HyperlinkCtrlStyle","boot",0x7a60b5c0,"wx.widgets.styles.HyperlinkCtrlStyle.boot","wx/widgets/styles/HyperlinkCtrlStyle.hx",9,0x71bc3f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_f59f112986dbda10_10_boot,"wx.widgets.styles.HyperlinkCtrlStyle","boot",0x7a60b5c0,"wx.widgets.styles.HyperlinkCtrlStyle.boot","wx/widgets/styles/HyperlinkCtrlStyle.hx",10,0x71bc3f7f)
namespace wx{
namespace widgets{
namespace styles{

void HyperlinkCtrlStyle_obj::__construct() { }

Dynamic HyperlinkCtrlStyle_obj::__CreateEmpty() { return new HyperlinkCtrlStyle_obj; }

void *HyperlinkCtrlStyle_obj::_hx_vtable = 0;

Dynamic HyperlinkCtrlStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HyperlinkCtrlStyle_obj > _hx_result = new HyperlinkCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HyperlinkCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x083d6e30;
}

int HyperlinkCtrlStyle_obj::ALIGN_LEFT;

int HyperlinkCtrlStyle_obj::ALIGN_RIGHT;

int HyperlinkCtrlStyle_obj::ALIGN_CENTRE;

int HyperlinkCtrlStyle_obj::CONTEXTMENU;

int HyperlinkCtrlStyle_obj::DEFAULT_STYLE;


HyperlinkCtrlStyle_obj::HyperlinkCtrlStyle_obj()
{
}

bool HyperlinkCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { outValue = ( ALIGN_LEFT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { outValue = ( ALIGN_RIGHT ); return true; }
		if (HX_FIELD_EQ(inName,"CONTEXTMENU") ) { outValue = ( CONTEXTMENU ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTRE") ) { outValue = ( ALIGN_CENTRE ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { outValue = ( DEFAULT_STYLE ); return true; }
	}
	return false;
}

bool HyperlinkCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { ALIGN_RIGHT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CONTEXTMENU") ) { CONTEXTMENU=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTRE") ) { ALIGN_CENTRE=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { DEFAULT_STYLE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HyperlinkCtrlStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo HyperlinkCtrlStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &HyperlinkCtrlStyle_obj::ALIGN_LEFT,HX_HCSTRING("ALIGN_LEFT","\x21","\x27","\xc2","\x5f")},
	{hx::fsInt,(void *) &HyperlinkCtrlStyle_obj::ALIGN_RIGHT,HX_HCSTRING("ALIGN_RIGHT","\x62","\x23","\x2d","\xe1")},
	{hx::fsInt,(void *) &HyperlinkCtrlStyle_obj::ALIGN_CENTRE,HX_HCSTRING("ALIGN_CENTRE","\xb5","\xae","\x06","\xde")},
	{hx::fsInt,(void *) &HyperlinkCtrlStyle_obj::CONTEXTMENU,HX_HCSTRING("CONTEXTMENU","\xee","\x0a","\xc0","\x10")},
	{hx::fsInt,(void *) &HyperlinkCtrlStyle_obj::DEFAULT_STYLE,HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void HyperlinkCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_CENTRE,"ALIGN_CENTRE");
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::CONTEXTMENU,"CONTEXTMENU");
	HX_MARK_MEMBER_NAME(HyperlinkCtrlStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HyperlinkCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::ALIGN_CENTRE,"ALIGN_CENTRE");
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::CONTEXTMENU,"CONTEXTMENU");
	HX_VISIT_MEMBER_NAME(HyperlinkCtrlStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
};

#endif

hx::Class HyperlinkCtrlStyle_obj::__mClass;

static ::String HyperlinkCtrlStyle_obj_sStaticFields[] = {
	HX_HCSTRING("ALIGN_LEFT","\x21","\x27","\xc2","\x5f"),
	HX_HCSTRING("ALIGN_RIGHT","\x62","\x23","\x2d","\xe1"),
	HX_HCSTRING("ALIGN_CENTRE","\xb5","\xae","\x06","\xde"),
	HX_HCSTRING("CONTEXTMENU","\xee","\x0a","\xc0","\x10"),
	HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7"),
	::String(null())
};

void HyperlinkCtrlStyle_obj::__register()
{
	hx::Object *dummy = new HyperlinkCtrlStyle_obj;
	HyperlinkCtrlStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.HyperlinkCtrlStyle","\xa0","\x99","\x78","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HyperlinkCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &HyperlinkCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = HyperlinkCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HyperlinkCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HyperlinkCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HyperlinkCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HyperlinkCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HyperlinkCtrlStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HyperlinkCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f59f112986dbda10_6_boot)
HXDLIN(   6)		ALIGN_LEFT = wxHL_ALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f59f112986dbda10_7_boot)
HXDLIN(   7)		ALIGN_RIGHT = wxHL_ALIGN_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f59f112986dbda10_8_boot)
HXDLIN(   8)		ALIGN_CENTRE = wxHL_ALIGN_CENTRE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f59f112986dbda10_9_boot)
HXDLIN(   9)		CONTEXTMENU = wxHL_CONTEXTMENU;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f59f112986dbda10_10_boot)
HXDLIN(  10)		DEFAULT_STYLE = wxHL_DEFAULT_STYLE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
