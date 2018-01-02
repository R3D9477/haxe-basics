// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_hx_widgets_GCDC
#include <hx/widgets/GCDC.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_WindowDC
#include <hx/widgets/WindowDC.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_673888ebaf10c590_9_new,"hx.widgets.GCDC","new",0x42cef64a,"hx.widgets.GCDC.new","hx/widgets/GCDC.hx",9,0x1c3c7ba4)
namespace hx{
namespace widgets{

void GCDC_obj::__construct( ::hx::widgets::WindowDC windowDC){
            	HX_STACKFRAME(&_hx_pos_673888ebaf10c590_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic GCDC_obj::__CreateEmpty() { return new GCDC_obj; }

void *GCDC_obj::_hx_vtable = 0;

Dynamic GCDC_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GCDC_obj > _hx_result = new GCDC_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GCDC_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e905e56) {
		if (inClassId<=(int)0x1e0e60fa) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e0e60fa;
		} else {
			return inClassId==(int)0x6e905e56;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< GCDC_obj > GCDC_obj::__new( ::hx::widgets::WindowDC windowDC) {
	hx::ObjectPtr< GCDC_obj > __this = new GCDC_obj();
	__this->__construct(windowDC);
	return __this;
}

hx::ObjectPtr< GCDC_obj > GCDC_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::WindowDC windowDC) {
	GCDC_obj *__this = (GCDC_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GCDC_obj), true, "hx.widgets.GCDC"));
	*(void **)__this = GCDC_obj::_hx_vtable;
	__this->__construct(windowDC);
	return __this;
}

GCDC_obj::GCDC_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GCDC_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GCDC_obj_sStaticStorageInfo = 0;
#endif

static void GCDC_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GCDC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GCDC_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GCDC_obj::__mClass,"__mClass");
};

#endif

hx::Class GCDC_obj::__mClass;

void GCDC_obj::__register()
{
	hx::Object *dummy = new GCDC_obj;
	GCDC_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.GCDC","\x58","\xc9","\xb7","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GCDC_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GCDC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GCDC_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GCDC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GCDC_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
