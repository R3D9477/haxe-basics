// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_ComboBoxStyle
#include <wx/widgets/styles/ComboBoxStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f18c583550f01a6d_5_boot,"wx.widgets.styles.ComboBoxStyle","boot",0xe68077ac,"wx.widgets.styles.ComboBoxStyle.boot","wx/widgets/styles/ComboBoxStyle.hx",5,0xaee0e549)
HX_LOCAL_STACK_FRAME(_hx_pos_f18c583550f01a6d_6_boot,"wx.widgets.styles.ComboBoxStyle","boot",0xe68077ac,"wx.widgets.styles.ComboBoxStyle.boot","wx/widgets/styles/ComboBoxStyle.hx",6,0xaee0e549)
HX_LOCAL_STACK_FRAME(_hx_pos_f18c583550f01a6d_7_boot,"wx.widgets.styles.ComboBoxStyle","boot",0xe68077ac,"wx.widgets.styles.ComboBoxStyle.boot","wx/widgets/styles/ComboBoxStyle.hx",7,0xaee0e549)
HX_LOCAL_STACK_FRAME(_hx_pos_f18c583550f01a6d_8_boot,"wx.widgets.styles.ComboBoxStyle","boot",0xe68077ac,"wx.widgets.styles.ComboBoxStyle.boot","wx/widgets/styles/ComboBoxStyle.hx",8,0xaee0e549)
HX_LOCAL_STACK_FRAME(_hx_pos_f18c583550f01a6d_9_boot,"wx.widgets.styles.ComboBoxStyle","boot",0xe68077ac,"wx.widgets.styles.ComboBoxStyle.boot","wx/widgets/styles/ComboBoxStyle.hx",9,0xaee0e549)
namespace wx{
namespace widgets{
namespace styles{

void ComboBoxStyle_obj::__construct() { }

Dynamic ComboBoxStyle_obj::__CreateEmpty() { return new ComboBoxStyle_obj; }

void *ComboBoxStyle_obj::_hx_vtable = 0;

Dynamic ComboBoxStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComboBoxStyle_obj > _hx_result = new ComboBoxStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComboBoxStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a4b776c;
}

int ComboBoxStyle_obj::SIMPLE;

int ComboBoxStyle_obj::DROPDOWN;

int ComboBoxStyle_obj::READONLY;

int ComboBoxStyle_obj::SORT;

int ComboBoxStyle_obj::PROCESS_ENTER;


ComboBoxStyle_obj::ComboBoxStyle_obj()
{
}

bool ComboBoxStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SORT") ) { outValue = ( SORT ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SIMPLE") ) { outValue = ( SIMPLE ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DROPDOWN") ) { outValue = ( DROPDOWN ); return true; }
		if (HX_FIELD_EQ(inName,"READONLY") ) { outValue = ( READONLY ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PROCESS_ENTER") ) { outValue = ( PROCESS_ENTER ); return true; }
	}
	return false;
}

bool ComboBoxStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SORT") ) { SORT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SIMPLE") ) { SIMPLE=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DROPDOWN") ) { DROPDOWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"READONLY") ) { READONLY=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PROCESS_ENTER") ) { PROCESS_ENTER=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ComboBoxStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ComboBoxStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ComboBoxStyle_obj::SIMPLE,HX_HCSTRING("SIMPLE","\x32","\xb0","\x01","\x6b")},
	{hx::fsInt,(void *) &ComboBoxStyle_obj::DROPDOWN,HX_HCSTRING("DROPDOWN","\x11","\x04","\xb5","\x56")},
	{hx::fsInt,(void *) &ComboBoxStyle_obj::READONLY,HX_HCSTRING("READONLY","\xc2","\xc3","\x56","\xe0")},
	{hx::fsInt,(void *) &ComboBoxStyle_obj::SORT,HX_HCSTRING("SORT","\x5e","\xef","\x18","\x37")},
	{hx::fsInt,(void *) &ComboBoxStyle_obj::PROCESS_ENTER,HX_HCSTRING("PROCESS_ENTER","\xc8","\x87","\xd6","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ComboBoxStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::SIMPLE,"SIMPLE");
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::DROPDOWN,"DROPDOWN");
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::READONLY,"READONLY");
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::SORT,"SORT");
	HX_MARK_MEMBER_NAME(ComboBoxStyle_obj::PROCESS_ENTER,"PROCESS_ENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComboBoxStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::SIMPLE,"SIMPLE");
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::DROPDOWN,"DROPDOWN");
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::READONLY,"READONLY");
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::SORT,"SORT");
	HX_VISIT_MEMBER_NAME(ComboBoxStyle_obj::PROCESS_ENTER,"PROCESS_ENTER");
};

#endif

hx::Class ComboBoxStyle_obj::__mClass;

static ::String ComboBoxStyle_obj_sStaticFields[] = {
	HX_HCSTRING("SIMPLE","\x32","\xb0","\x01","\x6b"),
	HX_HCSTRING("DROPDOWN","\x11","\x04","\xb5","\x56"),
	HX_HCSTRING("READONLY","\xc2","\xc3","\x56","\xe0"),
	HX_HCSTRING("SORT","\x5e","\xef","\x18","\x37"),
	HX_HCSTRING("PROCESS_ENTER","\xc8","\x87","\xd6","\xbf"),
	::String(null())
};

void ComboBoxStyle_obj::__register()
{
	hx::Object *dummy = new ComboBoxStyle_obj;
	ComboBoxStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.ComboBoxStyle","\x34","\x1f","\xc8","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComboBoxStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &ComboBoxStyle_obj::__SetStatic;
	__mClass->mMarkFunc = ComboBoxStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ComboBoxStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ComboBoxStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComboBoxStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComboBoxStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComboBoxStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComboBoxStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f18c583550f01a6d_5_boot)
HXDLIN(   5)		SIMPLE = wxCB_SIMPLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f18c583550f01a6d_6_boot)
HXDLIN(   6)		DROPDOWN = wxCB_DROPDOWN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f18c583550f01a6d_7_boot)
HXDLIN(   7)		READONLY = wxCB_READONLY;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f18c583550f01a6d_8_boot)
HXDLIN(   8)		SORT = wxCB_SORT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f18c583550f01a6d_9_boot)
HXDLIN(   9)		PROCESS_ENTER = wxTE_PROCESS_ENTER;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
