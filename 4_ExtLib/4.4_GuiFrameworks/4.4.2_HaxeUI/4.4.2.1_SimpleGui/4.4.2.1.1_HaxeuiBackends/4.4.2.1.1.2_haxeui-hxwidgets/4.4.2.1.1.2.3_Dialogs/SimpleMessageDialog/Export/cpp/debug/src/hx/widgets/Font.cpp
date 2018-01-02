// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_782aa7a696219a25
#define INCLUDED_782aa7a696219a25
#include "wx/font.h"
#endif
#ifndef INCLUDED_hx_widgets_Font
#include <hx/widgets/Font.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_wx_widgets__FontFamily_FontFamily_Impl_
#include <wx/widgets/_FontFamily/FontFamily_Impl_.h>
#endif
#ifndef INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_
#include <wx/widgets/_FontStyle/FontStyle_Impl_.h>
#endif
#ifndef INCLUDED_wx_widgets__FontWeight_FontWeight_Impl_
#include <wx/widgets/_FontWeight/FontWeight_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b06986455420577_15_new,"hx.widgets.Font","new",0x30ec819e,"hx.widgets.Font.new","hx/widgets/Font.hx",15,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_34_get_size,"hx.widgets.Font","get_size",0x69746a4c,"hx.widgets.Font.get_size","hx/widgets/Font.hx",34,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_36_set_size,"hx.widgets.Font","set_size",0x17d1c3c0,"hx.widgets.Font.set_size","hx/widgets/Font.hx",36,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_43_get_family,"hx.widgets.Font","get_family",0x28afe1ef,"hx.widgets.Font.get_family","hx/widgets/Font.hx",43,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_45_set_family,"hx.widgets.Font","set_family",0x2c2d8063,"hx.widgets.Font.set_family","hx/widgets/Font.hx",45,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_52_get_style,"hx.widgets.Font","get_style",0xe3ad3546,"hx.widgets.Font.get_style","hx/widgets/Font.hx",52,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_54_set_style,"hx.widgets.Font","set_style",0xc6fe2152,"hx.widgets.Font.set_style","hx/widgets/Font.hx",54,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_61_get_weight,"hx.widgets.Font","get_weight",0x3fb4f3c3,"hx.widgets.Font.get_weight","hx/widgets/Font.hx",61,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_63_set_weight,"hx.widgets.Font","set_weight",0x43329237,"hx.widgets.Font.set_weight","hx/widgets/Font.hx",63,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_70_get_underlined,"hx.widgets.Font","get_underlined",0xf2a659a3,"hx.widgets.Font.get_underlined","hx/widgets/Font.hx",70,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_72_set_underlined,"hx.widgets.Font","set_underlined",0x12c64217,"hx.widgets.Font.set_underlined","hx/widgets/Font.hx",72,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_81_createPointer,"hx.widgets.Font","createPointer",0x160283df,"hx.widgets.Font.createPointer","hx/widgets/Font.hx",81,0xd992b6d0)
HX_LOCAL_STACK_FRAME(_hx_pos_7b06986455420577_88_copy,"hx.widgets.Font","copy",0x96c720b7,"hx.widgets.Font.copy","hx/widgets/Font.hx",88,0xd992b6d0)
namespace hx{
namespace widgets{

void Font_obj::__construct(hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined){
int size = __o_size.Default(-1);
bool underlined = __o_underlined.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_15_new)
HXLINE(  16)		if (hx::IsNull( family )) {
HXLINE(  17)			family = ::wx::widgets::_FontFamily::FontFamily_Impl__obj::DEFAULT;
            		}
HXLINE(  19)		if (hx::IsNull( style )) {
HXLINE(  20)			style = ::wx::widgets::_FontStyle::FontStyle_Impl__obj::NORMAL;
            		}
HXLINE(  22)		if (hx::IsNull( weight )) {
HXLINE(  23)			weight = ::wx::widgets::_FontWeight::FontWeight_Impl__obj::NORMAL;
            		}
HXLINE(  25)		this->_size = size;
HXLINE(  26)		this->_family = family;
HXLINE(  27)		this->_style = style;
HXLINE(  28)		this->_weight = weight;
HXLINE(  29)		this->_underlined = underlined;
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d86b24e) {
		if (inClassId<=(int)0x03ecca10) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ecca10;
		} else {
			return inClassId==(int)0x1d86b24e;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int Font_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_34_get_size)
HXDLIN(  34)		return this->_size;
            	}


