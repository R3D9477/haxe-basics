// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultPosBehaviour
#include <haxe/ui/components/ProgressDefaultPosBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dab31847241a5b6f_296_new,"haxe.ui.components.ProgressDefaultPosBehaviour","new",0x44570a49,"haxe.ui.components.ProgressDefaultPosBehaviour.new","haxe/ui/components/Progress.hx",296,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_dab31847241a5b6f_299_set,"haxe.ui.components.ProgressDefaultPosBehaviour","set",0x445ad58b,"haxe.ui.components.ProgressDefaultPosBehaviour.set","haxe/ui/components/Progress.hx",299,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_dab31847241a5b6f_311_get,"haxe.ui.components.ProgressDefaultPosBehaviour","get",0x4451ba7f,"haxe.ui.components.ProgressDefaultPosBehaviour.get","haxe/ui/components/Progress.hx",311,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressDefaultPosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_dab31847241a5b6f_296_new)
HXLINE( 297)		this->_value = ((Float)0);
HXLINE( 296)		super::__construct(component);
            	}

Dynamic ProgressDefaultPosBehaviour_obj::__CreateEmpty() { return new ProgressDefaultPosBehaviour_obj; }

void *ProgressDefaultPosBehaviour_obj::_hx_vtable = 0;

Dynamic ProgressDefaultPosBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressDefaultPosBehaviour_obj > _hx_result = new ProgressDefaultPosBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressDefaultPosBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x2c5188cd;
	}
}

void ProgressDefaultPosBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_dab31847241a5b6f_299_set)
HXLINE( 300)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 301)			return;
            		}
HXLINE( 304)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 306)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->_component) );
HXLINE( 307)		bool _hx_tmp;
HXDLIN( 307)		if (hx::IsNotNull( progress->_layout )) {
HXLINE( 307)			_hx_tmp = (progress->_layoutLocked == true);
            		}
            		else {
HXLINE( 307)			_hx_tmp = true;
            		}
HXDLIN( 307)		if (!(_hx_tmp)) {
HXLINE( 307)			progress->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ProgressDefaultPosBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_dab31847241a5b6f_311_get)
HXDLIN( 311)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ProgressDefaultPosBehaviour_obj > ProgressDefaultPosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ProgressDefaultPosBehaviour_obj > __this = new ProgressDefaultPosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ProgressDefaultPosBehaviour_obj > ProgressDefaultPosBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressDefaultPosBehaviour_obj *__this = (ProgressDefaultPosBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressDefaultPosBehaviour_obj), true, "haxe.ui.components.ProgressDefaultPosBehaviour"));
	*(void **)__this = ProgressDefaultPosBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressDefaultPosBehaviour_obj::ProgressDefaultPosBehaviour_obj()
{
}

hx::Val ProgressDefaultPosBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ProgressDefaultPosBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressDefaultPosBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressDefaultPosBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressDefaultPosBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressDefaultPosBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressDefaultPosBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ProgressDefaultPosBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressDefaultPosBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressDefaultPosBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressDefaultPosBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressDefaultPosBehaviour_obj::__mClass;

void ProgressDefaultPosBehaviour_obj::__register()
{
	hx::Object *dummy = new ProgressDefaultPosBehaviour_obj;
	ProgressDefaultPosBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ProgressDefaultPosBehaviour","\xd7","\x31","\x08","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressDefaultPosBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressDefaultPosBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressDefaultPosBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressDefaultPosBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressDefaultPosBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressDefaultPosBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
