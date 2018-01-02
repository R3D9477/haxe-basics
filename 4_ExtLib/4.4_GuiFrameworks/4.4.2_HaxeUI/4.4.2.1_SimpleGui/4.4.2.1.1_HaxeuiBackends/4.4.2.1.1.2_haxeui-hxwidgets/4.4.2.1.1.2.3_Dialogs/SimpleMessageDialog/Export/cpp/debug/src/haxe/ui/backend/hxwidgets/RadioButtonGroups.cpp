// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_RadioButtonGroups
#include <haxe/ui/backend/hxwidgets/RadioButtonGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_40b7c6aebea60ddf_8_exists,"haxe.ui.backend.hxwidgets.RadioButtonGroups","exists",0x9e6b1824,"haxe.ui.backend.hxwidgets.RadioButtonGroups.exists","haxe/ui/backend/hxwidgets/RadioButtonGroups.hx",8,0xc8e3583a)
HX_LOCAL_STACK_FRAME(_hx_pos_40b7c6aebea60ddf_11_group,"haxe.ui.backend.hxwidgets.RadioButtonGroups","group",0x2a7399f7,"haxe.ui.backend.hxwidgets.RadioButtonGroups.group","haxe/ui/backend/hxwidgets/RadioButtonGroups.hx",11,0xc8e3583a)
HX_LOCAL_STACK_FRAME(_hx_pos_40b7c6aebea60ddf_20_add,"haxe.ui.backend.hxwidgets.RadioButtonGroups","add",0xb35b3ad9,"haxe.ui.backend.hxwidgets.RadioButtonGroups.add","haxe/ui/backend/hxwidgets/RadioButtonGroups.hx",20,0xc8e3583a)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void RadioButtonGroups_obj::__construct() { }

Dynamic RadioButtonGroups_obj::__CreateEmpty() { return new RadioButtonGroups_obj; }

void *RadioButtonGroups_obj::_hx_vtable = 0;

Dynamic RadioButtonGroups_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RadioButtonGroups_obj > _hx_result = new RadioButtonGroups_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RadioButtonGroups_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e4758fc;
}

 ::haxe::ds::StringMap RadioButtonGroups_obj::_groups;

bool RadioButtonGroups_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_40b7c6aebea60ddf_8_exists)
HXDLIN(   8)		return hx::IsNotNull( ::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::group(name) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RadioButtonGroups_obj,exists,return )

::Array< ::Dynamic> RadioButtonGroups_obj::group(::String name){
            	HX_STACKFRAME(&_hx_pos_40b7c6aebea60ddf_11_group)
HXLINE(  12)		if (hx::IsNull( ::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups )) {
HXLINE(  13)			return null();
            		}
HXLINE(  16)		::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups->get(name)) );
HXLINE(  17)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RadioButtonGroups_obj,group,return )

void RadioButtonGroups_obj::add(::String name, ::haxe::ui::components::OptionBox control){
            	HX_GC_STACKFRAME(&_hx_pos_40b7c6aebea60ddf_20_add)
HXLINE(  21)		if (hx::IsNull( ::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups )) {
HXLINE(  22)			::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  25)		::Array< ::Dynamic> list = ( (::Array< ::Dynamic>)(::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups->get(name)) );
HXLINE(  26)		if (hx::IsNull( list )) {
HXLINE(  27)			list = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)			::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::_groups->set(name,list);
            		}
HXLINE(  31)		list->push(control);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RadioButtonGroups_obj,add,(void))


RadioButtonGroups_obj::RadioButtonGroups_obj()
{
}

bool RadioButtonGroups_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { outValue = group_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { outValue = ( _groups ); return true; }
	}
	return false;
}

bool RadioButtonGroups_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RadioButtonGroups_obj_sMemberStorageInfo = 0;
static hx::StaticInfo RadioButtonGroups_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &RadioButtonGroups_obj::_groups,HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void RadioButtonGroups_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RadioButtonGroups_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RadioButtonGroups_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RadioButtonGroups_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RadioButtonGroups_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RadioButtonGroups_obj::_groups,"_groups");
};

#endif

hx::Class RadioButtonGroups_obj::__mClass;

static ::String RadioButtonGroups_obj_sStaticFields[] = {
	HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	::String(null())
};

void RadioButtonGroups_obj::__register()
{
	hx::Object *dummy = new RadioButtonGroups_obj;
	RadioButtonGroups_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.RadioButtonGroups","\x26","\xed","\xf4","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RadioButtonGroups_obj::__GetStatic;
	__mClass->mSetStaticField = &RadioButtonGroups_obj::__SetStatic;
	__mClass->mMarkFunc = RadioButtonGroups_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RadioButtonGroups_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RadioButtonGroups_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RadioButtonGroups_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RadioButtonGroups_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RadioButtonGroups_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
