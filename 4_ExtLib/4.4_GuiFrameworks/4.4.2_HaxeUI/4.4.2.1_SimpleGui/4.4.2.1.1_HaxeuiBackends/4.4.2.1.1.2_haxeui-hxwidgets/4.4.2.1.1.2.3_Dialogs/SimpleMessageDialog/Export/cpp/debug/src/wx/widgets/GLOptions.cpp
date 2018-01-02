// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_GLOptions
#include <wx/widgets/GLOptions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_9_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",9,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_10_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",10,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_11_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",11,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_12_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",12,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_13_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",13,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_14_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",14,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_15_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",15,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_16_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",16,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_17_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",17,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_18_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",18,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_19_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",19,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_20_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",20,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_21_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",21,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_22_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",22,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_23_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",23,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_24_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",24,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_25_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",25,0xbafffdb3)
HX_LOCAL_STACK_FRAME(_hx_pos_e8d01f37a55a5143_26_boot,"wx.widgets.GLOptions","boot",0x6014ed13,"wx.widgets.GLOptions.boot","wx/widgets/GLOptions.hx",26,0xbafffdb3)
namespace wx{
namespace widgets{

void GLOptions_obj::__construct() { }

Dynamic GLOptions_obj::__CreateEmpty() { return new GLOptions_obj; }

void *GLOptions_obj::_hx_vtable = 0;

Dynamic GLOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLOptions_obj > _hx_result = new GLOptions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x421cd68b;
}

int GLOptions_obj::RGBA;

int GLOptions_obj::BUFFER_SIZE;

int GLOptions_obj::LEVEL;

int GLOptions_obj::DOUBLEBUFFER;

int GLOptions_obj::STEREO;

int GLOptions_obj::AUX_BUFFERS;

int GLOptions_obj::MIN_RED;

int GLOptions_obj::MIN_GREEN;

int GLOptions_obj::MIN_BLUE;

int GLOptions_obj::MIN_ALPHA;

int GLOptions_obj::DEPTH_SIZE;

int GLOptions_obj::STENCIL_SIZE;

int GLOptions_obj::MIN_ACCUM_RED;

int GLOptions_obj::MIN_ACCUM_GREEN;

int GLOptions_obj::MIN_ACCUM_BLUE;

int GLOptions_obj::MIN_ACCUM_ALPHA;

int GLOptions_obj::SAMPLE_BUFFERS;

int GLOptions_obj::SAMPLES;


GLOptions_obj::GLOptions_obj()
{
}

bool GLOptions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { outValue = ( RGBA ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LEVEL") ) { outValue = ( LEVEL ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"STEREO") ) { outValue = ( STEREO ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_RED") ) { outValue = ( MIN_RED ); return true; }
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { outValue = ( SAMPLES ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MIN_BLUE") ) { outValue = ( MIN_BLUE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MIN_GREEN") ) { outValue = ( MIN_GREEN ); return true; }
		if (HX_FIELD_EQ(inName,"MIN_ALPHA") ) { outValue = ( MIN_ALPHA ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEPTH_SIZE") ) { outValue = ( DEPTH_SIZE ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { outValue = ( BUFFER_SIZE ); return true; }
		if (HX_FIELD_EQ(inName,"AUX_BUFFERS") ) { outValue = ( AUX_BUFFERS ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLEBUFFER") ) { outValue = ( DOUBLEBUFFER ); return true; }
		if (HX_FIELD_EQ(inName,"STENCIL_SIZE") ) { outValue = ( STENCIL_SIZE ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_RED") ) { outValue = ( MIN_ACCUM_RED ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_BLUE") ) { outValue = ( MIN_ACCUM_BLUE ); return true; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { outValue = ( SAMPLE_BUFFERS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_GREEN") ) { outValue = ( MIN_ACCUM_GREEN ); return true; }
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_ALPHA") ) { outValue = ( MIN_ACCUM_ALPHA ); return true; }
	}
	return false;
}

bool GLOptions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LEVEL") ) { LEVEL=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"STEREO") ) { STEREO=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_RED") ) { MIN_RED=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MIN_BLUE") ) { MIN_BLUE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MIN_GREEN") ) { MIN_GREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MIN_ALPHA") ) { MIN_ALPHA=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEPTH_SIZE") ) { DEPTH_SIZE=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"AUX_BUFFERS") ) { AUX_BUFFERS=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLEBUFFER") ) { DOUBLEBUFFER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STENCIL_SIZE") ) { STENCIL_SIZE=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_RED") ) { MIN_ACCUM_RED=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_BLUE") ) { MIN_ACCUM_BLUE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_GREEN") ) { MIN_ACCUM_GREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MIN_ACCUM_ALPHA") ) { MIN_ACCUM_ALPHA=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLOptions_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GLOptions_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GLOptions_obj::RGBA,HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GLOptions_obj::BUFFER_SIZE,HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(void *) &GLOptions_obj::LEVEL,HX_HCSTRING("LEVEL","\x64","\x4d","\x51","\xf0")},
	{hx::fsInt,(void *) &GLOptions_obj::DOUBLEBUFFER,HX_HCSTRING("DOUBLEBUFFER","\xd1","\x62","\xcd","\x29")},
	{hx::fsInt,(void *) &GLOptions_obj::STEREO,HX_HCSTRING("STEREO","\x38","\xdb","\x21","\xbb")},
	{hx::fsInt,(void *) &GLOptions_obj::AUX_BUFFERS,HX_HCSTRING("AUX_BUFFERS","\xb8","\xf1","\x4b","\x7f")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_RED,HX_HCSTRING("MIN_RED","\xa4","\x08","\x4d","\xda")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_GREEN,HX_HCSTRING("MIN_GREEN","\xd6","\xdc","\x4b","\x81")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_BLUE,HX_HCSTRING("MIN_BLUE","\xc7","\x7b","\x8c","\x1e")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_ALPHA,HX_HCSTRING("MIN_ALPHA","\x71","\x75","\xf5","\x08")},
	{hx::fsInt,(void *) &GLOptions_obj::DEPTH_SIZE,HX_HCSTRING("DEPTH_SIZE","\xdd","\x44","\x7f","\x27")},
	{hx::fsInt,(void *) &GLOptions_obj::STENCIL_SIZE,HX_HCSTRING("STENCIL_SIZE","\x44","\xb5","\xc3","\xd4")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_ACCUM_RED,HX_HCSTRING("MIN_ACCUM_RED","\x1e","\xd8","\xba","\x54")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_ACCUM_GREEN,HX_HCSTRING("MIN_ACCUM_GREEN","\xd0","\xfe","\x67","\xce")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_ACCUM_BLUE,HX_HCSTRING("MIN_ACCUM_BLUE","\x0d","\x37","\x34","\xc4")},
	{hx::fsInt,(void *) &GLOptions_obj::MIN_ACCUM_ALPHA,HX_HCSTRING("MIN_ACCUM_ALPHA","\x6b","\x97","\x11","\x56")},
	{hx::fsInt,(void *) &GLOptions_obj::SAMPLE_BUFFERS,HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(void *) &GLOptions_obj::SAMPLES,HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GLOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLOptions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLOptions_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GLOptions_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GLOptions_obj::LEVEL,"LEVEL");
	HX_MARK_MEMBER_NAME(GLOptions_obj::DOUBLEBUFFER,"DOUBLEBUFFER");
	HX_MARK_MEMBER_NAME(GLOptions_obj::STEREO,"STEREO");
	HX_MARK_MEMBER_NAME(GLOptions_obj::AUX_BUFFERS,"AUX_BUFFERS");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_RED,"MIN_RED");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_GREEN,"MIN_GREEN");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_BLUE,"MIN_BLUE");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_ALPHA,"MIN_ALPHA");
	HX_MARK_MEMBER_NAME(GLOptions_obj::DEPTH_SIZE,"DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GLOptions_obj::STENCIL_SIZE,"STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_RED,"MIN_ACCUM_RED");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_GREEN,"MIN_ACCUM_GREEN");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_BLUE,"MIN_ACCUM_BLUE");
	HX_MARK_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_ALPHA,"MIN_ACCUM_ALPHA");
	HX_MARK_MEMBER_NAME(GLOptions_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GLOptions_obj::SAMPLES,"SAMPLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLOptions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::LEVEL,"LEVEL");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::DOUBLEBUFFER,"DOUBLEBUFFER");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::STEREO,"STEREO");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::AUX_BUFFERS,"AUX_BUFFERS");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_RED,"MIN_RED");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_GREEN,"MIN_GREEN");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_BLUE,"MIN_BLUE");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_ALPHA,"MIN_ALPHA");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::DEPTH_SIZE,"DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::STENCIL_SIZE,"STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_RED,"MIN_ACCUM_RED");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_GREEN,"MIN_ACCUM_GREEN");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_BLUE,"MIN_ACCUM_BLUE");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::MIN_ACCUM_ALPHA,"MIN_ACCUM_ALPHA");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GLOptions_obj::SAMPLES,"SAMPLES");
};

