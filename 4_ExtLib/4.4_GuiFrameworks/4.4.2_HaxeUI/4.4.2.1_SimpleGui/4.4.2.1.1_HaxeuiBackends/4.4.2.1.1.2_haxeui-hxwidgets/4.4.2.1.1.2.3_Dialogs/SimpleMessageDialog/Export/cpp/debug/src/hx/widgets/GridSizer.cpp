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
#ifndef INCLUDED_hx_widgets_GridSizer
#include <hx/widgets/GridSizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d0091faae36b0c7_7_new,"hx.widgets.GridSizer","new",0x07aa05e0,"hx.widgets.GridSizer.new","hx/widgets/GridSizer.hx",7,0xd4713992)
namespace hx{
namespace widgets{

void GridSizer_obj::__construct(int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap){
int vgap = __o_vgap.Default(0);
int hgap = __o_hgap.Default(0);
            	HX_STACKFRAME(&_hx_pos_3d0091faae36b0c7_7_new)
HXLINE(   8)		super::__construct();
HXLINE(   9)		this->_ref = ::cpp::Pointer_obj::fromRaw((new wxGridSizer(cols,vgap,hgap)))->reinterpret();
            	}

Dynamic GridSizer_obj::__CreateEmpty() { return new GridSizer_obj; }

void *GridSizer_obj::_hx_vtable = 0;

Dynamic GridSizer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GridSizer_obj > _hx_result = new GridSizer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GridSizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x309ca332) {
		if (inClassId<=(int)0x2bb8530c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2bb8530c;
		} else {
			return inClassId==(int)0x309ca332;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}


hx::ObjectPtr< GridSizer_obj > GridSizer_obj::__new(int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap) {
	hx::ObjectPtr< GridSizer_obj > __this = new GridSizer_obj();
	__this->__construct(cols,__o_vgap,__o_hgap);
	return __this;
}

hx::ObjectPtr< GridSizer_obj > GridSizer_obj::__alloc(hx::Ctx *_hx_ctx,int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap) {
	GridSizer_obj *__this = (GridSizer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GridSizer_obj), true, "hx.widgets.GridSizer"));
	*(void **)__this = GridSizer_obj::_hx_vtable;
	__this->__construct(cols,__o_vgap,__o_hgap);
	return __this;
}

GridSizer_obj::GridSizer_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GridSizer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GridSizer_obj_sStaticStorageInfo = 0;
#endif

static void GridSizer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridSizer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GridSizer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridSizer_obj::__mClass,"__mClass");
};

#endif

hx::Class GridSizer_obj::__mClass;

void GridSizer_obj::__register()
{
	hx::Object *dummy = new GridSizer_obj;
	GridSizer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.GridSizer","\xee","\xd5","\x81","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GridSizer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GridSizer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GridSizer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GridSizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GridSizer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
