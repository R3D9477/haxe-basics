// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownDefaultSelectedItemBehaviour
#include <haxe/ui/components/DropDownDefaultSelectedItemBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_72c82f46a0c9aba0_307_new,"haxe.ui.components.DropDownDefaultSelectedItemBehaviour","new",0x1214afb7,"haxe.ui.components.DropDownDefaultSelectedItemBehaviour.new","haxe/ui/components/DropDown.hx",307,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_72c82f46a0c9aba0_308_getDynamic,"haxe.ui.components.DropDownDefaultSelectedItemBehaviour","getDynamic",0x8d44ef12,"haxe.ui.components.DropDownDefaultSelectedItemBehaviour.getDynamic","haxe/ui/components/DropDown.hx",308,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownDefaultSelectedItemBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_72c82f46a0c9aba0_307_new)
HXDLIN( 307)		super::__construct(component);
            	}

Dynamic DropDownDefaultSelectedItemBehaviour_obj::__CreateEmpty() { return new DropDownDefaultSelectedItemBehaviour_obj; }

void *DropDownDefaultSelectedItemBehaviour_obj::_hx_vtable = 0;

Dynamic DropDownDefaultSelectedItemBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DropDownDefaultSelectedItemBehaviour_obj > _hx_result = new DropDownDefaultSelectedItemBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownDefaultSelectedItemBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x6e62181f;
	}
}

 ::Dynamic DropDownDefaultSelectedItemBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_72c82f46a0c9aba0_308_getDynamic)
HXLINE( 309)		 ::haxe::ui::components::DropDown dropDown = hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component);
HXLINE( 310)		 ::haxe::ui::containers::ListView lv = dropDown->_listview;
HXLINE( 311)		bool _hx_tmp;
HXDLIN( 311)		if (hx::IsNotNull( dropDown->get_dataSource() )) {
HXLINE( 311)			_hx_tmp = (dropDown->_selectedIndex == (int)-1);
            		}
            		else {
HXLINE( 311)			_hx_tmp = true;
            		}
HXDLIN( 311)		if (_hx_tmp) {
HXLINE( 312)			return null();
            		}
HXLINE( 314)		return dropDown->get_dataSource()->get(dropDown->_selectedIndex);
            	}



hx::ObjectPtr< DropDownDefaultSelectedItemBehaviour_obj > DropDownDefaultSelectedItemBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< DropDownDefaultSelectedItemBehaviour_obj > __this = new DropDownDefaultSelectedItemBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< DropDownDefaultSelectedItemBehaviour_obj > DropDownDefaultSelectedItemBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DropDownDefaultSelectedItemBehaviour_obj *__this = (DropDownDefaultSelectedItemBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DropDownDefaultSelectedItemBehaviour_obj), true, "haxe.ui.components.DropDownDefaultSelectedItemBehaviour"));
	*(void **)__this = DropDownDefaultSelectedItemBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DropDownDefaultSelectedItemBehaviour_obj::DropDownDefaultSelectedItemBehaviour_obj()
{
}

hx::Val DropDownDefaultSelectedItemBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return hx::Val( getDynamic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DropDownDefaultSelectedItemBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DropDownDefaultSelectedItemBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDownDefaultSelectedItemBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("getDynamic","\x89","\x25","\x77","\x85"),
	::String(null()) };

static void DropDownDefaultSelectedItemBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropDownDefaultSelectedItemBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropDownDefaultSelectedItemBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropDownDefaultSelectedItemBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class DropDownDefaultSelectedItemBehaviour_obj::__mClass;

void DropDownDefaultSelectedItemBehaviour_obj::__register()
{
	hx::Object *dummy = new DropDownDefaultSelectedItemBehaviour_obj;
	DropDownDefaultSelectedItemBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.DropDownDefaultSelectedItemBehaviour","\x45","\x08","\x8f","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DropDownDefaultSelectedItemBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DropDownDefaultSelectedItemBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DropDownDefaultSelectedItemBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropDownDefaultSelectedItemBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownDefaultSelectedItemBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownDefaultSelectedItemBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
