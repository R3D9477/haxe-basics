// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_878d495aa0448636_6_new,"haxe.ui.backend.EventBase","new",0xa60f3d71,"haxe.ui.backend.EventBase.new","haxe/ui/backend/EventBase.hx",6,0x3479bf40)
HX_LOCAL_STACK_FRAME(_hx_pos_878d495aa0448636_9_cancel,"haxe.ui.backend.EventBase","cancel",0x30d74109,"haxe.ui.backend.EventBase.cancel","haxe/ui/backend/EventBase.hx",9,0x3479bf40)
HX_LOCAL_STACK_FRAME(_hx_pos_878d495aa0448636_12_postClone,"haxe.ui.backend.EventBase","postClone",0x8c1032ae,"haxe.ui.backend.EventBase.postClone","haxe/ui/backend/EventBase.hx",12,0x3479bf40)
namespace haxe{
namespace ui{
namespace backend{

void EventBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_878d495aa0448636_6_new)
            	}

Dynamic EventBase_obj::__CreateEmpty() { return new EventBase_obj; }

void *EventBase_obj::_hx_vtable = 0;

Dynamic EventBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventBase_obj > _hx_result = new EventBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b74db99;
}

void EventBase_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_878d495aa0448636_9_cancel)
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventBase_obj,cancel,(void))

void EventBase_obj::postClone( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_878d495aa0448636_12_postClone)
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventBase_obj,postClone,(void))


hx::ObjectPtr< EventBase_obj > EventBase_obj::__new() {
	hx::ObjectPtr< EventBase_obj > __this = new EventBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< EventBase_obj > EventBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	EventBase_obj *__this = (EventBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventBase_obj), false, "haxe.ui.backend.EventBase"));
	*(void **)__this = EventBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventBase_obj::EventBase_obj()
{
}

hx::Val EventBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return hx::Val( cancel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postClone") ) { return hx::Val( postClone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EventBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EventBase_obj_sStaticStorageInfo = 0;
#endif

static ::String EventBase_obj_sMemberFields[] = {
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("postClone","\xdd","\x22","\x98","\x01"),
	::String(null()) };

static void EventBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventBase_obj::__mClass,"__mClass");
};

#endif

hx::Class EventBase_obj::__mClass;

void EventBase_obj::__register()
{
	hx::Object *dummy = new EventBase_obj;
	EventBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.EventBase","\xff","\xb0","\x8d","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EventBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
