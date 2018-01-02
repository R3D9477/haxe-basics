// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_hx_widgets_Colour
#include <hx/widgets/Colour.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1ab6f347fa3f1c0_9_new,"hx.widgets.Colour","new",0xafa6bfdb,"hx.widgets.Colour.new","hx/widgets/Colour.hx",9,0x88d99ab3)
HX_LOCAL_STACK_FRAME(_hx_pos_d1ab6f347fa3f1c0_21_createPointer,"hx.widgets.Colour","createPointer",0x9435d05c,"hx.widgets.Colour.createPointer","hx/widgets/Colour.hx",21,0x88d99ab3)
HX_LOCAL_STACK_FRAME(_hx_pos_d1ab6f347fa3f1c0_24_copy,"hx.widgets.Colour","copy",0xfb0357da,"hx.widgets.Colour.copy","hx/widgets/Colour.hx",24,0x88d99ab3)
HX_LOCAL_STACK_FRAME(_hx_pos_d1ab6f347fa3f1c0_30_convertColor,"hx.widgets.Colour","convertColor",0x3d423b95,"hx.widgets.Colour.convertColor","hx/widgets/Colour.hx",30,0x88d99ab3)
namespace hx{
namespace widgets{

void Colour_obj::__construct(hx::Null< int >  __o_colour){
int colour = __o_colour.Default(0);
            	HX_STACKFRAME(&_hx_pos_d1ab6f347fa3f1c0_9_new)
HXDLIN(   9)		this->rgb = colour;
            	}

Dynamic Colour_obj::__CreateEmpty() { return new Colour_obj; }

void *Colour_obj::_hx_vtable = 0;

Dynamic Colour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Colour_obj > _hx_result = new Colour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Colour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5dea7a8b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5dea7a8b;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

::cpp::Pointer<  wxColour > Colour_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_d1ab6f347fa3f1c0_21_createPointer)
HXDLIN(  21)		return ::cpp::Pointer_obj::fromRaw((new wxColour(this->rgb)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Colour_obj,createPointer,return )

 ::hx::widgets::Colour Colour_obj::copy(::cpp::Pointer<  wxColour > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_d1ab6f347fa3f1c0_24_copy)
HXLINE(  25)		int c = ptr->get_ref().GetRGB();
HXDLIN(  25)		 ::hx::widgets::Colour c1 =  ::hx::widgets::Colour_obj::__alloc( HX_CTX ,((int)((int)((int)((int)c & (int)(int)255) << (int)(int)16) | (int)((int)c & (int)(int)65280)) | (int)((int)((int)c & (int)(int)16711680) >> (int)(int)16)));
HXLINE(  26)		return c1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Colour_obj,copy,return )

int Colour_obj::convertColor(int c){
            	HX_STACKFRAME(&_hx_pos_d1ab6f347fa3f1c0_30_convertColor)
HXDLIN(  30)		return ((int)((int)((int)((int)c & (int)(int)255) << (int)(int)16) | (int)((int)c & (int)(int)65280)) | (int)((int)((int)c & (int)(int)16711680) >> (int)(int)16));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Colour_obj,convertColor,return )


hx::ObjectPtr< Colour_obj > Colour_obj::__new(hx::Null< int >  __o_colour) {
	hx::ObjectPtr< Colour_obj > __this = new Colour_obj();
	__this->__construct(__o_colour);
	return __this;
}

hx::ObjectPtr< Colour_obj > Colour_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour) {
	Colour_obj *__this = (Colour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Colour_obj), true, "hx.widgets.Colour"));
	*(void **)__this = Colour_obj::_hx_vtable;
	__this->__construct(__o_colour);
	return __this;
}

Colour_obj::Colour_obj()
{
}

hx::Val Colour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return hx::Val( rgb ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPointer") ) { return hx::Val( createPointer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Colour_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"convertColor") ) { outValue = convertColor_dyn(); return true; }
	}
	return false;
}

hx::Val Colour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { rgb=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Colour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Colour_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Colour_obj,rgb),HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Colour_obj_sStaticStorageInfo = 0;
#endif

static ::String Colour_obj_sMemberFields[] = {
	HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"),
	HX_HCSTRING("createPointer","\x21","\x99","\x64","\x39"),
	::String(null()) };

static void Colour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Colour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Colour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Colour_obj::__mClass,"__mClass");
};

#endif

hx::Class Colour_obj::__mClass;

static ::String Colour_obj_sStaticFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("convertColor","\x70","\x72","\x23","\x7d"),
	::String(null())
};

void Colour_obj::__register()
{
	hx::Object *dummy = new Colour_obj;
	Colour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Colour","\x69","\x36","\x05","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Colour_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Colour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Colour_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Colour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Colour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Colour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Colour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Colour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
