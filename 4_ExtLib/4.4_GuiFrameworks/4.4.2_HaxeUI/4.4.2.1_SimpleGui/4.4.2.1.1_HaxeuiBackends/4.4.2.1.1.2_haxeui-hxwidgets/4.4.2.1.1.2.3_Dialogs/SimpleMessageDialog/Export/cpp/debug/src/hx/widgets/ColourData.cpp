// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_d46be5f2643923f7
#define INCLUDED_d46be5f2643923f7
#include "wx/colourdata.h"
#endif
#ifndef INCLUDED_hx_widgets_Colour
#include <hx/widgets/Colour.h>
#endif
#ifndef INCLUDED_hx_widgets_ColourData
#include <hx/widgets/ColourData.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4abce2b3944cdbf8_9_new,"hx.widgets.ColourData","new",0x5d3757a5,"hx.widgets.ColourData.new","hx/widgets/ColourData.hx",9,0xe867c129)
HX_LOCAL_STACK_FRAME(_hx_pos_4abce2b3944cdbf8_28_createPointer,"hx.widgets.ColourData","createPointer",0xb689c8a6,"hx.widgets.ColourData.createPointer","hx/widgets/ColourData.hx",28,0xe867c129)
HX_LOCAL_STACK_FRAME(_hx_pos_4abce2b3944cdbf8_42_copy,"hx.widgets.ColourData","copy",0x2bf790d0,"hx.widgets.ColourData.copy","hx/widgets/ColourData.hx",42,0xe867c129)
namespace hx{
namespace widgets{

void ColourData_obj::__construct(hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull){
int colour = __o_colour.Default(-1);
bool chooseFull = __o_chooseFull.Default(false);
            	HX_STACKFRAME(&_hx_pos_4abce2b3944cdbf8_9_new)
HXLINE(  10)		if ((colour != (int)-1)) {
HXLINE(  11)			this->colour = ((int)((int)((int)((int)colour & (int)(int)255) << (int)(int)16) | (int)((int)colour & (int)(int)65280)) | (int)((int)((int)colour & (int)(int)16711680) >> (int)(int)16));
            		}
            		else {
HXLINE(  14)			this->colour = (int)-1;
            		}
HXLINE(  16)		this->chooseFull = chooseFull;
            	}

Dynamic ColourData_obj::__CreateEmpty() { return new ColourData_obj; }

void *ColourData_obj::_hx_vtable = 0;

Dynamic ColourData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColourData_obj > _hx_result = new ColourData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ColourData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x432db68d;
}

::cpp::Pointer<  wxColourData > ColourData_obj::createPointer(){
            	HX_GC_STACKFRAME(&_hx_pos_4abce2b3944cdbf8_28_createPointer)
HXLINE(  29)		::cpp::Pointer<  wxColourData > p = ::cpp::Pointer_obj::fromRaw((new wxColourData()));
HXLINE(  30)		if ((this->colour != (int)-1)) {
HXLINE(  31)			::cpp::Pointer<  wxColour > color =  ::hx::widgets::Colour_obj::__alloc( HX_CTX ,this->colour)->createPointer();
HXLINE(  32)			 wxColourData & _hx_tmp = p->get_ref();
HXDLIN(  32)			 wxColour & _hx_tmp1 = color->get_ref();
HXDLIN(  32)			_hx_tmp.SetColour(_hx_tmp1);
HXLINE(  33)			color->destroy();
            		}
HXLINE(  35)		p->get_ref().SetChooseFull(this->chooseFull);
HXLINE(  36)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColourData_obj,createPointer,return )

 ::hx::widgets::ColourData ColourData_obj::copy(::cpp::Pointer<  wxColourData > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_4abce2b3944cdbf8_42_copy)
HXLINE(  43)		 ::hx::widgets::ColourData c =  ::hx::widgets::ColourData_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  44)		c->colour = ptr->get_ref().GetColour().GetRGB();
HXLINE(  45)		c->chooseFull = ptr->get_ref().GetChooseFull();
HXLINE(  46)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColourData_obj,copy,return )


hx::ObjectPtr< ColourData_obj > ColourData_obj::__new(hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull) {
	hx::ObjectPtr< ColourData_obj > __this = new ColourData_obj();
	__this->__construct(__o_colour,__o_chooseFull);
	return __this;
}

hx::ObjectPtr< ColourData_obj > ColourData_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull) {
	ColourData_obj *__this = (ColourData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColourData_obj), false, "hx.widgets.ColourData"));
	*(void **)__this = ColourData_obj::_hx_vtable;
	__this->__construct(__o_colour,__o_chooseFull);
	return __this;
}

ColourData_obj::ColourData_obj()
{
}

hx::Val ColourData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return hx::Val( colour ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chooseFull") ) { return hx::Val( chooseFull ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPointer") ) { return hx::Val( createPointer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColourData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
	}
	return false;
}

hx::Val ColourData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"chooseFull") ) { chooseFull=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColourData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"));
	outFields->push(HX_HCSTRING("chooseFull","\x06","\x28","\xae","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColourData_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColourData_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{hx::fsBool,(int)offsetof(ColourData_obj,chooseFull),HX_HCSTRING("chooseFull","\x06","\x28","\xae","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ColourData_obj_sStaticStorageInfo = 0;
#endif

static ::String ColourData_obj_sMemberFields[] = {
	HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"),
	HX_HCSTRING("chooseFull","\x06","\x28","\xae","\x34"),
	HX_HCSTRING("createPointer","\x21","\x99","\x64","\x39"),
	::String(null()) };

static void ColourData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColourData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColourData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColourData_obj::__mClass,"__mClass");
};

#endif

hx::Class ColourData_obj::__mClass;

static ::String ColourData_obj_sStaticFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null())
};

void ColourData_obj::__register()
{
	hx::Object *dummy = new ColourData_obj;
	ColourData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ColourData","\x33","\xa1","\x27","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColourData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColourData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ColourData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColourData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColourData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColourData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColourData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColourData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
