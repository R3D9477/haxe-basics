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
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_19_new,"haxe.ui.core.MouseEvent","new",0x092389a4,"haxe.ui.core.MouseEvent.new","haxe/ui/core/MouseEvent.hx",19,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_22_clone,"haxe.ui.core.MouseEvent","clone",0xef86a5a1,"haxe.ui.core.MouseEvent.clone","haxe/ui/core/MouseEvent.hx",22,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_4_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",4,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_5_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",5,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_6_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",6,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_7_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",7,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_8_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",8,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_9_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",9,0x8251284b)
HX_LOCAL_STACK_FRAME(_hx_pos_6da2aaede4dd8a11_10_boot,"haxe.ui.core.MouseEvent","boot",0xee0de66e,"haxe.ui.core.MouseEvent.boot","haxe/ui/core/MouseEvent.hx",10,0x8251284b)
namespace haxe{
namespace ui{
namespace core{

void MouseEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_19_new)
HXDLIN(  19)		super::__construct(type);
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27cfab89) {
		if (inClassId<=(int)0x0bf7cc1a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0bf7cc1a;
		} else {
			return inClassId==(int)0x27cfab89;
		}
	} else {
		return inClassId==(int)0x4b74db99;
	}
}

 ::haxe::ui::core::UIEvent MouseEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_22_clone)
HXLINE(  23)		 ::haxe::ui::core::MouseEvent c =  ::haxe::ui::core::MouseEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  24)		c->type = this->type;
HXLINE(  25)		c->target = this->target;
HXLINE(  26)		c->screenX = this->screenX;
HXLINE(  27)		c->screenY = this->screenY;
HXLINE(  28)		c->buttonDown = this->buttonDown;
HXLINE(  29)		c->delta = this->delta;
HXLINE(  30)		c->touchEvent = this->touchEvent;
HXLINE(  31)		this->postClone(c);
HXLINE(  32)		return c;
            	}


::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::CLICK;


hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type) {
	hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct(type);
	return __this;
}

hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "haxe.ui.core.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

hx::Val MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return hx::Val( delta ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return hx::Val( screenX ); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return hx::Val( screenY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return hx::Val( buttonDown ); }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { return hx::Val( touchEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MouseEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { touchEvent=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("touchEvent","\xdb","\xab","\x55","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,screenX),HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,screenY),HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,touchEvent),HX_HCSTRING("touchEvent","\xdb","\xab","\x55","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MouseEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OVER,HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OUT,HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_WHEEL,HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28")},
	{hx::fsString,(void *) &MouseEvent_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("touchEvent","\xdb","\xab","\x55","\x6f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String MouseEvent_obj_sStaticFields[] = {
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6"),
	HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	::String(null())
};

void MouseEvent_obj::__register()
{
	hx::Object *dummy = new MouseEvent_obj;
	MouseEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.MouseEvent","\xb2","\x27","\xf5","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MouseEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MouseEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_4_boot)
HXDLIN(   4)		MOUSE_MOVE = HX_("mousemove",b6,6f,dc,09);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_5_boot)
HXDLIN(   5)		MOUSE_OVER = HX_("mouseover",f9,1d,34,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_6_boot)
HXDLIN(   6)		MOUSE_OUT = HX_("mouseout",89,2f,36,a4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_7_boot)
HXDLIN(   7)		MOUSE_DOWN = HX_("mousedown",07,85,e9,03);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_8_boot)
HXDLIN(   8)		MOUSE_UP = HX_("mouseup",c0,0f,73,c0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_9_boot)
HXDLIN(   9)		MOUSE_WHEEL = HX_("mousewheel",56,b8,59,54);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6da2aaede4dd8a11_10_boot)
HXDLIN(  10)		CLICK = HX_("click",48,7c,5e,48);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
