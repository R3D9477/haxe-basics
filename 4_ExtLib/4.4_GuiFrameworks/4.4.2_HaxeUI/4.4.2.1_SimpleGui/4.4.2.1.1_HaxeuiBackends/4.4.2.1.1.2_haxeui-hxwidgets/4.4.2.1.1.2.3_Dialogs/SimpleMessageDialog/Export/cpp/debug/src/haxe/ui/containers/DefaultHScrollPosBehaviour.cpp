// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HScroll
#include <haxe/ui/components/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_DefaultHScrollPosBehaviour
#include <haxe/ui/containers/DefaultHScrollPosBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0347c35850632539_579_new,"haxe.ui.containers.DefaultHScrollPosBehaviour","new",0xb8793719,"haxe.ui.containers.DefaultHScrollPosBehaviour.new","haxe/ui/containers/ScrollView.hx",579,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_0347c35850632539_580_get,"haxe.ui.containers.DefaultHScrollPosBehaviour","get",0xb873e74f,"haxe.ui.containers.DefaultHScrollPosBehaviour.get","haxe/ui/containers/ScrollView.hx",580,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_0347c35850632539_588_set,"haxe.ui.containers.DefaultHScrollPosBehaviour","set",0xb87d025b,"haxe.ui.containers.DefaultHScrollPosBehaviour.set","haxe/ui/containers/ScrollView.hx",588,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void DefaultHScrollPosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0347c35850632539_579_new)
HXDLIN( 579)		super::__construct(component);
            	}

Dynamic DefaultHScrollPosBehaviour_obj::__CreateEmpty() { return new DefaultHScrollPosBehaviour_obj; }

void *DefaultHScrollPosBehaviour_obj::_hx_vtable = 0;

Dynamic DefaultHScrollPosBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultHScrollPosBehaviour_obj > _hx_result = new DefaultHScrollPosBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultHScrollPosBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x42f61ee9;
	}
}

 ::haxe::ui::util::VariantType DefaultHScrollPosBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_0347c35850632539_580_get)
HXLINE( 581)		 ::haxe::ui::components::HScroll hscroll = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 582)		if (hx::IsNull( hscroll )) {
HXLINE( 583)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)0);
            		}
HXLINE( 585)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(hscroll->get_pos());
            	}


void DefaultHScrollPosBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_0347c35850632539_588_set)
HXLINE( 589)		 ::haxe::ui::components::HScroll hscroll = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 590)		if (hx::IsNotNull( hscroll )) {
HXLINE( 591)			hscroll->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            	}



hx::ObjectPtr< DefaultHScrollPosBehaviour_obj > DefaultHScrollPosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< DefaultHScrollPosBehaviour_obj > __this = new DefaultHScrollPosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< DefaultHScrollPosBehaviour_obj > DefaultHScrollPosBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DefaultHScrollPosBehaviour_obj *__this = (DefaultHScrollPosBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultHScrollPosBehaviour_obj), true, "haxe.ui.containers.DefaultHScrollPosBehaviour"));
	*(void **)__this = DefaultHScrollPosBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DefaultHScrollPosBehaviour_obj::DefaultHScrollPosBehaviour_obj()
{
}

hx::Val DefaultHScrollPosBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DefaultHScrollPosBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DefaultHScrollPosBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultHScrollPosBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void DefaultHScrollPosBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultHScrollPosBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultHScrollPosBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultHScrollPosBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultHScrollPosBehaviour_obj::__mClass;

void DefaultHScrollPosBehaviour_obj::__register()
{
	hx::Object *dummy = new DefaultHScrollPosBehaviour_obj;
	DefaultHScrollPosBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.DefaultHScrollPosBehaviour","\xa7","\xb6","\xbf","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultHScrollPosBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultHScrollPosBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultHScrollPosBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultHScrollPosBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultHScrollPosBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultHScrollPosBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
