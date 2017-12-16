// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScroll
#include <haxe/ui/components/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_DefaultVScrollPosBehaviour
#include <haxe/ui/containers/DefaultVScrollPosBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1f039a38bbfa3c3f_561_new,"haxe.ui.containers.DefaultVScrollPosBehaviour","new",0xbb4031a7,"haxe.ui.containers.DefaultVScrollPosBehaviour.new","haxe/ui/containers/ScrollView.hx",561,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_1f039a38bbfa3c3f_562_get,"haxe.ui.containers.DefaultVScrollPosBehaviour","get",0xbb3ae1dd,"haxe.ui.containers.DefaultVScrollPosBehaviour.get","haxe/ui/containers/ScrollView.hx",562,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_1f039a38bbfa3c3f_570_set,"haxe.ui.containers.DefaultVScrollPosBehaviour","set",0xbb43fce9,"haxe.ui.containers.DefaultVScrollPosBehaviour.set","haxe/ui/containers/ScrollView.hx",570,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void DefaultVScrollPosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1f039a38bbfa3c3f_561_new)
HXDLIN( 561)		super::__construct(component);
            	}

Dynamic DefaultVScrollPosBehaviour_obj::__CreateEmpty() { return new DefaultVScrollPosBehaviour_obj; }

void *DefaultVScrollPosBehaviour_obj::_hx_vtable = 0;

Dynamic DefaultVScrollPosBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > _hx_result = new DefaultVScrollPosBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultVScrollPosBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00cb530f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00cb530f;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

 ::haxe::ui::util::VariantType DefaultVScrollPosBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_1f039a38bbfa3c3f_562_get)
HXLINE( 563)		 ::haxe::ui::components::VScroll vscroll = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 564)		if (hx::IsNull( vscroll )) {
HXLINE( 565)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((int)0);
            		}
HXLINE( 567)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(vscroll->get_pos());
            	}


void DefaultVScrollPosBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_1f039a38bbfa3c3f_570_set)
HXLINE( 571)		 ::haxe::ui::components::VScroll vscroll = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 572)		if (hx::IsNotNull( vscroll )) {
HXLINE( 573)			vscroll->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            	}



hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > DefaultVScrollPosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > __this = new DefaultVScrollPosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > DefaultVScrollPosBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DefaultVScrollPosBehaviour_obj *__this = (DefaultVScrollPosBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultVScrollPosBehaviour_obj), true, "haxe.ui.containers.DefaultVScrollPosBehaviour"));
	*(void **)__this = DefaultVScrollPosBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DefaultVScrollPosBehaviour_obj::DefaultVScrollPosBehaviour_obj()
{
}

hx::Val DefaultVScrollPosBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DefaultVScrollPosBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DefaultVScrollPosBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultVScrollPosBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void DefaultVScrollPosBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultVScrollPosBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultVScrollPosBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultVScrollPosBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultVScrollPosBehaviour_obj::__mClass;

void DefaultVScrollPosBehaviour_obj::__register()
{
	hx::Object *dummy = new DefaultVScrollPosBehaviour_obj;
	DefaultVScrollPosBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.DefaultVScrollPosBehaviour","\x35","\xd2","\x76","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultVScrollPosBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultVScrollPosBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultVScrollPosBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultVScrollPosBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultVScrollPosBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultVScrollPosBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
