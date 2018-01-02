// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_698d2411f4ffe514_10_new,"haxe.ui.util.EventMap","new",0x6341814e,"haxe.ui.util.EventMap.new","haxe/ui/util/EventMap.hx",10,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_14_keys,"haxe.ui.util.EventMap","keys",0x74140146,"haxe.ui.util.EventMap.keys","haxe/ui/util/EventMap.hx",14,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_17_add,"haxe.ui.util.EventMap","add",0x6337a30f,"haxe.ui.util.EventMap.add","haxe/ui/util/EventMap.hx",17,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_31_remove,"haxe.ui.util.EventMap","remove",0x6699b416,"haxe.ui.util.EventMap.remove","haxe/ui/util/EventMap.hx",31,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_44_invoke,"haxe.ui.util.EventMap","invoke",0x01f18f4a,"haxe.ui.util.EventMap.invoke","haxe/ui/util/EventMap.hx",44,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_56_listenerCount,"haxe.ui.util.EventMap","listenerCount",0xf735f629,"haxe.ui.util.EventMap.listenerCount","haxe/ui/util/EventMap.hx",56,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_65_listeners,"haxe.ui.util.EventMap","listeners",0x30d47ced,"haxe.ui.util.EventMap.listeners","haxe/ui/util/EventMap.hx",65,0xae688621)
namespace haxe{
namespace ui{
namespace util{

void EventMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_698d2411f4ffe514_10_new)
HXDLIN(  10)		this->_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic EventMap_obj::__CreateEmpty() { return new EventMap_obj; }

void *EventMap_obj::_hx_vtable = 0;

Dynamic EventMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventMap_obj > _hx_result = new EventMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x608682fe;
}

 ::Dynamic EventMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_14_keys)
HXDLIN(  14)		return this->_map->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventMap_obj,keys,return )

bool EventMap_obj::add(::String type, ::Dynamic listener){
            	HX_GC_STACKFRAME(&_hx_pos_698d2411f4ffe514_17_add)
HXLINE(  18)		bool b = false;
HXLINE(  19)		 ::haxe::ui::util::FunctionArray arr = this->_map->get(type).StaticCast<  ::haxe::ui::util::FunctionArray >();
HXLINE(  20)		if (hx::IsNull( arr )) {
HXLINE(  21)			arr =  ::haxe::ui::util::FunctionArray_obj::__alloc( HX_CTX ,null());
HXLINE(  22)			arr->push(listener);
HXLINE(  23)			this->_map->set(type,arr);
HXLINE(  24)			b = true;
            		}
            		else {
HXLINE(  25)			if ((arr->contains(listener) == false)) {
HXLINE(  26)				arr->push(listener);
            			}
            		}
HXLINE(  28)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventMap_obj,add,return )

bool EventMap_obj::remove(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_31_remove)
HXLINE(  32)		bool b = false;
HXLINE(  33)		 ::haxe::ui::util::FunctionArray arr = this->_map->get(type).StaticCast<  ::haxe::ui::util::FunctionArray >();
HXLINE(  34)		if (hx::IsNotNull( arr )) {
HXLINE(  35)			arr->remove(listener);
HXLINE(  36)			if ((arr->get_length() == (int)0)) {
HXLINE(  37)				this->_map->remove(type);
HXLINE(  38)				b = true;
            			}
            		}
HXLINE(  41)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventMap_obj,remove,return )

void EventMap_obj::invoke(::String type, ::haxe::ui::core::UIEvent event, ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_44_invoke)
HXLINE(  45)		 ::haxe::ui::util::FunctionArray arr = this->_map->get(type).StaticCast<  ::haxe::ui::util::FunctionArray >();
HXLINE(  46)		if (hx::IsNotNull( arr )) {
HXLINE(  47)			arr = arr->copy();
HXLINE(  48)			{
HXLINE(  48)				 ::Dynamic fn = arr->iterator();
HXDLIN(  48)				while(( (bool)(fn->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  48)					 ::Dynamic fn1 = fn->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE(  49)					 ::haxe::ui::core::UIEvent c = event->clone();
HXLINE(  50)					c->target = target;
HXLINE(  51)					fn1(c);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventMap_obj,invoke,(void))

int EventMap_obj::listenerCount(::String type){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_56_listenerCount)
HXLINE(  57)		int n = (int)0;
HXLINE(  58)		 ::haxe::ui::util::FunctionArray arr = this->_map->get(type).StaticCast<  ::haxe::ui::util::FunctionArray >();
HXLINE(  59)		if (hx::IsNotNull( arr )) {
HXLINE(  60)			n = arr->get_length();
            		}
HXLINE(  62)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMap_obj,listenerCount,return )

 ::haxe::ui::util::FunctionArray EventMap_obj::listeners(::String type){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_65_listeners)
HXLINE(  66)		 ::haxe::ui::util::FunctionArray arr = this->_map->get(type).StaticCast<  ::haxe::ui::util::FunctionArray >();
HXLINE(  67)		if (hx::IsNull( arr )) {
HXLINE(  68)			return null();
            		}
HXLINE(  70)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMap_obj,listeners,return )


hx::ObjectPtr< EventMap_obj > EventMap_obj::__new() {
	hx::ObjectPtr< EventMap_obj > __this = new EventMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< EventMap_obj > EventMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	EventMap_obj *__this = (EventMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventMap_obj), true, "haxe.ui.util.EventMap"));
	*(void **)__this = EventMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventMap_obj::EventMap_obj()
{
}

void EventMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventMap);
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void EventMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

hx::Val EventMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return hx::Val( _map ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return hx::Val( invoke_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return hx::Val( listeners_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listenerCount") ) { return hx::Val( listenerCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EventMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EventMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventMap_obj,_map),HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EventMap_obj_sStaticStorageInfo = 0;
#endif

static ::String EventMap_obj_sMemberFields[] = {
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("invoke","\x78","\x77","\xe0","\x9f"),
	HX_HCSTRING("listenerCount","\xbb","\x8f","\x84","\x11"),
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	::String(null()) };

static void EventMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventMap_obj::__mClass,"__mClass");
};

#endif

hx::Class EventMap_obj::__mClass;

void EventMap_obj::__register()
{
	hx::Object *dummy = new EventMap_obj;
	EventMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.EventMap","\x5c","\x82","\xbf","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EventMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
