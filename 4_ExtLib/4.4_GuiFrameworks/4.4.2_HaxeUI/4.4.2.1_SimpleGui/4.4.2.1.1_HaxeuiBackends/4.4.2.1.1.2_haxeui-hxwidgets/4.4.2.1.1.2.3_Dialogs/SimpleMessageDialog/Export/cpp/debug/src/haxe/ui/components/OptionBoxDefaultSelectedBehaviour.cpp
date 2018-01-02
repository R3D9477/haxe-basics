// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxDefaultSelectedBehaviour
#include <haxe/ui/components/OptionBoxDefaultSelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxValue
#include <haxe/ui/components/OptionBoxValue.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aa3eac507e921f70_307_new,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour","new",0x6f235423,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour.new","haxe/ui/components/OptionBox.hx",307,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_aa3eac507e921f70_310_set,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour","set",0x6f271f65,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour.set","haxe/ui/components/OptionBox.hx",310,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_aa3eac507e921f70_328_get,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour","get",0x6f1e0459,"haxe.ui.components.OptionBoxDefaultSelectedBehaviour.get","haxe/ui/components/OptionBox.hx",328,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxDefaultSelectedBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_aa3eac507e921f70_307_new)
HXDLIN( 307)		super::__construct(component);
            	}

Dynamic OptionBoxDefaultSelectedBehaviour_obj::__CreateEmpty() { return new OptionBoxDefaultSelectedBehaviour_obj; }

void *OptionBoxDefaultSelectedBehaviour_obj::_hx_vtable = 0;

Dynamic OptionBoxDefaultSelectedBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OptionBoxDefaultSelectedBehaviour_obj > _hx_result = new OptionBoxDefaultSelectedBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionBoxDefaultSelectedBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x7c08f25f;
	}
}

void OptionBoxDefaultSelectedBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_aa3eac507e921f70_310_set)
HXLINE( 311)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == this->_value)) {
HXLINE( 312)			return;
            		}
HXLINE( 315)		 ::haxe::ui::components::OptionBox optionbox = ( ( ::haxe::ui::components::OptionBox)(this->_component) );
HXLINE( 316)		if (hx::IsNull( optionbox->_value )) {
HXLINE( 317)			return;
            		}
HXLINE( 320)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == true)) {
HXLINE( 321)			optionbox->_value->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            		else {
HXLINE( 323)			optionbox->_value->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
            		}
            	}


 ::haxe::ui::util::VariantType OptionBoxDefaultSelectedBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_aa3eac507e921f70_328_get)
HXDLIN( 328)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_value);
            	}



hx::ObjectPtr< OptionBoxDefaultSelectedBehaviour_obj > OptionBoxDefaultSelectedBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< OptionBoxDefaultSelectedBehaviour_obj > __this = new OptionBoxDefaultSelectedBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< OptionBoxDefaultSelectedBehaviour_obj > OptionBoxDefaultSelectedBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	OptionBoxDefaultSelectedBehaviour_obj *__this = (OptionBoxDefaultSelectedBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxDefaultSelectedBehaviour_obj), true, "haxe.ui.components.OptionBoxDefaultSelectedBehaviour"));
	*(void **)__this = OptionBoxDefaultSelectedBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

OptionBoxDefaultSelectedBehaviour_obj::OptionBoxDefaultSelectedBehaviour_obj()
{
}

hx::Val OptionBoxDefaultSelectedBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val OptionBoxDefaultSelectedBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBoxDefaultSelectedBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OptionBoxDefaultSelectedBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(OptionBoxDefaultSelectedBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OptionBoxDefaultSelectedBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBoxDefaultSelectedBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void OptionBoxDefaultSelectedBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBoxDefaultSelectedBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionBoxDefaultSelectedBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxDefaultSelectedBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionBoxDefaultSelectedBehaviour_obj::__mClass;

void OptionBoxDefaultSelectedBehaviour_obj::__register()
{
	hx::Object *dummy = new OptionBoxDefaultSelectedBehaviour_obj;
	OptionBoxDefaultSelectedBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.OptionBoxDefaultSelectedBehaviour","\xb1","\x06","\x00","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OptionBoxDefaultSelectedBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OptionBoxDefaultSelectedBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBoxDefaultSelectedBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionBoxDefaultSelectedBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxDefaultSelectedBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxDefaultSelectedBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
