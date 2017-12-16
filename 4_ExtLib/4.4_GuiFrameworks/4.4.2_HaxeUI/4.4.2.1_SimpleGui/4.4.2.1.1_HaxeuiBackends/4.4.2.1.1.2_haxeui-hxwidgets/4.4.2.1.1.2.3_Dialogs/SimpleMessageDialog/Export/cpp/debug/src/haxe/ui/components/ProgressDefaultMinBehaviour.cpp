// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultMinBehaviour
#include <haxe/ui/components/ProgressDefaultMinBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_808d1190d478fa35_256_new,"haxe.ui.components.ProgressDefaultMinBehaviour","new",0xa37e2f8b,"haxe.ui.components.ProgressDefaultMinBehaviour.new","haxe/ui/components/Progress.hx",256,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_808d1190d478fa35_259_set,"haxe.ui.components.ProgressDefaultMinBehaviour","set",0xa381facd,"haxe.ui.components.ProgressDefaultMinBehaviour.set","haxe/ui/components/Progress.hx",259,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_808d1190d478fa35_269_get,"haxe.ui.components.ProgressDefaultMinBehaviour","get",0xa378dfc1,"haxe.ui.components.ProgressDefaultMinBehaviour.get","haxe/ui/components/Progress.hx",269,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void ProgressDefaultMinBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_808d1190d478fa35_256_new)
HXLINE( 257)		this->_value = ((Float)0);
HXLINE( 256)		super::__construct(component);
            	}

Dynamic ProgressDefaultMinBehaviour_obj::__CreateEmpty() { return new ProgressDefaultMinBehaviour_obj; }

void *ProgressDefaultMinBehaviour_obj::_hx_vtable = 0;

Dynamic ProgressDefaultMinBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressDefaultMinBehaviour_obj > _hx_result = new ProgressDefaultMinBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ProgressDefaultMinBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x57d3a42b;
	}
}

void ProgressDefaultMinBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_808d1190d478fa35_259_set)
HXLINE( 260)		if (hx::IsEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value),value )) {
HXLINE( 261)			return;
            		}
HXLINE( 264)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->_component) );
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		if (hx::IsNotNull( progress->_layout )) {
HXLINE( 265)			_hx_tmp = (progress->_layoutLocked == true);
            		}
            		else {
HXLINE( 265)			_hx_tmp = true;
            		}
HXDLIN( 265)		if (!(_hx_tmp)) {
HXLINE( 265)			progress->invalidate(HX_("layout",aa,ae,b8,58));
            		}
            	}


 ::haxe::ui::util::VariantType ProgressDefaultMinBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_808d1190d478fa35_269_get)
HXDLIN( 269)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_value);
            	}



hx::ObjectPtr< ProgressDefaultMinBehaviour_obj > ProgressDefaultMinBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ProgressDefaultMinBehaviour_obj > __this = new ProgressDefaultMinBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ProgressDefaultMinBehaviour_obj > ProgressDefaultMinBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ProgressDefaultMinBehaviour_obj *__this = (ProgressDefaultMinBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressDefaultMinBehaviour_obj), true, "haxe.ui.components.ProgressDefaultMinBehaviour"));
	*(void **)__this = ProgressDefaultMinBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ProgressDefaultMinBehaviour_obj::ProgressDefaultMinBehaviour_obj()
{
}

hx::Val ProgressDefaultMinBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ProgressDefaultMinBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressDefaultMinBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressDefaultMinBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressDefaultMinBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ProgressDefaultMinBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgressDefaultMinBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ProgressDefaultMinBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressDefaultMinBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressDefaultMinBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressDefaultMinBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ProgressDefaultMinBehaviour_obj::__mClass;

void ProgressDefaultMinBehaviour_obj::__register()
{
	hx::Object *dummy = new ProgressDefaultMinBehaviour_obj;
	ProgressDefaultMinBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ProgressDefaultMinBehaviour","\x19","\x0e","\x1f","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressDefaultMinBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressDefaultMinBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressDefaultMinBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressDefaultMinBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressDefaultMinBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressDefaultMinBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
