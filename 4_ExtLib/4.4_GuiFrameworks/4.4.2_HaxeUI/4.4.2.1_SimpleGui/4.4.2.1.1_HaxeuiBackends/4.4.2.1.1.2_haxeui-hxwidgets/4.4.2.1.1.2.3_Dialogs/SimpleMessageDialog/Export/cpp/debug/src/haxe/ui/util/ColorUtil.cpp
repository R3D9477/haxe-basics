// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#include <haxe/ui/util/ColorUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_4_buildColorArray,"haxe.ui.util.ColorUtil","buildColorArray",0xd3eefda1,"haxe.ui.util.ColorUtil.buildColorArray","haxe/ui/util/ColorUtil.hx",4,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_35_parseColor,"haxe.ui.util.ColorUtil","parseColor",0xecbfc9b3,"haxe.ui.util.ColorUtil.parseColor","haxe/ui/util/ColorUtil.hx",35,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_45_color,"haxe.ui.util.ColorUtil","color",0xe879cec0,"haxe.ui.util.ColorUtil.color","haxe/ui/util/ColorUtil.hx",45,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_49_r,"haxe.ui.util.ColorUtil","r",0x09322b4f,"haxe.ui.util.ColorUtil.r","haxe/ui/util/ColorUtil.hx",49,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_53_g,"haxe.ui.util.ColorUtil","g",0x09322b44,"haxe.ui.util.ColorUtil.g","haxe/ui/util/ColorUtil.hx",53,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_57_b,"haxe.ui.util.ColorUtil","b",0x09322b3f,"haxe.ui.util.ColorUtil.b","haxe/ui/util/ColorUtil.hx",57,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void ColorUtil_obj::__construct() { }

Dynamic ColorUtil_obj::__CreateEmpty() { return new ColorUtil_obj; }

void *ColorUtil_obj::_hx_vtable = 0;

Dynamic ColorUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorUtil_obj > _hx_result = new ColorUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x46e4b729;
}

::Array< int > ColorUtil_obj::buildColorArray(int startColor,int endColor,Float size){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_4_buildColorArray)
HXLINE(   5)		::Array< int > array = ::Array_obj< int >::__new(0);
HXLINE(   7)		int r1 = ((int)((int)startColor >> (int)(int)16) & (int)(int)255);
HXLINE(   8)		int g1 = ((int)((int)startColor >> (int)(int)8) & (int)(int)255);
HXLINE(   9)		int b1 = ((int)startColor & (int)(int)255);
HXLINE(  10)		int r2 = ((int)((int)endColor >> (int)(int)16) & (int)(int)255);
HXLINE(  11)		int g2 = ((int)((int)endColor >> (int)(int)8) & (int)(int)255);
HXLINE(  12)		int b2 = ((int)endColor & (int)(int)255);
HXLINE(  13)		int rd = (r2 - r1);
HXLINE(  14)		int gd = (g2 - g1);
HXLINE(  15)		int bd = (b2 - b1);
HXLINE(  16)		Float ri = ((Float)rd / (Float)(size - (int)1));
HXLINE(  17)		Float gi = ((Float)gd / (Float)(size - (int)1));
HXLINE(  18)		Float bi = ((Float)bd / (Float)(size - (int)1));
HXLINE(  20)		Float r = r1;
HXLINE(  21)		Float g = g1;
HXLINE(  22)		Float b = b1;
HXLINE(  23)		{
HXLINE(  23)			int _g1 = (int)0;
HXDLIN(  23)			int _g = size;
HXDLIN(  23)			while((_g1 < _g)){
HXLINE(  23)				_g1 = (_g1 + (int)1);
HXDLIN(  23)				int n = (_g1 - (int)1);
HXLINE(  24)				int c = ((int)::Math_obj::round(r) << (int)(int)16);
HXDLIN(  24)				int c1 = ((int)c | (int)((int)::Math_obj::round(g) << (int)(int)8));
HXDLIN(  24)				int c2 = ((int)c1 | (int)::Math_obj::round(b));
HXLINE(  25)				array->push(c2);
HXLINE(  27)				r = (r + ri);
HXLINE(  28)				g = (g + gi);
HXLINE(  29)				b = (b + bi);
            			}
            		}
HXLINE(  32)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,buildColorArray,return )

int ColorUtil_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_35_parseColor)
HXLINE(  36)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE(  37)			s = s.substring((int)1,s.length);
            		}
            		else {
HXLINE(  38)			if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE(  39)				s = s.substring((int)2,s.length);
            			}
            		}
HXLINE(  41)		return ::Std_obj::parseInt((HX_("0xFF",88,89,15,20) + s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,parseColor,return )

int ColorUtil_obj::color(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_45_color)
HXDLIN(  45)		int _hx_tmp = ((int)::Math_obj::round(r) << (int)(int)16);
HXDLIN(  45)		int _hx_tmp1 = ((int)_hx_tmp | (int)((int)::Math_obj::round(g) << (int)(int)8));
HXDLIN(  45)		return ((int)_hx_tmp1 | (int)::Math_obj::round(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,color,return )

int ColorUtil_obj::r(int c){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_49_r)
HXDLIN(  49)		return ((int)((int)c >> (int)(int)16) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,r,return )

int ColorUtil_obj::g(int c){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_53_g)
HXDLIN(  53)		return ((int)((int)c >> (int)(int)8) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,g,return )

int ColorUtil_obj::b(int c){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_57_b)
HXDLIN(  57)		return ((int)c & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,b,return )


ColorUtil_obj::ColorUtil_obj()
{
}

bool ColorUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { outValue = r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"g") ) { outValue = g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"b") ) { outValue = b_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buildColorArray") ) { outValue = buildColorArray_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ColorUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ColorUtil_obj_sStaticStorageInfo = 0;
#endif

static void ColorUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorUtil_obj::__mClass;

static ::String ColorUtil_obj_sStaticFields[] = {
	HX_HCSTRING("buildColorArray","\x04","\x6a","\xce","\xf1"),
	HX_HCSTRING("parseColor","\x30","\xb8","\x3d","\x74"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	::String(null())
};

void ColorUtil_obj::__register()
{
	hx::Object *dummy = new ColorUtil_obj;
	ColorUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.ColorUtil","\x0b","\x2a","\x8b","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColorUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ColorUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ColorUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
