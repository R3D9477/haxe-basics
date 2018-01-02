// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxDefaultSelectedBehaviour
#include <haxe/ui/components/CheckBoxDefaultSelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ab35982b31a1e39e_184_new,"haxe.ui.components.CheckBoxDefaultSelectedBehaviour","new",0x5ffd3c3c,"haxe.ui.components.CheckBoxDefaultSelectedBehaviour.new","haxe/ui/components/CheckBox.hx",184,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_ab35982b31a1e39e_185_set,"haxe.ui.components.CheckBoxDefaultSelectedBehaviour","set",0x6001077e,"haxe.ui.components.CheckBoxDefaultSelectedBehaviour.set","haxe/ui/components/CheckBox.hx",185,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxDefaultSelectedBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ab35982b31a1e39e_184_new)
HXDLIN( 184)		super::__construct(component);
            	}

Dynamic CheckBoxDefaultSelectedBehaviour_obj::__CreateEmpty() { return new CheckBoxDefaultSelectedBehaviour_obj; }

void *CheckBoxDefaultSelectedBehaviour_obj::_hx_vtable = 0;

Dynamic CheckBoxDefaultSelectedBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBoxDefaultSelectedBehaviour_obj > _hx_result = new CheckBoxDefaultSelectedBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CheckBoxDefaultSelectedBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x2bf2525c;
	}
}

void CheckBoxDefaultSelectedBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_ab35982b31a1e39e_185_set)
HXLINE( 186)		 ::haxe::ui::components::CheckBox checkbox = ( ( ::haxe::ui::components::CheckBox)(this->_component) );
HXLINE( 187)		 ::haxe::ui::components::CheckBoxValue checkboxValue = checkbox->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >();
HXLINE( 188)		if (hx::IsNull( checkboxValue )) {
HXLINE( 189)			return;
            		}
HXLINE( 192)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == true)) {
HXLINE( 193)			checkboxValue->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            		else {
HXLINE( 195)			checkboxValue->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            	}



hx::ObjectPtr< CheckBoxDefaultSelectedBehaviour_obj > CheckBoxDefaultSelectedBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< CheckBoxDefaultSelectedBehaviour_obj > __this = new CheckBoxDefaultSelectedBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< CheckBoxDefaultSelectedBehaviour_obj > CheckBoxDefaultSelectedBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	CheckBoxDefaultSelectedBehaviour_obj *__this = (CheckBoxDefaultSelectedBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxDefaultSelectedBehaviour_obj), true, "haxe.ui.components.CheckBoxDefaultSelectedBehaviour"));
	*(void **)__this = CheckBoxDefaultSelectedBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

CheckBoxDefaultSelectedBehaviour_obj::CheckBoxDefaultSelectedBehaviour_obj()
{
}

hx::Val CheckBoxDefaultSelectedBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CheckBoxDefaultSelectedBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CheckBoxDefaultSelectedBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxDefaultSelectedBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void CheckBoxDefaultSelectedBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBoxDefaultSelectedBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CheckBoxDefaultSelectedBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBoxDefaultSelectedBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBoxDefaultSelectedBehaviour_obj::__mClass;

void CheckBoxDefaultSelectedBehaviour_obj::__register()
{
	hx::Object *dummy = new CheckBoxDefaultSelectedBehaviour_obj;
	CheckBoxDefaultSelectedBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.CheckBoxDefaultSelectedBehaviour","\x4a","\xae","\x2b","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CheckBoxDefaultSelectedBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBoxDefaultSelectedBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxDefaultSelectedBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CheckBoxDefaultSelectedBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxDefaultSelectedBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxDefaultSelectedBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
