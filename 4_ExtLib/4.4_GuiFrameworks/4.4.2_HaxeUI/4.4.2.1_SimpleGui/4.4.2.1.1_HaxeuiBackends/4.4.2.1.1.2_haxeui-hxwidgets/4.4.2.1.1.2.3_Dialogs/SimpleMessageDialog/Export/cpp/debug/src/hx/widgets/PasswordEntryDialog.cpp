// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_2e64b5545582b528
#define INCLUDED_2e64b5545582b528
#include "wx/textdlg.h"
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
#ifndef INCLUDED_hx_widgets_PasswordEntryDialog
#include <hx/widgets/PasswordEntryDialog.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntryDialog
#include <hx/widgets/TextEntryDialog.h>
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
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6208f571fa8ff3e1_8_new,"hx.widgets.PasswordEntryDialog","new",0x5e156534,"hx.widgets.PasswordEntryDialog.new","hx/widgets/PasswordEntryDialog.hx",8,0x3611f73e)
namespace hx{
namespace widgets{

void PasswordEntryDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style){
int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_6208f571fa8ff3e1_8_new)
HXLINE(   9)		if (hx::IsNull( this->_ref )) {
HXLINE(  10)			if (hx::IsNull( message )) {
HXLINE(  11)				message = HX_("",00,00,00,00);
            			}
HXLINE(  13)			if (hx::IsNull( caption )) {
HXLINE(  14)				caption = HX_("",00,00,00,00);
            			}
HXLINE(  16)			if (hx::IsNull( value )) {
HXLINE(  17)				value = HX_("",00,00,00,00);
            			}
HXLINE(  19)			if ((style == (int)0)) {
HXLINE(  20)				style = ((int)((int)::wx::widgets::Defs_obj::OK | (int)::wx::widgets::Defs_obj::CANCEL) | (int)::wx::widgets::Defs_obj::CENTRE);
            			}
HXLINE(  23)			const char* this1 = message.__s;
HXDLIN(  23)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  24)			const char* this2 = caption.__s;
HXDLIN(  24)			 wxString captionStr = wxString::FromUTF8(this2);
HXLINE(  25)			const char* this3 = value.__s;
HXDLIN(  25)			 wxString valueStr = wxString::FromUTF8(this3);
HXLINE(  26)			 wxString tmp = messageStr;
HXDLIN(  26)			 wxString tmp1 = captionStr;
HXDLIN(  26)			 wxString tmp2 = valueStr;
HXDLIN(  26)			::cpp::Pointer<  wxPasswordEntryDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxPasswordEntryDialog(::hx::widgets::Window_obj::toRaw(parent),tmp,tmp1,tmp2,style)));
HXDLIN(  26)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  29)		super::__construct(parent,null(),null(),null(),null());
            	}

Dynamic PasswordEntryDialog_obj::__CreateEmpty() { return new PasswordEntryDialog_obj; }

void *PasswordEntryDialog_obj::_hx_vtable = 0;

Dynamic PasswordEntryDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PasswordEntryDialog_obj > _hx_result = new PasswordEntryDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool PasswordEntryDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x2d54613e) {
			if (inClassId<=(int)0x11dccf72) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x11dccf72;
			} else {
				return inClassId==(int)0x2d54613e;
			}
		} else {
			return inClassId==(int)0x350d7ce6 || inClassId==(int)0x3d664327;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			if (inClassId<=(int)0x57ff5a44) {
				return inClassId==(int)0x4896b707 || inClassId==(int)0x57ff5a44;
			} else {
				return inClassId==(int)0x7f575436;
			}
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}


hx::ObjectPtr< PasswordEntryDialog_obj > PasswordEntryDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style) {
	hx::ObjectPtr< PasswordEntryDialog_obj > __this = new PasswordEntryDialog_obj();
	__this->__construct(parent,message,caption,value,__o_style);
	return __this;
}

hx::ObjectPtr< PasswordEntryDialog_obj > PasswordEntryDialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style) {
	PasswordEntryDialog_obj *__this = (PasswordEntryDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PasswordEntryDialog_obj), true, "hx.widgets.PasswordEntryDialog"));
	*(void **)__this = PasswordEntryDialog_obj::_hx_vtable;
	__this->__construct(parent,message,caption,value,__o_style);
	return __this;
}

PasswordEntryDialog_obj::PasswordEntryDialog_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PasswordEntryDialog_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PasswordEntryDialog_obj_sStaticStorageInfo = 0;
#endif

static void PasswordEntryDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PasswordEntryDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PasswordEntryDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PasswordEntryDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class PasswordEntryDialog_obj::__mClass;

void PasswordEntryDialog_obj::__register()
{
	hx::Object *dummy = new PasswordEntryDialog_obj;
	PasswordEntryDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.PasswordEntryDialog","\x42","\xfb","\xcd","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PasswordEntryDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PasswordEntryDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PasswordEntryDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PasswordEntryDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PasswordEntryDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
