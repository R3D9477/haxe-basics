// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultMaxBehaviour
#include <haxe/ui/components/ScrollDefaultMaxBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_46d12e7d63c6beb9_323_new,"haxe.ui.components.ScrollDefaultMaxBehaviour","new",0x88f00459,"haxe.ui.components.ScrollDefaultMaxBehaviour.new","haxe/ui/components/Scroll.hx",323,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_46d12e7d63c6beb9_326_set,"haxe.ui.components.ScrollDefaultMaxBehaviour","set",0x88f3cf9b,"haxe.ui.components.ScrollDefaultMaxBehaviour.set","haxe/ui/components/Scroll.hx",326,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_46d12e7d63c6beb9_337_get,"haxe.ui.components.ScrollDefaultMaxBehaviour","get",0x88eab48f,"haxe.ui.components.ScrollDefaultMaxBehaviour.get","haxe/ui/components/Scroll.hx",337,0x330a6dea)
namespace haxe{
namespace ui{
namespace components{

void ScrollDefaultMaxBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_46d12e7d63c6beb9_323_new)
HXLINE( 324)		this->_value = ((Float)0);
HXLINE( 323)		super::__construct(component);
            	}

Dynamic ScrollDefaultMaxBehaviour_obj::__CreateEmpty() { return new ScrollDefaultMaxBehaviour_obj; }

void *ScrollDefaultMaxBehaviour_obj::_hx_vtable = 0;

Dynamic ScrollDefaultMaxBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollDefaultMaxBehaviour_obj > _hx_result = new ScrollDefaultMaxBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollDefaultMaxBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x6c69715d;
	}
}

void ScrollDefaultMaxBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_46d12e7d63c6beb9_326_set)
HXLINE( 327)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 328)			return;
            		}
HXLINE( 330)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value);
HXLINE( 332)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->_component) );
HXLINE( 333)		bool _hx_tmp;
HXDLIN( 333)		if (hx::IsNotNull( scroll->_layout )) {
HXLINE( 333)			_hx_tmp = (scroll->_layoutLocked == true);
            		}
            		else {
HXLINE( 333)			_hx_tmp = true;
            		}
HXDLIN( 333)		if (!(_hx_tmp)) {
HXLINE( 333)			scroll->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ScrollDefaultMaxBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_46d12e7d63c6beb9_337_get)
HXDLIN( 337)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ScrollDefaultMaxBehaviour_obj > ScrollDefaultMaxBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ScrollDefaultMaxBehaviour_obj > __this = new ScrollDefaultMaxBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ScrollDefaultMaxBehaviour_obj > ScrollDefaultMaxBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollDefaultMaxBehaviour_obj *__this = (ScrollDefaultMaxBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollDefaultMaxBehaviour_obj), true, "haxe.ui.components.ScrollDefaultMaxBehaviour"));
	*(void **)__this = ScrollDefaultMaxBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollDefaultMaxBehaviour_obj::ScrollDefaultMaxBehaviour_obj()
{
}

hx::Val ScrollDefaultMaxBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ScrollDefaultMaxBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollDefaultMaxBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ScrollDefaultMaxBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ScrollDefaultMaxBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ScrollDefaultMaxBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollDefaultMaxBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ScrollDefaultMaxBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollDefaultMaxBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollDefaultMaxBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollDefaultMaxBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollDefaultMaxBehaviour_obj::__mClass;

void ScrollDefaultMaxBehaviour_obj::__register()
{
	hx::Object *dummy = new ScrollDefaultMaxBehaviour_obj;
	ScrollDefaultMaxBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ScrollDefaultMaxBehaviour","\xe7","\xe3","\xf6","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollDefaultMaxBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollDefaultMaxBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollDefaultMaxBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollDefaultMaxBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollDefaultMaxBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollDefaultMaxBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