#endif

hx::Class GLOptions_obj::__mClass;

static ::String GLOptions_obj_sStaticFields[] = {
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("LEVEL","\x64","\x4d","\x51","\xf0"),
	HX_HCSTRING("DOUBLEBUFFER","\xd1","\x62","\xcd","\x29"),
	HX_HCSTRING("STEREO","\x38","\xdb","\x21","\xbb"),
	HX_HCSTRING("AUX_BUFFERS","\xb8","\xf1","\x4b","\x7f"),
	HX_HCSTRING("MIN_RED","\xa4","\x08","\x4d","\xda"),
	HX_HCSTRING("MIN_GREEN","\xd6","\xdc","\x4b","\x81"),
	HX_HCSTRING("MIN_BLUE","\xc7","\x7b","\x8c","\x1e"),
	HX_HCSTRING("MIN_ALPHA","\x71","\x75","\xf5","\x08"),
	HX_HCSTRING("DEPTH_SIZE","\xdd","\x44","\x7f","\x27"),
	HX_HCSTRING("STENCIL_SIZE","\x44","\xb5","\xc3","\xd4"),
	HX_HCSTRING("MIN_ACCUM_RED","\x1e","\xd8","\xba","\x54"),
	HX_HCSTRING("MIN_ACCUM_GREEN","\xd0","\xfe","\x67","\xce"),
	HX_HCSTRING("MIN_ACCUM_BLUE","\x0d","\x37","\x34","\xc4"),
	HX_HCSTRING("MIN_ACCUM_ALPHA","\x6b","\x97","\x11","\x56"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	::String(null())
};

void GLOptions_obj::__register()
{
	hx::Object *dummy = new GLOptions_obj;
	GLOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("wx.widgets.GLOptions","\x2d","\xa3","\x35","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLOptions_obj::__GetStatic;
	__mClass->mSetStaticField = &GLOptions_obj::__SetStatic;
	__mClass->mMarkFunc = GLOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLOptions_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLOptions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_9_boot)
HXDLIN(   9)		RGBA = WX_GL_RGBA;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_10_boot)
HXDLIN(  10)		BUFFER_SIZE = WX_GL_BUFFER_SIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_11_boot)
HXDLIN(  11)		LEVEL = WX_GL_LEVEL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_12_boot)
HXDLIN(  12)		DOUBLEBUFFER = WX_GL_DOUBLEBUFFER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_13_boot)
HXDLIN(  13)		STEREO = WX_GL_STEREO;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_14_boot)
HXDLIN(  14)		AUX_BUFFERS = WX_GL_AUX_BUFFERS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_15_boot)
HXDLIN(  15)		MIN_RED = WX_GL_MIN_RED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_16_boot)
HXDLIN(  16)		MIN_GREEN = WX_GL_MIN_GREEN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_17_boot)
HXDLIN(  17)		MIN_BLUE = WX_GL_MIN_BLUE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_18_boot)
HXDLIN(  18)		MIN_ALPHA = WX_GL_MIN_ALPHA;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_19_boot)
HXDLIN(  19)		DEPTH_SIZE = WX_GL_DEPTH_SIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_20_boot)
HXDLIN(  20)		STENCIL_SIZE = WX_GL_STENCIL_SIZE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_21_boot)
HXDLIN(  21)		MIN_ACCUM_RED = WX_GL_MIN_ACCUM_RED;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_22_boot)
HXDLIN(  22)		MIN_ACCUM_GREEN = WX_GL_MIN_ACCUM_GREEN;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_23_boot)
HXDLIN(  23)		MIN_ACCUM_BLUE = WX_GL_MIN_ACCUM_BLUE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_24_boot)
HXDLIN(  24)		MIN_ACCUM_ALPHA = WX_GL_MIN_ACCUM_ALPHA;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_25_boot)
HXDLIN(  25)		SAMPLE_BUFFERS = WX_GL_SAMPLE_BUFFERS;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8d01f37a55a5143_26_boot)
HXDLIN(  26)		SAMPLES = WX_GL_SAMPLES;
            	}
}

} // end namespace wx
} // end namespace widgets
