// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlDisable
#include <haxe/ui/backend/hxwidgets/behaviours/ControlDisable.h>
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a0fdac9012d93c48_5_new,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","new",0x7a95f3ba,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.new","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",5,0x8ca0c8b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a0fdac9012d93c48_6_set,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","set",0x7a99befc,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.set","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",6,0x8ca0c8b7)
HX_LOCAL_STACK_FRAME(_hx_pos_a0fdac9012d93c48_20_get,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable","get",0x7a90a3f0,"haxe.ui.backend.hxwidgets.behaviours.ControlDisable.get","haxe/ui/backend/hxwidgets/behaviours/ControlDisable.hx",20,0x8ca0c8b7)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlDisable_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_5_new)
HXDLIN(   5)		super::__construct(component);
            	}

Dynamic ControlDisable_obj::__CreateEmpty() { return new ControlDisable_obj; }

void *ControlDisable_obj::_hx_vtable = 0;

Dynamic ControlDisable_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlDisable_obj > _hx_result = new ControlDisable_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlDisable_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x69c52386;
	}
}

void ControlDisable_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_6_set)
HXLINE(   7)		this->super::set(value);
HXLINE(   8)		if (hx::IsNull( this->_component->window )) {
HXLINE(   9)			return;
            		}
HXLINE(  12)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  13)			return;
            		}
HXLINE(  16)		 ::hx::widgets::Window _hx_tmp = this->_component->window;
HXDLIN(  16)		_hx_tmp->set_enabled(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(::haxe::ui::util::_Variant::Variant_Impl__obj::invert(value)));
            	}


 ::haxe::ui::util::VariantType ControlDisable_obj::get(){
            	HX_STACKFRAME(&_hx_pos_a0fdac9012d93c48_20_get)
HXDLIN(  20)		return null();
            	}



hx::ObjectPtr< ControlDisable_obj > ControlDisable_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlDisable_obj > __this = new ControlDisable_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlDisable_obj > ControlDisable_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlDisable_obj *__this = (ControlDisable_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlDisable_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlDisable"));
	*(void **)__this = ControlDisable_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlDisable_obj::ControlDisable_obj()
{
}

hx::Val ControlDisable_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlDisable_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlDisable_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlDisable_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ControlDisable_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlDisable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlDisable_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlDisable_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlDisable_obj::__mClass;

void ControlDisable_obj::__register()
{
	hx::Object *dummy = new ControlDisable_obj;
	ControlDisable_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlDisable","\xc8","\x4e","\xf7","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlDisable_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlDisable_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlDisable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlDisable_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlDisable_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlDisable_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
