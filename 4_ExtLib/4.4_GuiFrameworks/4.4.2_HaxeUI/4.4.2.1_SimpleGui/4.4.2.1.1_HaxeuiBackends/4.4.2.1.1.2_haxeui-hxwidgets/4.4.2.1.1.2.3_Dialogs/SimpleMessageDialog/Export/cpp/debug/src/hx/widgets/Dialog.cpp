// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_61b65e184b2fc75a
#define INCLUDED_61b65e184b2fc75a
#include "wx/dialog.h"
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
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
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
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_DialogStyle
#include <wx/widgets/styles/DialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dcf451d3e674acef_14_new,"hx.widgets.Dialog","new",0xd0d0ea57,"hx.widgets.Dialog.new","hx/widgets/Dialog.hx",14,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_31_showModal,"hx.widgets.Dialog","showModal",0xbec7f327,"hx.widgets.Dialog.showModal","hx/widgets/Dialog.hx",31,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_35_endModal,"hx.widgets.Dialog","endModal",0x02e418fb,"hx.widgets.Dialog.endModal","hx/widgets/Dialog.hx",35,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_40_get_isModal,"hx.widgets.Dialog","get_isModal",0x5e828cf1,"hx.widgets.Dialog.get_isModal","hx/widgets/Dialog.hx",40,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_44_addMainButtonId,"hx.widgets.Dialog","addMainButtonId",0x4239f3fe,"hx.widgets.Dialog.addMainButtonId","hx/widgets/Dialog.hx",44,0x8c7153b7)
HX_LOCAL_STACK_FRAME(_hx_pos_dcf451d3e674acef_52_get_dialogRef,"hx.widgets.Dialog","get_dialogRef",0xf92c61f9,"hx.widgets.Dialog.get_dialogRef","hx/widgets/Dialog.hx",52,0x8c7153b7)
namespace hx{
namespace widgets{

void Dialog_obj::__construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_14_new)
HXLINE(  15)		if ((style == (int)0)) {
HXLINE(  16)			style = ::wx::widgets::styles::DialogStyle_obj::DEFAULT_DIALOG_STYLE;
            		}
HXLINE(  18)		if (hx::IsNull( this->_ref )) {
HXLINE(  19)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxDialog()))->reinterpret();
HXLINE(  20)			const char* this1 = title.__s;
HXDLIN(  20)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  21)			 wxString tmp = str;
HXDLIN(  21)			 wxDialog * _hx_tmp = this->get_dialogRef()->ptr;
HXDLIN(  21)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  21)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  21)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  21)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  24)		super::__construct(parent,id);
            	}

Dynamic Dialog_obj::__CreateEmpty() { return new Dialog_obj; }

void *Dialog_obj::_hx_vtable = 0;

Dynamic Dialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Dialog_obj > _hx_result = new Dialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Dialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x2d54613e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2d54613e;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x3d664327;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x4896b707 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

int Dialog_obj::showModal(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_31_showModal)
HXDLIN(  31)		return this->get_dialogRef()->ptr->ShowModal();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,showModal,return )

void Dialog_obj::endModal(int retCode){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_35_endModal)
HXDLIN(  35)		this->get_dialogRef()->ptr->EndModal(retCode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,endModal,(void))

bool Dialog_obj::get_isModal(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_40_get_isModal)
HXDLIN(  40)		return this->get_dialogRef()->ptr->IsModal();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,get_isModal,return )

void Dialog_obj::addMainButtonId(int id){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_44_addMainButtonId)
HXDLIN(  44)		this->get_dialogRef()->ptr->AddMainButtonId(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,addMainButtonId,(void))

::cpp::Pointer<  wxDialog > Dialog_obj::get_dialogRef(){
            	HX_STACKFRAME(&_hx_pos_dcf451d3e674acef_52_get_dialogRef)
HXDLIN(  52)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Dialog_obj,get_dialogRef,return )


hx::ObjectPtr< Dialog_obj > Dialog_obj::__new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Dialog_obj > __this = new Dialog_obj();
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Dialog_obj > Dialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Dialog_obj *__this = (Dialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dialog_obj), true, "hx.widgets.Dialog"));
	*(void **)__this = Dialog_obj::_hx_vtable;
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

Dialog_obj::Dialog_obj()
{
}

void Dialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dialog);
	HX_MARK_MEMBER_NAME(isModal,"isModal");
	HX_MARK_MEMBER_NAME(dialogRef,"dialogRef");
	 ::hx::widgets::TopLevelWindow_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isModal,"isModal");
	HX_VISIT_MEMBER_NAME(dialogRef,"dialogRef");
	 ::hx::widgets::TopLevelWindow_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Dialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isModal") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isModal() : isModal ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endModal") ) { return hx::Val( endModal_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showModal") ) { return hx::Val( showModal_dyn() ); }
		if (HX_FIELD_EQ(inName,"dialogRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_dialogRef() : dialogRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isModal") ) { return hx::Val( get_isModal_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dialogRef") ) { return hx::Val( get_dialogRef_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addMainButtonId") ) { return hx::Val( addMainButtonId_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Dialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isModal") ) { isModal=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dialogRef") ) { dialogRef=inValue.Cast< ::cpp::Pointer<  wxDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isModal","\xe3","\xc3","\xdd","\xa8"));
	outFields->push(HX_HCSTRING("dialogRef","\x6b","\xb9","\xf8","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Dialog_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Dialog_obj,isModal),HX_HCSTRING("isModal","\xe3","\xc3","\xdd","\xa8")},
	{hx::fsObject /*::cpp::Pointer< wxDialog >*/ ,(int)offsetof(Dialog_obj,dialogRef),HX_HCSTRING("dialogRef","\x6b","\xb9","\xf8","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Dialog_obj_sStaticStorageInfo = 0;
#endif

static ::String Dialog_obj_sMemberFields[] = {
	HX_HCSTRING("showModal","\xf0","\x85","\xbc","\x3a"),
	HX_HCSTRING("endModal","\x52","\xb2","\x55","\x0a"),
	HX_HCSTRING("isModal","\xe3","\xc3","\xdd","\xa8"),
	HX_HCSTRING("get_isModal","\xfa","\x23","\xd8","\x2e"),
	HX_HCSTRING("addMainButtonId","\x87","\x43","\x42","\x11"),
	HX_HCSTRING("dialogRef","\x6b","\xb9","\xf8","\xf9"),
	HX_HCSTRING("get_dialogRef","\x42","\x8d","\x5c","\xbb"),
	::String(null()) };

static void Dialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Dialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dialog_obj::__mClass,"__mClass");
};

#endif

hx::Class Dialog_obj::__mClass;

void Dialog_obj::__register()
{
	hx::Object *dummy = new Dialog_obj;
	Dialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Dialog","\xe5","\x72","\xb1","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Dialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Dialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Dialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
