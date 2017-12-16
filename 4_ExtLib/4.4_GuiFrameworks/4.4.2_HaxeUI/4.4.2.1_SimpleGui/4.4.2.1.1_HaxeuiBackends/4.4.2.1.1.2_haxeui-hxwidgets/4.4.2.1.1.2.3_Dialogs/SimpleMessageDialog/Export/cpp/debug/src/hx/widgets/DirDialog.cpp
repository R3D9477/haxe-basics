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
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_e595ef90afd342fe
#define INCLUDED_e595ef90afd342fe
#include "wx/wx.h"
#endif
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_DirDialog
#include <hx/widgets/DirDialog.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_804c2c2d80eabf03_10_new,"hx.widgets.DirDialog","new",0x2058acea,"hx.widgets.DirDialog.new","hx/widgets/DirDialog.hx",10,0xab39c1c8)
HX_LOCAL_STACK_FRAME(_hx_pos_804c2c2d80eabf03_35_get_dirDialogRef,"hx.widgets.DirDialog","get_dirDialogRef",0xde254c1d,"hx.widgets.DirDialog.get_dirDialogRef","hx/widgets/DirDialog.hx",35,0xab39c1c8)
namespace hx{
namespace widgets{

void DirDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String defaultPath,hx::Null< int >  __o_style){
int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_804c2c2d80eabf03_10_new)
HXLINE(  11)		if (hx::IsNull( this->_ref )) {
HXLINE(  12)			if (hx::IsNull( message )) {
HXLINE(  13)				message = HX_("",00,00,00,00);
            			}
HXLINE(  15)			if (hx::IsNull( defaultPath )) {
HXLINE(  16)				defaultPath = HX_("",00,00,00,00);
            			}
HXLINE(  18)			if ((style == (int)0)) {
HXLINE(  19)				style = ((int)::wx::widgets::styles::DialogStyle_obj::DEFAULT_DIALOG_STYLE | (int)::wx::widgets::styles::DialogStyle_obj::RESIZE_BORDER);
            			}
HXLINE(  22)			const char* this1 = message.__s;
HXDLIN(  22)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  23)			const char* this2 = defaultPath.__s;
HXDLIN(  23)			 wxString defaultPathStr = wxString::FromUTF8(this2);
HXLINE(  24)			 wxString tmp = messageStr;
HXDLIN(  24)			 wxString tmp1 = defaultPathStr;
HXDLIN(  24)			::cpp::Pointer<  wxDirDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxDirDialog(::hx::widgets::Window_obj::toRaw(parent),tmp,tmp1,style)));
HXDLIN(  24)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  27)		super::__construct(parent,null(),null(),null());
            	}

Dynamic DirDialog_obj::__CreateEmpty() { return new DirDialog_obj; }

void *DirDialog_obj::_hx_vtable = 0;

Dynamic DirDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DirDialog_obj > _hx_result = new DirDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool DirDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x2d54613e) {
			if (inClassId<=(int)0x00702d16) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x00702d16;
			} else {
				return inClassId==(int)0x2d54613e;
			}
		} else {
			return inClassId==(int)0x350d7ce6 || inClassId==(int)0x3d664327;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x4896b707 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

::cpp::Pointer<  wxDirDialog > DirDialog_obj::get_dirDialogRef(){
            	HX_STACKFRAME(&_hx_pos_804c2c2d80eabf03_35_get_dirDialogRef)
HXDLIN(  35)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirDialog_obj,get_dirDialogRef,return )


hx::ObjectPtr< DirDialog_obj > DirDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String defaultPath,hx::Null< int >  __o_style) {
	hx::ObjectPtr< DirDialog_obj > __this = new DirDialog_obj();
	__this->__construct(parent,message,defaultPath,__o_style);
	return __this;
}

hx::ObjectPtr< DirDialog_obj > DirDialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String defaultPath,hx::Null< int >  __o_style) {
	DirDialog_obj *__this = (DirDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DirDialog_obj), true, "hx.widgets.DirDialog"));
	*(void **)__this = DirDialog_obj::_hx_vtable;
	__this->__construct(parent,message,defaultPath,__o_style);
	return __this;
}

DirDialog_obj::DirDialog_obj()
{
}

void DirDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirDialog);
	HX_MARK_MEMBER_NAME(dirDialogRef,"dirDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirDialogRef,"dirDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DirDialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"dirDialogRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_dirDialogRef() : dirDialogRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dirDialogRef") ) { return hx::Val( get_dirDialogRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DirDialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"dirDialogRef") ) { dirDialogRef=inValue.Cast< ::cpp::Pointer<  wxDirDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dirDialogRef","\x5e","\xca","\xf5","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DirDialog_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxDirDialog >*/ ,(int)offsetof(DirDialog_obj,dirDialogRef),HX_HCSTRING("dirDialogRef","\x5e","\xca","\xf5","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DirDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String DirDialog_obj_sMemberFields[] = {
	HX_HCSTRING("dirDialogRef","\x5e","\xca","\xf5","\xc6"),
	HX_HCSTRING("get_dirDialogRef","\xe7","\xb6","\x94","\xcb"),
	::String(null()) };

static void DirDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DirDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class DirDialog_obj::__mClass;

void DirDialog_obj::__register()
{
	hx::Object *dummy = new DirDialog_obj;
	DirDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.DirDialog","\xf8","\xaf","\x39","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DirDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DirDialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DirDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DirDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
