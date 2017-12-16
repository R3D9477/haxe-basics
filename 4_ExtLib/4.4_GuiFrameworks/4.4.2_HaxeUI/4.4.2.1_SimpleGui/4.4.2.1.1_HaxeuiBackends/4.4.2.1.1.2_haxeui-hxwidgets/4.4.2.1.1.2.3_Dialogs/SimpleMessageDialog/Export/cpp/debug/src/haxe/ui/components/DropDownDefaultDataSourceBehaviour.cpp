// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownDefaultDataSourceBehaviour
#include <haxe/ui/components/DropDownDefaultDataSourceBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f2b863eee7ba7dc9_299_new,"haxe.ui.components.DropDownDefaultDataSourceBehaviour","new",0x2875a240,"haxe.ui.components.DropDownDefaultDataSourceBehaviour.new","haxe/ui/components/DropDown.hx",299,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b863eee7ba7dc9_300_set,"haxe.ui.components.DropDownDefaultDataSourceBehaviour","set",0x28796d82,"haxe.ui.components.DropDownDefaultDataSourceBehaviour.set","haxe/ui/components/DropDown.hx",300,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{

void DropDownDefaultDataSourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f2b863eee7ba7dc9_299_new)
HXDLIN( 299)		super::__construct(component);
            	}

Dynamic DropDownDefaultDataSourceBehaviour_obj::__CreateEmpty() { return new DropDownDefaultDataSourceBehaviour_obj; }

void *DropDownDefaultDataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic DropDownDefaultDataSourceBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DropDownDefaultDataSourceBehaviour_obj > _hx_result = new DropDownDefaultDataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DropDownDefaultDataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x5c16d618;
	}
}

void DropDownDefaultDataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_f2b863eee7ba7dc9_300_set)
            	}



hx::ObjectPtr< DropDownDefaultDataSourceBehaviour_obj > DropDownDefaultDataSourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< DropDownDefaultDataSourceBehaviour_obj > __this = new DropDownDefaultDataSourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< DropDownDefaultDataSourceBehaviour_obj > DropDownDefaultDataSourceBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DropDownDefaultDataSourceBehaviour_obj *__this = (DropDownDefaultDataSourceBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DropDownDefaultDataSourceBehaviour_obj), true, "haxe.ui.components.DropDownDefaultDataSourceBehaviour"));
	*(void **)__this = DropDownDefaultDataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DropDownDefaultDataSourceBehaviour_obj::DropDownDefaultDataSourceBehaviour_obj()
{
}

hx::Val DropDownDefaultDataSourceBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DropDownDefaultDataSourceBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DropDownDefaultDataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DropDownDefaultDataSourceBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void DropDownDefaultDataSourceBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropDownDefaultDataSourceBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DropDownDefaultDataSourceBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropDownDefaultDataSourceBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class DropDownDefaultDataSourceBehaviour_obj::__mClass;

void DropDownDefaultDataSourceBehaviour_obj::__register()
{
	hx::Object *dummy = new DropDownDefaultDataSourceBehaviour_obj;
	DropDownDefaultDataSourceBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.DropDownDefaultDataSourceBehaviour","\x4e","\xc2","\x6f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DropDownDefaultDataSourceBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DropDownDefaultDataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DropDownDefaultDataSourceBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DropDownDefaultDataSourceBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropDownDefaultDataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropDownDefaultDataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
