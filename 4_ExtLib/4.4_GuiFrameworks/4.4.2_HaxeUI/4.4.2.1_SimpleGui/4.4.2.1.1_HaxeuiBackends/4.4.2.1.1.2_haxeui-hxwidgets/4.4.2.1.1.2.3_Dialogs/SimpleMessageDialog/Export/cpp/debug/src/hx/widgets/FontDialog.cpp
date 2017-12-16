// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_5838facb6f7aa561
#define INCLUDED_5838facb6f7aa561
#include "wx/fontdlg.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
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
#ifndef INCLUDED_hx_widgets_FontDialog
#include <hx/widgets/FontDialog.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4571af07a54b9600_8_new,"hx.widgets.FontDialog","new",0x2d1a5786,"hx.widgets.FontDialog.new","hx/widgets/FontDialog.hx",8,0x58b11868)
HX_LOCAL_STACK_FRAME(_hx_pos_4571af07a54b9600_22_get_fontDialogRef,"hx.widgets.FontDialog","get_fontDialogRef",0xfa1d1299,"hx.widgets.FontDialog.get_fontDialogRef","hx/widgets/FontDialog.hx",22,0x58b11868)
namespace hx{
namespace widgets{

void FontDialog_obj::__construct( ::hx::widgets::Window parent){
            	HX_STACKFRAME(&_hx_pos_4571af07a54b9600_8_new)
HXLINE(   9)		if (hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxFontDialog()))->reinterpret();
HXLINE(  11)			 wxFontDialog * _hx_tmp = this->get_fontDialogRef()->ptr;
HXDLIN(  11)			(*(_hx_tmp)).Create(::hx::widgets::Window_obj::toRaw(parent));
            		}
HXLINE(  14)		super::__construct(parent,null(),null(),null());
            	}

Dynamic FontDialog_obj::__CreateEmpty() { return new FontDialog_obj; }

void *FontDialog_obj::_hx_vtable = 0;

Dynamic FontDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontDialog_obj > _hx_result = new FontDialog_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FontDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x2d54613e) {
			if (inClassId<=(int)0x1378f1ee) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1378f1ee;
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

::cpp::Pointer<  wxFontDialog > FontDialog_obj::get_fontDialogRef(){
            	HX_STACKFRAME(&_hx_pos_4571af07a54b9600_22_get_fontDialogRef)
HXDLIN(  22)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontDialog_obj,get_fontDialogRef,return )


hx::ObjectPtr< FontDialog_obj > FontDialog_obj::__new( ::hx::widgets::Window parent) {
	hx::ObjectPtr< FontDialog_obj > __this = new FontDialog_obj();
	__this->__construct(parent);
	return __this;
}

hx::ObjectPtr< FontDialog_obj > FontDialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent) {
	FontDialog_obj *__this = (FontDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontDialog_obj), true, "hx.widgets.FontDialog"));
	*(void **)__this = FontDialog_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

FontDialog_obj::FontDialog_obj()
{
}

void FontDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontDialog);
	HX_MARK_MEMBER_NAME(fontDialogRef,"fontDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FontDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontDialogRef,"fontDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FontDialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fontDialogRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_fontDialogRef() : fontDialogRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_fontDialogRef") ) { return hx::Val( get_fontDialogRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FontDialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fontDialogRef") ) { fontDialogRef=inValue.Cast< ::cpp::Pointer<  wxFontDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fontDialogRef","\x9c","\x89","\xce","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FontDialog_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxFontDialog >*/ ,(int)offsetof(FontDialog_obj,fontDialogRef),HX_HCSTRING("fontDialogRef","\x9c","\x89","\xce","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FontDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String FontDialog_obj_sMemberFields[] = {
	HX_HCSTRING("fontDialogRef","\x9c","\x89","\xce","\x69"),
	HX_HCSTRING("get_fontDialogRef","\xf3","\x94","\x3e","\x70"),
	::String(null()) };

static void FontDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class FontDialog_obj::__mClass;

void FontDialog_obj::__register()
{
	hx::Object *dummy = new FontDialog_obj;
	FontDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.FontDialog","\x94","\xdc","\x72","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FontDialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FontDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
