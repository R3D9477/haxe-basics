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
#ifndef INCLUDED_haxe_ui_core_ScrollEvent
#include <haxe/ui/core/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e6fdbdefc7cabffa_9_new,"haxe.ui.core.ScrollEvent","new",0x006d9b22,"haxe.ui.core.ScrollEvent.new","haxe/ui/core/ScrollEvent.hx",9,0x5c94abaf)
HX_LOCAL_STACK_FRAME(_hx_pos_e6fdbdefc7cabffa_12_clone,"haxe.ui.core.ScrollEvent","clone",0xda96929f,"haxe.ui.core.ScrollEvent.clone","haxe/ui/core/ScrollEvent.hx",12,0x5c94abaf)
HX_LOCAL_STACK_FRAME(_hx_pos_e6fdbdefc7cabffa_4_boot,"haxe.ui.core.ScrollEvent","boot",0x57932330,"haxe.ui.core.ScrollEvent.boot","haxe/ui/core/ScrollEvent.hx",4,0x5c94abaf)
HX_LOCAL_STACK_FRAME(_hx_pos_e6fdbdefc7cabffa_5_boot,"haxe.ui.core.ScrollEvent","boot",0x57932330,"haxe.ui.core.ScrollEvent.boot","haxe/ui/core/ScrollEvent.hx",5,0x5c94abaf)
HX_LOCAL_STACK_FRAME(_hx_pos_e6fdbdefc7cabffa_6_boot,"haxe.ui.core.ScrollEvent","boot",0x57932330,"haxe.ui.core.ScrollEvent.boot","haxe/ui/core/ScrollEvent.hx",6,0x5c94abaf)
namespace haxe{
namespace ui{
namespace core{

void ScrollEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_e6fdbdefc7cabffa_9_new)
HXDLIN(   9)		super::__construct(type);
            	}

Dynamic ScrollEvent_obj::__CreateEmpty() { return new ScrollEvent_obj; }

void *ScrollEvent_obj::_hx_vtable = 0;

Dynamic ScrollEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollEvent_obj > _hx_result = new ScrollEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b74db99) {
		if (inClassId<=(int)0x27cfab89) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x27cfab89;
		} else {
			return inClassId==(int)0x4b74db99;
		}
	} else {
		return inClassId==(int)0x5168fa74;
	}
}

 ::haxe::ui::core::UIEvent ScrollEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e6fdbdefc7cabffa_12_clone)
HXLINE(  13)		 ::haxe::ui::core::ScrollEvent c =  ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  14)		c->type = this->type;
HXLINE(  15)		c->target = this->target;
HXLINE(  16)		this->postClone(c);
HXLINE(  17)		return c;
            	}


::String ScrollEvent_obj::CHANGE;

::String ScrollEvent_obj::START;

::String ScrollEvent_obj::STOP;


hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__new(::String type) {
	hx::ObjectPtr< ScrollEvent_obj > __this = new ScrollEvent_obj();
	__this->__construct(type);
	return __this;
}

hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type) {
	ScrollEvent_obj *__this = (ScrollEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollEvent_obj), true, "haxe.ui.core.ScrollEvent"));
	*(void **)__this = ScrollEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

ScrollEvent_obj::ScrollEvent_obj()
{
}

hx::Val ScrollEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ScrollEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ScrollEvent_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &ScrollEvent_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsString,(void *) &ScrollEvent_obj::STOP,HX_HCSTRING("STOP","\x02","\xb8","\x1c","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollEvent_obj_sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ScrollEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::STOP,"STOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::STOP,"STOP");
};

#endif

hx::Class ScrollEvent_obj::__mClass;

static ::String ScrollEvent_obj_sStaticFields[] = {
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("STOP","\x02","\xb8","\x1c","\x37"),
	::String(null())
};

void ScrollEvent_obj::__register()
{
	hx::Object *dummy = new ScrollEvent_obj;
	ScrollEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ScrollEvent","\x30","\x22","\x3d","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ScrollEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e6fdbdefc7cabffa_4_boot)
HXDLIN(   4)		CHANGE = HX_("scrollchange",3d,71,a0,da);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e6fdbdefc7cabffa_5_boot)
HXDLIN(   5)		START = HX_("scrollstart",35,4d,bb,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e6fdbdefc7cabffa_6_boot)
HXDLIN(   6)		STOP = HX_("scrollstop",8f,52,42,1f);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
