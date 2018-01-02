// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#include <haxe/ui/layouts/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalGridLayout
#include <haxe/ui/layouts/HorizontalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6134b142d9c99f4_4_createFromName,"haxe.ui.layouts.LayoutFactory","createFromName",0xa5b41496,"haxe.ui.layouts.LayoutFactory.createFromName","haxe/ui/layouts/LayoutFactory.hx",4,0x59aaf4d6)
namespace haxe{
namespace ui{
namespace layouts{

void LayoutFactory_obj::__construct() { }

Dynamic LayoutFactory_obj::__CreateEmpty() { return new LayoutFactory_obj; }

void *LayoutFactory_obj::_hx_vtable = 0;

Dynamic LayoutFactory_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LayoutFactory_obj > _hx_result = new LayoutFactory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a7cd955;
}

 ::haxe::ui::layouts::Layout LayoutFactory_obj::createFromName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_e6134b142d9c99f4_4_createFromName)
HXLINE(   5)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("absolute",77,ce,95,c3)) ){
HXLINE(  13)			return  ::haxe::ui::layouts::AbsoluteLayout_obj::__alloc( HX_CTX );
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("continuous horizontal",55,ec,35,84)) ||  (_hx_switch_0==HX_("continuousHorizontal",d3,8e,6c,f2)) ){
HXLINE(  11)			return  ::haxe::ui::layouts::HorizontalContinuousLayout_obj::__alloc( HX_CTX );
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("horizontal",e4,fc,c3,15)) ){
HXLINE(   9)			return  ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX );
HXDLIN(   9)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("horizontal grid",82,2f,e7,f0)) ||  (_hx_switch_0==HX_("horizontalgrid",aa,15,3a,39)) ){
HXLINE(  17)			return  ::haxe::ui::layouts::HorizontalGridLayout_obj::__alloc( HX_CTX );
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("vertical",76,bc,15,6a)) ){
HXLINE(   7)			return  ::haxe::ui::layouts::VerticalLayout_obj::__alloc( HX_CTX );
HXDLIN(   7)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("vertical grid",b0,be,fb,e0)) ||  (_hx_switch_0==HX_("verticalgrid",3c,06,58,23)) ){
HXLINE(  15)			return  ::haxe::ui::layouts::VerticalGridLayout_obj::__alloc( HX_CTX );
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  20)		return  ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LayoutFactory_obj,createFromName,return )


LayoutFactory_obj::LayoutFactory_obj()
{
}

bool LayoutFactory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"createFromName") ) { outValue = createFromName_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LayoutFactory_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LayoutFactory_obj_sStaticStorageInfo = 0;
#endif

static void LayoutFactory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayoutFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LayoutFactory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayoutFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class LayoutFactory_obj::__mClass;

static ::String LayoutFactory_obj_sStaticFields[] = {
	HX_HCSTRING("createFromName","\xf1","\xbf","\x05","\xf9"),
	::String(null())
};

void LayoutFactory_obj::__register()
{
	hx::Object *dummy = new LayoutFactory_obj;
	LayoutFactory_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.LayoutFactory","\x29","\xb6","\xdb","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LayoutFactory_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LayoutFactory_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LayoutFactory_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LayoutFactory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LayoutFactory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutFactory_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
