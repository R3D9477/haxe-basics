// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_224ae41206d096c1
#define INCLUDED_224ae41206d096c1
#include "wx/textctrl.h"
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
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73cec53f5b87b09c_9_new,"hx.widgets.TextCtrl","new",0x7a5c3ac7,"hx.widgets.TextCtrl.new","hx/widgets/TextCtrl.hx",9,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_22_appendText,"hx.widgets.TextCtrl","appendText",0x988a9020,"hx.widgets.TextCtrl.appendText","hx/widgets/TextCtrl.hx",22,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_29_get_insertionPoint,"hx.widgets.TextCtrl","get_insertionPoint",0xfb9007e3,"hx.widgets.TextCtrl.get_insertionPoint","hx/widgets/TextCtrl.hx",29,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_31_set_insertionPoint,"hx.widgets.TextCtrl","set_insertionPoint",0xd83f3a57,"hx.widgets.TextCtrl.set_insertionPoint","hx/widgets/TextCtrl.hx",31,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_37_get_value,"hx.widgets.TextCtrl","get_value",0xc3b88d6f,"hx.widgets.TextCtrl.get_value","hx/widgets/TextCtrl.hx",37,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_41_set_value,"hx.widgets.TextCtrl","set_value",0xa709797b,"hx.widgets.TextCtrl.set_value","hx/widgets/TextCtrl.hx",41,0x8ad78cc7)
HX_LOCAL_STACK_FRAME(_hx_pos_73cec53f5b87b09c_52_get_textCtrlRef,"hx.widgets.TextCtrl","get_textCtrlRef",0x285620b9,"hx.widgets.TextCtrl.get_textCtrlRef","hx/widgets/TextCtrl.hx",52,0x8ad78cc7)
namespace hx{
namespace widgets{

void TextCtrl_obj::__construct( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxTextCtrl()))->reinterpret();
HXLINE(  12)			const char* this1 = text.__s;
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxString tmp = str;
HXDLIN(  13)			 wxTextCtrl * _hx_tmp = this->get_textCtrlRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic TextCtrl_obj::__CreateEmpty() { return new TextCtrl_obj; }

void *TextCtrl_obj::_hx_vtable = 0;

Dynamic TextCtrl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextCtrl_obj > _hx_result = new TextCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TextCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x4227dbf7) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x4227dbf7;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

static ::hx::widgets::TextEntry_obj _hx_hx_widgets_TextCtrl__hx_hx_widgets_TextEntry= {
};

void *TextCtrl_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc39007a6: return &_hx_hx_widgets_TextCtrl__hx_hx_widgets_TextEntry;
	}
	return super::_hx_getInterface(inHash);
}

void TextCtrl_obj::appendText(::String value){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_22_appendText)
HXLINE(  23)		const char* this1 = value.__s;
HXDLIN(  23)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  24)		 wxString tmp = s;
HXDLIN(  24)		this->get_textCtrlRef()->ptr->AppendText(tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrl_obj,appendText,(void))

int TextCtrl_obj::get_insertionPoint(){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_29_get_insertionPoint)
HXDLIN(  29)		return this->get_textCtrlRef()->ptr->GetInsertionPoint();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextCtrl_obj,get_insertionPoint,return )

int TextCtrl_obj::set_insertionPoint(int value){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_31_set_insertionPoint)
HXLINE(  32)		this->get_textCtrlRef()->ptr->SetInsertionPoint(value);
HXLINE(  33)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrl_obj,set_insertionPoint,return )

::String TextCtrl_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_37_get_value)
HXLINE(  38)		 wxString r = this->get_textCtrlRef()->ptr->GetValue();
HXLINE(  39)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextCtrl_obj,get_value,return )

::String TextCtrl_obj::set_value(::String value){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_41_set_value)
HXLINE(  42)		const char* this1 = value.__s;
HXDLIN(  42)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  43)		 wxString tmp = s;
HXDLIN(  43)		this->get_textCtrlRef()->ptr->SetValue(tmp);
HXLINE(  44)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrl_obj,set_value,return )

::cpp::Pointer<  wxTextCtrl > TextCtrl_obj::get_textCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_73cec53f5b87b09c_52_get_textCtrlRef)
HXDLIN(  52)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextCtrl_obj,get_textCtrlRef,return )


hx::ObjectPtr< TextCtrl_obj > TextCtrl_obj::__new( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< TextCtrl_obj > __this = new TextCtrl_obj();
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< TextCtrl_obj > TextCtrl_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	TextCtrl_obj *__this = (TextCtrl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrl_obj), true, "hx.widgets.TextCtrl"));
	*(void **)__this = TextCtrl_obj::_hx_vtable;
	__this->__construct(parent,text,__o_style,__o_id);
	return __this;
}

TextCtrl_obj::TextCtrl_obj()
{
}

void TextCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextCtrl);
	HX_MARK_MEMBER_NAME(textCtrlRef,"textCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textCtrlRef,"textCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextCtrl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_value() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"appendText") ) { return hx::Val( appendText_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textCtrlRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_textCtrlRef() : textCtrlRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"insertionPoint") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_insertionPoint() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_textCtrlRef") ) { return hx::Val( get_textCtrlRef_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_insertionPoint") ) { return hx::Val( get_insertionPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_insertionPoint") ) { return hx::Val( set_insertionPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextCtrl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_value(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textCtrlRef") ) { textCtrlRef=inValue.Cast< ::cpp::Pointer<  wxTextCtrl > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"insertionPoint") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_insertionPoint(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("insertionPoint","\xa1","\xc5","\x96","\x3b"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("textCtrlRef","\x3b","\x80","\x02","\x3d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextCtrl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxTextCtrl >*/ ,(int)offsetof(TextCtrl_obj,textCtrlRef),HX_HCSTRING("textCtrlRef","\x3b","\x80","\x02","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrl_obj_sMemberFields[] = {
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("get_insertionPoint","\x6a","\xa6","\x30","\xd7"),
	HX_HCSTRING("set_insertionPoint","\xde","\xd8","\xdf","\xb3"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("textCtrlRef","\x3b","\x80","\x02","\x3d"),
	HX_HCSTRING("get_textCtrlRef","\xd2","\x37","\xe4","\xfd"),
	::String(null()) };

static void TextCtrl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextCtrl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextCtrl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextCtrl_obj::__mClass,"__mClass");
};

#endif

hx::Class TextCtrl_obj::__mClass;

void TextCtrl_obj::__register()
{
	hx::Object *dummy = new TextCtrl_obj;
	TextCtrl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.TextCtrl","\x55","\xcb","\x4f","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextCtrl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextCtrl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextCtrl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextCtrl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
