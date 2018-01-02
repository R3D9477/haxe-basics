// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultPlaceholderBehaviour
#include <haxe/ui/components/TextAreaDefaultPlaceholderBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77b0db1cf0b88257_288_new,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour","new",0x6bf77c7d,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour.new","haxe/ui/components/TextArea.hx",288,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_77b0db1cf0b88257_291_set,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour","set",0x6bfb47bf,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour.set","haxe/ui/components/TextArea.hx",291,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_77b0db1cf0b88257_300_get,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour","get",0x6bf22cb3,"haxe.ui.components.TextAreaDefaultPlaceholderBehaviour.get","haxe/ui/components/TextArea.hx",300,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{

void TextAreaDefaultPlaceholderBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_77b0db1cf0b88257_288_new)
HXDLIN( 288)		super::__construct(component);
            	}

Dynamic TextAreaDefaultPlaceholderBehaviour_obj::__CreateEmpty() { return new TextAreaDefaultPlaceholderBehaviour_obj; }

void *TextAreaDefaultPlaceholderBehaviour_obj::_hx_vtable = 0;

Dynamic TextAreaDefaultPlaceholderBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextAreaDefaultPlaceholderBehaviour_obj > _hx_result = new TextAreaDefaultPlaceholderBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextAreaDefaultPlaceholderBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d95e855) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0d95e855;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void TextAreaDefaultPlaceholderBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_77b0db1cf0b88257_291_set)
HXLINE( 292)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_value),value )) {
HXLINE( 293)			return;
            		}
HXLINE( 296)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value);
            	}


 ::haxe::ui::util::VariantType TextAreaDefaultPlaceholderBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_77b0db1cf0b88257_300_get)
HXDLIN( 300)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_value);
            	}



hx::ObjectPtr< TextAreaDefaultPlaceholderBehaviour_obj > TextAreaDefaultPlaceholderBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextAreaDefaultPlaceholderBehaviour_obj > __this = new TextAreaDefaultPlaceholderBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextAreaDefaultPlaceholderBehaviour_obj > TextAreaDefaultPlaceholderBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextAreaDefaultPlaceholderBehaviour_obj *__this = (TextAreaDefaultPlaceholderBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaDefaultPlaceholderBehaviour_obj), true, "haxe.ui.components.TextAreaDefaultPlaceholderBehaviour"));
	*(void **)__this = TextAreaDefaultPlaceholderBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextAreaDefaultPlaceholderBehaviour_obj::TextAreaDefaultPlaceholderBehaviour_obj()
{
}

void TextAreaDefaultPlaceholderBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextAreaDefaultPlaceholderBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextAreaDefaultPlaceholderBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextAreaDefaultPlaceholderBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextAreaDefaultPlaceholderBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextAreaDefaultPlaceholderBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextAreaDefaultPlaceholderBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextAreaDefaultPlaceholderBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextAreaDefaultPlaceholderBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextAreaDefaultPlaceholderBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextAreaDefaultPlaceholderBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAreaDefaultPlaceholderBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextAreaDefaultPlaceholderBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAreaDefaultPlaceholderBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextAreaDefaultPlaceholderBehaviour_obj::__mClass;

void TextAreaDefaultPlaceholderBehaviour_obj::__register()
{
	hx::Object *dummy = new TextAreaDefaultPlaceholderBehaviour_obj;
	TextAreaDefaultPlaceholderBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextAreaDefaultPlaceholderBehaviour","\x0b","\x7a","\x0e","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextAreaDefaultPlaceholderBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextAreaDefaultPlaceholderBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextAreaDefaultPlaceholderBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextAreaDefaultPlaceholderBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaDefaultPlaceholderBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaDefaultPlaceholderBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
