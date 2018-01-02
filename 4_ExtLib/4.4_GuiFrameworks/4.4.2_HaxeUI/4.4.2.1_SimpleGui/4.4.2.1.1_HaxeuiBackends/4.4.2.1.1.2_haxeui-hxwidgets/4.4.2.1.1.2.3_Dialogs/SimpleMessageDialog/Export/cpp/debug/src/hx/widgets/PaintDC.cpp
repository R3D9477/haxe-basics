// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_hx_widgets_PaintDC
#include <hx/widgets/PaintDC.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a856f4174455fba9_3_new,"hx.widgets.PaintDC","new",0xb69692d2,"hx.widgets.PaintDC.new","hx/widgets/PaintDC.hx",3,0xc5e0ac60)
namespace hx{
namespace widgets{

void PaintDC_obj::__construct( ::hx::widgets::Window window){
            	HX_STACKFRAME(&_hx_pos_a856f4174455fba9_3_new)
HXDLIN(   3)		super::__construct(window);
            	}

Dynamic PaintDC_obj::__CreateEmpty() { return new PaintDC_obj; }

void *PaintDC_obj::_hx_vtable = 0;

Dynamic PaintDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PaintDC_obj > _hx_result = new PaintDC_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PaintDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e905e56) {
		if (inClassId<=(int)0x65e2f046) {
			if (inClassId<=(int)0x12f36e89) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x12f36e89;
			} else {
				return inClassId==(int)0x65e2f046;
			}
		} else {
			return inClassId==(int)0x6e905e56;
		}
	} else {
		return inClassId==(int)0x7b31ab6e || inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< PaintDC_obj > PaintDC_obj::__new( ::hx::widgets::Window window) {
	hx::ObjectPtr< PaintDC_obj > __this = new PaintDC_obj();
	__this->__construct(window);
	return __this;
}

hx::ObjectPtr< PaintDC_obj > PaintDC_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window) {
	PaintDC_obj *__this = (PaintDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PaintDC_obj), true, "hx.widgets.PaintDC"));
	*(void **)__this = PaintDC_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

PaintDC_obj::PaintDC_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PaintDC_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PaintDC_obj_sStaticStorageInfo = 0;
#endif

static void PaintDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PaintDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PaintDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PaintDC_obj::__mClass,"__mClass");
};

#endif

hx::Class PaintDC_obj::__mClass;

void PaintDC_obj::__register()
{
	hx::Object *dummy = new PaintDC_obj;
	PaintDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.PaintDC","\xe0","\x81","\x44","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PaintDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PaintDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PaintDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PaintDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PaintDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
