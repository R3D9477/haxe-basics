// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_util_ComponentUtil
#include <haxe/ui/util/ComponentUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e239c49a47e5dd2b_7_getDepth,"haxe.ui.util.ComponentUtil","getDepth",0xfefab0b6,"haxe.ui.util.ComponentUtil.getDepth","haxe/ui/util/ComponentUtil.hx",7,0x7c776dda)
namespace haxe{
namespace ui{
namespace util{

void ComponentUtil_obj::__construct() { }

Dynamic ComponentUtil_obj::__CreateEmpty() { return new ComponentUtil_obj; }

void *ComponentUtil_obj::_hx_vtable = 0;

Dynamic ComponentUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentUtil_obj > _hx_result = new ComponentUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a7ecd83;
}

int ComponentUtil_obj::getDepth( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_e239c49a47e5dd2b_7_getDepth)
HXLINE(   8)		int count = (int)0;
HXLINE(   9)		while(hx::IsNotNull( target->parentComponent )){
HXLINE(  10)			target = target->parentComponent;
HXLINE(  11)			count = (count + (int)1);
            		}
HXLINE(  14)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentUtil_obj,getDepth,return )


ComponentUtil_obj::ComponentUtil_obj()
{
}

bool ComponentUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getDepth") ) { outValue = getDepth_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ComponentUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ComponentUtil_obj_sStaticStorageInfo = 0;
#endif

static void ComponentUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentUtil_obj::__mClass;

static ::String ComponentUtil_obj_sStaticFields[] = {
	HX_HCSTRING("getDepth","\x8d","\x00","\x01","\x37"),
	::String(null())
};

void ComponentUtil_obj::__register()
{
	hx::Object *dummy = new ComponentUtil_obj;
	ComponentUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.ComponentUtil","\x65","\x59","\xd5","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ComponentUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ComponentUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ComponentUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
