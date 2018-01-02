// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_GraphicsObject
#include <hx/widgets/GraphicsObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

namespace hx{
namespace widgets{

void GraphicsObject_obj::__construct() { }

Dynamic GraphicsObject_obj::__CreateEmpty() { return new GraphicsObject_obj; }

void *GraphicsObject_obj::_hx_vtable = 0;

Dynamic GraphicsObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsObject_obj > _hx_result = new GraphicsObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5ed99f29) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5ed99f29;
	} else {
		return inClassId==(int)0x7f575436;
	}
}


GraphicsObject_obj::GraphicsObject_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicsObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GraphicsObject_obj_sStaticStorageInfo = 0;
#endif

static void GraphicsObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsObject_obj::__mClass;

void GraphicsObject_obj::__register()
{
	hx::Object *dummy = new GraphicsObject_obj;
	GraphicsObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.GraphicsObject","\x07","\x69","\x00","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
