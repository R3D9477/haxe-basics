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
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultTextBehaviour
#include <haxe/ui/components/TextFieldDefaultTextBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_57f18aed8059db26_312_new,"haxe.ui.components.TextFieldDefaultTextBehaviour","new",0x7631ab48,"haxe.ui.components.TextFieldDefaultTextBehaviour.new","haxe/ui/components/TextField.hx",312,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_57f18aed8059db26_313_set,"haxe.ui.components.TextFieldDefaultTextBehaviour","set",0x7635768a,"haxe.ui.components.TextFieldDefaultTextBehaviour.set","haxe/ui/components/TextField.hx",313,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_57f18aed8059db26_325_get,"haxe.ui.components.TextFieldDefaultTextBehaviour","get",0x762c5b7e,"haxe.ui.components.TextFieldDefaultTextBehaviour.get","haxe/ui/components/TextField.hx",325,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{

void TextFieldDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_57f18aed8059db26_312_new)
HXDLIN( 312)		super::__construct(component);
            	}

Dynamic TextFieldDefaultTextBehaviour_obj::__CreateEmpty() { return new TextFieldDefaultTextBehaviour_obj; }

void *TextFieldDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic TextFieldDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldDefaultTextBehaviour_obj > _hx_result = new TextFieldDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextFieldDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16a627cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16a627cc;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void TextFieldDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_57f18aed8059db26_313_set)
HXLINE( 314)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE( 315)			return;
            		}
HXLINE( 318)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 319)		::String _hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value);
HXDLIN( 319)		if ((_hx_tmp != textField->getTextInput()->get_text())) {
HXLINE( 320)			 ::haxe::ui::core::TextInput _hx_tmp1 = textField->getTextInput();
HXDLIN( 320)			_hx_tmp1->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
HXLINE( 321)			textField->invalidate(HX_("display",42,2a,4a,bb));
            		}
            	}


 ::haxe::ui::util::VariantType TextFieldDefaultTextBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_57f18aed8059db26_325_get)
HXLINE( 326)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 327)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(textField->getTextInput()->get_text());
            	}



hx::ObjectPtr< TextFieldDefaultTextBehaviour_obj > TextFieldDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextFieldDefaultTextBehaviour_obj > __this = new TextFieldDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextFieldDefaultTextBehaviour_obj > TextFieldDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextFieldDefaultTextBehaviour_obj *__this = (TextFieldDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldDefaultTextBehaviour_obj), true, "haxe.ui.components.TextFieldDefaultTextBehaviour"));
	*(void **)__this = TextFieldDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextFieldDefaultTextBehaviour_obj::TextFieldDefaultTextBehaviour_obj()
{
}

hx::Val TextFieldDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextFieldDefaultTextBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextFieldDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextFieldDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFieldDefaultTextBehaviour_obj::__mClass;

void TextFieldDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new TextFieldDefaultTextBehaviour_obj;
	TextFieldDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextFieldDefaultTextBehaviour","\x56","\xa7","\x20","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFieldDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFieldDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
