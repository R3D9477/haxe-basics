// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_RadioButtonStyle
#include <wx/widgets/styles/RadioButtonStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5320d85c53d4b467_7_boot,"wx.widgets.styles.RadioButtonStyle","boot",0x036845dc,"wx.widgets.styles.RadioButtonStyle.boot","wx/widgets/styles/RadioButtonStyle.hx",7,0x0b6d465b)
HX_LOCAL_STACK_FRAME(_hx_pos_5320d85c53d4b467_11_boot,"wx.widgets.styles.RadioButtonStyle","boot",0x036845dc,"wx.widgets.styles.RadioButtonStyle.boot","wx/widgets/styles/RadioButtonStyle.hx",11,0x0b6d465b)
namespace wx{
namespace widgets{
namespace styles{

void RadioButtonStyle_obj::__construct() { }

Dynamic RadioButtonStyle_obj::__CreateEmpty() { return new RadioButtonStyle_obj; }

void *RadioButtonStyle_obj::_hx_vtable = 0;

Dynamic RadioButtonStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RadioButtonStyle_obj > _hx_result = new RadioButtonStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RadioButtonStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67a68f94;
}

int RadioButtonStyle_obj::GROUP;

int RadioButtonStyle_obj::SINGLE;


RadioButtonStyle_obj::RadioButtonStyle_obj()
{
}

bool RadioButtonStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"GROUP") ) { outValue = ( GROUP ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SINGLE") ) { outValue = ( SINGLE ); return true; }
	}
	return false;
}

bool RadioButtonStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"GROUP") ) { GROUP=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SINGLE") ) { SINGLE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RadioButtonStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo RadioButtonStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &RadioButtonStyle_obj::GROUP,HX_HCSTRING("GROUP","\x1f","\xeb","\xe2","\x17")},
	{hx::fsInt,(void *) &RadioButtonStyle_obj::SINGLE,HX_HCSTRING("SINGLE","\x88","\x12","\xa4","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void RadioButtonStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RadioButtonStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RadioButtonStyle_obj::GROUP,"GROUP");
	HX_MARK_MEMBER_NAME(RadioButtonStyle_obj::SINGLE,"SINGLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RadioButtonStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RadioButtonStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RadioButtonStyle_obj::GROUP,"GROUP");
	HX_VISIT_MEMBER_NAME(RadioButtonStyle_obj::SINGLE,"SINGLE");
};

#endif

hx::Class RadioButtonStyle_obj::__mClass;

static ::String RadioButtonStyle_obj_sStaticFields[] = {
	HX_HCSTRING("GROUP","\x1f","\xeb","\xe2","\x17"),
	HX_HCSTRING("SINGLE","\x88","\x12","\xa4","\x6b"),
	::String(null())
};

void RadioButtonStyle_obj::__register()
{
	hx::Object *dummy = new RadioButtonStyle_obj;
	RadioButtonStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.RadioButtonStyle","\x04","\xff","\x52","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RadioButtonStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &RadioButtonStyle_obj::__SetStatic;
	__mClass->mMarkFunc = RadioButtonStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RadioButtonStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RadioButtonStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RadioButtonStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RadioButtonStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RadioButtonStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RadioButtonStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5320d85c53d4b467_7_boot)
HXDLIN(   7)		GROUP = wxRB_GROUP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5320d85c53d4b467_11_boot)
HXDLIN(  11)		SINGLE = wxRB_SINGLE;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
