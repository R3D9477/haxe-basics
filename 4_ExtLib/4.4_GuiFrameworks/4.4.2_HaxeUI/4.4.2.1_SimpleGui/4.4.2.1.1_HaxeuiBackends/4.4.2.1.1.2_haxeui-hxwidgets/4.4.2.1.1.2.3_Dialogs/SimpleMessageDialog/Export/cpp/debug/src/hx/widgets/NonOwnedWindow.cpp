// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a80f155826de64b7_3_new,"hx.widgets.NonOwnedWindow","new",0x60541477,"hx.widgets.NonOwnedWindow.new","hx/widgets/NonOwnedWindow.hx",3,0x407abb97)
namespace hx{
namespace widgets{

void NonOwnedWindow_obj::__construct( ::hx::widgets::Window parent, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_a80f155826de64b7_3_new)
HXDLIN(   3)		super::__construct(parent,id);
            	}

Dynamic NonOwnedWindow_obj::__CreateEmpty() { return new NonOwnedWindow_obj; }

void *NonOwnedWindow_obj::_hx_vtable = 0;

Dynamic NonOwnedWindow_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NonOwnedWindow_obj > _hx_result = new NonOwnedWindow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NonOwnedWindow_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x350d7ce6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
		} else {
			return inClassId==(int)0x3d664327;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}


hx::ObjectPtr< NonOwnedWindow_obj > NonOwnedWindow_obj::__new( ::hx::widgets::Window parent, ::Dynamic id) {
	hx::ObjectPtr< NonOwnedWindow_obj > __this = new NonOwnedWindow_obj();
	__this->__construct(parent,id);
	return __this;
}

hx::ObjectPtr< NonOwnedWindow_obj > NonOwnedWindow_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic id) {
	NonOwnedWindow_obj *__this = (NonOwnedWindow_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NonOwnedWindow_obj), true, "hx.widgets.NonOwnedWindow"));
	*(void **)__this = NonOwnedWindow_obj::_hx_vtable;
	__this->__construct(parent,id);
	return __this;
}

NonOwnedWindow_obj::NonOwnedWindow_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NonOwnedWindow_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NonOwnedWindow_obj_sStaticStorageInfo = 0;
#endif

static void NonOwnedWindow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NonOwnedWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NonOwnedWindow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NonOwnedWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class NonOwnedWindow_obj::__mClass;

void NonOwnedWindow_obj::__register()
{
	hx::Object *dummy = new NonOwnedWindow_obj;
	NonOwnedWindow_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.NonOwnedWindow","\x05","\x0d","\x8d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NonOwnedWindow_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NonOwnedWindow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NonOwnedWindow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NonOwnedWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NonOwnedWindow_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
