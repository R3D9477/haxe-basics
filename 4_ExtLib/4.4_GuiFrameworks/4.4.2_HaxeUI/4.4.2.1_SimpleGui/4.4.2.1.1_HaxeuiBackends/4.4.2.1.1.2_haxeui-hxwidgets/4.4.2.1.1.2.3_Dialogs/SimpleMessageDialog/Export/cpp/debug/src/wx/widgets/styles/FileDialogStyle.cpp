// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_styles_FileDialogStyle
#include <wx/widgets/styles/FileDialogStyle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_10_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",10,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_12_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",12,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_14_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",14,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_16_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",16,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_23_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",23,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_25_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",25,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_27_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",27,0x0d3d8410)
HX_LOCAL_STACK_FRAME(_hx_pos_e778c7b4cbf25788_29_boot,"wx.widgets.styles.FileDialogStyle","boot",0xb9149873,"wx.widgets.styles.FileDialogStyle.boot","wx/widgets/styles/FileDialogStyle.hx",29,0x0d3d8410)
namespace wx{
namespace widgets{
namespace styles{

void FileDialogStyle_obj::__construct() { }

Dynamic FileDialogStyle_obj::__CreateEmpty() { return new FileDialogStyle_obj; }

void *FileDialogStyle_obj::_hx_vtable = 0;

Dynamic FileDialogStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileDialogStyle_obj > _hx_result = new FileDialogStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileDialogStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f7d653d;
}

int FileDialogStyle_obj::DEFAULT_STYLE;

int FileDialogStyle_obj::OPEN;

int FileDialogStyle_obj::SAVE;

int FileDialogStyle_obj::OVERWRITE_PROMPT;

int FileDialogStyle_obj::FILE_MUST_EXIST;

int FileDialogStyle_obj::MULTIPLE;

int FileDialogStyle_obj::CHANGE_DIR;

int FileDialogStyle_obj::PREVIEW;


FileDialogStyle_obj::FileDialogStyle_obj()
{
}

bool FileDialogStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { outValue = ( OPEN ); return true; }
		if (HX_FIELD_EQ(inName,"SAVE") ) { outValue = ( SAVE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PREVIEW") ) { outValue = ( PREVIEW ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MULTIPLE") ) { outValue = ( MULTIPLE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CHANGE_DIR") ) { outValue = ( CHANGE_DIR ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { outValue = ( DEFAULT_STYLE ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FILE_MUST_EXIST") ) { outValue = ( FILE_MUST_EXIST ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OVERWRITE_PROMPT") ) { outValue = ( OVERWRITE_PROMPT ); return true; }
	}
	return false;
}

bool FileDialogStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SAVE") ) { SAVE=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PREVIEW") ) { PREVIEW=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MULTIPLE") ) { MULTIPLE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CHANGE_DIR") ) { CHANGE_DIR=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DEFAULT_STYLE") ) { DEFAULT_STYLE=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FILE_MUST_EXIST") ) { FILE_MUST_EXIST=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OVERWRITE_PROMPT") ) { OVERWRITE_PROMPT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FileDialogStyle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FileDialogStyle_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FileDialogStyle_obj::DEFAULT_STYLE,HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::OPEN,HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::SAVE,HX_HCSTRING("SAVE","\x3d","\x53","\x0e","\x37")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::OVERWRITE_PROMPT,HX_HCSTRING("OVERWRITE_PROMPT","\xb8","\x17","\x6e","\x41")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::FILE_MUST_EXIST,HX_HCSTRING("FILE_MUST_EXIST","\xc4","\xb4","\x65","\x82")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::MULTIPLE,HX_HCSTRING("MULTIPLE","\x10","\x72","\x12","\xf4")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::CHANGE_DIR,HX_HCSTRING("CHANGE_DIR","\x9e","\xd3","\xb7","\x35")},
	{hx::fsInt,(void *) &FileDialogStyle_obj::PREVIEW,HX_HCSTRING("PREVIEW","\xe8","\xb3","\xae","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FileDialogStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::SAVE,"SAVE");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::OVERWRITE_PROMPT,"OVERWRITE_PROMPT");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::FILE_MUST_EXIST,"FILE_MUST_EXIST");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::MULTIPLE,"MULTIPLE");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::CHANGE_DIR,"CHANGE_DIR");
	HX_MARK_MEMBER_NAME(FileDialogStyle_obj::PREVIEW,"PREVIEW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileDialogStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::DEFAULT_STYLE,"DEFAULT_STYLE");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::SAVE,"SAVE");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::OVERWRITE_PROMPT,"OVERWRITE_PROMPT");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::FILE_MUST_EXIST,"FILE_MUST_EXIST");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::MULTIPLE,"MULTIPLE");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::CHANGE_DIR,"CHANGE_DIR");
	HX_VISIT_MEMBER_NAME(FileDialogStyle_obj::PREVIEW,"PREVIEW");
};

#endif

hx::Class FileDialogStyle_obj::__mClass;

static ::String FileDialogStyle_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_STYLE","\xb3","\x7f","\x93","\xf7"),
	HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34"),
	HX_HCSTRING("SAVE","\x3d","\x53","\x0e","\x37"),
	HX_HCSTRING("OVERWRITE_PROMPT","\xb8","\x17","\x6e","\x41"),
	HX_HCSTRING("FILE_MUST_EXIST","\xc4","\xb4","\x65","\x82"),
	HX_HCSTRING("MULTIPLE","\x10","\x72","\x12","\xf4"),
	HX_HCSTRING("CHANGE_DIR","\x9e","\xd3","\xb7","\x35"),
	HX_HCSTRING("PREVIEW","\xe8","\xb3","\xae","\xbb"),
	::String(null())
};

void FileDialogStyle_obj::__register()
{
	hx::Object *dummy = new FileDialogStyle_obj;
	FileDialogStyle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.styles.FileDialogStyle","\xcd","\xb3","\x15","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileDialogStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &FileDialogStyle_obj::__SetStatic;
	__mClass->mMarkFunc = FileDialogStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FileDialogStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileDialogStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileDialogStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileDialogStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileDialogStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FileDialogStyle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_10_boot)
HXDLIN(  10)		DEFAULT_STYLE = wxFD_DEFAULT_STYLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_12_boot)
HXDLIN(  12)		OPEN = wxFD_OPEN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_14_boot)
HXDLIN(  14)		SAVE = wxFD_SAVE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_16_boot)
HXDLIN(  16)		OVERWRITE_PROMPT = wxFD_OVERWRITE_PROMPT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_23_boot)
HXDLIN(  23)		FILE_MUST_EXIST = wxFD_FILE_MUST_EXIST;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_25_boot)
HXDLIN(  25)		MULTIPLE = wxFD_MULTIPLE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_27_boot)
HXDLIN(  27)		CHANGE_DIR = wxFD_CHANGE_DIR;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e778c7b4cbf25788_29_boot)
HXDLIN(  29)		PREVIEW = wxFD_PREVIEW;
            	}
}

} // end namespace wx
} // end namespace widgets
} // end namespace styles
