// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_GaugeStyle
#include <wx/widgets/styles/GaugeStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_798769ab0f37223e_7_boot,"wx.widgets.styles.GaugeStyle","boot",0x4a721b88,"wx.widgets.styles.GaugeStyle.boot","wx/widgets/styles/GaugeStyle.hx",7,0x884d5a47)
HX_LOCAL_STACK_FRAME(_hx_pos_798769ab0f37223e_9_boot,"wx.widgets.styles.GaugeStyle","boot",0x4a721b88,"wx.widgets.styles.GaugeStyle.boot","wx/widgets/styles/GaugeStyle.hx",9,0x884d5a47)
HX_LOCAL_STACK_FRAME(_hx_pos_798769ab0f37223e_11_boot,"wx.widgets.styles.GaugeStyle","boot",0x4a721b88,"wx.widgets.styles.GaugeStyle.boot","wx/widgets/styles/GaugeStyle.hx",11,0x884d5a47)
namespace wx{
namespace widgets{
namespace styles{

void GaugeStyle_obj::__construct() { }

Dynamic GaugeStyle_obj::__CreateEmpty() { return new GaugeStyle_obj; }

void *GaugeStyle_obj::_hx_vtable = 0;

Dynamic GaugeStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GaugeStyle_obj > _hx_result = new GaugeStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GaugeStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f87a740;
}

int GaugeStyle_obj::HORIZONTAL;

int GaugeStyle_obj::VERTICAL;

int GaugeStyle_obj::SMOOTH;


GaugeStyle_obj::GaugeStyle_obj()
{
}

bool GaugeStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SMOOTH") ) { outValue = ( SMOOTH ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { outValue = ( VERTICAL ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { outValue = ( HORIZONTAL ); return true; }
	}
	return false;
}

bool GaugeStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SMOOTH") ) { SMOOTH=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"VERTICAL") ) { VERTICAL=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HORIZONTAL") ) { HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GaugeStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GaugeStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GaugeStyle_obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsInt,(void *) &GaugeStyle_obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{hx::fsInt,(void *) &GaugeStyle_obj::SMOOTH,HX_HCSTRING("SMOOTH","\x2e","\xb4","\xed","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GaugeStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GaugeStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GaugeStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(GaugeStyle_obj::VERTICAL,"VERTICAL");
	HX_MARK_MEMBER_NAME(GaugeStyle_obj::SMOOTH,"SMOOTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GaugeStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GaugeStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GaugeStyle_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(GaugeStyle_obj::VERTICAL,"VERTICAL");
	HX_VISIT_MEMBER_NAME(GaugeStyle_obj::SMOOTH,"SMOOTH");
};

#endif

hx::Class GaugeStyle_obj::__mClass;

static ::String GaugeStyle_obj_sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	HX_HCSTRING("SMOOTH","\x2e","\xb4","\xed","\xb9"),
	::String(null())
};

void GaugeStyle_obj::__register()
{
	hx::Object *dummy = new GaugeStyle_obj;
	GaugeStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.GaugeStyle","\xd8","\x08","\x71","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GaugeStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &GaugeStyle_obj::__SetStatic;
	__mClass->mMarkFunc = GaugeStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GaugeStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GaugeStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GaugeStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GaugeStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GaugeStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GaugeStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_798769ab0f37223e_7_boot)
HXDLIN(   7)		HORIZONTAL = wxGA_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_798769ab0f37223e_9_boot)
HXDLIN(   9)		VERTICAL = wxGA_VERTICAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_798769ab0f37223e_11_boot)
HXDLIN(  11)		SMOOTH = wxGA_SMOOTH;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
