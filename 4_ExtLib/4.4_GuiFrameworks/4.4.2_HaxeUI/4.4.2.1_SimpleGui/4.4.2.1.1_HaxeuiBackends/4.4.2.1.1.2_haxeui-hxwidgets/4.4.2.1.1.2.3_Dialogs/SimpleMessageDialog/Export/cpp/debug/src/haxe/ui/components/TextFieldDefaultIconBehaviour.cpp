// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultIconBehaviour
#include <haxe/ui/components/TextFieldDefaultIconBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_95d31b91b50edbfc_333_new,"haxe.ui.components.TextFieldDefaultIconBehaviour","new",0x7a6ec0fc,"haxe.ui.components.TextFieldDefaultIconBehaviour.new","haxe/ui/components/TextField.hx",333,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_95d31b91b50edbfc_334_set,"haxe.ui.components.TextFieldDefaultIconBehaviour","set",0x7a728c3e,"haxe.ui.components.TextFieldDefaultIconBehaviour.set","haxe/ui/components/TextField.hx",334,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_95d31b91b50edbfc_353_get,"haxe.ui.components.TextFieldDefaultIconBehaviour","get",0x7a697132,"haxe.ui.components.TextFieldDefaultIconBehaviour.get","haxe/ui/components/TextField.hx",353,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{

void TextFieldDefaultIconBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_95d31b91b50edbfc_333_new)
HXDLIN( 333)		super::__construct(component);
            	}

Dynamic TextFieldDefaultIconBehaviour_obj::__CreateEmpty() { return new TextFieldDefaultIconBehaviour_obj; }

void *TextFieldDefaultIconBehaviour_obj::_hx_vtable = 0;

Dynamic TextFieldDefaultIconBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > _hx_result = new TextFieldDefaultIconBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextFieldDefaultIconBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x625f919c;
	}
}

void TextFieldDefaultIconBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_95d31b91b50edbfc_334_set)
HXLINE( 335)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 336)		bool _hx_tmp;
HXDLIN( 336)		bool _hx_tmp1;
HXDLIN( 336)		if (hx::IsNotNull( value )) {
HXLINE( 336)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value);
            		}
            		else {
HXLINE( 336)			_hx_tmp1 = true;
            		}
HXDLIN( 336)		if (!(_hx_tmp1)) {
HXLINE( 336)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value) == HX_("null",87,9e,0e,49));
            		}
            		else {
HXLINE( 336)			_hx_tmp = true;
            		}
HXDLIN( 336)		if (_hx_tmp) {
HXLINE( 337)			if (hx::IsNotNull( textField->_icon )) {
HXLINE( 338)				textField->removeComponent(textField->_icon,null(),null());
HXLINE( 339)				textField->_icon = null();
            			}
            		}
            		else {
HXLINE( 342)			if (hx::IsNull( textField->_icon )) {
HXLINE( 343)				textField->_icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 344)				textField->_icon->set_id(HX_("textfield-icon",19,52,0f,5b));
HXLINE( 345)				textField->_icon->addClass(HX_("icon",79,e7,b2,45),null(),null());
HXLINE( 346)				textField->_icon->scriptAccess = false;
HXLINE( 347)				textField->addComponent(textField->_icon);
            			}
HXLINE( 349)			 ::haxe::ui::components::Image textField1 = textField->_icon;
HXDLIN( 349)			textField1->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            		}
            	}


 ::haxe::ui::util::VariantType TextFieldDefaultIconBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_95d31b91b50edbfc_353_get)
HXLINE( 354)		 ::haxe::ui::components::TextField textField = ( ( ::haxe::ui::components::TextField)(this->_component) );
HXLINE( 355)		if (hx::IsNull( textField->_icon )) {
HXLINE( 356)			return null();
            		}
            		else {
HXLINE( 358)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(textField->_icon->get_resource());
            		}
HXLINE( 355)		return null();
            	}



hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > TextFieldDefaultIconBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > __this = new TextFieldDefaultIconBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > TextFieldDefaultIconBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextFieldDefaultIconBehaviour_obj *__this = (TextFieldDefaultIconBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldDefaultIconBehaviour_obj), true, "haxe.ui.components.TextFieldDefaultIconBehaviour"));
	*(void **)__this = TextFieldDefaultIconBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextFieldDefaultIconBehaviour_obj::TextFieldDefaultIconBehaviour_obj()
{
}

hx::Val TextFieldDefaultIconBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextFieldDefaultIconBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextFieldDefaultIconBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldDefaultIconBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextFieldDefaultIconBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldDefaultIconBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldDefaultIconBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldDefaultIconBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFieldDefaultIconBehaviour_obj::__mClass;

void TextFieldDefaultIconBehaviour_obj::__register()
{
	hx::Object *dummy = new TextFieldDefaultIconBehaviour_obj;
	TextFieldDefaultIconBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TextFieldDefaultIconBehaviour","\x0a","\xd3","\xcb","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldDefaultIconBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFieldDefaultIconBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFieldDefaultIconBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldDefaultIconBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldDefaultIconBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldDefaultIconBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
