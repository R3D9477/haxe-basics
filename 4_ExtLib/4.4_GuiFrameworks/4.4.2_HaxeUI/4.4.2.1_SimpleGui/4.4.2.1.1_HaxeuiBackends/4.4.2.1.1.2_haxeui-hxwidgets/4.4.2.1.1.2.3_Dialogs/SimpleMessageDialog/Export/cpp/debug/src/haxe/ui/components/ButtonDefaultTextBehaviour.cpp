// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonDefaultTextBehaviour
#include <haxe/ui/components/ButtonDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_635f141bfc04ac82_308_new,"haxe.ui.components.ButtonDefaultTextBehaviour","new",0xe4e6f1f9,"haxe.ui.components.ButtonDefaultTextBehaviour.new","haxe/ui/components/Button.hx",308,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_635f141bfc04ac82_309_set,"haxe.ui.components.ButtonDefaultTextBehaviour","set",0xe4eabd3b,"haxe.ui.components.ButtonDefaultTextBehaviour.set","haxe/ui/components/Button.hx",309,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_635f141bfc04ac82_308_new)
HXDLIN( 308)		super::__construct(component);
            	}

Dynamic ButtonDefaultTextBehaviour_obj::__CreateEmpty() { return new ButtonDefaultTextBehaviour_obj; }

void *ButtonDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic ButtonDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ButtonDefaultTextBehaviour_obj > _hx_result = new ButtonDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01e78abd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01e78abd;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void ButtonDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_635f141bfc04ac82_309_set)
HXLINE( 310)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE( 311)			return;
            		}
HXLINE( 314)		 ::haxe::ui::components::Button button = ( ( ::haxe::ui::components::Button)(this->_component) );
HXLINE( 315)		 ::haxe::ui::components::Label label = button->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 316)		if (hx::IsNull( label )) {
HXLINE( 317)			label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 318)			label->set_id(HX_("button-label",19,ae,e7,e0));
HXLINE( 319)			label->scriptAccess = false;
HXLINE( 320)			button->addComponent(label);
            		}
HXLINE( 322)		label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}



hx::ObjectPtr< ButtonDefaultTextBehaviour_obj > ButtonDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ButtonDefaultTextBehaviour_obj > __this = new ButtonDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ButtonDefaultTextBehaviour_obj > ButtonDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonDefaultTextBehaviour_obj *__this = (ButtonDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ButtonDefaultTextBehaviour_obj), true, "haxe.ui.components.ButtonDefaultTextBehaviour"));
	*(void **)__this = ButtonDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonDefaultTextBehaviour_obj::ButtonDefaultTextBehaviour_obj()
{
}

hx::Val ButtonDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ButtonDefaultTextBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ButtonDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ButtonDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ButtonDefaultTextBehaviour_obj::__mClass;

void ButtonDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new ButtonDefaultTextBehaviour_obj;
	ButtonDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ButtonDefaultTextBehaviour","\x87","\x81","\x3e","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ButtonDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ButtonDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ButtonDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
