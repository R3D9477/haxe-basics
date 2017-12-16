// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlValue
#include <haxe/ui/backend/hxwidgets/behaviours/ControlValue.h>
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
#ifndef INCLUDED_hx_widgets_CheckBox
#include <hx/widgets/CheckBox.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_RadioButton
#include <hx/widgets/RadioButton.h>
#endif
#ifndef INCLUDED_hx_widgets_ScrollBar
#include <hx/widgets/ScrollBar.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4a478d00b812ad3c_11_new,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","new",0x4b3109c3,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.new","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",11,0x7b1ee48e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a478d00b812ad3c_12_set,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","set",0x4b34d505,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.set","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",12,0x7b1ee48e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a478d00b812ad3c_55_get,"haxe.ui.backend.hxwidgets.behaviours.ControlValue","get",0x4b2bb9f9,"haxe.ui.backend.hxwidgets.behaviours.ControlValue.get","haxe/ui/backend/hxwidgets/behaviours/ControlValue.hx",55,0x7b1ee48e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlValue_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_11_new)
HXDLIN(  11)		super::__construct(component);
            	}

Dynamic ControlValue_obj::__CreateEmpty() { return new ControlValue_obj; }

void *ControlValue_obj::_hx_vtable = 0;

Dynamic ControlValue_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlValue_obj > _hx_result = new ControlValue_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlValue_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		if (inClassId<=(int)0x0584f58f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0584f58f;
		} else {
			return inClassId==(int)0x25c11f40;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void ControlValue_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_12_set)
HXLINE(  13)		this->super::set(value);
HXLINE(  14)		if (hx::IsNull( this->_component->window )) {
HXLINE(  15)			return;
            		}
HXLINE(  18)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  19)			 ::hx::widgets::Gauge _hx_tmp = hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->window);
HXDLIN(  19)			_hx_tmp->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            		else {
HXLINE(  20)			if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  21)				 ::hx::widgets::Slider _hx_tmp1 = hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->window);
HXDLIN(  21)				_hx_tmp1->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            			}
            			else {
HXLINE(  22)				if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::ScrollBar >())) {
HXLINE(  23)					 ::hx::widgets::ScrollBar scroll = hx::TCast<  ::hx::widgets::ScrollBar >::cast(this->_component->window);
HXLINE(  24)					int _hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXDLIN(  24)					int _hx_tmp3 = scroll->get_thumbSize();
HXDLIN(  24)					int _hx_tmp4 = scroll->get_range();
HXDLIN(  24)					scroll->setScrollbar(_hx_tmp2,_hx_tmp3,_hx_tmp4,scroll->get_pageSize());
            				}
            				else {
HXLINE(  25)					if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::CheckBox >())) {
HXLINE(  26)						 ::hx::widgets::CheckBox _hx_tmp5 = hx::TCast<  ::hx::widgets::CheckBox >::cast(this->_component->window);
HXDLIN(  26)						_hx_tmp5->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
            					}
            					else {
HXLINE(  27)						if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::RadioButton >())) {
HXLINE(  28)							 ::hx::widgets::RadioButton _hx_tmp6 = hx::TCast<  ::hx::widgets::RadioButton >::cast(this->_component->window);
HXDLIN(  28)							_hx_tmp6->set_value(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value));
            						}
            					}
            				}
            			}
            		}
            	}


 ::haxe::ui::util::VariantType ControlValue_obj::get(){
            	HX_STACKFRAME(&_hx_pos_4a478d00b812ad3c_55_get)
HXLINE(  61)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::RadioButton >())) {
HXLINE(  62)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(hx::TCast<  ::hx::widgets::RadioButton >::cast(this->_component->window)->get_value());
            		}
            		else {
HXLINE(  63)			if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Slider >())) {
HXLINE(  64)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(hx::TCast<  ::hx::widgets::Slider >::cast(this->_component->window)->get_value());
            			}
            		}
HXLINE(  66)		return null();
            	}



hx::ObjectPtr< ControlValue_obj > ControlValue_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlValue_obj > __this = new ControlValue_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlValue_obj > ControlValue_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlValue_obj *__this = (ControlValue_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlValue_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlValue"));
	*(void **)__this = ControlValue_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlValue_obj::ControlValue_obj()
{
}

hx::Val ControlValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlValue_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlValue_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlValue_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ControlValue_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlValue_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlValue_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlValue_obj::__mClass;

void ControlValue_obj::__register()
{
	hx::Object *dummy = new ControlValue_obj;
	ControlValue_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlValue","\x51","\x6c","\x5a","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlValue_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlValue_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlValue_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlValue_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlValue_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
