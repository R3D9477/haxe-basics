// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_4_fromString,"haxe.ui.util._Color.Color_Impl_","fromString",0xcecb5716,"haxe.ui.util._Color.Color_Impl_.fromString","haxe/ui/util/Color.hx",4,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_30_toInt,"haxe.ui.util._Color.Color_Impl_","toInt",0x46e11ed9,"haxe.ui.util._Color.Color_Impl_.toInt","haxe/ui/util/Color.hx",30,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_34_or,"haxe.ui.util._Color.Color_Impl_","or",0xccce575e,"haxe.ui.util._Color.Color_Impl_.or","haxe/ui/util/Color.hx",34,0x4a531b56)
namespace haxe{
namespace ui{
namespace util{
namespace _Color{

void Color_Impl__obj::__construct() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return new Color_Impl__obj; }

void *Color_Impl__obj::_hx_vtable = 0;

Dynamic Color_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Color_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d237da3;
}

int Color_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_4_fromString)
HXLINE(   5)		bool _hx_tmp;
HXDLIN(   5)		if (!(::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00)))) {
HXLINE(   5)			_hx_tmp = ::StringTools_obj::startsWith(s,HX_("#",23,00,00,00));
            		}
            		else {
HXLINE(   5)			_hx_tmp = true;
            		}
HXDLIN(   5)		if (_hx_tmp) {
HXLINE(   6)			return ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s.substring((s.length - (int)6),null())));
            		}
HXLINE(   8)		::String _hx_switch_0 = s;
            		if (  (_hx_switch_0==HX_("aqua",3c,d7,73,40)) ){
HXLINE(  14)			return (int)65535;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("black",bf,d5,f1,b4)) ){
HXLINE(   9)			return (int)0;
HXDLIN(   9)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("blue",9a,42,19,41)) ){
HXLINE(  12)			return (int)255;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fuchsia",d7,c5,0f,9f)) ){
HXLINE(  15)			return (int)16711935;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("green",c3,0e,ed,99)) ){
HXLINE(  18)			return (int)32768;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gray",e3,cf,6b,44)) ||  (_hx_switch_0==HX_("grey",5f,d3,6b,44)) ){
HXLINE(  24)			return (int)8421504;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lime",15,17,b3,47)) ){
HXLINE(  11)			return (int)65280;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("maroon",70,87,73,ba)) ){
HXLINE(  17)			return (int)8388608;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("navy",36,7a,ff,48)) ){
HXLINE(  19)			return (int)128;
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("olive",db,82,2d,31)) ){
HXLINE(  20)			return (int)8421376;
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("purple",3c,f6,89,71)) ){
HXLINE(  21)			return (int)8388736;
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("red",51,d9,56,00)) ){
HXLINE(  10)			return (int)16711680;
HXDLIN(  10)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("silver",0d,55,da,b7)) ){
HXLINE(  23)			return (int)12632256;
HXDLIN(  23)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("teal",9c,b8,f9,4c)) ){
HXLINE(  22)			return (int)32896;
HXDLIN(  22)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("white",a9,4a,bd,c9)) ){
HXLINE(  13)			return (int)16777215;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("yellow",74,9f,5c,d0)) ){
HXLINE(  16)			return (int)16776960;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  25)			return (int)0;
            		}
            		_hx_goto_0:;
HXLINE(   8)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromString,return )

int Color_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_30_toInt)
HXDLIN(  30)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,toInt,return )

int Color_Impl__obj::_hx_or(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_34_or)
HXDLIN(  34)		int _hx_tmp = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(a);
HXDLIN(  34)		return ((int)_hx_tmp | (int)::haxe::ui::util::_Color::Color_Impl__obj::toInt(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,_hx_or,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Color_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Color_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Color_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Color_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Color_Impl__obj::__mClass;

static ::String Color_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("or","\x23","\x61","\x00","\x00"),
	::String(null())
};

void Color_Impl__obj::__register()
{
	hx::Object *dummy = new Color_Impl__obj;
	Color_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util._Color.Color_Impl_","\x53","\x07","\xb0","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Color_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Color_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Color_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Color_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Color
