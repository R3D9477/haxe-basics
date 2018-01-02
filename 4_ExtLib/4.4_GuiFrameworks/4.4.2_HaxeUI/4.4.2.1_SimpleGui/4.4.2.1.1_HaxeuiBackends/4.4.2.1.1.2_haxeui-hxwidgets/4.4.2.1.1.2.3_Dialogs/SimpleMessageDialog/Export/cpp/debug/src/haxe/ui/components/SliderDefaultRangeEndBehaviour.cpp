// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultRangeEndBehaviour
#include <haxe/ui/components/SliderDefaultRangeEndBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_17e42f018d58c370_456_new,"haxe.ui.components.SliderDefaultRangeEndBehaviour","new",0xc9114617,"haxe.ui.components.SliderDefaultRangeEndBehaviour.new","haxe/ui/components/Slider.hx",456,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_17e42f018d58c370_459_set,"haxe.ui.components.SliderDefaultRangeEndBehaviour","set",0xc9151159,"haxe.ui.components.SliderDefaultRangeEndBehaviour.set","haxe/ui/components/Slider.hx",459,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_17e42f018d58c370_471_get,"haxe.ui.components.SliderDefaultRangeEndBehaviour","get",0xc90bf64d,"haxe.ui.components.SliderDefaultRangeEndBehaviour.get","haxe/ui/components/Slider.hx",471,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{

void SliderDefaultRangeEndBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_17e42f018d58c370_456_new)
HXLINE( 457)		this->_value = ((Float)0);
HXLINE( 456)		super::__construct(component);
            	}

Dynamic SliderDefaultRangeEndBehaviour_obj::__CreateEmpty() { return new SliderDefaultRangeEndBehaviour_obj; }

void *SliderDefaultRangeEndBehaviour_obj::_hx_vtable = 0;

Dynamic SliderDefaultRangeEndBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SliderDefaultRangeEndBehaviour_obj > _hx_result = new SliderDefaultRangeEndBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SliderDefaultRangeEndBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x2aac249b;
	}
}

void SliderDefaultRangeEndBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_17e42f018d58c370_459_set)
HXLINE( 460)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 461)			return;
            		}
HXLINE( 464)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 466)		 ::haxe::ui::components::Slider slider = ( ( ::haxe::ui::components::Slider)(this->_component) );
HXLINE( 467)		bool _hx_tmp;
HXDLIN( 467)		if (hx::IsNotNull( slider->_layout )) {
HXLINE( 467)			_hx_tmp = (slider->_layoutLocked == true);
            		}
            		else {
HXLINE( 467)			_hx_tmp = true;
            		}
HXDLIN( 467)		if (!(_hx_tmp)) {
HXLINE( 467)			slider->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType SliderDefaultRangeEndBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_17e42f018d58c370_471_get)
HXDLIN( 471)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< SliderDefaultRangeEndBehaviour_obj > SliderDefaultRangeEndBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< SliderDefaultRangeEndBehaviour_obj > __this = new SliderDefaultRangeEndBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< SliderDefaultRangeEndBehaviour_obj > SliderDefaultRangeEndBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SliderDefaultRangeEndBehaviour_obj *__this = (SliderDefaultRangeEndBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SliderDefaultRangeEndBehaviour_obj), true, "haxe.ui.components.SliderDefaultRangeEndBehaviour"));
	*(void **)__this = SliderDefaultRangeEndBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SliderDefaultRangeEndBehaviour_obj::SliderDefaultRangeEndBehaviour_obj()
{
}

hx::Val SliderDefaultRangeEndBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val SliderDefaultRangeEndBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SliderDefaultRangeEndBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SliderDefaultRangeEndBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SliderDefaultRangeEndBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SliderDefaultRangeEndBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SliderDefaultRangeEndBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void SliderDefaultRangeEndBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SliderDefaultRangeEndBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SliderDefaultRangeEndBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SliderDefaultRangeEndBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class SliderDefaultRangeEndBehaviour_obj::__mClass;

void SliderDefaultRangeEndBehaviour_obj::__register()
{
	hx::Object *dummy = new SliderDefaultRangeEndBehaviour_obj;
	SliderDefaultRangeEndBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.SliderDefaultRangeEndBehaviour","\xa5","\xee","\x28","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SliderDefaultRangeEndBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SliderDefaultRangeEndBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SliderDefaultRangeEndBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SliderDefaultRangeEndBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SliderDefaultRangeEndBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SliderDefaultRangeEndBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
