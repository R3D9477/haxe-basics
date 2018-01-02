// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_ScrollBarStyle
#include <wx/widgets/styles/ScrollBarStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ade2adcc437479c0_7_boot,"wx.widgets.styles.ScrollBarStyle","boot",0xb22ad195,"wx.widgets.styles.ScrollBarStyle.boot","wx/widgets/styles/ScrollBarStyle.hx",7,0xbf674794)
HX_LOCAL_STACK_FRAME(_hx_pos_ade2adcc437479c0_9_boot,"wx.widgets.styles.ScrollBarStyle","boot",0xb22ad195,"wx.widgets.styles.ScrollBarStyle.boot","wx/widgets/styles/ScrollBarStyle.hx",9,0xbf674794)
namespace wx{
namespace widgets{
namespace styles{

void ScrollBarStyle_obj::__construct() { }

Dynamic ScrollBarStyle_obj::__CreateEmpty() { return new ScrollBarStyle_obj; }

void *ScrollBarStyle_obj::_hx_vtable = 0;

Dynamic ScrollBarStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollBarStyle_obj > _hx_result = new ScrollBarStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollBarStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ba95a7b;
}

int ScrollBarStyle_obj::HORIZONTAL;

int ScrollBarStyle_obj::VERTICAL;


ScrollBarStyle_obj::ScrollBarStyle_obj()
{
}

bool ScrollBarStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { outValue = ( VERTICAL ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { outValue = ( HORIZONTAL ); return true; }
	}
	return false;
}

bool ScrollBarStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { VERTICAL=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollBarStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ScrollBarStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ScrollBarStyle_obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsInt,(void *) &ScrollBarStyle_obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ScrollBarStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollBarStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScrollBarStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(ScrollBarStyle_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollBarStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollBarStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScrollBarStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(ScrollBarStyle_obj::VERTICAL,"VERTICAL");
};

#endif

hx::Class ScrollBarStyle_obj::__mClass;

static ::String ScrollBarStyle_obj_sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	::String(null())
};

void ScrollBarStyle_obj::__register()
{
	hx::Object *dummy = new ScrollBarStyle_obj;
	ScrollBarStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.ScrollBarStyle","\xeb","\x0d","\x2e","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScrollBarStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &ScrollBarStyle_obj::__SetStatic;
	__mClass->mMarkFunc = ScrollBarStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ScrollBarStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ScrollBarStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollBarStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollBarStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollBarStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollBarStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ade2adcc437479c0_7_boot)
HXDLIN(   7)		HORIZONTAL = wxSB_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ade2adcc437479c0_9_boot)
HXDLIN(   9)		VERTICAL = wxSB_VERTICAL;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
