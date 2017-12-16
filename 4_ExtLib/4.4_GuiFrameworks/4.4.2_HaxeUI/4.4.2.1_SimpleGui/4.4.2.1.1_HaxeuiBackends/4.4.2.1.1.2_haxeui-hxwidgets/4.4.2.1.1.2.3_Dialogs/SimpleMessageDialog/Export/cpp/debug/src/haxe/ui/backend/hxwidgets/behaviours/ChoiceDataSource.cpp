// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ChoiceDataSource
#include <haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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
#ifndef INCLUDED_hx_widgets_Choice
#include <hx/widgets/Choice.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainerImmutable
#include <hx/widgets/ItemContainerImmutable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75320134228a0427_8_new,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","new",0x027767d5,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource.new","haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.hx",8,0xc4c8c33c)
HX_LOCAL_STACK_FRAME(_hx_pos_75320134228a0427_9_set,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","set",0x027b3317,"haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource.set","haxe/ui/backend/hxwidgets/behaviours/ChoiceDataSource.hx",9,0xc4c8c33c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ChoiceDataSource_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_75320134228a0427_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic ChoiceDataSource_obj::__CreateEmpty() { return new ChoiceDataSource_obj; }

void *ChoiceDataSource_obj::_hx_vtable = 0;

Dynamic ChoiceDataSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ChoiceDataSource_obj > _hx_result = new ChoiceDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x592ad9a1;
	}
}

void ChoiceDataSource_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_75320134228a0427_9_set)
HXLINE(  10)		this->super::set(value);
HXLINE(  11)		if (hx::IsNull( this->_component->window )) {
HXLINE(  12)			return;
            		}
HXLINE(  15)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(value);
HXLINE(  20)		 ::hx::widgets::Choice choice = hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->window);
HXLINE(  21)		choice->clear();
HXLINE(  23)		{
HXLINE(  23)			int _g1 = (int)0;
HXDLIN(  23)			int _g = ds->get_size();
HXDLIN(  23)			while((_g1 < _g)){
HXLINE(  23)				_g1 = (_g1 + (int)1);
HXDLIN(  23)				int n = (_g1 - (int)1);
HXLINE(  24)				 ::Dynamic item = ds->get(n);
HXLINE(  25)				if (hx::IsNotNull( ( (::String)(item->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ) )) {
HXLINE(  26)					choice->append(( (::String)(item->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ));
            				}
            			}
            		}
HXLINE(  30)		choice->set_selectedString(this->_component->get_text());
HXLINE(  32)		this->_component->set(HX_("dataSource",a5,76,d3,1d),ds);
            	}



hx::ObjectPtr< ChoiceDataSource_obj > ChoiceDataSource_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ChoiceDataSource_obj > __this = new ChoiceDataSource_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ChoiceDataSource_obj > ChoiceDataSource_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceDataSource_obj *__this = (ChoiceDataSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceDataSource_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource"));
	*(void **)__this = ChoiceDataSource_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceDataSource_obj::ChoiceDataSource_obj()
{
}

hx::Val ChoiceDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ChoiceDataSource_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ChoiceDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceDataSource_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ChoiceDataSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChoiceDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ChoiceDataSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChoiceDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class ChoiceDataSource_obj::__mClass;

void ChoiceDataSource_obj::__register()
{
	hx::Object *dummy = new ChoiceDataSource_obj;
	ChoiceDataSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource","\x63","\xd9","\xaf","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ChoiceDataSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ChoiceDataSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ChoiceDataSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ChoiceDataSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceDataSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
