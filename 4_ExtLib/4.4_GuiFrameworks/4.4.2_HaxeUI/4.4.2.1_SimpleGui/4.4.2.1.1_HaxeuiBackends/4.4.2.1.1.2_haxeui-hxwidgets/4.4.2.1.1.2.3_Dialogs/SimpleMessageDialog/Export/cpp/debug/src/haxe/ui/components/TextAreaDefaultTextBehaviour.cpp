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
#ifndef INCLUDED_haxe_ui_components_TextArea
#include <haxe/ui/components/TextArea.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultTextBehaviour
#include <haxe/ui/components/TextAreaDefaultTextBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9eb41d131b6e0b04_268_new,"haxe.ui.components.TextAreaDefaultTextBehaviour","new",0x47527c61,"haxe.ui.components.TextAreaDefaultTextBehaviour.new","haxe/ui/components/TextArea.hx",268,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_9eb41d131b6e0b04_269_set,"haxe.ui.components.TextAreaDefaultTextBehaviour","set",0x475647a3,"haxe.ui.components.TextAreaDefaultTextBehaviour.set","haxe/ui/components/TextArea.hx",269,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_9eb41d131b6e0b04_280_get,"haxe.ui.components.TextAreaDefaultTextBehaviour","get",0x474d2c97,"haxe.ui.components.TextAreaDefaultTextBehaviour.get","haxe/ui/components/TextArea.hx",280,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{

void TextAreaDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9eb41d131b6e0b04_268_new)
HXDLIN( 268)		super::__construct(component);
            	}

Dynamic TextAreaDefaultTextBehaviour_obj::__CreateEmpty() { return new TextAreaDefaultTextBehaviour_obj; }

void *TextAreaDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic TextAreaDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextAreaDefaultTextBehaviour_obj > _hx_result = new TextAreaDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextAreaDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x4f656b01;
	}
}

void TextAreaDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_9eb41d131b6e0b04_269_set)
HXLINE( 270)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE( 271)			return;
            		}
HXLINE( 274)		 ::haxe::ui::components::TextArea textArea = ( ( ::haxe::ui::components::TextArea)(this->_component) );
HXLINE( 275)		 ::haxe::ui::core::TextInput _hx_tmp = textArea->getTextInput();
HXDLIN( 275)		_hx_tmp->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
HXLINE( 276)		textArea->getTextInput()->invalidate(HX_("measure",5e,fb,e9,3c));
HXLINE( 277)		textArea->invalidate(HX_("display",42,2a,4a,bb));
            	}


 ::haxe::ui::util::VariantType TextAreaDefaultTextBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_9eb41d131b6e0b04_280_get)
HXLINE( 281)		 ::haxe::ui::components::TextArea textArea = ( ( ::haxe::ui::components::TextArea)(this->_component) );
HXLINE( 282)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(textArea->getTextInput()->get_text());
            	}



hx::ObjectPtr< TextAreaDefaultTextBehaviour_obj > TextAreaDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextAreaDefaultTextBehaviour_obj > __this = new TextAreaDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextAreaDefaultTextBehaviour_obj > TextAreaDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextAreaDefaultTextBehaviour_obj *__this = (TextAreaDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaDefaultTextBehaviour_obj), true, "haxe.ui.components.TextAreaDefaultTextBehaviour"));
	*(void **)__this = TextAreaDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextAreaDefaultTextBehaviour_obj::TextAreaDefaultTextBehaviour_obj()
{
}

hx::Val TextAreaDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextAreaDefaultTextBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextAreaDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextAreaDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextAreaDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAreaDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextAreaDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAreaDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextAreaDefaultTextBehaviour_obj::__mClass;

void TextAreaDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new TextAreaDefaultTextBehaviour_obj;
	TextAreaDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextAreaDefaultTextBehaviour","\xef","\xb7","\xaa","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextAreaDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextAreaDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextAreaDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextAreaDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
