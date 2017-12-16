// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_aff82f6b7e6c9d31
#define INCLUDED_aff82f6b7e6c9d31
#include "wx/hyperlink.h"
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_HyperlinkCtrl
#include <hx/widgets/HyperlinkCtrl.h>
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
#ifndef INCLUDED_wx_widgets_styles_HyperlinkCtrlStyle
#include <wx/widgets/styles/HyperlinkCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b8c36ca57f2cbc7_10_new,"hx.widgets.HyperlinkCtrl","new",0x378de2a6,"hx.widgets.HyperlinkCtrl.new","hx/widgets/HyperlinkCtrl.hx",10,0x51aec08c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b8c36ca57f2cbc7_30_get_linkRef,"hx.widgets.HyperlinkCtrl","get_linkRef",0x522c59d6,"hx.widgets.HyperlinkCtrl.get_linkRef","hx/widgets/HyperlinkCtrl.hx",30,0x51aec08c)
namespace hx{
namespace widgets{

void HyperlinkCtrl_obj::__construct( ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5b8c36ca57f2cbc7_10_new)
HXLINE(  11)		if ((style == (int)0)) {
HXLINE(  12)			style = ::wx::widgets::styles::HyperlinkCtrlStyle_obj::ALIGN_LEFT;
            		}
HXLINE(  15)		if (hx::IsNull( this->_ref )) {
HXLINE(  16)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxHyperlinkCtrl()))->reinterpret();
HXLINE(  17)			const char* this1 = text.__s;
HXDLIN(  17)			 wxString textStr = wxString::FromUTF8(this1);
HXLINE(  18)			const char* this2 = url.__s;
HXDLIN(  18)			 wxString urlStr = wxString::FromUTF8(this2);
HXLINE(  19)			 wxString tmp = textStr;
HXDLIN(  19)			 wxString tmp1 = urlStr;
HXDLIN(  19)			 wxHyperlinkCtrl * _hx_tmp = this->get_linkRef()->ptr;
HXDLIN(  19)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  19)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  19)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  19)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,tmp1,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  22)		super::__construct(parent,id,null());
            	}

Dynamic HyperlinkCtrl_obj::__CreateEmpty() { return new HyperlinkCtrl_obj; }

void *HyperlinkCtrl_obj::_hx_vtable = 0;

Dynamic HyperlinkCtrl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HyperlinkCtrl_obj > _hx_result = new HyperlinkCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool HyperlinkCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x1cf8bbd2) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1cf8bbd2;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

::cpp::Pointer<  wxHyperlinkCtrl > HyperlinkCtrl_obj::get_linkRef(){
            	HX_STACKFRAME(&_hx_pos_5b8c36ca57f2cbc7_30_get_linkRef)
HXDLIN(  30)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HyperlinkCtrl_obj,get_linkRef,return )


hx::ObjectPtr< HyperlinkCtrl_obj > HyperlinkCtrl_obj::__new( ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< HyperlinkCtrl_obj > __this = new HyperlinkCtrl_obj();
	__this->__construct(parent,text,url,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< HyperlinkCtrl_obj > HyperlinkCtrl_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	HyperlinkCtrl_obj *__this = (HyperlinkCtrl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HyperlinkCtrl_obj), true, "hx.widgets.HyperlinkCtrl"));
	*(void **)__this = HyperlinkCtrl_obj::_hx_vtable;
	__this->__construct(parent,text,url,__o_style,__o_id);
	return __this;
}

HyperlinkCtrl_obj::HyperlinkCtrl_obj()
{
}

void HyperlinkCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HyperlinkCtrl);
	HX_MARK_MEMBER_NAME(linkRef,"linkRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HyperlinkCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(linkRef,"linkRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HyperlinkCtrl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"linkRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_linkRef() : linkRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_linkRef") ) { return hx::Val( get_linkRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HyperlinkCtrl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"linkRef") ) { linkRef=inValue.Cast< ::cpp::Pointer<  wxHyperlinkCtrl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HyperlinkCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("linkRef","\x79","\x31","\x93","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HyperlinkCtrl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxHyperlinkCtrl >*/ ,(int)offsetof(HyperlinkCtrl_obj,linkRef),HX_HCSTRING("linkRef","\x79","\x31","\x93","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HyperlinkCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String HyperlinkCtrl_obj_sMemberFields[] = {
	HX_HCSTRING("linkRef","\x79","\x31","\x93","\x23"),
	HX_HCSTRING("get_linkRef","\x90","\x91","\x8d","\xa9"),
	::String(null()) };

static void HyperlinkCtrl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HyperlinkCtrl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HyperlinkCtrl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HyperlinkCtrl_obj::__mClass,"__mClass");
};

#endif

hx::Class HyperlinkCtrl_obj::__mClass;

void HyperlinkCtrl_obj::__register()
{
	hx::Object *dummy = new HyperlinkCtrl_obj;
	HyperlinkCtrl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.HyperlinkCtrl","\xb4","\x57","\x3a","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HyperlinkCtrl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HyperlinkCtrl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HyperlinkCtrl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HyperlinkCtrl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HyperlinkCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HyperlinkCtrl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
