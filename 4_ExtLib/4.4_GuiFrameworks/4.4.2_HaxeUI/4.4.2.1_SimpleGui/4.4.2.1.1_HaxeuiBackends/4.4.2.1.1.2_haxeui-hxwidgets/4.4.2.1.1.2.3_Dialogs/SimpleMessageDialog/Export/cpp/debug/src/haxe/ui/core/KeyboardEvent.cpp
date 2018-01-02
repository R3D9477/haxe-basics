// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_core_KeyboardEvent
#include <haxe/ui/core/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_299f87325e6c11f9_13_new,"haxe.ui.core.KeyboardEvent","new",0xd4a01208,"haxe.ui.core.KeyboardEvent.new","haxe/ui/core/KeyboardEvent.hx",13,0x20735dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_299f87325e6c11f9_16_clone,"haxe.ui.core.KeyboardEvent","clone",0xf9810f05,"haxe.ui.core.KeyboardEvent.clone","haxe/ui/core/KeyboardEvent.hx",16,0x20735dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_299f87325e6c11f9_4_boot,"haxe.ui.core.KeyboardEvent","boot",0x2f88b58a,"haxe.ui.core.KeyboardEvent.boot","haxe/ui/core/KeyboardEvent.hx",4,0x20735dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_299f87325e6c11f9_6_boot,"haxe.ui.core.KeyboardEvent","boot",0x2f88b58a,"haxe.ui.core.KeyboardEvent.boot","haxe/ui/core/KeyboardEvent.hx",6,0x20735dc9)
HX_LOCAL_STACK_FRAME(_hx_pos_299f87325e6c11f9_7_boot,"haxe.ui.core.KeyboardEvent","boot",0x2f88b58a,"haxe.ui.core.KeyboardEvent.boot","haxe/ui/core/KeyboardEvent.hx",7,0x20735dc9)
namespace haxe{
namespace ui{
namespace core{

void KeyboardEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_299f87325e6c11f9_13_new)
HXDLIN(  13)		super::__construct(type);
            	}

Dynamic KeyboardEvent_obj::__CreateEmpty() { return new KeyboardEvent_obj; }

void *KeyboardEvent_obj::_hx_vtable = 0;

Dynamic KeyboardEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< KeyboardEvent_obj > _hx_result = new KeyboardEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KeyboardEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27cfab89) {
		if (inClassId<=(int)0x0a2a1f5a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a2a1f5a;
		} else {
			return inClassId==(int)0x27cfab89;
		}
	} else {
		return inClassId==(int)0x4b74db99;
	}
}

 ::haxe::ui::core::UIEvent KeyboardEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_299f87325e6c11f9_16_clone)
HXLINE(  17)		 ::haxe::ui::core::KeyboardEvent c =  ::haxe::ui::core::KeyboardEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  18)		c->type = this->type;
HXLINE(  19)		c->target = this->target;
HXLINE(  20)		c->keyCode = this->keyCode;
HXLINE(  21)		c->shiftKey = this->shiftKey;
HXLINE(  22)		return c;
            	}


int KeyboardEvent_obj::KEY_TAB;

::String KeyboardEvent_obj::KEY_DOWN;

::String KeyboardEvent_obj::KEY_UP;


hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type) {
	hx::ObjectPtr< KeyboardEvent_obj > __this = new KeyboardEvent_obj();
	__this->__construct(type);
	return __this;
}

hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type) {
	KeyboardEvent_obj *__this = (KeyboardEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KeyboardEvent_obj), true, "haxe.ui.core.KeyboardEvent"));
	*(void **)__this = KeyboardEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

KeyboardEvent_obj::KeyboardEvent_obj()
{
}

hx::Val KeyboardEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return hx::Val( shiftKey ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val KeyboardEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo KeyboardEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo KeyboardEvent_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &KeyboardEvent_obj::KEY_TAB,HX_HCSTRING("KEY_TAB","\x35","\x8c","\x1e","\x43")},
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_DOWN,HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d")},
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_UP,HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String KeyboardEvent_obj_sMemberFields[] = {
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void KeyboardEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_TAB,"KEY_TAB");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KeyboardEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_TAB,"KEY_TAB");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#endif

hx::Class KeyboardEvent_obj::__mClass;

static ::String KeyboardEvent_obj_sStaticFields[] = {
	HX_HCSTRING("KEY_TAB","\x35","\x8c","\x1e","\x43"),
	HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d"),
	HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2"),
	::String(null())
};

void KeyboardEvent_obj::__register()
{
	hx::Object *dummy = new KeyboardEvent_obj;
	KeyboardEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.KeyboardEvent","\x16","\xae","\x24","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = KeyboardEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(KeyboardEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(KeyboardEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyboardEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KeyboardEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyboardEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyboardEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KeyboardEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_299f87325e6c11f9_4_boot)
HXDLIN(   4)		KEY_TAB = (int)9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_299f87325e6c11f9_6_boot)
HXDLIN(   6)		KEY_DOWN = HX_("keydown",81,3d,6e,b1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_299f87325e6c11f9_7_boot)
HXDLIN(   7)		KEY_UP = HX_("keyup",ba,d5,fe,de);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
