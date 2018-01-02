// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_a958b609e3b635d9
#define INCLUDED_a958b609e3b635d9
#include "wx/checkbox.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_CheckBox
#include <hx/widgets/CheckBox.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c32f62f8ff0a81d0_9_new,"hx.widgets.CheckBox","new",0xde1fda72,"hx.widgets.CheckBox.new","hx/widgets/CheckBox.hx",9,0x97eacb7c)
HX_LOCAL_STACK_FRAME(_hx_pos_c32f62f8ff0a81d0_24_get_value,"hx.widgets.CheckBox","get_value",0x7753bf5a,"hx.widgets.CheckBox.get_value","hx/widgets/CheckBox.hx",24,0x97eacb7c)
HX_LOCAL_STACK_FRAME(_hx_pos_c32f62f8ff0a81d0_26_set_value,"hx.widgets.CheckBox","set_value",0x5aa4ab66,"hx.widgets.CheckBox.set_value","hx/widgets/CheckBox.hx",26,0x97eacb7c)
HX_LOCAL_STACK_FRAME(_hx_pos_c32f62f8ff0a81d0_36_get_checkboxRef,"hx.widgets.CheckBox","get_checkboxRef",0xa29edf79,"hx.widgets.CheckBox.get_checkboxRef","hx/widgets/CheckBox.hx",36,0x97eacb7c)
namespace hx{
namespace widgets{

void CheckBox_obj::__construct( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_c32f62f8ff0a81d0_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxCheckBox()))->reinterpret();
HXLINE(  12)			const char* this1 = label.__s;
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxString tmp = str;
HXDLIN(  13)			 wxCheckBox * _hx_tmp = this->get_checkboxRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic CheckBox_obj::__CreateEmpty() { return new CheckBox_obj; }

void *CheckBox_obj::_hx_vtable = 0;

Dynamic CheckBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBox_obj > _hx_result = new CheckBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CheckBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x58d6973e) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x58d6973e;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

bool CheckBox_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_c32f62f8ff0a81d0_24_get_value)
HXDLIN(  24)		return this->get_checkboxRef()->ptr->GetValue();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_value,return )

bool CheckBox_obj::set_value(bool value){
            	HX_STACKFRAME(&_hx_pos_c32f62f8ff0a81d0_26_set_value)
HXLINE(  27)		this->get_checkboxRef()->ptr->SetValue(value);
HXLINE(  28)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_value,return )

::cpp::Pointer<  wxCheckBox > CheckBox_obj::get_checkboxRef(){
            	HX_STACKFRAME(&_hx_pos_c32f62f8ff0a81d0_36_get_checkboxRef)
HXDLIN(  36)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_checkboxRef,return )


hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< CheckBox_obj > __this = new CheckBox_obj();
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	CheckBox_obj *__this = (CheckBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBox_obj), true, "hx.widgets.CheckBox"));
	*(void **)__this = CheckBox_obj::_hx_vtable;
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

CheckBox_obj::CheckBox_obj()
{
}

void CheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckBox);
	HX_MARK_MEMBER_NAME(checkboxRef,"checkboxRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(checkboxRef,"checkboxRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CheckBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_value() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkboxRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_checkboxRef() : checkboxRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_checkboxRef") ) { return hx::Val( get_checkboxRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CheckBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_value(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkboxRef") ) { checkboxRef=inValue.Cast< ::cpp::Pointer<  wxCheckBox > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("checkboxRef","\xd0","\x4a","\x81","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CheckBox_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxCheckBox >*/ ,(int)offsetof(CheckBox_obj,checkboxRef),HX_HCSTRING("checkboxRef","\xd0","\x4a","\x81","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CheckBox_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBox_obj_sMemberFields[] = {
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("checkboxRef","\xd0","\x4a","\x81","\x15"),
	HX_HCSTRING("get_checkboxRef","\x67","\x02","\x63","\xd6"),
	::String(null()) };

static void CheckBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CheckBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBox_obj::__mClass;

void CheckBox_obj::__register()
{
	hx::Object *dummy = new CheckBox_obj;
	CheckBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.CheckBox","\x80","\x79","\x69","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CheckBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CheckBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
