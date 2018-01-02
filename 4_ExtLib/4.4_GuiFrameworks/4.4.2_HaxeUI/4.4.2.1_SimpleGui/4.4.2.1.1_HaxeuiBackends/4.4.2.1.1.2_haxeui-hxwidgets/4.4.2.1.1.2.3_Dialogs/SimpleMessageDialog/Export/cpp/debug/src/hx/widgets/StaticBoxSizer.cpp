// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#include <hx/widgets/StaticBoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa194870d3605e59_8_new,"hx.widgets.StaticBoxSizer","new",0xdabd69e3,"hx.widgets.StaticBoxSizer.new","hx/widgets/StaticBoxSizer.hx",8,0xc3e5f7ab)
namespace hx{
namespace widgets{

void StaticBoxSizer_obj::__construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title){
            	HX_STACKFRAME(&_hx_pos_fa194870d3605e59_8_new)
HXLINE(   9)		if (hx::IsNull( this->_ref )) {
HXLINE(  10)			const char* this1 = title.__s;
HXDLIN(  10)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  11)			 wxString tmp = str;
HXDLIN(  11)			::cpp::Pointer<  wxStaticBoxSizer > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxStaticBoxSizer(orient,::hx::widgets::Window_obj::toRaw(window),tmp)));
HXDLIN(  11)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  14)		super::__construct(null());
            	}

Dynamic StaticBoxSizer_obj::__CreateEmpty() { return new StaticBoxSizer_obj; }

void *StaticBoxSizer_obj::_hx_vtable = 0;

Dynamic StaticBoxSizer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticBoxSizer_obj > _hx_result = new StaticBoxSizer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StaticBoxSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x309ca332) {
		if (inClassId<=(int)0x077b3caf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x077b3caf;
		} else {
			return inClassId==(int)0x309ca332;
		}
	} else {
		return inClassId==(int)0x52860cbd || inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< StaticBoxSizer_obj > StaticBoxSizer_obj::__new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title) {
	hx::ObjectPtr< StaticBoxSizer_obj > __this = new StaticBoxSizer_obj();
	__this->__construct(orient,window,title);
	return __this;
}

hx::ObjectPtr< StaticBoxSizer_obj > StaticBoxSizer_obj::__alloc(hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title) {
	StaticBoxSizer_obj *__this = (StaticBoxSizer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticBoxSizer_obj), true, "hx.widgets.StaticBoxSizer"));
	*(void **)__this = StaticBoxSizer_obj::_hx_vtable;
	__this->__construct(orient,window,title);
	return __this;
}

StaticBoxSizer_obj::StaticBoxSizer_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StaticBoxSizer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StaticBoxSizer_obj_sStaticStorageInfo = 0;
#endif

static void StaticBoxSizer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticBoxSizer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticBoxSizer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticBoxSizer_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticBoxSizer_obj::__mClass;

void StaticBoxSizer_obj::__register()
{
	hx::Object *dummy = new StaticBoxSizer_obj;
	StaticBoxSizer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.StaticBoxSizer","\x71","\x3c","\xec","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticBoxSizer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticBoxSizer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticBoxSizer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticBoxSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticBoxSizer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
