// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentDefaultDisabledBehaviour
#include <haxe/ui/core/ComponentDefaultDisabledBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_49492b4a03c0def0_2259_new,"haxe.ui.core.ComponentDefaultDisabledBehaviour","new",0x839bdf92,"haxe.ui.core.ComponentDefaultDisabledBehaviour.new","haxe/ui/core/Component.hx",2259,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_49492b4a03c0def0_2260_set,"haxe.ui.core.ComponentDefaultDisabledBehaviour","set",0x839faad4,"haxe.ui.core.ComponentDefaultDisabledBehaviour.set","haxe/ui/core/Component.hx",2260,0x3bb69e3f)
HX_LOCAL_STACK_FRAME(_hx_pos_49492b4a03c0def0_2269_get,"haxe.ui.core.ComponentDefaultDisabledBehaviour","get",0x83968fc8,"haxe.ui.core.ComponentDefaultDisabledBehaviour.get","haxe/ui/core/Component.hx",2269,0x3bb69e3f)
namespace haxe{
namespace ui{
namespace core{

void ComponentDefaultDisabledBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_49492b4a03c0def0_2259_new)
HXDLIN(2259)		super::__construct(component);
            	}

Dynamic ComponentDefaultDisabledBehaviour_obj::__CreateEmpty() { return new ComponentDefaultDisabledBehaviour_obj; }

void *ComponentDefaultDisabledBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentDefaultDisabledBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentDefaultDisabledBehaviour_obj > _hx_result = new ComponentDefaultDisabledBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentDefaultDisabledBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b3f99e4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b3f99e4;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void ComponentDefaultDisabledBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_49492b4a03c0def0_2260_set)
HXLINE(2261)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(2262)			return;
            		}
HXLINE(2265)		 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(2265)		_hx_tmp->disableInteractivity(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value),HX_(":disabled",b6,0b,b6,46));
            	}


 ::haxe::ui::util::VariantType ComponentDefaultDisabledBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_49492b4a03c0def0_2269_get)
HXDLIN(2269)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_component->_disabled);
            	}



hx::ObjectPtr< ComponentDefaultDisabledBehaviour_obj > ComponentDefaultDisabledBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ComponentDefaultDisabledBehaviour_obj > __this = new ComponentDefaultDisabledBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ComponentDefaultDisabledBehaviour_obj > ComponentDefaultDisabledBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentDefaultDisabledBehaviour_obj *__this = (ComponentDefaultDisabledBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentDefaultDisabledBehaviour_obj), true, "haxe.ui.core.ComponentDefaultDisabledBehaviour"));
	*(void **)__this = ComponentDefaultDisabledBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentDefaultDisabledBehaviour_obj::ComponentDefaultDisabledBehaviour_obj()
{
}

hx::Val ComponentDefaultDisabledBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ComponentDefaultDisabledBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ComponentDefaultDisabledBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentDefaultDisabledBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ComponentDefaultDisabledBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentDefaultDisabledBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentDefaultDisabledBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentDefaultDisabledBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentDefaultDisabledBehaviour_obj::__mClass;

void ComponentDefaultDisabledBehaviour_obj::__register()
{
	hx::Object *dummy = new ComponentDefaultDisabledBehaviour_obj;
	ComponentDefaultDisabledBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ComponentDefaultDisabledBehaviour","\xa0","\x6e","\xf4","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComponentDefaultDisabledBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentDefaultDisabledBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentDefaultDisabledBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentDefaultDisabledBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentDefaultDisabledBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentDefaultDisabledBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
