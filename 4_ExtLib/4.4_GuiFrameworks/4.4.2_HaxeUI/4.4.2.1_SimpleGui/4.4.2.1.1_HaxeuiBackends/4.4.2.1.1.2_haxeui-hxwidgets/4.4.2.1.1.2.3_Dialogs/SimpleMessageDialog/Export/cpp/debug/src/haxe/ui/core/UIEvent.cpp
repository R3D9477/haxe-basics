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
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4a4136251cda9a2_16_new,"haxe.ui.core.UIEvent","new",0xbc40a29b,"haxe.ui.core.UIEvent.new","haxe/ui/core/UIEvent.hx",16,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_21_clone,"haxe.ui.core.UIEvent","clone",0x76d52a58,"haxe.ui.core.UIEvent.clone","haxe/ui/core/UIEvent.hx",21,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_6_boot,"haxe.ui.core.UIEvent","boot",0xf466a597,"haxe.ui.core.UIEvent.boot","haxe/ui/core/UIEvent.hx",6,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_7_boot,"haxe.ui.core.UIEvent","boot",0xf466a597,"haxe.ui.core.UIEvent.boot","haxe/ui/core/UIEvent.hx",7,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_8_boot,"haxe.ui.core.UIEvent","boot",0xf466a597,"haxe.ui.core.UIEvent.boot","haxe/ui/core/UIEvent.hx",8,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_9_boot,"haxe.ui.core.UIEvent","boot",0xf466a597,"haxe.ui.core.UIEvent.boot","haxe/ui/core/UIEvent.hx",9,0x8acb91d6)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a4136251cda9a2_10_boot,"haxe.ui.core.UIEvent","boot",0xf466a597,"haxe.ui.core.UIEvent.boot","haxe/ui/core/UIEvent.hx",10,0x8acb91d6)
namespace haxe{
namespace ui{
namespace core{

void UIEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_16_new)
HXLINE(  17)		super::__construct();
HXLINE(  18)		this->type = type;
            	}

Dynamic UIEvent_obj::__CreateEmpty() { return new UIEvent_obj; }

void *UIEvent_obj::_hx_vtable = 0;

Dynamic UIEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UIEvent_obj > _hx_result = new UIEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool UIEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27cfab89) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27cfab89;
	} else {
		return inClassId==(int)0x4b74db99;
	}
}

 ::haxe::ui::core::UIEvent UIEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b4a4136251cda9a2_21_clone)
HXLINE(  22)		 ::haxe::ui::core::UIEvent c =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  23)		c->type = this->type;
HXLINE(  24)		c->target = this->target;
HXLINE(  25)		c->data = this->data;
HXLINE(  26)		this->postClone(c);
HXLINE(  27)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UIEvent_obj,clone,return )

::String UIEvent_obj::READY;

::String UIEvent_obj::RESIZE;

::String UIEvent_obj::CHANGE;

::String UIEvent_obj::BEFORE_CHANGE;

::String UIEvent_obj::MOVE;


hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__new(::String type) {
	hx::ObjectPtr< UIEvent_obj > __this = new UIEvent_obj();
	__this->__construct(type);
	return __this;
}

hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type) {
	UIEvent_obj *__this = (UIEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UIEvent_obj), true, "haxe.ui.core.UIEvent"));
	*(void **)__this = UIEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

UIEvent_obj::UIEvent_obj()
{
}

void UIEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void UIEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(data,"data");
}

hx::Val UIEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UIEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UIEvent_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(UIEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(UIEvent_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo UIEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &UIEvent_obj::READY,HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64")},
	{hx::fsString,(void *) &UIEvent_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{hx::fsString,(void *) &UIEvent_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &UIEvent_obj::BEFORE_CHANGE,HX_HCSTRING("BEFORE_CHANGE","\x70","\xec","\x5d","\x1c")},
	{hx::fsString,(void *) &UIEvent_obj::MOVE,HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String UIEvent_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void UIEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UIEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
};

#endif

hx::Class UIEvent_obj::__mClass;

static ::String UIEvent_obj_sStaticFields[] = {
	HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64"),
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("BEFORE_CHANGE","\x70","\xec","\x5d","\x1c"),
	HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33"),
	::String(null())
};

void UIEvent_obj::__register()
{
	hx::Object *dummy = new UIEvent_obj;
	UIEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.UIEvent","\x29","\xb9","\xc6","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UIEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(UIEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UIEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UIEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UIEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_6_boot)
HXDLIN(   6)		READY = HX_("ready",63,a0,ba,e6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_7_boot)
HXDLIN(   7)		RESIZE = HX_("resize",f4,59,7b,08);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_8_boot)
HXDLIN(   8)		CHANGE = HX_("change",70,91,72,b7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_9_boot)
HXDLIN(   9)		BEFORE_CHANGE = HX_("beforeChange",4f,43,d6,e3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4a4136251cda9a2_10_boot)
HXDLIN(  10)		MOVE = HX_("move",11,e3,60,48);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
