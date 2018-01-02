// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_LabelDefaultTextBehaviour
#include <haxe/ui/components/LabelDefaultTextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_54aecc63b5f3fc1c_129_new,"haxe.ui.components.LabelDefaultTextBehaviour","new",0xa357bc6f,"haxe.ui.components.LabelDefaultTextBehaviour.new","haxe/ui/components/Label.hx",129,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_54aecc63b5f3fc1c_130_set,"haxe.ui.components.LabelDefaultTextBehaviour","set",0xa35b87b1,"haxe.ui.components.LabelDefaultTextBehaviour.set","haxe/ui/components/Label.hx",130,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{

void LabelDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_54aecc63b5f3fc1c_129_new)
HXDLIN( 129)		super::__construct(component);
            	}

Dynamic LabelDefaultTextBehaviour_obj::__CreateEmpty() { return new LabelDefaultTextBehaviour_obj; }

void *LabelDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic LabelDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LabelDefaultTextBehaviour_obj > _hx_result = new LabelDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LabelDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1579e6e3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1579e6e3;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void LabelDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_54aecc63b5f3fc1c_130_set)
HXLINE( 131)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE( 132)			value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("",00,00,00,00));
            		}
HXLINE( 135)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->_component) );
HXLINE( 136)		 ::haxe::ui::core::TextDisplay _hx_tmp = label->getTextDisplay();
HXDLIN( 136)		_hx_tmp->set_text((HX_("",00,00,00,00) + ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
HXLINE( 137)		if ((label->isInvalid(HX_("display",42,2a,4a,bb)) == false)) {
HXLINE( 138)			label->invalidate(HX_("display",42,2a,4a,bb));
            		}
            	}



hx::ObjectPtr< LabelDefaultTextBehaviour_obj > LabelDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< LabelDefaultTextBehaviour_obj > __this = new LabelDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< LabelDefaultTextBehaviour_obj > LabelDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	LabelDefaultTextBehaviour_obj *__this = (LabelDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LabelDefaultTextBehaviour_obj), true, "haxe.ui.components.LabelDefaultTextBehaviour"));
	*(void **)__this = LabelDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

LabelDefaultTextBehaviour_obj::LabelDefaultTextBehaviour_obj()
{
}

hx::Val LabelDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LabelDefaultTextBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LabelDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String LabelDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void LabelDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LabelDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class LabelDefaultTextBehaviour_obj::__mClass;

void LabelDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new LabelDefaultTextBehaviour_obj;
	LabelDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.LabelDefaultTextBehaviour","\xfd","\x58","\xaf","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LabelDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LabelDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LabelDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LabelDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
