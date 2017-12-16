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
#ifndef INCLUDED_hx_widgets_ClientDC
#include <hx/widgets/ClientDC.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d2d87c4c45a511bd_8_new,"hx.widgets.ClientDC","new",0x9dd97e59,"hx.widgets.ClientDC.new","hx/widgets/ClientDC.hx",8,0xec946175)
namespace hx{
namespace widgets{

void ClientDC_obj::__construct( ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_d2d87c4c45a511bd_8_new)
HXLINE(   9)		super::__construct(null());
HXLINE(  10)		::cpp::Pointer<  wxClientDC > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxClientDC(::hx::widgets::Window_obj::toRaw(window))));
HXDLIN(  10)		this->_ref = _hx_tmp->reinterpret();
            	}

Dynamic ClientDC_obj::__CreateEmpty() { return new ClientDC_obj; }

void *ClientDC_obj::_hx_vtable = 0;

Dynamic ClientDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ClientDC_obj > _hx_result = new ClientDC_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ClientDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e905e56) {
		if (inClassId<=(int)0x12f36e89) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12f36e89;
		} else {
			return inClassId==(int)0x6e905e56;
		}
	} else {
		return inClassId==(int)0x7b31ab6e || inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< ClientDC_obj > ClientDC_obj::__new( ::hx::widgets::Window window) {
	hx::ObjectPtr< ClientDC_obj > __this = new ClientDC_obj();
	__this->__construct(window);
	return __this;
}

hx::ObjectPtr< ClientDC_obj > ClientDC_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window) {
	ClientDC_obj *__this = (ClientDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ClientDC_obj), true, "hx.widgets.ClientDC"));
	*(void **)__this = ClientDC_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

ClientDC_obj::ClientDC_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ClientDC_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ClientDC_obj_sStaticStorageInfo = 0;
#endif

static void ClientDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientDC_obj::__mClass,"__mClass");
};

#endif

hx::Class ClientDC_obj::__mClass;

void ClientDC_obj::__register()
{
	hx::Object *dummy = new ClientDC_obj;
	ClientDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ClientDC","\xe7","\x5d","\x1b","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClientDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ClientDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
