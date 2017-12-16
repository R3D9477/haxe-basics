// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlPulse
#include <haxe/ui/backend/hxwidgets/behaviours/ControlPulse.h>
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
#ifndef INCLUDED_hx_widgets_Gauge
#include <hx/widgets/Gauge.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5bca0f8df8676042_7_new,"haxe.ui.backend.hxwidgets.behaviours.ControlPulse","new",0x04c2c56b,"haxe.ui.backend.hxwidgets.behaviours.ControlPulse.new","haxe/ui/backend/hxwidgets/behaviours/ControlPulse.hx",7,0x3cd055e6)
HX_LOCAL_STACK_FRAME(_hx_pos_5bca0f8df8676042_8_set,"haxe.ui.backend.hxwidgets.behaviours.ControlPulse","set",0x04c690ad,"haxe.ui.backend.hxwidgets.behaviours.ControlPulse.set","haxe/ui/backend/hxwidgets/behaviours/ControlPulse.hx",8,0x3cd055e6)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlPulse_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5bca0f8df8676042_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ControlPulse_obj::__CreateEmpty() { return new ControlPulse_obj; }

void *ControlPulse_obj::_hx_vtable = 0;

Dynamic ControlPulse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlPulse_obj > _hx_result = new ControlPulse_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlPulse_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		if (inClassId<=(int)0x0332b3ff) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0332b3ff;
		} else {
			return inClassId==(int)0x25c11f40;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void ControlPulse_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_5bca0f8df8676042_8_set)
HXLINE(   9)		this->super::set(value);
HXLINE(  10)		if (hx::IsNull( this->_component->window )) {
HXLINE(  11)			return;
            		}
HXLINE(  14)		bool _hx_tmp;
HXDLIN(  14)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Gauge >())) {
HXLINE(  14)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == true);
            		}
            		else {
HXLINE(  14)			_hx_tmp = false;
            		}
HXDLIN(  14)		if (_hx_tmp) {
HXLINE(  15)			hx::TCast<  ::hx::widgets::Gauge >::cast(this->_component->window)->pulse();
            		}
            	}



hx::ObjectPtr< ControlPulse_obj > ControlPulse_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlPulse_obj > __this = new ControlPulse_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlPulse_obj > ControlPulse_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlPulse_obj *__this = (ControlPulse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlPulse_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlPulse"));
	*(void **)__this = ControlPulse_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlPulse_obj::ControlPulse_obj()
{
}

hx::Val ControlPulse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlPulse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlPulse_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlPulse_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ControlPulse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlPulse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlPulse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlPulse_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlPulse_obj::__mClass;

void ControlPulse_obj::__register()
{
	hx::Object *dummy = new ControlPulse_obj;
	ControlPulse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlPulse","\xf9","\x33","\x2b","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlPulse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlPulse_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlPulse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlPulse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlPulse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlPulse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
