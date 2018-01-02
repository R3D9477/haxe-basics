// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_ButtonStyle
#include <wx/widgets/styles/ButtonStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_7_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",7,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_9_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",9,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_11_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",11,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_13_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",13,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_18_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",18,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_22_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",22,0x9c27fc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_6609cda17a49fef3_24_boot,"wx.widgets.styles.ButtonStyle","boot",0xb0aebb81,"wx.widgets.styles.ButtonStyle.boot","wx/widgets/styles/ButtonStyle.hx",24,0x9c27fc1e)
namespace wx{
namespace widgets{
namespace styles{

void ButtonStyle_obj::__construct() { }

Dynamic ButtonStyle_obj::__CreateEmpty() { return new ButtonStyle_obj; }

void *ButtonStyle_obj::_hx_vtable = 0;

Dynamic ButtonStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ButtonStyle_obj > _hx_result = new ButtonStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6700a4ef;
}

int ButtonStyle_obj::LEFT;

int ButtonStyle_obj::TOP;

int ButtonStyle_obj::RIGHT;

int ButtonStyle_obj::BOTTOM;

int ButtonStyle_obj::EXACTFIT;

int ButtonStyle_obj::NOTEXT;

int ButtonStyle_obj::BORDER_NONE;


ButtonStyle_obj::ButtonStyle_obj()
{
}

bool ButtonStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { outValue = ( TOP ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = ( LEFT ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = ( RIGHT ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = ( BOTTOM ); return true; }
		if (HX_FIELD_EQ(inName,"NOTEXT") ) { outValue = ( NOTEXT ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"EXACTFIT") ) { outValue = ( EXACTFIT ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BORDER_NONE") ) { outValue = ( BORDER_NONE ); return true; }
	}
	return false;
}

bool ButtonStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NOTEXT") ) { NOTEXT=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"EXACTFIT") ) { EXACTFIT=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BORDER_NONE") ) { BORDER_NONE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ButtonStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ButtonStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ButtonStyle_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &ButtonStyle_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsInt,(void *) &ButtonStyle_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &ButtonStyle_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsInt,(void *) &ButtonStyle_obj::EXACTFIT,HX_HCSTRING("EXACTFIT","\x72","\x30","\xc0","\x7e")},
	{hx::fsInt,(void *) &ButtonStyle_obj::NOTEXT,HX_HCSTRING("NOTEXT","\x6e","\x8d","\x38","\xe4")},
	{hx::fsInt,(void *) &ButtonStyle_obj::BORDER_NONE,HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ButtonStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::EXACTFIT,"EXACTFIT");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::NOTEXT,"NOTEXT");
	HX_MARK_MEMBER_NAME(ButtonStyle_obj::BORDER_NONE,"BORDER_NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::EXACTFIT,"EXACTFIT");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::NOTEXT,"NOTEXT");
	HX_VISIT_MEMBER_NAME(ButtonStyle_obj::BORDER_NONE,"BORDER_NONE");
};

#endif

hx::Class ButtonStyle_obj::__mClass;

static ::String ButtonStyle_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("EXACTFIT","\x72","\x30","\xc0","\x7e"),
	HX_HCSTRING("NOTEXT","\x6e","\x8d","\x38","\xe4"),
	HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38"),
	::String(null())
};

void ButtonStyle_obj::__register()
{
	hx::Object *dummy = new ButtonStyle_obj;
	ButtonStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.ButtonStyle","\x7f","\x6b","\x8a","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ButtonStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &ButtonStyle_obj::__SetStatic;
	__mClass->mMarkFunc = ButtonStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ButtonStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ButtonStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ButtonStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_7_boot)
HXDLIN(   7)		LEFT = wxBU_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_9_boot)
HXDLIN(   9)		TOP = wxBU_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_11_boot)
HXDLIN(  11)		RIGHT = wxBU_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_13_boot)
HXDLIN(  13)		BOTTOM = wxBU_BOTTOM;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_18_boot)
HXDLIN(  18)		EXACTFIT = wxBU_EXACTFIT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_22_boot)
HXDLIN(  22)		NOTEXT = wxBU_NOTEXT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6609cda17a49fef3_24_boot)
HXDLIN(  24)		BORDER_NONE = wxBORDER_NONE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
