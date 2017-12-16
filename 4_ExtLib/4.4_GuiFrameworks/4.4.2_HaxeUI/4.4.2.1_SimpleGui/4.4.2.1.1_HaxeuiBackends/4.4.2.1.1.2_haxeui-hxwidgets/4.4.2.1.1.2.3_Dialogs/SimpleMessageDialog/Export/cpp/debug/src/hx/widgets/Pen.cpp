// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_fae0d7f0d9ceb2f8
#define INCLUDED_fae0d7f0d9ceb2f8
#include "wx/pen.h"
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Pen
#include <hx/widgets/Pen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6621012f1fad58d8_9_new,"hx.widgets.Pen","new",0x4b60c18e,"hx.widgets.Pen.new","hx/widgets/Pen.hx",9,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_20_get_colour,"hx.widgets.Pen","get_colour",0xea01e8a7,"hx.widgets.Pen.get_colour","hx/widgets/Pen.hx",20,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_23_set_colour,"hx.widgets.Pen","set_colour",0xed7f871b,"hx.widgets.Pen.set_colour","hx/widgets/Pen.hx",23,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_32_get_width,"hx.widgets.Pen","get_width",0x57bf1a0b,"hx.widgets.Pen.get_width","hx/widgets/Pen.hx",32,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_34_set_width,"hx.widgets.Pen","set_width",0x3b100617,"hx.widgets.Pen.set_width","hx/widgets/Pen.hx",34,0xc2594024)
HX_LOCAL_STACK_FRAME(_hx_pos_6621012f1fad58d8_44_get_penRef,"hx.widgets.Pen","get_penRef",0x5be02a55,"hx.widgets.Pen.get_penRef","hx/widgets/Pen.hx",44,0xc2594024)
namespace hx{
namespace widgets{

void Pen_obj::__construct(hx::Null< int >  __o_colour,hx::Null< int >  __o_width){
int colour = __o_colour.Default(0);
int width = __o_width.Default(1);
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_9_new)
HXLINE(  10)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPen()))->reinterpret();
HXLINE(  11)		this->set_colour(colour);
HXLINE(  12)		this->set_width(width);
            	}

Dynamic Pen_obj::__CreateEmpty() { return new Pen_obj; }

void *Pen_obj::_hx_vtable = 0;

Dynamic Pen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pen_obj > _hx_result = new Pen_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Pen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03ecca10) {
		if (inClassId<=(int)0x014f553a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x014f553a;
		} else {
			return inClassId==(int)0x03ecca10;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int Pen_obj::get_colour(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_20_get_colour)
HXDLIN(  20)		return this->get_penRef()->ptr->GetColour().GetRGB();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_colour,return )

int Pen_obj::set_colour(int value){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_23_set_colour)
HXLINE(  24)		::cpp::Pointer<  wxColour > temp = ::cpp::Pointer_obj::fromRaw((new wxColour(((int)((int)((int)((int)value & (int)(int)255) << (int)(int)16) | (int)((int)value & (int)(int)65280)) | (int)((int)((int)value & (int)(int)16711680) >> (int)(int)16)))));
HXLINE(  25)		 wxPen * _hx_tmp = this->get_penRef()->ptr;
HXDLIN(  25)		(*(_hx_tmp)).SetColour(temp->get_ref());
HXLINE(  26)		temp->destroy();
HXLINE(  27)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,set_colour,return )

int Pen_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_32_get_width)
HXDLIN(  32)		return this->get_penRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_width,return )

int Pen_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_34_set_width)
HXLINE(  35)		this->get_penRef()->ptr->SetWidth(value);
HXLINE(  36)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,set_width,return )

::cpp::Pointer<  wxPen > Pen_obj::get_penRef(){
            	HX_STACKFRAME(&_hx_pos_6621012f1fad58d8_44_get_penRef)
HXDLIN(  44)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,get_penRef,return )


hx::ObjectPtr< Pen_obj > Pen_obj::__new(hx::Null< int >  __o_colour,hx::Null< int >  __o_width) {
	hx::ObjectPtr< Pen_obj > __this = new Pen_obj();
	__this->__construct(__o_colour,__o_width);
	return __this;
}

hx::ObjectPtr< Pen_obj > Pen_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour,hx::Null< int >  __o_width) {
	Pen_obj *__this = (Pen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pen_obj), true, "hx.widgets.Pen"));
	*(void **)__this = Pen_obj::_hx_vtable;
	__this->__construct(__o_colour,__o_width);
	return __this;
}

Pen_obj::Pen_obj()
{
}

void Pen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pen);
	HX_MARK_MEMBER_NAME(penRef,"penRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(penRef,"penRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Pen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_colour() ); }
		if (HX_FIELD_EQ(inName,"penRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_penRef() : penRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colour") ) { return hx::Val( get_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_colour") ) { return hx::Val( set_colour_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_penRef") ) { return hx::Val( get_penRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Pen_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colour(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"penRef") ) { penRef=inValue.Cast< ::cpp::Pointer<  wxPen > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("penRef","\xfa","\x09","\x65","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Pen_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxPen >*/ ,(int)offsetof(Pen_obj,penRef),HX_HCSTRING("penRef","\xfa","\x09","\x65","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Pen_obj_sStaticStorageInfo = 0;
#endif

static ::String Pen_obj_sMemberFields[] = {
	HX_HCSTRING("get_colour","\x15","\x38","\x0e","\xb7"),
	HX_HCSTRING("set_colour","\x89","\xd6","\x8b","\xba"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("penRef","\xfa","\x09","\x65","\x38"),
	HX_HCSTRING("get_penRef","\xc3","\x79","\xec","\x28"),
	::String(null()) };

static void Pen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
};

#endif

hx::Class Pen_obj::__mClass;

void Pen_obj::__register()
{
	hx::Object *dummy = new Pen_obj;
	Pen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Pen","\x9c","\xa2","\xa9","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Pen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
