// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultPlaceholderBehaviour
#include <haxe/ui/components/TextFieldDefaultPlaceholderBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0c97f4fc3132627b_379_new,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour","new",0x13ff0876,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour.new","haxe/ui/components/TextField.hx",379,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_0c97f4fc3132627b_382_set,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour","set",0x1402d3b8,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour.set","haxe/ui/components/TextField.hx",382,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_0c97f4fc3132627b_391_get,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour","get",0x13f9b8ac,"haxe.ui.components.TextFieldDefaultPlaceholderBehaviour.get","haxe/ui/components/TextField.hx",391,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{

void TextFieldDefaultPlaceholderBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0c97f4fc3132627b_379_new)
HXDLIN( 379)		super::__construct(component);
            	}

Dynamic TextFieldDefaultPlaceholderBehaviour_obj::__CreateEmpty() { return new TextFieldDefaultPlaceholderBehaviour_obj; }

void *TextFieldDefaultPlaceholderBehaviour_obj::_hx_vtable = 0;

Dynamic TextFieldDefaultPlaceholderBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldDefaultPlaceholderBehaviour_obj > _hx_result = new TextFieldDefaultPlaceholderBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextFieldDefaultPlaceholderBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x7ae3655e;
	}
}

void TextFieldDefaultPlaceholderBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_0c97f4fc3132627b_382_set)
HXLINE( 383)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_value),value )) {
HXLINE( 384)			return;
            		}
HXLINE( 387)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value);
            	}


 ::haxe::ui::util::VariantType TextFieldDefaultPlaceholderBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_0c97f4fc3132627b_391_get)
HXDLIN( 391)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_value);
            	}



hx::ObjectPtr< TextFieldDefaultPlaceholderBehaviour_obj > TextFieldDefaultPlaceholderBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextFieldDefaultPlaceholderBehaviour_obj > __this = new TextFieldDefaultPlaceholderBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextFieldDefaultPlaceholderBehaviour_obj > TextFieldDefaultPlaceholderBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextFieldDefaultPlaceholderBehaviour_obj *__this = (TextFieldDefaultPlaceholderBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldDefaultPlaceholderBehaviour_obj), true, "haxe.ui.components.TextFieldDefaultPlaceholderBehaviour"));
	*(void **)__this = TextFieldDefaultPlaceholderBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextFieldDefaultPlaceholderBehaviour_obj::TextFieldDefaultPlaceholderBehaviour_obj()
{
}

void TextFieldDefaultPlaceholderBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFieldDefaultPlaceholderBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextFieldDefaultPlaceholderBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextFieldDefaultPlaceholderBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val TextFieldDefaultPlaceholderBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldDefaultPlaceholderBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextFieldDefaultPlaceholderBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextFieldDefaultPlaceholderBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextFieldDefaultPlaceholderBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldDefaultPlaceholderBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextFieldDefaultPlaceholderBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldDefaultPlaceholderBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldDefaultPlaceholderBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldDefaultPlaceholderBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFieldDefaultPlaceholderBehaviour_obj::__mClass;

void TextFieldDefaultPlaceholderBehaviour_obj::__register()
{
	hx::Object *dummy = new TextFieldDefaultPlaceholderBehaviour_obj;
	TextFieldDefaultPlaceholderBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextFieldDefaultPlaceholderBehaviour","\x84","\x55","\x10","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldDefaultPlaceholderBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFieldDefaultPlaceholderBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFieldDefaultPlaceholderBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldDefaultPlaceholderBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldDefaultPlaceholderBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldDefaultPlaceholderBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
