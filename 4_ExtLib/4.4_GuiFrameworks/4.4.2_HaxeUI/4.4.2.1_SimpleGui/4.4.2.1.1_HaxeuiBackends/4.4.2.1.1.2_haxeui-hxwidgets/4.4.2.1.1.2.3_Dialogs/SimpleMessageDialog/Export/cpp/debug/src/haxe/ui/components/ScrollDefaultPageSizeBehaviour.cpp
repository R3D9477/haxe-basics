// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultPageSizeBehaviour
#include <haxe/ui/components/ScrollDefaultPageSizeBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c4fd2a224168c24d_363_new,"haxe.ui.components.ScrollDefaultPageSizeBehaviour","new",0x5195be31,"haxe.ui.components.ScrollDefaultPageSizeBehaviour.new","haxe/ui/components/Scroll.hx",363,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fd2a224168c24d_366_set,"haxe.ui.components.ScrollDefaultPageSizeBehaviour","set",0x51998973,"haxe.ui.components.ScrollDefaultPageSizeBehaviour.set","haxe/ui/components/Scroll.hx",366,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_c4fd2a224168c24d_377_get,"haxe.ui.components.ScrollDefaultPageSizeBehaviour","get",0x51906e67,"haxe.ui.components.ScrollDefaultPageSizeBehaviour.get","haxe/ui/components/Scroll.hx",377,0x330a6dea)
namespace haxe{
namespace ui{
namespace components{

void ScrollDefaultPageSizeBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c4fd2a224168c24d_363_new)
HXLINE( 364)		this->_value = ((Float)0);
HXLINE( 363)		super::__construct(component);
            	}

Dynamic ScrollDefaultPageSizeBehaviour_obj::__CreateEmpty() { return new ScrollDefaultPageSizeBehaviour_obj; }

void *ScrollDefaultPageSizeBehaviour_obj::_hx_vtable = 0;

Dynamic ScrollDefaultPageSizeBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollDefaultPageSizeBehaviour_obj > _hx_result = new ScrollDefaultPageSizeBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollDefaultPageSizeBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ac7d2ed) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0ac7d2ed;
	} else {
		return inClassId==(int)0x25c11f40;
	}
}

void ScrollDefaultPageSizeBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_c4fd2a224168c24d_366_set)
HXLINE( 367)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 368)			return;
            		}
HXLINE( 370)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 372)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->_component) );
HXLINE( 373)		bool _hx_tmp;
HXDLIN( 373)		if (hx::IsNotNull( scroll->_layout )) {
HXLINE( 373)			_hx_tmp = (scroll->_layoutLocked == true);
            		}
            		else {
HXLINE( 373)			_hx_tmp = true;
            		}
HXDLIN( 373)		if (!(_hx_tmp)) {
HXLINE( 373)			scroll->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ScrollDefaultPageSizeBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_c4fd2a224168c24d_377_get)
HXDLIN( 377)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ScrollDefaultPageSizeBehaviour_obj > ScrollDefaultPageSizeBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ScrollDefaultPageSizeBehaviour_obj > __this = new ScrollDefaultPageSizeBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ScrollDefaultPageSizeBehaviour_obj > ScrollDefaultPageSizeBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollDefaultPageSizeBehaviour_obj *__this = (ScrollDefaultPageSizeBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollDefaultPageSizeBehaviour_obj), true, "haxe.ui.components.ScrollDefaultPageSizeBehaviour"));
	*(void **)__this = ScrollDefaultPageSizeBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollDefaultPageSizeBehaviour_obj::ScrollDefaultPageSizeBehaviour_obj()
{
}

hx::Val ScrollDefaultPageSizeBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ScrollDefaultPageSizeBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollDefaultPageSizeBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ScrollDefaultPageSizeBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ScrollDefaultPageSizeBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ScrollDefaultPageSizeBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollDefaultPageSizeBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ScrollDefaultPageSizeBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollDefaultPageSizeBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollDefaultPageSizeBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollDefaultPageSizeBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollDefaultPageSizeBehaviour_obj::__mClass;

void ScrollDefaultPageSizeBehaviour_obj::__register()
{
	hx::Object *dummy = new ScrollDefaultPageSizeBehaviour_obj;
	ScrollDefaultPageSizeBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ScrollDefaultPageSizeBehaviour","\xbf","\xd1","\x14","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollDefaultPageSizeBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollDefaultPageSizeBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollDefaultPageSizeBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollDefaultPageSizeBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollDefaultPageSizeBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollDefaultPageSizeBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
