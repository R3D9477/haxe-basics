// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_1363196d39aeb248
#define INCLUDED_1363196d39aeb248
#include "wx/gauge.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_GaugeStyle
#include <wx/widgets/styles/GaugeStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b21a09fe6fde352f_9_new,"hx.widgets.Gauge","new",0xc169a76e,"hx.widgets.Gauge.new","hx/widgets/Gauge.hx",9,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_26_get_value,"hx.widgets.Gauge","get_value",0x811f7156,"hx.widgets.Gauge.get_value","hx/widgets/Gauge.hx",26,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_28_set_value,"hx.widgets.Gauge","set_value",0x64705d62,"hx.widgets.Gauge.set_value","hx/widgets/Gauge.hx",28,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_34_pulse,"hx.widgets.Gauge","pulse",0x5e0d7da7,"hx.widgets.Gauge.pulse","hx/widgets/Gauge.hx",34,0xee4bdac4)
HX_LOCAL_STACK_FRAME(_hx_pos_b21a09fe6fde352f_42_get_gaugeRef,"hx.widgets.Gauge","get_gaugeRef",0xd6198a15,"hx.widgets.Gauge.get_gaugeRef","hx/widgets/Gauge.hx",42,0xee4bdac4)
namespace hx{
namespace widgets{

void Gauge_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int range = __o_range.Default(100);
int style = __o_style.Default(-1);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_9_new)
HXLINE(  10)		if ((style == (int)-1)) {
HXLINE(  11)			style = ::wx::widgets::styles::GaugeStyle_obj::HORIZONTAL;
            		}
HXLINE(  13)		if (hx::IsNull( this->_ref )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxGauge()))->reinterpret();
HXLINE(  15)			 wxGauge * _hx_tmp = this->get_gaugeRef()->ptr;
HXDLIN(  15)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  15)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  15)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  15)			(*(_hx_tmp)).Create(_hx_tmp1,id,range,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  18)		super::__construct(parent,id,null());
            	}

Dynamic Gauge_obj::__CreateEmpty() { return new Gauge_obj; }

void *Gauge_obj::_hx_vtable = 0;

Dynamic Gauge_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Gauge_obj > _hx_result = new Gauge_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Gauge_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x42802e9a) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x42802e9a;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

int Gauge_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_26_get_value)
HXDLIN(  26)		return this->get_gaugeRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,get_value,return )

int Gauge_obj::set_value(int value){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_28_set_value)
HXLINE(  29)		this->get_gaugeRef()->ptr->SetValue(value);
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Gauge_obj,set_value,return )

void Gauge_obj::pulse(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_34_pulse)
HXDLIN(  34)		this->get_gaugeRef()->ptr->Pulse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,pulse,(void))

::cpp::Pointer<  wxGauge > Gauge_obj::get_gaugeRef(){
            	HX_STACKFRAME(&_hx_pos_b21a09fe6fde352f_42_get_gaugeRef)
HXDLIN(  42)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gauge_obj,get_gaugeRef,return )


hx::ObjectPtr< Gauge_obj > Gauge_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Gauge_obj > __this = new Gauge_obj();
	__this->__construct(parent,__o_range,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Gauge_obj > Gauge_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Gauge_obj *__this = (Gauge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Gauge_obj), true, "hx.widgets.Gauge"));
	*(void **)__this = Gauge_obj::_hx_vtable;
	__this->__construct(parent,__o_range,__o_style,__o_id);
	return __this;
}

Gauge_obj::Gauge_obj()
{
}

void Gauge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gauge);
	HX_MARK_MEMBER_NAME(gaugeRef,"gaugeRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Gauge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gaugeRef,"gaugeRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Gauge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_value() ); }
		if (HX_FIELD_EQ(inName,"pulse") ) { return hx::Val( pulse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gaugeRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_gaugeRef() : gaugeRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_gaugeRef") ) { return hx::Val( get_gaugeRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Gauge_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_value(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gaugeRef") ) { gaugeRef=inValue.Cast< ::cpp::Pointer<  wxGauge > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gauge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("gaugeRef","\xda","\xfe","\xf5","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Gauge_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxGauge >*/ ,(int)offsetof(Gauge_obj,gaugeRef),HX_HCSTRING("gaugeRef","\xda","\xfe","\xf5","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Gauge_obj_sStaticStorageInfo = 0;
#endif

static ::String Gauge_obj_sMemberFields[] = {
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("pulse","\x19","\x47","\x89","\xca"),
	HX_HCSTRING("gaugeRef","\xda","\xfe","\xf5","\x1d"),
	HX_HCSTRING("get_gaugeRef","\xe3","\xb2","\x0f","\xd3"),
	::String(null()) };

static void Gauge_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gauge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gauge_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gauge_obj::__mClass,"__mClass");
};

#endif

hx::Class Gauge_obj::__mClass;

void Gauge_obj::__register()
{
	hx::Object *dummy = new Gauge_obj;
	Gauge_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Gauge","\x7c","\x18","\x12","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Gauge_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Gauge_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gauge_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gauge_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gauge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gauge_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
