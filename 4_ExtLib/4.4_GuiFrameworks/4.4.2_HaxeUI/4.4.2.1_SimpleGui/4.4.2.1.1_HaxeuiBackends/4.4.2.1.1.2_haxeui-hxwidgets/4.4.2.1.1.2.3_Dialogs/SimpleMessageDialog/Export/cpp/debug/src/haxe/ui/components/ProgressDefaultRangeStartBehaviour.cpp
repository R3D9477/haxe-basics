// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultRangeStartBehaviour
#include <haxe/ui/components/ProgressDefaultRangeStartBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_249c24c1a98d362d_317_new,"haxe.ui.components.ProgressDefaultRangeStartBehaviour","new",0xf3a8bffc,"haxe.ui.components.ProgressDefaultRangeStartBehaviour.new","haxe/ui/components/Progress.hx",317,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_249c24c1a98d362d_320_set,"haxe.ui.components.ProgressDefaultRangeStartBehaviour","set",0xf3ac8b3e,"haxe.ui.components.ProgressDefaultRangeStartBehaviour.set","haxe/ui/components/Progress.hx",320,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_249c24c1a98d362d_332_get,"haxe.ui.components.ProgressDefaultRangeStartBehaviour","get",0xf3a37032,"haxe.ui.components.ProgressDefaultRangeStartBehaviour.get","haxe/ui/components/Progress.hx",332,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressDefaultRangeStartBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_249c24c1a98d362d_317_new)
HXLINE( 318)		this->_value = ((Float)0);
HXLINE( 317)		super::__construct(component);
            	}

Dynamic ProgressDefaultRangeStartBehaviour_obj::__CreateEmpty() { return new ProgressDefaultRangeStartBehaviour_obj; }

void *ProgressDefaultRangeStartBehaviour_obj::_hx_vtable = 0;

Dynamic ProgressDefaultRangeStartBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressDefaultRangeStartBehaviour_obj > _hx_result = new ProgressDefaultRangeStartBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressDefaultRangeStartBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x5e0165d4;
	}
}

void ProgressDefaultRangeStartBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_249c24c1a98d362d_320_set)
HXLINE( 321)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 322)			return;
            		}
HXLINE( 325)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 327)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->_component) );
HXLINE( 328)		bool _hx_tmp;
HXDLIN( 328)		if (hx::IsNotNull( progress->_layout )) {
HXLINE( 328)			_hx_tmp = (progress->_layoutLocked == true);
            		}
            		else {
HXLINE( 328)			_hx_tmp = true;
            		}
HXDLIN( 328)		if (!(_hx_tmp)) {
HXLINE( 328)			progress->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ProgressDefaultRangeStartBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_249c24c1a98d362d_332_get)
HXDLIN( 332)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ProgressDefaultRangeStartBehaviour_obj > ProgressDefaultRangeStartBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ProgressDefaultRangeStartBehaviour_obj > __this = new ProgressDefaultRangeStartBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ProgressDefaultRangeStartBehaviour_obj > ProgressDefaultRangeStartBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressDefaultRangeStartBehaviour_obj *__this = (ProgressDefaultRangeStartBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressDefaultRangeStartBehaviour_obj), true, "haxe.ui.components.ProgressDefaultRangeStartBehaviour"));
	*(void **)__this = ProgressDefaultRangeStartBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressDefaultRangeStartBehaviour_obj::ProgressDefaultRangeStartBehaviour_obj()
{
}

hx::Val ProgressDefaultRangeStartBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProgressDefaultRangeStartBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressDefaultRangeStartBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressDefaultRangeStartBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressDefaultRangeStartBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressDefaultRangeStartBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressDefaultRangeStartBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ProgressDefaultRangeStartBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressDefaultRangeStartBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressDefaultRangeStartBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressDefaultRangeStartBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressDefaultRangeStartBehaviour_obj::__mClass;

void ProgressDefaultRangeStartBehaviour_obj::__register()
{
	hx::Object *dummy = new ProgressDefaultRangeStartBehaviour_obj;
	ProgressDefaultRangeStartBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ProgressDefaultRangeStartBehaviour","\x0a","\x52","\x5a","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressDefaultRangeStartBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressDefaultRangeStartBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressDefaultRangeStartBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressDefaultRangeStartBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressDefaultRangeStartBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressDefaultRangeStartBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
