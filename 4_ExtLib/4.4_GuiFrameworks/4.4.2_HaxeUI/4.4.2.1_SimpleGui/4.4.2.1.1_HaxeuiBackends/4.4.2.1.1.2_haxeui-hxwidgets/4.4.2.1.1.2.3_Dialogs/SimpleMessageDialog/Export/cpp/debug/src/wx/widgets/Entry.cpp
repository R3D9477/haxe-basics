// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_wx_widgets_Entry
#include <wx/widgets/Entry.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f626ff10d2bb31a0_10_start,"wx.widgets.Entry","start",0xbc180bba,"wx.widgets.Entry.start","wx/widgets/Entry.hx",10,0xe08777ba)
HX_LOCAL_STACK_FRAME(_hx_pos_f626ff10d2bb31a0_25_cleanup,"wx.widgets.Entry","cleanup",0x7125297c,"wx.widgets.Entry.cleanup","wx/widgets/Entry.hx",25,0xe08777ba)
namespace wx{
namespace widgets{

void Entry_obj::__construct() { }

Dynamic Entry_obj::__CreateEmpty() { return new Entry_obj; }

void *Entry_obj::_hx_vtable = 0;

Dynamic Entry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Entry_obj > _hx_result = new Entry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Entry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38251224;
}

void Entry_obj::start(::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_f626ff10d2bb31a0_10_start)
HXLINE(  11)		::Array< ::String > args1 = ::Array_obj< ::String >::__new(1)->init(0,::Sys_obj::programPath())->concat(args);
HXLINE(  12)		int argc = args1->length;
HXLINE(  13)		char** argv = new char*[argc];
HXLINE(  15)		{
HXLINE(  15)			int _g1 = (int)0;
HXDLIN(  15)			int _g = argc;
HXDLIN(  15)			while((_g1 < _g)){
HXLINE(  15)				_g1 = (_g1 + (int)1);
HXDLIN(  15)				int i = (_g1 - (int)1);
HXLINE(  16)				const char* this1 = args1->__get(i).__s;
HXDLIN(  16)				const char* arg = this1;
HXLINE(  17)				argv[i] = (char *)arg;
            			}
            		}
HXLINE(  19)		wxEntryStart(argc, argv);
HXLINE(  20)		delete[] argv;
HXLINE(  21)		wxInitAllImageHandlers();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Entry_obj,start,(void))

void Entry_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_f626ff10d2bb31a0_25_cleanup)
HXDLIN(  25)		wxEntryCleanup();;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Entry_obj,cleanup,(void))


Entry_obj::Entry_obj()
{
}

bool Entry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Entry_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Entry_obj_sStaticStorageInfo = 0;
#endif

static void Entry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Entry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entry_obj::__mClass,"__mClass");
};

#endif

hx::Class Entry_obj::__mClass;

static ::String Entry_obj_sStaticFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	::String(null())
};

void Entry_obj::__register()
{
	hx::Object *dummy = new Entry_obj;
	Entry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.Entry","\xc6","\x65","\xae","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entry_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Entry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Entry_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Entry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Entry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Entry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Entry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace wx
} // end namespace widgets
