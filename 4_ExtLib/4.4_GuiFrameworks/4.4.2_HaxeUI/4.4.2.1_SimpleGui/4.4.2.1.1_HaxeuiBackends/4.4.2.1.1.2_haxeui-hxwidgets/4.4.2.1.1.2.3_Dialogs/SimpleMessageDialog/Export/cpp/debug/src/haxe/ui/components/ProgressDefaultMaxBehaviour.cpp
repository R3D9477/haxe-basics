// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultMaxBehaviour
#include <haxe/ui/components/ProgressDefaultMaxBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6800f2e84a896979_275_new,"haxe.ui.components.ProgressDefaultMaxBehaviour","new",0x96667339,"haxe.ui.components.ProgressDefaultMaxBehaviour.new","haxe/ui/components/Progress.hx",275,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_6800f2e84a896979_278_set,"haxe.ui.components.ProgressDefaultMaxBehaviour","set",0x966a3e7b,"haxe.ui.components.ProgressDefaultMaxBehaviour.set","haxe/ui/components/Progress.hx",278,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_6800f2e84a896979_290_get,"haxe.ui.components.ProgressDefaultMaxBehaviour","get",0x9661236f,"haxe.ui.components.ProgressDefaultMaxBehaviour.get","haxe/ui/components/Progress.hx",290,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressDefaultMaxBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6800f2e84a896979_275_new)
HXLINE( 276)		this->_value = ((Float)0);
HXLINE( 275)		super::__construct(component);
            	}

Dynamic ProgressDefaultMaxBehaviour_obj::__CreateEmpty() { return new ProgressDefaultMaxBehaviour_obj; }

void *ProgressDefaultMaxBehaviour_obj::_hx_vtable = 0;

Dynamic ProgressDefaultMaxBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressDefaultMaxBehaviour_obj > _hx_result = new ProgressDefaultMaxBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressDefaultMaxBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c5db9bd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c5db9bd;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void ProgressDefaultMaxBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_6800f2e84a896979_278_set)
HXLINE( 279)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 280)			return;
            		}
HXLINE( 283)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 285)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->_component) );
HXLINE( 286)		bool _hx_tmp;
HXDLIN( 286)		if (hx::IsNotNull( progress->_layout )) {
HXLINE( 286)			_hx_tmp = (progress->_layoutLocked == true);
            		}
            		else {
HXLINE( 286)			_hx_tmp = true;
            		}
HXDLIN( 286)		if (!(_hx_tmp)) {
HXLINE( 286)			progress->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ProgressDefaultMaxBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_6800f2e84a896979_290_get)
HXDLIN( 290)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ProgressDefaultMaxBehaviour_obj > ProgressDefaultMaxBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ProgressDefaultMaxBehaviour_obj > __this = new ProgressDefaultMaxBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ProgressDefaultMaxBehaviour_obj > ProgressDefaultMaxBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressDefaultMaxBehaviour_obj *__this = (ProgressDefaultMaxBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressDefaultMaxBehaviour_obj), true, "haxe.ui.components.ProgressDefaultMaxBehaviour"));
	*(void **)__this = ProgressDefaultMaxBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressDefaultMaxBehaviour_obj::ProgressDefaultMaxBehaviour_obj()
{
}

hx::Val ProgressDefaultMaxBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ProgressDefaultMaxBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressDefaultMaxBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressDefaultMaxBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressDefaultMaxBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressDefaultMaxBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressDefaultMaxBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ProgressDefaultMaxBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressDefaultMaxBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressDefaultMaxBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressDefaultMaxBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressDefaultMaxBehaviour_obj::__mClass;

void ProgressDefaultMaxBehaviour_obj::__register()
{
	hx::Object *dummy = new ProgressDefaultMaxBehaviour_obj;
	ProgressDefaultMaxBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ProgressDefaultMaxBehaviour","\xc7","\x62","\x14","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressDefaultMaxBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressDefaultMaxBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressDefaultMaxBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressDefaultMaxBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressDefaultMaxBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressDefaultMaxBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
