// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_SliderStyle
#include <wx/widgets/styles/SliderStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_7_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",7,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_9_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",9,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_11_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",11,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_13_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",13,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_15_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",15,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_17_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",17,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_19_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",19,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_21_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",21,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_23_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",23,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_25_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",25,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_27_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",27,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_29_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",29,0xfda2a74d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd9056ad4a39e0_31_boot,"wx.widgets.styles.SliderStyle","boot",0x668dd070,"wx.widgets.styles.SliderStyle.boot","wx/widgets/styles/SliderStyle.hx",31,0xfda2a74d)
namespace wx{
namespace widgets{
namespace styles{

void SliderStyle_obj::__construct() { }

Dynamic SliderStyle_obj::__CreateEmpty() { return new SliderStyle_obj; }

void *SliderStyle_obj::_hx_vtable = 0;

Dynamic SliderStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SliderStyle_obj > _hx_result = new SliderStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SliderStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5243c6c4;
}

int SliderStyle_obj::HORIZONTAL;

int SliderStyle_obj::VERTICAL;

int SliderStyle_obj::AUTOTICKS;

int SliderStyle_obj::MIN_MAX_LABELS;

int SliderStyle_obj::VALUE_LABEL;

int SliderStyle_obj::LABELS;

int SliderStyle_obj::LEFT;

int SliderStyle_obj::RIGHT;

int SliderStyle_obj::TOP;

int SliderStyle_obj::BOTTOM;

int SliderStyle_obj::SELRANGE;

int SliderStyle_obj::INVERSE;

int SliderStyle_obj::DEFAULT;


SliderStyle_obj::SliderStyle_obj()
{
}

bool SliderStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"LABELS") ) { outValue = ( LABELS ); return true; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = ( BOTTOM ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"INVERSE") ) { outValue = ( INVERSE ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { outValue = ( DEFAULT ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { outValue = ( VERTICAL ); return true; }
		if (HX_FIELD_EQ(inName,"SELRANGE") ) { outValue = ( SELRANGE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AUTOTICKS") ) { outValue = ( AUTOTICKS ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { outValue = ( HORIZONTAL ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"VALUE_LABEL") ) { outValue = ( VALUE_LABEL ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MIN_MAX_LABELS") ) { outValue = ( MIN_MAX_LABELS ); return true; }
	}
	return false;
}

bool SliderStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"LABELS") ) { LABELS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"INVERSE") ) { INVERSE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { VERTICAL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SELRANGE") ) { SELRANGE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AUTOTICKS") ) { AUTOTICKS=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { HORIZONTAL=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"VALUE_LABEL") ) { VALUE_LABEL=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MIN_MAX_LABELS") ) { MIN_MAX_LABELS=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SliderStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SliderStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SliderStyle_obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsInt,(void *) &SliderStyle_obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{hx::fsInt,(void *) &SliderStyle_obj::AUTOTICKS,HX_HCSTRING("AUTOTICKS","\x87","\x6c","\x64","\x56")},
	{hx::fsInt,(void *) &SliderStyle_obj::MIN_MAX_LABELS,HX_HCSTRING("MIN_MAX_LABELS","\x87","\xe8","\x62","\xc6")},
	{hx::fsInt,(void *) &SliderStyle_obj::VALUE_LABEL,HX_HCSTRING("VALUE_LABEL","\x26","\x17","\xd9","\xd9")},
	{hx::fsInt,(void *) &SliderStyle_obj::LABELS,HX_HCSTRING("LABELS","\xff","\xd3","\xff","\xfb")},
	{hx::fsInt,(void *) &SliderStyle_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &SliderStyle_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &SliderStyle_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsInt,(void *) &SliderStyle_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsInt,(void *) &SliderStyle_obj::SELRANGE,HX_HCSTRING("SELRANGE","\xe3","\x4b","\xd1","\x85")},
	{hx::fsInt,(void *) &SliderStyle_obj::INVERSE,HX_HCSTRING("INVERSE","\x90","\x1f","\xc5","\xbd")},
	{hx::fsInt,(void *) &SliderStyle_obj::DEFAULT,HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SliderStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SliderStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::VERTICAL,"VERTICAL");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::AUTOTICKS,"AUTOTICKS");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::MIN_MAX_LABELS,"MIN_MAX_LABELS");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::VALUE_LABEL,"VALUE_LABEL");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::LABELS,"LABELS");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::SELRANGE,"SELRANGE");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::INVERSE,"INVERSE");
	HX_MARK_MEMBER_NAME(SliderStyle_obj::DEFAULT,"DEFAULT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SliderStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::VERTICAL,"VERTICAL");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::AUTOTICKS,"AUTOTICKS");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::MIN_MAX_LABELS,"MIN_MAX_LABELS");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::VALUE_LABEL,"VALUE_LABEL");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::LABELS,"LABELS");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::SELRANGE,"SELRANGE");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::INVERSE,"INVERSE");
	HX_VISIT_MEMBER_NAME(SliderStyle_obj::DEFAULT,"DEFAULT");
};

#endif

hx::Class SliderStyle_obj::__mClass;

static ::String SliderStyle_obj_sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	HX_HCSTRING("AUTOTICKS","\x87","\x6c","\x64","\x56"),
	HX_HCSTRING("MIN_MAX_LABELS","\x87","\xe8","\x62","\xc6"),
	HX_HCSTRING("VALUE_LABEL","\x26","\x17","\xd9","\xd9"),
	HX_HCSTRING("LABELS","\xff","\xd3","\xff","\xfb"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("SELRANGE","\xe3","\x4b","\xd1","\x85"),
	HX_HCSTRING("INVERSE","\x90","\x1f","\xc5","\xbd"),
	HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b"),
	::String(null())
};

void SliderStyle_obj::__register()
{
	hx::Object *dummy = new SliderStyle_obj;
	SliderStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.SliderStyle","\xf0","\x7c","\xc1","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SliderStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &SliderStyle_obj::__SetStatic;
	__mClass->mMarkFunc = SliderStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SliderStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SliderStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SliderStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SliderStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SliderStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SliderStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_7_boot)
HXDLIN(   7)		HORIZONTAL = wxSL_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_9_boot)
HXDLIN(   9)		VERTICAL = wxSL_VERTICAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_11_boot)
HXDLIN(  11)		AUTOTICKS = wxSL_AUTOTICKS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_13_boot)
HXDLIN(  13)		MIN_MAX_LABELS = wxSL_MIN_MAX_LABELS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_15_boot)
HXDLIN(  15)		VALUE_LABEL = wxSL_VALUE_LABEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_17_boot)
HXDLIN(  17)		LABELS = wxSL_LABELS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_19_boot)
HXDLIN(  19)		LEFT = wxSL_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_21_boot)
HXDLIN(  21)		RIGHT = wxSL_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_23_boot)
HXDLIN(  23)		TOP = wxSL_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_25_boot)
HXDLIN(  25)		BOTTOM = wxSL_BOTTOM;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_27_boot)
HXDLIN(  27)		SELRANGE = wxSL_SELRANGE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_29_boot)
HXDLIN(  29)		INVERSE = wxSL_INVERSE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6dfd9056ad4a39e0_31_boot)
HXDLIN(  31)		DEFAULT = ::wx::widgets::styles::SliderStyle_obj::HORIZONTAL;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
