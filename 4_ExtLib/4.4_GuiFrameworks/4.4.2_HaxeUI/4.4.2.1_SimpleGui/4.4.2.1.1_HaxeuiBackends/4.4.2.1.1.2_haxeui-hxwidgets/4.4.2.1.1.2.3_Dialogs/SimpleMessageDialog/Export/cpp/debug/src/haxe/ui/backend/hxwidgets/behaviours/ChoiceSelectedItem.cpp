// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ChoiceSelectedItem
#include <haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedItem.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1aa660420c33b794_7_new,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem","new",0x17482a3e,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem.new","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedItem.hx",7,0xad294333)
HX_LOCAL_STACK_FRAME(_hx_pos_1aa660420c33b794_8_getDynamic,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem","getDynamic",0x186ee36b,"haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem.getDynamic","haxe/ui/backend/hxwidgets/behaviours/ChoiceSelectedItem.hx",8,0xad294333)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ChoiceSelectedItem_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1aa660420c33b794_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ChoiceSelectedItem_obj::__CreateEmpty() { return new ChoiceSelectedItem_obj; }

void *ChoiceSelectedItem_obj::_hx_vtable = 0;

Dynamic ChoiceSelectedItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ChoiceSelectedItem_obj > _hx_result = new ChoiceSelectedItem_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChoiceSelectedItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		if (inClassId<=(int)0x208cff0a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x208cff0a;
		} else {
			return inClassId==(int)0x25c11f40;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

 ::Dynamic ChoiceSelectedItem_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_1aa660420c33b794_8_getDynamic)
HXLINE(   9)		 ::Dynamic data = null();
HXLINE(  10)		if ((this->_component->has(HX_("dataSource",a5,76,d3,1d)) == true)) {
HXLINE(  11)			 ::hx::widgets::Choice choice = hx::TCast<  ::hx::widgets::Choice >::cast(this->_component->window);
HXLINE(  12)			 ::haxe::ui::data::DataSource ds = ( ( ::haxe::ui::data::DataSource)(this->_component->get(HX_("dataSource",a5,76,d3,1d))) );
HXLINE(  13)			data = ds->get(choice->get_selection());
            		}
HXLINE(  15)		return data;
            	}



hx::ObjectPtr< ChoiceSelectedItem_obj > ChoiceSelectedItem_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ChoiceSelectedItem_obj > __this = new ChoiceSelectedItem_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ChoiceSelectedItem_obj > ChoiceSelectedItem_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ChoiceSelectedItem_obj *__this = (ChoiceSelectedItem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ChoiceSelectedItem_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem"));
	*(void **)__this = ChoiceSelectedItem_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ChoiceSelectedItem_obj::ChoiceSelectedItem_obj()
{
}

hx::Val ChoiceSelectedItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ChoiceSelectedItem_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ChoiceSelectedItem_obj_sStaticStorageInfo = 0;
#endif

static ::String ChoiceSelectedItem_obj_sMemberFields[] = {
	HX_HCSTRING("getDynamic","\x89","\x25","\x77","\x85"),
	::String(null()) };

static void ChoiceSelectedItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChoiceSelectedItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ChoiceSelectedItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChoiceSelectedItem_obj::__mClass,"__mClass");
};

#endif

hx::Class ChoiceSelectedItem_obj::__mClass;

void ChoiceSelectedItem_obj::__register()
{
	hx::Object *dummy = new ChoiceSelectedItem_obj;
	ChoiceSelectedItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem","\x4c","\xf3","\x22","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ChoiceSelectedItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ChoiceSelectedItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ChoiceSelectedItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ChoiceSelectedItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChoiceSelectedItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChoiceSelectedItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
