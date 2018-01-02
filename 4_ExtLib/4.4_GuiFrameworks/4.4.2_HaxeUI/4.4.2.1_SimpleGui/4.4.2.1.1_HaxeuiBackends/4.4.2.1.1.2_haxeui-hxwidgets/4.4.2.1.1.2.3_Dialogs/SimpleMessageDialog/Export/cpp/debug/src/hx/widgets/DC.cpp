// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
#ifndef INCLUDED_e91341a8faf5e3a2
#define INCLUDED_e91341a8faf5e3a2
#include "wx/dcclient.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_fae0d7f0d9ceb2f8
#define INCLUDED_fae0d7f0d9ceb2f8
#include "wx/pen.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_Brush
#include <hx/widgets/Brush.h>
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_430522e7e40ac393_9_new,"hx.widgets.DC","new",0x79c301ee,"hx.widgets.DC.new","hx/widgets/DC.hx",9,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_13_clear,"hx.widgets.DC","clear",0x6124a29b,"hx.widgets.DC.clear","hx/widgets/DC.hx",13,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_17_drawLine,"hx.widgets.DC","drawLine",0x93a92dca,"hx.widgets.DC.drawLine","hx/widgets/DC.hx",17,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_22_setPen,"hx.widgets.DC","setPen",0x06ae9d89,"hx.widgets.DC.setPen","hx/widgets/DC.hx",22,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_27_setBrush,"hx.widgets.DC","setBrush",0xfeb92d2a,"hx.widgets.DC.setBrush","hx/widgets/DC.hx",27,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_30_drawText,"hx.widgets.DC","drawText",0x98efe283,"hx.widgets.DC.drawText","hx/widgets/DC.hx",30,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_36_drawRoundedRectangle,"hx.widgets.DC","drawRoundedRectangle",0x1b91c518,"hx.widgets.DC.drawRoundedRectangle","hx/widgets/DC.hx",36,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_40_drawCircle,"hx.widgets.DC","drawCircle",0x1c152966,"hx.widgets.DC.drawCircle","hx/widgets/DC.hx",40,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_45_set_background,"hx.widgets.DC","set_background",0x874e41dd,"hx.widgets.DC.set_background","hx/widgets/DC.hx",45,0x88dcc500)
HX_LOCAL_STACK_FRAME(_hx_pos_430522e7e40ac393_55_get_dcRef,"hx.widgets.DC","get_dcRef",0x7cbbdf79,"hx.widgets.DC.get_dcRef","hx/widgets/DC.hx",55,0x88dcc500)
namespace hx{
namespace widgets{

void DC_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_9_new)
            	}

Dynamic DC_obj::__CreateEmpty() { return new DC_obj; }

void *DC_obj::_hx_vtable = 0;

Dynamic DC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DC_obj > _hx_result = new DC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e905e56) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6e905e56;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

void DC_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_13_clear)
HXDLIN(  13)		this->get_dcRef()->ptr->Clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clear,(void))

void DC_obj::drawLine(int x1,int y1,int x2,int y2){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_17_drawLine)
HXDLIN(  17)		this->get_dcRef()->ptr->DrawLine(x1,y1,x2,y2);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DC_obj,drawLine,(void))

void DC_obj::setPen( ::hx::widgets::Pen pen){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_22_setPen)
HXDLIN(  22)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  22)		(*(_hx_tmp)).SetPen(pen->get_penRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,setPen,(void))

void DC_obj::setBrush( ::hx::widgets::Brush brush){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_27_setBrush)
HXDLIN(  27)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  27)		(*(_hx_tmp)).SetBrush(brush->get_brushRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,setBrush,(void))

void DC_obj::drawText(::String text,int x,int y){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_30_drawText)
HXLINE(  31)		const char* this1 = text.__s;
HXDLIN(  31)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  32)		 wxString tmp = str;
HXDLIN(  32)		this->get_dcRef()->ptr->DrawText(tmp,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,drawText,(void))

void DC_obj::drawRoundedRectangle(int x,int y,int width,int height,Float radius){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_36_drawRoundedRectangle)
HXDLIN(  36)		this->get_dcRef()->ptr->DrawRoundedRectangle(x,y,width,height,radius);
            	}


HX_DEFINE_DYNAMIC_FUNC5(DC_obj,drawRoundedRectangle,(void))

void DC_obj::drawCircle(int x,int y,int radius){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_40_drawCircle)
HXDLIN(  40)		this->get_dcRef()->ptr->DrawCircle(x,y,radius);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DC_obj,drawCircle,(void))

 ::hx::widgets::Brush DC_obj::set_background( ::hx::widgets::Brush value){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_45_set_background)
HXLINE(  46)		 wxDC * _hx_tmp = this->get_dcRef()->ptr;
HXDLIN(  46)		(*(_hx_tmp)).SetBackground(value->get_brushRef()->get_ref());
HXLINE(  47)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DC_obj,set_background,return )

::cpp::Pointer<  wxDC > DC_obj::get_dcRef(){
            	HX_STACKFRAME(&_hx_pos_430522e7e40ac393_55_get_dcRef)
HXDLIN(  55)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DC_obj,get_dcRef,return )


hx::ObjectPtr< DC_obj > DC_obj::__new() {
	hx::ObjectPtr< DC_obj > __this = new DC_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DC_obj > DC_obj::__alloc(hx::Ctx *_hx_ctx) {
	DC_obj *__this = (DC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DC_obj), true, "hx.widgets.DC"));
	*(void **)__this = DC_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DC_obj::DC_obj()
{
}

void DC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DC);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(dcRef,"dcRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(dcRef,"dcRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DC_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"dcRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_dcRef() : dcRef ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setPen") ) { return hx::Val( setPen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return hx::Val( drawLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBrush") ) { return hx::Val( setBrush_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawText") ) { return hx::Val( drawText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_dcRef") ) { return hx::Val( get_dcRef_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return hx::Val( drawCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"background") ) { return hx::Val( background ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_background") ) { return hx::Val( set_background_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundedRectangle") ) { return hx::Val( drawRoundedRectangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DC_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dcRef") ) { dcRef=inValue.Cast< ::cpp::Pointer<  wxDC > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_background(inValue.Cast<  ::hx::widgets::Brush >()) );background=inValue.Cast<  ::hx::widgets::Brush >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("dcRef","\x14","\xb3","\xc0","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DC_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::widgets::Brush*/ ,(int)offsetof(DC_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::cpp::Pointer< wxDC >*/ ,(int)offsetof(DC_obj,dcRef),HX_HCSTRING("dcRef","\x14","\xb3","\xc0","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DC_obj_sStaticStorageInfo = 0;
#endif

static ::String DC_obj_sMemberFields[] = {
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("setPen","\x57","\xe2","\x6c","\x6f"),
	HX_HCSTRING("setBrush","\x78","\xc1","\x2c","\xc7"),
	HX_HCSTRING("drawText","\xd1","\x76","\x63","\x61"),
	HX_HCSTRING("drawRoundedRectangle","\x66","\x96","\xb9","\xcd"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("dcRef","\x14","\xb3","\xc0","\xd5"),
	HX_HCSTRING("get_dcRef","\x6b","\x0f","\x6a","\x19"),
	::String(null()) };

static void DC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DC_obj::__mClass,"__mClass");
};

#endif

hx::Class DC_obj::__mClass;

void DC_obj::__register()
{
	hx::Object *dummy = new DC_obj;
	DC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.DC","\xfc","\x32","\x0c","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DC_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
