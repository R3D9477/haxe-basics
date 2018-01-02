// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#include <haxe/ui/animation/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultIndeterminateBehaviour
#include <haxe/ui/components/ProgressDefaultIndeterminateBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_44d8e8206669efc0_359_new,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour","new",0x0a4b2a02,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour.new","haxe/ui/components/Progress.hx",359,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_44d8e8206669efc0_363_set,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour","set",0x0a4ef544,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour.set","haxe/ui/components/Progress.hx",363,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_44d8e8206669efc0_379_get,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour","get",0x0a45da38,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour.get","haxe/ui/components/Progress.hx",379,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_44d8e8206669efc0_382_startIndeterminateAnimation,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour","startIndeterminateAnimation",0x47ca522d,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour.startIndeterminateAnimation","haxe/ui/components/Progress.hx",382,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_44d8e8206669efc0_391_stopIndeterminateAnimation,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour","stopIndeterminateAnimation",0x9e9870c9,"haxe.ui.components.ProgressDefaultIndeterminateBehaviour.stopIndeterminateAnimation","haxe/ui/components/Progress.hx",391,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressDefaultIndeterminateBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_44d8e8206669efc0_359_new)
HXLINE( 360)		this->_value = false;
HXLINE( 359)		super::__construct(component);
            	}

Dynamic ProgressDefaultIndeterminateBehaviour_obj::__CreateEmpty() { return new ProgressDefaultIndeterminateBehaviour_obj; }

void *ProgressDefaultIndeterminateBehaviour_obj::_hx_vtable = 0;

Dynamic ProgressDefaultIndeterminateBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > _hx_result = new ProgressDefaultIndeterminateBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressDefaultIndeterminateBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0de161a2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0de161a2;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void ProgressDefaultIndeterminateBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_44d8e8206669efc0_363_set)
HXLINE( 364)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_value),value )) {
HXLINE( 365)			return;
            		}
HXLINE( 368)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value);
HXLINE( 370)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->_component) );
HXLINE( 371)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == true)) {
HXLINE( 372)			this->startIndeterminateAnimation(progress);
            		}
            		else {
HXLINE( 374)			this->stopIndeterminateAnimation(progress);
            		}
            	}


 ::haxe::ui::util::VariantType ProgressDefaultIndeterminateBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_44d8e8206669efc0_379_get)
HXDLIN( 379)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_value);
            	}


void ProgressDefaultIndeterminateBehaviour_obj::startIndeterminateAnimation( ::haxe::ui::components::Progress progress){
            	HX_GC_STACKFRAME(&_hx_pos_44d8e8206669efc0_382_startIndeterminateAnimation)
HXLINE( 383)		::String animationId = progress->getClassProperty(HX_("animation.indeterminate",11,a0,b6,45));
HXLINE( 384)		if (hx::IsNull( animationId )) {
HXLINE( 385)			return;
            		}
HXLINE( 387)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 387)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 387)		_g->set(HX_("target",51,f3,ec,86),progress);
HXDLIN( 387)		this->_animation = _hx_tmp->loop(animationId,_g,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressDefaultIndeterminateBehaviour_obj,startIndeterminateAnimation,(void))

void ProgressDefaultIndeterminateBehaviour_obj::stopIndeterminateAnimation( ::haxe::ui::components::Progress progress){
            	HX_STACKFRAME(&_hx_pos_44d8e8206669efc0_391_stopIndeterminateAnimation)
HXDLIN( 391)		if (hx::IsNotNull( this->_animation )) {
HXLINE( 392)			this->_animation->stop();
HXLINE( 393)			this->_animation = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgressDefaultIndeterminateBehaviour_obj,stopIndeterminateAnimation,(void))


hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > ProgressDefaultIndeterminateBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > __this = new ProgressDefaultIndeterminateBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ProgressDefaultIndeterminateBehaviour_obj > ProgressDefaultIndeterminateBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressDefaultIndeterminateBehaviour_obj *__this = (ProgressDefaultIndeterminateBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressDefaultIndeterminateBehaviour_obj), true, "haxe.ui.components.ProgressDefaultIndeterminateBehaviour"));
	*(void **)__this = ProgressDefaultIndeterminateBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressDefaultIndeterminateBehaviour_obj::ProgressDefaultIndeterminateBehaviour_obj()
{
}

void ProgressDefaultIndeterminateBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressDefaultIndeterminateBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_animation,"_animation");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProgressDefaultIndeterminateBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_animation,"_animation");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ProgressDefaultIndeterminateBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_animation") ) { return hx::Val( _animation ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"stopIndeterminateAnimation") ) { return hx::Val( stopIndeterminateAnimation_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"startIndeterminateAnimation") ) { return hx::Val( startIndeterminateAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProgressDefaultIndeterminateBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_animation") ) { _animation=inValue.Cast<  ::haxe::ui::animation::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressDefaultIndeterminateBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressDefaultIndeterminateBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ProgressDefaultIndeterminateBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsObject /*::haxe::ui::animation::Animation*/ ,(int)offsetof(ProgressDefaultIndeterminateBehaviour_obj,_animation),HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressDefaultIndeterminateBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressDefaultIndeterminateBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_animation","\xc5","\x6a","\xd7","\xa6"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("startIndeterminateAnimation","\x8b","\xa2","\xbc","\x16"),
	HX_HCSTRING("stopIndeterminateAnimation","\x2b","\xd6","\x3e","\x21"),
	::String(null()) };

static void ProgressDefaultIndeterminateBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressDefaultIndeterminateBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressDefaultIndeterminateBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressDefaultIndeterminateBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressDefaultIndeterminateBehaviour_obj::__mClass;

void ProgressDefaultIndeterminateBehaviour_obj::__register()
{
	hx::Object *dummy = new ProgressDefaultIndeterminateBehaviour_obj;
	ProgressDefaultIndeterminateBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ProgressDefaultIndeterminateBehaviour","\x10","\xc1","\xb1","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressDefaultIndeterminateBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressDefaultIndeterminateBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressDefaultIndeterminateBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressDefaultIndeterminateBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressDefaultIndeterminateBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressDefaultIndeterminateBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
