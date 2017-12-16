// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonDefaultIconBehaviour
#include <haxe/ui/components/ButtonDefaultIconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6743fec295f2beab_328_new,"haxe.ui.components.ButtonDefaultIconBehaviour","new",0xe92407ad,"haxe.ui.components.ButtonDefaultIconBehaviour.new","haxe/ui/components/Button.hx",328,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_6743fec295f2beab_329_get,"haxe.ui.components.ButtonDefaultIconBehaviour","get",0xe91eb7e3,"haxe.ui.components.ButtonDefaultIconBehaviour.get","haxe/ui/components/Button.hx",329,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_6743fec295f2beab_339_set,"haxe.ui.components.ButtonDefaultIconBehaviour","set",0xe927d2ef,"haxe.ui.components.ButtonDefaultIconBehaviour.set","haxe/ui/components/Button.hx",339,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonDefaultIconBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6743fec295f2beab_328_new)
HXDLIN( 328)		super::__construct(component);
            	}

Dynamic ButtonDefaultIconBehaviour_obj::__CreateEmpty() { return new ButtonDefaultIconBehaviour_obj; }

void *ButtonDefaultIconBehaviour_obj::_hx_vtable = 0;

Dynamic ButtonDefaultIconBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ButtonDefaultIconBehaviour_obj > _hx_result = new ButtonDefaultIconBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonDefaultIconBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0eb2e705) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0eb2e705;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

 ::haxe::ui::util::VariantType ButtonDefaultIconBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_6743fec295f2beab_329_get)
HXLINE( 330)		 ::haxe::ui::components::Button button = ( ( ::haxe::ui::components::Button)(this->_component) );
HXLINE( 331)		 ::haxe::ui::components::Image icon = button->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 332)		if (hx::IsNull( icon )) {
HXLINE( 333)			return null();
            		}
HXLINE( 336)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(icon->get_resource());
            	}


void ButtonDefaultIconBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_6743fec295f2beab_339_set)
HXLINE( 340)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE( 341)			return;
            		}
HXLINE( 344)		 ::haxe::ui::components::Button button = ( ( ::haxe::ui::components::Button)(this->_component) );
HXLINE( 345)		 ::haxe::ui::components::Image icon = button->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 346)		if (hx::IsNull( icon )) {
HXLINE( 347)			icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 348)			icon->addClass(HX_("icon",79,e7,b2,45),null(),null());
HXLINE( 349)			icon->set_id(HX_("button-icon",f4,52,38,e9));
HXLINE( 350)			icon->scriptAccess = false;
HXLINE( 351)			button->addComponent(icon);
            		}
HXLINE( 354)		icon->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}



hx::ObjectPtr< ButtonDefaultIconBehaviour_obj > ButtonDefaultIconBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ButtonDefaultIconBehaviour_obj > __this = new ButtonDefaultIconBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ButtonDefaultIconBehaviour_obj > ButtonDefaultIconBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ButtonDefaultIconBehaviour_obj *__this = (ButtonDefaultIconBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ButtonDefaultIconBehaviour_obj), true, "haxe.ui.components.ButtonDefaultIconBehaviour"));
	*(void **)__this = ButtonDefaultIconBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ButtonDefaultIconBehaviour_obj::ButtonDefaultIconBehaviour_obj()
{
}

hx::Val ButtonDefaultIconBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ButtonDefaultIconBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ButtonDefaultIconBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonDefaultIconBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ButtonDefaultIconBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonDefaultIconBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonDefaultIconBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonDefaultIconBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ButtonDefaultIconBehaviour_obj::__mClass;

void ButtonDefaultIconBehaviour_obj::__register()
{
	hx::Object *dummy = new ButtonDefaultIconBehaviour_obj;
	ButtonDefaultIconBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ButtonDefaultIconBehaviour","\x3b","\xad","\xe9","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ButtonDefaultIconBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ButtonDefaultIconBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ButtonDefaultIconBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonDefaultIconBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonDefaultIconBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonDefaultIconBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
