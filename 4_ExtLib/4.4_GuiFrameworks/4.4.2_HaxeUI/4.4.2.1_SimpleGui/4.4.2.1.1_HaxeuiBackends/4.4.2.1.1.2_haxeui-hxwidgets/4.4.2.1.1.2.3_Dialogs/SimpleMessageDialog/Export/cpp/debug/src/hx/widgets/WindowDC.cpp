// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_e91341a8faf5e3a2
#define INCLUDED_e91341a8faf5e3a2
#include "wx/dcclient.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WindowDC
#include <hx/widgets/WindowDC.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca84a9e493c318e2_9_new,"hx.widgets.WindowDC","new",0xe2a891be,"hx.widgets.WindowDC.new","hx/widgets/WindowDC.hx",9,0xff4181b0)
HX_LOCAL_STACK_FRAME(_hx_pos_ca84a9e493c318e2_21_get_windowDCRef,"hx.widgets.WindowDC","get_windowDCRef",0x3dee8319,"hx.widgets.WindowDC.get_windowDCRef","hx/widgets/WindowDC.hx",21,0xff4181b0)
namespace hx{
namespace widgets{

void WindowDC_obj::__construct( ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_ca84a9e493c318e2_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		if (hx::IsNotNull( window )) {
HXLINE(  12)			::cpp::Pointer<  wxWindowDC > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxWindowDC(::hx::widgets::Window_obj::toRaw(window))));
HXDLIN(  12)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic WindowDC_obj::__CreateEmpty() { return new WindowDC_obj; }

void *WindowDC_obj::_hx_vtable = 0;

Dynamic WindowDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowDC_obj > _hx_result = new WindowDC_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WindowDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7b31ab6e) {
		if (inClassId<=(int)0x6e905e56) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x6e905e56;
		} else {
			return inClassId==(int)0x7b31ab6e;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

::cpp::Pointer<  wxWindowDC > WindowDC_obj::get_windowDCRef(){
            	HX_STACKFRAME(&_hx_pos_ca84a9e493c318e2_21_get_windowDCRef)
HXDLIN(  21)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WindowDC_obj,get_windowDCRef,return )


hx::ObjectPtr< WindowDC_obj > WindowDC_obj::__new( ::hx::widgets::Window window) {
	hx::ObjectPtr< WindowDC_obj > __this = new WindowDC_obj();
	__this->__construct(window);
	return __this;
}

hx::ObjectPtr< WindowDC_obj > WindowDC_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window) {
	WindowDC_obj *__this = (WindowDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WindowDC_obj), true, "hx.widgets.WindowDC"));
	*(void **)__this = WindowDC_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

WindowDC_obj::WindowDC_obj()
{
}

void WindowDC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowDC);
	HX_MARK_MEMBER_NAME(windowDCRef,"windowDCRef");
	 ::hx::widgets::DC_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WindowDC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(windowDCRef,"windowDCRef");
	 ::hx::widgets::DC_obj::__Visit(HX_VISIT_ARG);
}

hx::Val WindowDC_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"windowDCRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_windowDCRef() : windowDCRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_windowDCRef") ) { return hx::Val( get_windowDCRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowDC_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"windowDCRef") ) { windowDCRef=inValue.Cast< ::cpp::Pointer<  wxWindowDC > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowDC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("windowDCRef","\x24","\x75","\x6c","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WindowDC_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxWindowDC >*/ ,(int)offsetof(WindowDC_obj,windowDCRef),HX_HCSTRING("windowDCRef","\x24","\x75","\x6c","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowDC_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowDC_obj_sMemberFields[] = {
	HX_HCSTRING("windowDCRef","\x24","\x75","\x6c","\xb1"),
	HX_HCSTRING("get_windowDCRef","\xbb","\x2c","\x4e","\x72"),
	::String(null()) };

static void WindowDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowDC_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowDC_obj::__mClass;

void WindowDC_obj::__register()
{
	hx::Object *dummy = new WindowDC_obj;
	WindowDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.WindowDC","\xcc","\x9a","\x59","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowDC_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
