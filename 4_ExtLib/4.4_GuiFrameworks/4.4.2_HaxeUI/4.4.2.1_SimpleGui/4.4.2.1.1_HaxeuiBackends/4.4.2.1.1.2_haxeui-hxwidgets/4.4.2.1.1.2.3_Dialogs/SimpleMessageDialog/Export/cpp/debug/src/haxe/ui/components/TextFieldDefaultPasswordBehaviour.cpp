// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultPasswordBehaviour
#include <haxe/ui/components/TextFieldDefaultPasswordBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3e8b92058ad109af_365_new,"haxe.ui.components.TextFieldDefaultPasswordBehaviour","new",0xd87e231a,"haxe.ui.components.TextFieldDefaultPasswordBehaviour.new","haxe/ui/components/TextField.hx",365,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8b92058ad109af_366_set,"haxe.ui.components.TextFieldDefaultPasswordBehaviour","set",0xd881ee5c,"haxe.ui.components.TextFieldDefaultPasswordBehaviour.set","haxe/ui/components/TextField.hx",366,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8b92058ad109af_371_get,"haxe.ui.components.TextFieldDefaultPasswordBehaviour","get",0xd878d350,"haxe.ui.components.TextFieldDefaultPasswordBehaviour.get","haxe/ui/components/TextField.hx",371,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{

void TextFieldDefaultPasswordBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3e8b92058ad109af_365_new)
HXDLIN( 365)		super::__construct(component);
            	}

Dynamic TextFieldDefaultPasswordBehaviour_obj::__CreateEmpty() { return new TextFieldDefaultPasswordBehaviour_obj; }

void *TextFieldDefaultPasswordBehaviour_obj::_hx_vtable = 0;

Dynamic TextFieldDefaultPasswordBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldDefaultPasswordBehaviour_obj > _hx_result = new TextFieldDefaultPasswordBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextFieldDefaultPasswordBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x7f8539d6;
	}
}

void TextFieldDefaultPasswordBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_3e8b92058ad109af_366_set)
HXLINE( 367)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 368)		 ::haxe::ui::core::TextInput _hx_tmp = textField->getTextInput();
HXDLIN( 368)		_hx_tmp->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
            	}


 ::haxe::ui::util::VariantType TextFieldDefaultPasswordBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_3e8b92058ad109af_371_get)
HXLINE( 372)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 373)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(textField->getTextInput()->get_password());
            	}



hx::ObjectPtr< TextFieldDefaultPasswordBehaviour_obj > TextFieldDefaultPasswordBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextFieldDefaultPasswordBehaviour_obj > __this = new TextFieldDefaultPasswordBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextFieldDefaultPasswordBehaviour_obj > TextFieldDefaultPasswordBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextFieldDefaultPasswordBehaviour_obj *__this = (TextFieldDefaultPasswordBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldDefaultPasswordBehaviour_obj), true, "haxe.ui.components.TextFieldDefaultPasswordBehaviour"));
	*(void **)__this = TextFieldDefaultPasswordBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextFieldDefaultPasswordBehaviour_obj::TextFieldDefaultPasswordBehaviour_obj()
{
}

hx::Val TextFieldDefaultPasswordBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextFieldDefaultPasswordBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextFieldDefaultPasswordBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldDefaultPasswordBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextFieldDefaultPasswordBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldDefaultPasswordBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldDefaultPasswordBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldDefaultPasswordBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFieldDefaultPasswordBehaviour_obj::__mClass;

void TextFieldDefaultPasswordBehaviour_obj::__register()
{
	hx::Object *dummy = new TextFieldDefaultPasswordBehaviour_obj;
	TextFieldDefaultPasswordBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextFieldDefaultPasswordBehaviour","\x28","\x4e","\x7c","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldDefaultPasswordBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFieldDefaultPasswordBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFieldDefaultPasswordBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldDefaultPasswordBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldDefaultPasswordBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldDefaultPasswordBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
