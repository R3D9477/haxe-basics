// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#include <wx/widgets/styles/ListCtrlStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_5_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",5,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_6_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",6,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_7_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",7,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_8_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",8,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_9_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",9,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_10_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",10,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_11_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",11,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_12_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",12,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_13_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",13,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_14_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",14,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_15_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",15,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_16_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",16,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_17_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",17,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_18_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",18,0xe55df715)
HX_LOCAL_STACK_FRAME(_hx_pos_dadeb11bd957d5f6_19_boot,"wx.widgets.styles.ListCtrlStyle","boot",0x83be9478,"wx.widgets.styles.ListCtrlStyle.boot","wx/widgets/styles/ListCtrlStyle.hx",19,0xe55df715)
namespace wx{
namespace widgets{
namespace styles{

void ListCtrlStyle_obj::__construct() { }

Dynamic ListCtrlStyle_obj::__CreateEmpty() { return new ListCtrlStyle_obj; }

void *ListCtrlStyle_obj::_hx_vtable = 0;

Dynamic ListCtrlStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListCtrlStyle_obj > _hx_result = new ListCtrlStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListCtrlStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x085e9cbc;
}

int ListCtrlStyle_obj::LIST;

int ListCtrlStyle_obj::REPORT;

int ListCtrlStyle_obj::VIRTUAL;

int ListCtrlStyle_obj::ICON;

int ListCtrlStyle_obj::SMALL_ICON;

int ListCtrlStyle_obj::ALIGN_TOP;

int ListCtrlStyle_obj::ALIGN_LEFT;

int ListCtrlStyle_obj::AUTOARRANGE;

int ListCtrlStyle_obj::EDIT_LABELS;

int ListCtrlStyle_obj::NO_HEADER;

int ListCtrlStyle_obj::SINGLE_SEL;

int ListCtrlStyle_obj::SORT_ASCENDING;

int ListCtrlStyle_obj::SORT_DESCENDING;

int ListCtrlStyle_obj::HRULES;

int ListCtrlStyle_obj::VRULES;


ListCtrlStyle_obj::ListCtrlStyle_obj()
{
}

bool ListCtrlStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LIST") ) { outValue = ( LIST ); return true; }
		if (HX_FIELD_EQ(inName,"ICON") ) { outValue = ( ICON ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPORT") ) { outValue = ( REPORT ); return true; }
		if (HX_FIELD_EQ(inName,"HRULES") ) { outValue = ( HRULES ); return true; }
		if (HX_FIELD_EQ(inName,"VRULES") ) { outValue = ( VRULES ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VIRTUAL") ) { outValue = ( VIRTUAL ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { outValue = ( ALIGN_TOP ); return true; }
		if (HX_FIELD_EQ(inName,"NO_HEADER") ) { outValue = ( NO_HEADER ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SMALL_ICON") ) { outValue = ( SMALL_ICON ); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { outValue = ( ALIGN_LEFT ); return true; }
		if (HX_FIELD_EQ(inName,"SINGLE_SEL") ) { outValue = ( SINGLE_SEL ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOARRANGE") ) { outValue = ( AUTOARRANGE ); return true; }
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { outValue = ( EDIT_LABELS ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SORT_ASCENDING") ) { outValue = ( SORT_ASCENDING ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SORT_DESCENDING") ) { outValue = ( SORT_DESCENDING ); return true; }
	}
	return false;
}

bool ListCtrlStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LIST") ) { LIST=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ICON") ) { ICON=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPORT") ) { REPORT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HRULES") ) { HRULES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"VRULES") ) { VRULES=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VIRTUAL") ) { VIRTUAL=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_TOP") ) { ALIGN_TOP=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NO_HEADER") ) { NO_HEADER=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SMALL_ICON") ) { SMALL_ICON=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SINGLE_SEL") ) { SINGLE_SEL=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOARRANGE") ) { AUTOARRANGE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"EDIT_LABELS") ) { EDIT_LABELS=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SORT_ASCENDING") ) { SORT_ASCENDING=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SORT_DESCENDING") ) { SORT_DESCENDING=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ListCtrlStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ListCtrlStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ListCtrlStyle_obj::LIST,HX_HCSTRING("LIST","\x5e","\xe4","\x73","\x32")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::REPORT,HX_HCSTRING("REPORT","\xb4","\xe8","\x06","\xb9")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::VIRTUAL,HX_HCSTRING("VIRTUAL","\xeb","\x71","\xe5","\x96")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::ICON,HX_HCSTRING("ICON","\x79","\xaf","\x73","\x30")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::SMALL_ICON,HX_HCSTRING("SMALL_ICON","\x51","\xe5","\x93","\xef")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::ALIGN_TOP,HX_HCSTRING("ALIGN_TOP","\x9b","\x8c","\x87","\xf1")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::ALIGN_LEFT,HX_HCSTRING("ALIGN_LEFT","\x21","\x27","\xc2","\x5f")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::AUTOARRANGE,HX_HCSTRING("AUTOARRANGE","\x7d","\x4f","\x3f","\x29")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::EDIT_LABELS,HX_HCSTRING("EDIT_LABELS","\xd4","\x08","\x96","\x25")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::NO_HEADER,HX_HCSTRING("NO_HEADER","\x0b","\xfd","\x18","\x0a")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::SINGLE_SEL,HX_HCSTRING("SINGLE_SEL","\x03","\x73","\x9e","\xd1")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::SORT_ASCENDING,HX_HCSTRING("SORT_ASCENDING","\x57","\x9a","\x57","\x02")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::SORT_DESCENDING,HX_HCSTRING("SORT_DESCENDING","\x79","\x07","\x71","\x27")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::HRULES,HX_HCSTRING("HRULES","\x8f","\x96","\xf6","\x38")},
	{hx::fsInt,(void *) &ListCtrlStyle_obj::VRULES,HX_HCSTRING("VRULES","\xc1","\xa3","\xf5","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ListCtrlStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::LIST,"LIST");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::REPORT,"REPORT");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::VIRTUAL,"VIRTUAL");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ICON,"ICON");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SMALL_ICON,"SMALL_ICON");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::AUTOARRANGE,"AUTOARRANGE");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::NO_HEADER,"NO_HEADER");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SINGLE_SEL,"SINGLE_SEL");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SORT_ASCENDING,"SORT_ASCENDING");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::SORT_DESCENDING,"SORT_DESCENDING");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::HRULES,"HRULES");
	HX_MARK_MEMBER_NAME(ListCtrlStyle_obj::VRULES,"VRULES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListCtrlStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::LIST,"LIST");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::REPORT,"REPORT");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::VIRTUAL,"VIRTUAL");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ICON,"ICON");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SMALL_ICON,"SMALL_ICON");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_TOP,"ALIGN_TOP");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::AUTOARRANGE,"AUTOARRANGE");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::EDIT_LABELS,"EDIT_LABELS");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::NO_HEADER,"NO_HEADER");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SINGLE_SEL,"SINGLE_SEL");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SORT_ASCENDING,"SORT_ASCENDING");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::SORT_DESCENDING,"SORT_DESCENDING");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::HRULES,"HRULES");
	HX_VISIT_MEMBER_NAME(ListCtrlStyle_obj::VRULES,"VRULES");
};

#endif

hx::Class ListCtrlStyle_obj::__mClass;

static ::String ListCtrlStyle_obj_sStaticFields[] = {
	HX_HCSTRING("LIST","\x5e","\xe4","\x73","\x32"),
	HX_HCSTRING("REPORT","\xb4","\xe8","\x06","\xb9"),
	HX_HCSTRING("VIRTUAL","\xeb","\x71","\xe5","\x96"),
	HX_HCSTRING("ICON","\x79","\xaf","\x73","\x30"),
	HX_HCSTRING("SMALL_ICON","\x51","\xe5","\x93","\xef"),
	HX_HCSTRING("ALIGN_TOP","\x9b","\x8c","\x87","\xf1"),
	HX_HCSTRING("ALIGN_LEFT","\x21","\x27","\xc2","\x5f"),
	HX_HCSTRING("AUTOARRANGE","\x7d","\x4f","\x3f","\x29"),
	HX_HCSTRING("EDIT_LABELS","\xd4","\x08","\x96","\x25"),
	HX_HCSTRING("NO_HEADER","\x0b","\xfd","\x18","\x0a"),
	HX_HCSTRING("SINGLE_SEL","\x03","\x73","\x9e","\xd1"),
	HX_HCSTRING("SORT_ASCENDING","\x57","\x9a","\x57","\x02"),
	HX_HCSTRING("SORT_DESCENDING","\x79","\x07","\x71","\x27"),
	HX_HCSTRING("HRULES","\x8f","\x96","\xf6","\x38"),
	HX_HCSTRING("VRULES","\xc1","\xa3","\xf5","\xd1"),
	::String(null())
};

void ListCtrlStyle_obj::__register()
{
	hx::Object *dummy = new ListCtrlStyle_obj;
	ListCtrlStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.ListCtrlStyle","\xe8","\x35","\x57","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListCtrlStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &ListCtrlStyle_obj::__SetStatic;
	__mClass->mMarkFunc = ListCtrlStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ListCtrlStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ListCtrlStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListCtrlStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListCtrlStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListCtrlStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ListCtrlStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_5_boot)
HXDLIN(   5)		LIST = wxLC_LIST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_6_boot)
HXDLIN(   6)		REPORT = wxLC_REPORT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_7_boot)
HXDLIN(   7)		VIRTUAL = wxLC_VIRTUAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_8_boot)
HXDLIN(   8)		ICON = wxLC_ICON;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_9_boot)
HXDLIN(   9)		SMALL_ICON = wxLC_SMALL_ICON;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_10_boot)
HXDLIN(  10)		ALIGN_TOP = wxLC_ALIGN_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_11_boot)
HXDLIN(  11)		ALIGN_LEFT = wxLC_ALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_12_boot)
HXDLIN(  12)		AUTOARRANGE = wxLC_AUTOARRANGE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_13_boot)
HXDLIN(  13)		EDIT_LABELS = wxLC_EDIT_LABELS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_14_boot)
HXDLIN(  14)		NO_HEADER = wxLC_NO_HEADER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_15_boot)
HXDLIN(  15)		SINGLE_SEL = wxLC_SINGLE_SEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_16_boot)
HXDLIN(  16)		SORT_ASCENDING = wxLC_SORT_ASCENDING;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_17_boot)
HXDLIN(  17)		SORT_DESCENDING = wxLC_SORT_DESCENDING;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_18_boot)
HXDLIN(  18)		HRULES = wxLC_HRULES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dadeb11bd957d5f6_19_boot)
HXDLIN(  19)		VRULES = wxLC_VRULES;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
