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
#ifndef INCLUDED_c0ef441ddce05964
#define INCLUDED_c0ef441ddce05964
#include "wx/webview.h"
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_WebView
#include <hx/widgets/WebView.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6fdc7568f4ad5d23_9_new,"hx.widgets.WebView","new",0x75b1c74e,"hx.widgets.WebView.new","hx/widgets/WebView.hx",9,0x99f69b64)
HX_LOCAL_STACK_FRAME(_hx_pos_6fdc7568f4ad5d23_22_loadURL,"hx.widgets.WebView","loadURL",0x8cd28ed7,"hx.widgets.WebView.loadURL","hx/widgets/WebView.hx",22,0x99f69b64)
HX_LOCAL_STACK_FRAME(_hx_pos_6fdc7568f4ad5d23_33_get_webViewRef,"hx.widgets.WebView","get_webViewRef",0xf24165d5,"hx.widgets.WebView.get_webViewRef","hx/widgets/WebView.hx",33,0x99f69b64)
namespace hx{
namespace widgets{

void WebView_obj::__construct( ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_6fdc7568f4ad5d23_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw(wxWebView::New())->reinterpret();
HXLINE(  12)			const char* this1 = url.__s;
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxString tmp = str;
HXDLIN(  13)			 wxWebView * _hx_tmp = this->get_webViewRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  13)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic WebView_obj::__CreateEmpty() { return new WebView_obj; }

void *WebView_obj::_hx_vtable = 0;

Dynamic WebView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WebView_obj > _hx_result = new WebView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool WebView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x3ccb21fa) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x3ccb21fa;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

void WebView_obj::loadURL(::String url){
            	HX_STACKFRAME(&_hx_pos_6fdc7568f4ad5d23_22_loadURL)
HXLINE(  23)		const char* this1 = url.__s;
HXDLIN(  23)		::cpp::Pointer<  wxString > str = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  24)		 wxString tmp = str->get_ref();
HXDLIN(  24)		this->get_webViewRef()->ptr->LoadURL(tmp);
HXLINE(  25)		str->destroy();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebView_obj,loadURL,(void))

::cpp::Pointer<  wxWebView > WebView_obj::get_webViewRef(){
            	HX_STACKFRAME(&_hx_pos_6fdc7568f4ad5d23_33_get_webViewRef)
HXDLIN(  33)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebView_obj,get_webViewRef,return )


hx::ObjectPtr< WebView_obj > WebView_obj::__new( ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< WebView_obj > __this = new WebView_obj();
	__this->__construct(parent,url,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< WebView_obj > WebView_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String url,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	WebView_obj *__this = (WebView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WebView_obj), true, "hx.widgets.WebView"));
	*(void **)__this = WebView_obj::_hx_vtable;
	__this->__construct(parent,url,__o_style,__o_id);
	return __this;
}

WebView_obj::WebView_obj()
{
}

void WebView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebView);
	HX_MARK_MEMBER_NAME(webViewRef,"webViewRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WebView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(webViewRef,"webViewRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val WebView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"loadURL") ) { return hx::Val( loadURL_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"webViewRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_webViewRef() : webViewRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_webViewRef") ) { return hx::Val( get_webViewRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WebView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"webViewRef") ) { webViewRef=inValue.Cast< ::cpp::Pointer<  wxWebView > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("webViewRef","\xba","\x29","\x3a","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WebView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxWebView >*/ ,(int)offsetof(WebView_obj,webViewRef),HX_HCSTRING("webViewRef","\xba","\x29","\x3a","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WebView_obj_sStaticStorageInfo = 0;
#endif

static ::String WebView_obj_sMemberFields[] = {
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	HX_HCSTRING("webViewRef","\xba","\x29","\x3a","\xeb"),
	HX_HCSTRING("get_webViewRef","\x03","\xb2","\x2f","\x61"),
	::String(null()) };

static void WebView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WebView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebView_obj::__mClass,"__mClass");
};

#endif

hx::Class WebView_obj::__mClass;

void WebView_obj::__register()
{
	hx::Object *dummy = new WebView_obj;
	WebView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.WebView","\x5c","\xc8","\x14","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WebView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WebView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WebView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WebView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
