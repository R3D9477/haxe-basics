// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_5_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",5,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_6_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",6,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_7_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",7,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_8_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",8,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_9_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",9,0xfed35202)
HX_LOCAL_STACK_FRAME(_hx_pos_481aca17b12e44ff_10_boot,"wx.widgets.Defs","boot",0x012134e6,"wx.widgets.Defs.boot","wx/widgets/Defs.hx",10,0xfed35202)
namespace wx{
namespace widgets{

void Defs_obj::__construct() { }

Dynamic Defs_obj::__CreateEmpty() { return new Defs_obj; }

void *Defs_obj::_hx_vtable = 0;

Dynamic Defs_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Defs_obj > _hx_result = new Defs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Defs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x268893d4;
}

int Defs_obj::OK;

int Defs_obj::CANCEL;

int Defs_obj::CLOSE;

int Defs_obj::_hx_YES;

int Defs_obj::_hx_NO;

int Defs_obj::CENTRE;


Defs_obj::Defs_obj()
{
}

bool Defs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { outValue = ( OK ); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { outValue = ( _hx_NO ); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { outValue = ( _hx_YES ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = ( CLOSE ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { outValue = ( CANCEL ); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { outValue = ( CENTRE ); return true; }
	}
	return false;
}

bool Defs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"OK") ) { OK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NO") ) { _hx_NO=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"YES") ) { _hx_YES=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { CENTRE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Defs_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Defs_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Defs_obj::OK,HX_HCSTRING("OK","\x1c","\x45","\x00","\x00")},
	{hx::fsInt,(void *) &Defs_obj::CANCEL,HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a")},
	{hx::fsInt,(void *) &Defs_obj::CLOSE,HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6")},
	{hx::fsInt,(void *) &Defs_obj::_hx_YES,HX_HCSTRING("YES","\x07","\xc5","\x43","\x00")},
	{hx::fsInt,(void *) &Defs_obj::_hx_NO,HX_HCSTRING("NO","\x41","\x44","\x00","\x00")},
	{hx::fsInt,(void *) &Defs_obj::CENTRE,HX_HCSTRING("CENTRE","\x1b","\xdd","\x5d","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Defs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Defs_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(Defs_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Defs_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Defs_obj::_hx_YES,"YES");
	HX_MARK_MEMBER_NAME(Defs_obj::_hx_NO,"NO");
	HX_MARK_MEMBER_NAME(Defs_obj::CENTRE,"CENTRE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Defs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Defs_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(Defs_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Defs_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Defs_obj::_hx_YES,"YES");
	HX_VISIT_MEMBER_NAME(Defs_obj::_hx_NO,"NO");
	HX_VISIT_MEMBER_NAME(Defs_obj::CENTRE,"CENTRE");
};

#endif

hx::Class Defs_obj::__mClass;

static ::String Defs_obj_sStaticFields[] = {
	HX_HCSTRING("OK","\x1c","\x45","\x00","\x00"),
	HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a"),
	HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6"),
	HX_HCSTRING("YES","\x07","\xc5","\x43","\x00"),
	HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),
	HX_HCSTRING("CENTRE","\x1b","\xdd","\x5d","\xb8"),
	::String(null())
};

void Defs_obj::__register()
{
	hx::Object *dummy = new Defs_obj;
	Defs_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.Defs","\x3a","\x6c","\x94","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Defs_obj::__GetStatic;
	__mClass->mSetStaticField = &Defs_obj::__SetStatic;
	__mClass->mMarkFunc = Defs_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Defs_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Defs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Defs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Defs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Defs_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Defs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_5_boot)
HXDLIN(   5)		OK = wxOK;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_6_boot)
HXDLIN(   6)		CANCEL = wxCANCEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_7_boot)
HXDLIN(   7)		CLOSE = wxCLOSE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_8_boot)
HXDLIN(   8)		_hx_YES = wxYES;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_9_boot)
HXDLIN(   9)		_hx_NO = wxNO;
            	}
{
            	HX_STACKFRAME(&_hx_pos_481aca17b12e44ff_10_boot)
HXDLIN(  10)		CENTRE = wxCENTRE;
            	}
}

} // end namespace wx
} // end namespace widgets
