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
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultWrapBehaviour
#include <haxe/ui/components/TextAreaDefaultWrapBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f9c0579820875cc1_306_new,"haxe.ui.components.TextAreaDefaultWrapBehaviour","new",0x804f6124,"haxe.ui.components.TextAreaDefaultWrapBehaviour.new","haxe/ui/components/TextArea.hx",306,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_f9c0579820875cc1_307_set,"haxe.ui.components.TextAreaDefaultWrapBehaviour","set",0x80532c66,"haxe.ui.components.TextAreaDefaultWrapBehaviour.set","haxe/ui/components/TextArea.hx",307,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_f9c0579820875cc1_313_get,"haxe.ui.components.TextAreaDefaultWrapBehaviour","get",0x804a115a,"haxe.ui.components.TextAreaDefaultWrapBehaviour.get","haxe/ui/components/TextArea.hx",313,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{

void TextAreaDefaultWrapBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f9c0579820875cc1_306_new)
HXDLIN( 306)		super::__construct(component);
            	}

Dynamic TextAreaDefaultWrapBehaviour_obj::__CreateEmpty() { return new TextAreaDefaultWrapBehaviour_obj; }

void *TextAreaDefaultWrapBehaviour_obj::_hx_vtable = 0;

Dynamic TextAreaDefaultWrapBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > _hx_result = new TextAreaDefaultWrapBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextAreaDefaultWrapBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x5561ff7c;
	}
}

void TextAreaDefaultWrapBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_f9c0579820875cc1_307_set)
HXLINE( 308)		 ::haxe::ui::components::TextArea textArea = ( ( ::haxe::ui::components::TextArea)(this->_component) );
HXLINE( 309)		 ::haxe::ui::core::TextInput _hx_tmp = textArea->getTextInput();
HXDLIN( 309)		_hx_tmp->set_wordWrap(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
HXLINE( 310)		textArea->invalidate(HX_("display",42,2a,4a,bb));
            	}


 ::haxe::ui::util::VariantType TextAreaDefaultWrapBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_f9c0579820875cc1_313_get)
HXLINE( 314)		 ::haxe::ui::components::TextArea textArea = ( ( ::haxe::ui::components::TextArea)(this->_component) );
HXLINE( 315)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(textArea->getTextInput()->get_wordWrap());
            	}



hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > TextAreaDefaultWrapBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > __this = new TextAreaDefaultWrapBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > TextAreaDefaultWrapBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextAreaDefaultWrapBehaviour_obj *__this = (TextAreaDefaultWrapBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaDefaultWrapBehaviour_obj), true, "haxe.ui.components.TextAreaDefaultWrapBehaviour"));
	*(void **)__this = TextAreaDefaultWrapBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextAreaDefaultWrapBehaviour_obj::TextAreaDefaultWrapBehaviour_obj()
{
}

hx::Val TextAreaDefaultWrapBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextAreaDefaultWrapBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextAreaDefaultWrapBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextAreaDefaultWrapBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextAreaDefaultWrapBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAreaDefaultWrapBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextAreaDefaultWrapBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAreaDefaultWrapBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextAreaDefaultWrapBehaviour_obj::__mClass;

void TextAreaDefaultWrapBehaviour_obj::__register()
{
	hx::Object *dummy = new TextAreaDefaultWrapBehaviour_obj;
	TextAreaDefaultWrapBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextAreaDefaultWrapBehaviour","\x32","\x3f","\x7f","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextAreaDefaultWrapBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextAreaDefaultWrapBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextAreaDefaultWrapBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextAreaDefaultWrapBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaDefaultWrapBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaDefaultWrapBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
