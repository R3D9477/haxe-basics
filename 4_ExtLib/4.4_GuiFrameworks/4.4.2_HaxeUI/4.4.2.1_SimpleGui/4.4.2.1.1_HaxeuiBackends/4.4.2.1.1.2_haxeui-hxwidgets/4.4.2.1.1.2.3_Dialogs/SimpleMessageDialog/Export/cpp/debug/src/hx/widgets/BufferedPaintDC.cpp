// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_ba5a1120fe17f00a
#define INCLUDED_ba5a1120fe17f00a
#include "wx/dcbuffer.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_BufferedDC
#include <hx/widgets/BufferedDC.h>
#endif
#ifndef INCLUDED_hx_widgets_BufferedPaintDC
#include <hx/widgets/BufferedPaintDC.h>
#endif
#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryDC
#include <hx/widgets/MemoryDC.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5d26e03494febde5_9_new,"hx.widgets.BufferedPaintDC","new",0x67659eb3,"hx.widgets.BufferedPaintDC.new","hx/widgets/BufferedPaintDC.hx",9,0x4831c99f)
HX_LOCAL_STACK_FRAME(_hx_pos_5d26e03494febde5_21_get_bufferedDCRef,"hx.widgets.BufferedPaintDC","get_bufferedDCRef",0x30ff463f,"hx.widgets.BufferedPaintDC.get_bufferedDCRef","hx/widgets/BufferedPaintDC.hx",21,0x4831c99f)
namespace hx{
namespace widgets{

void BufferedPaintDC_obj::__construct( ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_5d26e03494febde5_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		bool _hx_tmp = hx::IsNotNull( window );
            	}

Dynamic BufferedPaintDC_obj::__CreateEmpty() { return new BufferedPaintDC_obj; }

void *BufferedPaintDC_obj::_hx_vtable = 0;

Dynamic BufferedPaintDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BufferedPaintDC_obj > _hx_result = new BufferedPaintDC_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BufferedPaintDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x388295db) {
		if (inClassId<=(int)0x2a720da7) {
			if (inClassId<=(int)0x0f70b079) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0f70b079;
			} else {
				return inClassId==(int)0x2a720da7;
			}
		} else {
			return inClassId==(int)0x388295db;
		}
	} else {
		return inClassId==(int)0x6e905e56 || inClassId==(int)0x7f575436;
	}
}

::cpp::Pointer<  wxBufferedPaintDC > BufferedPaintDC_obj::get_bufferedDCRef(){
            	HX_STACKFRAME(&_hx_pos_5d26e03494febde5_21_get_bufferedDCRef)
HXDLIN(  21)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BufferedPaintDC_obj,get_bufferedDCRef,return )


hx::ObjectPtr< BufferedPaintDC_obj > BufferedPaintDC_obj::__new( ::hx::widgets::Window window) {
	hx::ObjectPtr< BufferedPaintDC_obj > __this = new BufferedPaintDC_obj();
	__this->__construct(window);
	return __this;
}

hx::ObjectPtr< BufferedPaintDC_obj > BufferedPaintDC_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window) {
	BufferedPaintDC_obj *__this = (BufferedPaintDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BufferedPaintDC_obj), true, "hx.widgets.BufferedPaintDC"));
	*(void **)__this = BufferedPaintDC_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

BufferedPaintDC_obj::BufferedPaintDC_obj()
{
}

void BufferedPaintDC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferedPaintDC);
	HX_MARK_MEMBER_NAME(bufferedDCRef,"bufferedDCRef");
	 ::hx::widgets::MemoryDC_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BufferedPaintDC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bufferedDCRef,"bufferedDCRef");
	 ::hx::widgets::MemoryDC_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BufferedPaintDC_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"bufferedDCRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_bufferedDCRef() : bufferedDCRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_bufferedDCRef") ) { return hx::Val( get_bufferedDCRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BufferedPaintDC_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"bufferedDCRef") ) { bufferedDCRef=inValue.Cast< ::cpp::Pointer<  wxBufferedPaintDC > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferedPaintDC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bufferedDCRef","\x55","\x21","\x9c","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BufferedPaintDC_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxBufferedPaintDC >*/ ,(int)offsetof(BufferedPaintDC_obj,bufferedDCRef),HX_HCSTRING("bufferedDCRef","\x55","\x21","\x9c","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BufferedPaintDC_obj_sStaticStorageInfo = 0;
#endif

static ::String BufferedPaintDC_obj_sMemberFields[] = {
	HX_HCSTRING("bufferedDCRef","\x55","\x21","\x9c","\x1f"),
	HX_HCSTRING("get_bufferedDCRef","\xac","\x2c","\x0c","\x26"),
	::String(null()) };

static void BufferedPaintDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BufferedPaintDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BufferedPaintDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BufferedPaintDC_obj::__mClass,"__mClass");
};

#endif

hx::Class BufferedPaintDC_obj::__mClass;

void BufferedPaintDC_obj::__register()
{
	hx::Object *dummy = new BufferedPaintDC_obj;
	BufferedPaintDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.BufferedPaintDC","\x41","\xc9","\x85","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BufferedPaintDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BufferedPaintDC_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BufferedPaintDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BufferedPaintDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BufferedPaintDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BufferedPaintDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
