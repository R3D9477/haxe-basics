// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlMin
#include <haxe/ui/backend/hxwidgets/behaviours/ControlMin.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Slider
#include <hx/widgets/Slider.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_7_new,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","new",0x1e8ac864,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.new","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",7,0x7a7b82cd)
HX_LOCAL_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_8_set,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","set",0x1e8e93a6,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.set","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",8,0x7a7b82cd)
HX_LOCAL_STACK_FRAME(_hx_pos_2002ff8f6351fa3b_20_get,"haxe.ui.backend.hxwidgets.behaviours.ControlMin","get",0x1e85789a,"haxe.ui.backend.hxwidgets.behaviours.ControlMin.get","haxe/ui/backend/hxwidgets/behaviours/ControlMin.hx",20,0x7a7b82cd)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlMin_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ControlMin_obj::__CreateEmpty() { return new ControlMin_obj; }

void *ControlMin_obj::_hx_vtable = 0;

Dynamic ControlMin_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlMin_obj > _hx_result = new ControlMin_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlMin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2bcf58f8) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x2bcf58f8;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void ControlMin_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_8_set)
HXLINE(   9)		this->super::set(value);
HXLINE(  10)		if (hx::IsNull( this->_component->window )) {
HXLINE(  11)			return;
            		}
HXLINE(  14)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  15)			 ::hx::widgets::Slider _hx_tmp = hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->window);
HXDLIN(  15)			_hx_tmp->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            	}


 ::haxe::ui::util::VariantType ControlMin_obj::get(){
            	HX_STACKFRAME(&_hx_pos_2002ff8f6351fa3b_20_get)
HXDLIN(  20)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->window)->get_min());
            	}



hx::ObjectPtr< ControlMin_obj > ControlMin_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlMin_obj > __this = new ControlMin_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlMin_obj > ControlMin_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlMin_obj *__this = (ControlMin_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlMin_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlMin"));
	*(void **)__this = ControlMin_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlMin_obj::ControlMin_obj()
{
}

hx::Val ControlMin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlMin_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlMin_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlMin_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ControlMin_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlMin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlMin_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlMin_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlMin_obj::__mClass;

void ControlMin_obj::__register()
{
	hx::Object *dummy = new ControlMin_obj;
	ControlMin_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlMin","\x72","\x06","\xa6","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlMin_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlMin_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlMin_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlMin_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlMin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlMin_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
