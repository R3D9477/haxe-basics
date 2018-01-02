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
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f6e6a9f5c5d39f9b_7_new,"hx.widgets.BoxSizer","new",0x6b39b055,"hx.widgets.BoxSizer.new","hx/widgets/BoxSizer.hx",7,0xb8b182f9)
namespace hx{
namespace widgets{

void BoxSizer_obj::__construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient){
            	HX_STACKFRAME(&_hx_pos_f6e6a9f5c5d39f9b_7_new)
HXLINE(   8)		if (hx::IsNull( this->_ref )) {
HXLINE(   9)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBoxSizer(orient)))->reinterpret();
            		}
HXLINE(  12)		super::__construct();
            	}

Dynamic BoxSizer_obj::__CreateEmpty() { return new BoxSizer_obj; }

void *BoxSizer_obj::_hx_vtable = 0;

Dynamic BoxSizer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BoxSizer_obj > _hx_result = new BoxSizer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BoxSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52860cbd) {
		if (inClassId<=(int)0x309ca332) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x309ca332;
		} else {
			return inClassId==(int)0x52860cbd;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< BoxSizer_obj > BoxSizer_obj::__new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient) {
	hx::ObjectPtr< BoxSizer_obj > __this = new BoxSizer_obj();
	__this->__construct(orient);
	return __this;
}

hx::ObjectPtr< BoxSizer_obj > BoxSizer_obj::__alloc(hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient) {
	BoxSizer_obj *__this = (BoxSizer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BoxSizer_obj), true, "hx.widgets.BoxSizer"));
	*(void **)__this = BoxSizer_obj::_hx_vtable;
	__this->__construct(orient);
	return __this;
}

BoxSizer_obj::BoxSizer_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BoxSizer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BoxSizer_obj_sStaticStorageInfo = 0;
#endif

static void BoxSizer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoxSizer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BoxSizer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxSizer_obj::__mClass,"__mClass");
};

#endif

hx::Class BoxSizer_obj::__mClass;

void BoxSizer_obj::__register()
{
	hx::Object *dummy = new BoxSizer_obj;
	BoxSizer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.BoxSizer","\xe3","\xe1","\x83","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BoxSizer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BoxSizer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BoxSizer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BoxSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BoxSizer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
