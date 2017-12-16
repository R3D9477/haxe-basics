// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a23403bff3f9618d_6_new,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour","new",0x75ea7eed,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour.new","haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.hx",6,0x957a5964)
HX_LOCAL_STACK_FRAME(_hx_pos_a23403bff3f9618d_9_set,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour","set",0x75ee4a2f,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour.set","haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.hx",9,0x957a5964)
HX_LOCAL_STACK_FRAME(_hx_pos_a23403bff3f9618d_13_update,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour","update",0x9382ad9c,"haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour.update","haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.hx",13,0x957a5964)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void HxWidgetsBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a23403bff3f9618d_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic HxWidgetsBehaviour_obj::__CreateEmpty() { return new HxWidgetsBehaviour_obj; }

void *HxWidgetsBehaviour_obj::_hx_vtable = 0;

Dynamic HxWidgetsBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HxWidgetsBehaviour_obj > _hx_result = new HxWidgetsBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HxWidgetsBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void HxWidgetsBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_a23403bff3f9618d_9_set)
HXDLIN(   9)		this->_value = value;
            	}


void HxWidgetsBehaviour_obj::update(){
            	HX_STACKFRAME(&_hx_pos_a23403bff3f9618d_13_update)
HXDLIN(  13)		this->set(this->_value);
            	}



hx::ObjectPtr< HxWidgetsBehaviour_obj > HxWidgetsBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< HxWidgetsBehaviour_obj > __this = new HxWidgetsBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< HxWidgetsBehaviour_obj > HxWidgetsBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	HxWidgetsBehaviour_obj *__this = (HxWidgetsBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HxWidgetsBehaviour_obj), true, "haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour"));
	*(void **)__this = HxWidgetsBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

HxWidgetsBehaviour_obj::HxWidgetsBehaviour_obj()
{
}

void HxWidgetsBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HxWidgetsBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HxWidgetsBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HxWidgetsBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HxWidgetsBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HxWidgetsBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HxWidgetsBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::util::VariantType*/ ,(int)offsetof(HxWidgetsBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HxWidgetsBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String HxWidgetsBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void HxWidgetsBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HxWidgetsBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HxWidgetsBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HxWidgetsBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class HxWidgetsBehaviour_obj::__mClass;

void HxWidgetsBehaviour_obj::__register()
{
	hx::Object *dummy = new HxWidgetsBehaviour_obj;
	HxWidgetsBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.HxWidgetsBehaviour","\x7b","\x84","\xd3","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HxWidgetsBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HxWidgetsBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HxWidgetsBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HxWidgetsBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HxWidgetsBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HxWidgetsBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
