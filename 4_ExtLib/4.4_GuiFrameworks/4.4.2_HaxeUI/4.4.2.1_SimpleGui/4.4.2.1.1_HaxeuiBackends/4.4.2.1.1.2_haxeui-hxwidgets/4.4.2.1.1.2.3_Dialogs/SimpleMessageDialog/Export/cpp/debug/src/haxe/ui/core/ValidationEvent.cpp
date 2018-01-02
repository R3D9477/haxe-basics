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
#ifndef INCLUDED_haxe_ui_core_ValidationEvent
#include <haxe/ui/core/ValidationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5372ab299dd033f6_8_new,"haxe.ui.core.ValidationEvent","new",0x76582ef6,"haxe.ui.core.ValidationEvent.new","haxe/ui/core/ValidationEvent.hx",8,0x05b812db)
HX_LOCAL_STACK_FRAME(_hx_pos_5372ab299dd033f6_11_clone,"haxe.ui.core.ValidationEvent","clone",0x8f2cc373,"haxe.ui.core.ValidationEvent.clone","haxe/ui/core/ValidationEvent.hx",11,0x05b812db)
HX_LOCAL_STACK_FRAME(_hx_pos_5372ab299dd033f6_4_boot,"haxe.ui.core.ValidationEvent","boot",0x0ee9e8dc,"haxe.ui.core.ValidationEvent.boot","haxe/ui/core/ValidationEvent.hx",4,0x05b812db)
HX_LOCAL_STACK_FRAME(_hx_pos_5372ab299dd033f6_5_boot,"haxe.ui.core.ValidationEvent","boot",0x0ee9e8dc,"haxe.ui.core.ValidationEvent.boot","haxe/ui/core/ValidationEvent.hx",5,0x05b812db)
namespace haxe{
namespace ui{
namespace core{

void ValidationEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_5372ab299dd033f6_8_new)
HXDLIN(   8)		super::__construct(type);
            	}

Dynamic ValidationEvent_obj::__CreateEmpty() { return new ValidationEvent_obj; }

void *ValidationEvent_obj::_hx_vtable = 0;

Dynamic ValidationEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ValidationEvent_obj > _hx_result = new ValidationEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValidationEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b74db99) {
		if (inClassId<=(int)0x27cfab89) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x27cfab89;
		} else {
			return inClassId==(int)0x4b74db99;
		}
	} else {
		return inClassId==(int)0x7fafe798;
	}
}

 ::haxe::ui::core::UIEvent ValidationEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5372ab299dd033f6_11_clone)
HXLINE(  12)		 ::haxe::ui::core::ValidationEvent c =  ::haxe::ui::core::ValidationEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  13)		c->type = this->type;
HXLINE(  14)		c->target = this->target;
HXLINE(  15)		this->postClone(c);
HXLINE(  16)		return c;
            	}


::String ValidationEvent_obj::START;

::String ValidationEvent_obj::STOP;


hx::ObjectPtr< ValidationEvent_obj > ValidationEvent_obj::__new(::String type) {
	hx::ObjectPtr< ValidationEvent_obj > __this = new ValidationEvent_obj();
	__this->__construct(type);
	return __this;
}

hx::ObjectPtr< ValidationEvent_obj > ValidationEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type) {
	ValidationEvent_obj *__this = (ValidationEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ValidationEvent_obj), true, "haxe.ui.core.ValidationEvent"));
	*(void **)__this = ValidationEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

ValidationEvent_obj::ValidationEvent_obj()
{
}

hx::Val ValidationEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ValidationEvent_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ValidationEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ValidationEvent_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsString,(void *) &ValidationEvent_obj::STOP,HX_HCSTRING("STOP","\x02","\xb8","\x1c","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ValidationEvent_obj_sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ValidationEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidationEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ValidationEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(ValidationEvent_obj::STOP,"STOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValidationEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ValidationEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(ValidationEvent_obj::STOP,"STOP");
};

#endif

hx::Class ValidationEvent_obj::__mClass;

static ::String ValidationEvent_obj_sStaticFields[] = {
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("STOP","\x02","\xb8","\x1c","\x37"),
	::String(null())
};

void ValidationEvent_obj::__register()
{
	hx::Object *dummy = new ValidationEvent_obj;
	ValidationEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ValidationEvent","\x04","\x3c","\x34","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ValidationEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ValidationEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ValidationEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ValidationEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValidationEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidationEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidationEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValidationEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5372ab299dd033f6_4_boot)
HXDLIN(   4)		START = HX_("ValidationStart",49,f1,63,8d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5372ab299dd033f6_5_boot)
HXDLIN(   5)		STOP = HX_("ValidationStop",fb,cc,c4,5e);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
