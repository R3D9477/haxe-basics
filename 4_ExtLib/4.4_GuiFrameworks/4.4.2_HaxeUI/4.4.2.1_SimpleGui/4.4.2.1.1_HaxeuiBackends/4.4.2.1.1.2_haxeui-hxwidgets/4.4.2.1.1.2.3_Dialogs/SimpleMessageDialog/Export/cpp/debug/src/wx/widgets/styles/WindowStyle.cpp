// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_WindowStyle
#include <wx/widgets/styles/WindowStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_6_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",6,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_7_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",7,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_8_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",8,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_9_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",9,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_10_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",10,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_11_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",11,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_12_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",12,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_13_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",13,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_14_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",14,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_15_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",15,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_16_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",16,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_17_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",17,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_18_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",18,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_19_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",19,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_20_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",20,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_21_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",21,0x21735c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_61a4f3a80a52023d_22_boot,"wx.widgets.styles.WindowStyle","boot",0xa79096ff,"wx.widgets.styles.WindowStyle.boot","wx/widgets/styles/WindowStyle.hx",22,0x21735c1c)
namespace wx{
namespace widgets{
namespace styles{

void WindowStyle_obj::__construct() { }

Dynamic WindowStyle_obj::__CreateEmpty() { return new WindowStyle_obj; }

void *WindowStyle_obj::_hx_vtable = 0;

Dynamic WindowStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowStyle_obj > _hx_result = new WindowStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindowStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a287a31;
}

int WindowStyle_obj::BORDER_DEFAULT;

int WindowStyle_obj::BORDER_SIMPLE;

int WindowStyle_obj::BORDER_SUNKEN;

int WindowStyle_obj::BORDER_RAISED;

int WindowStyle_obj::BORDER_STATIC;

int WindowStyle_obj::BORDER_THEME;

int WindowStyle_obj::BORDER_NONE;

int WindowStyle_obj::BORDER_DOUBLE;

int WindowStyle_obj::TRANSPARENT_WINDOW;

int WindowStyle_obj::TAB_TRAVERSAL;

int WindowStyle_obj::WANTS_CHARS;

int WindowStyle_obj::NO_FULL_REPAINT_ON_RESIZE;

int WindowStyle_obj::VSCROLL;

int WindowStyle_obj::HSCROLL;

int WindowStyle_obj::ALWAYS_SHOW_SB;

int WindowStyle_obj::CLIP_CHILDREN;

int WindowStyle_obj::FULL_REPAINT_ON_RESIZE;


WindowStyle_obj::WindowStyle_obj()
{
}

bool WindowStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"VSCROLL") ) { outValue = ( VSCROLL ); return true; }
		if (HX_FIELD_EQ(inName,"HSCROLL") ) { outValue = ( HSCROLL ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BORDER_NONE") ) { outValue = ( BORDER_NONE ); return true; }
		if (HX_FIELD_EQ(inName,"WANTS_CHARS") ) { outValue = ( WANTS_CHARS ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BORDER_THEME") ) { outValue = ( BORDER_THEME ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BORDER_SIMPLE") ) { outValue = ( BORDER_SIMPLE ); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_SUNKEN") ) { outValue = ( BORDER_SUNKEN ); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_RAISED") ) { outValue = ( BORDER_RAISED ); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_STATIC") ) { outValue = ( BORDER_STATIC ); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_DOUBLE") ) { outValue = ( BORDER_DOUBLE ); return true; }
		if (HX_FIELD_EQ(inName,"TAB_TRAVERSAL") ) { outValue = ( TAB_TRAVERSAL ); return true; }
		if (HX_FIELD_EQ(inName,"CLIP_CHILDREN") ) { outValue = ( CLIP_CHILDREN ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BORDER_DEFAULT") ) { outValue = ( BORDER_DEFAULT ); return true; }
		if (HX_FIELD_EQ(inName,"ALWAYS_SHOW_SB") ) { outValue = ( ALWAYS_SHOW_SB ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TRANSPARENT_WINDOW") ) { outValue = ( TRANSPARENT_WINDOW ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"FULL_REPAINT_ON_RESIZE") ) { outValue = ( FULL_REPAINT_ON_RESIZE ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"NO_FULL_REPAINT_ON_RESIZE") ) { outValue = ( NO_FULL_REPAINT_ON_RESIZE ); return true; }
	}
	return false;
}

bool WindowStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"VSCROLL") ) { VSCROLL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HSCROLL") ) { HSCROLL=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BORDER_NONE") ) { BORDER_NONE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"WANTS_CHARS") ) { WANTS_CHARS=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BORDER_THEME") ) { BORDER_THEME=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BORDER_SIMPLE") ) { BORDER_SIMPLE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_SUNKEN") ) { BORDER_SUNKEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_RAISED") ) { BORDER_RAISED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_STATIC") ) { BORDER_STATIC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDER_DOUBLE") ) { BORDER_DOUBLE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_TRAVERSAL") ) { TAB_TRAVERSAL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CLIP_CHILDREN") ) { CLIP_CHILDREN=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BORDER_DEFAULT") ) { BORDER_DEFAULT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ALWAYS_SHOW_SB") ) { ALWAYS_SHOW_SB=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TRANSPARENT_WINDOW") ) { TRANSPARENT_WINDOW=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"FULL_REPAINT_ON_RESIZE") ) { FULL_REPAINT_ON_RESIZE=ioValue.Cast< int >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"NO_FULL_REPAINT_ON_RESIZE") ) { NO_FULL_REPAINT_ON_RESIZE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WindowStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WindowStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_DEFAULT,HX_HCSTRING("BORDER_DEFAULT","\x0e","\xcb","\x31","\xbc")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_SIMPLE,HX_HCSTRING("BORDER_SIMPLE","\x65","\xfe","\x6b","\xa7")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_SUNKEN,HX_HCSTRING("BORDER_SUNKEN","\xbb","\x59","\xe0","\x90")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_RAISED,HX_HCSTRING("BORDER_RAISED","\x2b","\x64","\x39","\xa3")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_STATIC,HX_HCSTRING("BORDER_STATIC","\xe1","\xd6","\xe8","\xf4")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_THEME,HX_HCSTRING("BORDER_THEME","\x16","\x6f","\xcc","\x9d")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_NONE,HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38")},
	{hx::fsInt,(void *) &WindowStyle_obj::BORDER_DOUBLE,HX_HCSTRING("BORDER_DOUBLE","\x44","\x25","\xb8","\x21")},
	{hx::fsInt,(void *) &WindowStyle_obj::TRANSPARENT_WINDOW,HX_HCSTRING("TRANSPARENT_WINDOW","\x9d","\x44","\xaf","\x27")},
	{hx::fsInt,(void *) &WindowStyle_obj::TAB_TRAVERSAL,HX_HCSTRING("TAB_TRAVERSAL","\x14","\x11","\xda","\x95")},
	{hx::fsInt,(void *) &WindowStyle_obj::WANTS_CHARS,HX_HCSTRING("WANTS_CHARS","\xc1","\xef","\x98","\xe3")},
	{hx::fsInt,(void *) &WindowStyle_obj::NO_FULL_REPAINT_ON_RESIZE,HX_HCSTRING("NO_FULL_REPAINT_ON_RESIZE","\x4e","\x1c","\xe0","\x3c")},
	{hx::fsInt,(void *) &WindowStyle_obj::VSCROLL,HX_HCSTRING("VSCROLL","\xe3","\x68","\x1d","\xf2")},
	{hx::fsInt,(void *) &WindowStyle_obj::HSCROLL,HX_HCSTRING("HSCROLL","\x55","\xea","\xf0","\xab")},
	{hx::fsInt,(void *) &WindowStyle_obj::ALWAYS_SHOW_SB,HX_HCSTRING("ALWAYS_SHOW_SB","\x21","\x39","\x29","\xa7")},
	{hx::fsInt,(void *) &WindowStyle_obj::CLIP_CHILDREN,HX_HCSTRING("CLIP_CHILDREN","\xce","\x0f","\x6d","\xae")},
	{hx::fsInt,(void *) &WindowStyle_obj::FULL_REPAINT_ON_RESIZE,HX_HCSTRING("FULL_REPAINT_ON_RESIZE","\xd0","\x78","\x0a","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void WindowStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_DEFAULT,"BORDER_DEFAULT");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_SIMPLE,"BORDER_SIMPLE");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_SUNKEN,"BORDER_SUNKEN");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_RAISED,"BORDER_RAISED");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_STATIC,"BORDER_STATIC");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_THEME,"BORDER_THEME");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_NONE,"BORDER_NONE");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::BORDER_DOUBLE,"BORDER_DOUBLE");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::TRANSPARENT_WINDOW,"TRANSPARENT_WINDOW");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::TAB_TRAVERSAL,"TAB_TRAVERSAL");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::WANTS_CHARS,"WANTS_CHARS");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::NO_FULL_REPAINT_ON_RESIZE,"NO_FULL_REPAINT_ON_RESIZE");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::VSCROLL,"VSCROLL");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::HSCROLL,"HSCROLL");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::ALWAYS_SHOW_SB,"ALWAYS_SHOW_SB");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::CLIP_CHILDREN,"CLIP_CHILDREN");
	HX_MARK_MEMBER_NAME(WindowStyle_obj::FULL_REPAINT_ON_RESIZE,"FULL_REPAINT_ON_RESIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_DEFAULT,"BORDER_DEFAULT");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_SIMPLE,"BORDER_SIMPLE");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_SUNKEN,"BORDER_SUNKEN");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_RAISED,"BORDER_RAISED");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_STATIC,"BORDER_STATIC");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_THEME,"BORDER_THEME");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_NONE,"BORDER_NONE");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::BORDER_DOUBLE,"BORDER_DOUBLE");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::TRANSPARENT_WINDOW,"TRANSPARENT_WINDOW");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::TAB_TRAVERSAL,"TAB_TRAVERSAL");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::WANTS_CHARS,"WANTS_CHARS");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::NO_FULL_REPAINT_ON_RESIZE,"NO_FULL_REPAINT_ON_RESIZE");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::VSCROLL,"VSCROLL");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::HSCROLL,"HSCROLL");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::ALWAYS_SHOW_SB,"ALWAYS_SHOW_SB");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::CLIP_CHILDREN,"CLIP_CHILDREN");
	HX_VISIT_MEMBER_NAME(WindowStyle_obj::FULL_REPAINT_ON_RESIZE,"FULL_REPAINT_ON_RESIZE");
};

#endif

hx::Class WindowStyle_obj::__mClass;

static ::String WindowStyle_obj_sStaticFields[] = {
	HX_HCSTRING("BORDER_DEFAULT","\x0e","\xcb","\x31","\xbc"),
	HX_HCSTRING("BORDER_SIMPLE","\x65","\xfe","\x6b","\xa7"),
	HX_HCSTRING("BORDER_SUNKEN","\xbb","\x59","\xe0","\x90"),
	HX_HCSTRING("BORDER_RAISED","\x2b","\x64","\x39","\xa3"),
	HX_HCSTRING("BORDER_STATIC","\xe1","\xd6","\xe8","\xf4"),
	HX_HCSTRING("BORDER_THEME","\x16","\x6f","\xcc","\x9d"),
	HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38"),
	HX_HCSTRING("BORDER_DOUBLE","\x44","\x25","\xb8","\x21"),
	HX_HCSTRING("TRANSPARENT_WINDOW","\x9d","\x44","\xaf","\x27"),
	HX_HCSTRING("TAB_TRAVERSAL","\x14","\x11","\xda","\x95"),
	HX_HCSTRING("WANTS_CHARS","\xc1","\xef","\x98","\xe3"),
	HX_HCSTRING("NO_FULL_REPAINT_ON_RESIZE","\x4e","\x1c","\xe0","\x3c"),
	HX_HCSTRING("VSCROLL","\xe3","\x68","\x1d","\xf2"),
	HX_HCSTRING("HSCROLL","\x55","\xea","\xf0","\xab"),
	HX_HCSTRING("ALWAYS_SHOW_SB","\x21","\x39","\x29","\xa7"),
	HX_HCSTRING("CLIP_CHILDREN","\xce","\x0f","\x6d","\xae"),
	HX_HCSTRING("FULL_REPAINT_ON_RESIZE","\xd0","\x78","\x0a","\xc3"),
	::String(null())
};

void WindowStyle_obj::__register()
{
	hx::Object *dummy = new WindowStyle_obj;
	WindowStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.WindowStyle","\xc1","\x40","\xb2","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindowStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &WindowStyle_obj::__SetStatic;
	__mClass->mMarkFunc = WindowStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WindowStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WindowStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WindowStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_6_boot)
HXDLIN(   6)		BORDER_DEFAULT = wxBORDER_DEFAULT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_7_boot)
HXDLIN(   7)		BORDER_SIMPLE = wxBORDER_SIMPLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_8_boot)
HXDLIN(   8)		BORDER_SUNKEN = wxBORDER_SUNKEN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_9_boot)
HXDLIN(   9)		BORDER_RAISED = wxBORDER_RAISED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_10_boot)
HXDLIN(  10)		BORDER_STATIC = wxBORDER_STATIC;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_11_boot)
HXDLIN(  11)		BORDER_THEME = wxBORDER_THEME;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_12_boot)
HXDLIN(  12)		BORDER_NONE = wxBORDER_NONE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_13_boot)
HXDLIN(  13)		BORDER_DOUBLE = wxBORDER_DOUBLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_14_boot)
HXDLIN(  14)		TRANSPARENT_WINDOW = wxTRANSPARENT_WINDOW;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_15_boot)
HXDLIN(  15)		TAB_TRAVERSAL = wxTAB_TRAVERSAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_16_boot)
HXDLIN(  16)		WANTS_CHARS = wxWANTS_CHARS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_17_boot)
HXDLIN(  17)		NO_FULL_REPAINT_ON_RESIZE = wxNO_FULL_REPAINT_ON_RESIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_18_boot)
HXDLIN(  18)		VSCROLL = wxVSCROLL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_19_boot)
HXDLIN(  19)		HSCROLL = wxHSCROLL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_20_boot)
HXDLIN(  20)		ALWAYS_SHOW_SB = wxALWAYS_SHOW_SB;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_21_boot)
HXDLIN(  21)		CLIP_CHILDREN = wxCLIP_CHILDREN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_61a4f3a80a52023d_22_boot)
HXDLIN(  22)		FULL_REPAINT_ON_RESIZE = wxFULL_REPAINT_ON_RESIZE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