int Font_obj::set_size(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_36_set_size)
HXLINE(  37)		this->_size = value;
HXLINE(  38)		return value;
            	}


int Font_obj::get_family(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_43_get_family)
HXDLIN(  43)		return this->_family;
            	}


int Font_obj::set_family(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_45_set_family)
HXLINE(  46)		this->_family = value;
HXLINE(  47)		return value;
            	}


int Font_obj::get_style(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_52_get_style)
HXDLIN(  52)		return this->_style;
            	}


int Font_obj::set_style(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_54_set_style)
HXLINE(  55)		this->_style = value;
HXLINE(  56)		return value;
            	}


int Font_obj::get_weight(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_61_get_weight)
HXDLIN(  61)		return this->_weight;
            	}


int Font_obj::set_weight(int value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_63_set_weight)
HXLINE(  64)		this->_weight = value;
HXLINE(  65)		return value;
            	}


bool Font_obj::get_underlined(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_70_get_underlined)
HXDLIN(  70)		return this->_underlined;
            	}


bool Font_obj::set_underlined(bool value){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_72_set_underlined)
HXLINE(  73)		this->_underlined = value;
HXLINE(  74)		return value;
            	}


::cpp::Pointer<  wxFont > Font_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_7b06986455420577_81_createPointer)
HXDLIN(  81)		return ::cpp::Pointer_obj::fromRaw((new wxFont(this->_size,this->_family,this->_style,this->_weight,this->_underlined)));
            	}


 ::hx::widgets::Font Font_obj::copy( wxFont other){
            	HX_GC_STACKFRAME(&_hx_pos_7b06986455420577_88_copy)
HXDLIN(  88)		int _hx_tmp = other.GetPointSize();
HXDLIN(  88)		int _hx_tmp1 = other.GetFamily();
HXDLIN(  88)		int _hx_tmp2 = other.GetStyle();
HXDLIN(  88)		int _hx_tmp3 = other.GetWeight();
HXDLIN(  88)		return  ::hx::widgets::Font_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,other.GetUnderlined());
            	}



hx::ObjectPtr< Font_obj > Font_obj::__new(hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined) {
	hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(__o_size,family,style,weight,__o_underlined);
	return __this;
}

hx::ObjectPtr< Font_obj > Font_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_size, ::Dynamic family, ::Dynamic style, ::Dynamic weight,hx::Null< bool >  __o_underlined) {
	Font_obj *__this = (Font_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "hx.widgets.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(__o_size,family,style,weight,__o_underlined);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"));
	outFields->push(HX_HCSTRING("_family","\x43","\x71","\x18","\x59"));
	outFields->push(HX_HCSTRING("_style","\x72","\xec","\x04","\x80"));
	outFields->push(HX_HCSTRING("_weight","\x17","\x83","\x1d","\x70"));
	outFields->push(HX_HCSTRING("_underlined","\xf7","\x22","\xab","\x21"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("family","\xa4","\x5f","\xa1","\xea"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("weight","\x78","\x71","\xa6","\x01"));
	outFields->push(HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Font_obj,_size),HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff")},
	{hx::fsInt,(int)offsetof(Font_obj,_family),HX_HCSTRING("_family","\x43","\x71","\x18","\x59")},
	{hx::fsInt,(int)offsetof(Font_obj,_style),HX_HCSTRING("_style","\x72","\xec","\x04","\x80")},
	{hx::fsInt,(int)offsetof(Font_obj,_weight),HX_HCSTRING("_weight","\x17","\x83","\x1d","\x70")},
	{hx::fsBool,(int)offsetof(Font_obj,_underlined),HX_HCSTRING("_underlined","\xf7","\x22","\xab","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Font_obj_sStaticStorageInfo = 0;
#endif

static void Font_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Font_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
};

#endif

hx::Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Object *dummy = new Font_obj;
	Font_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Font","\xac","\x1a","\x30","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Font_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Font_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
