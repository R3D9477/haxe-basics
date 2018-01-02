// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxDefaultTextBehaviour
#include <haxe/ui/components/CheckBoxDefaultTextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
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
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4933129f327f2784_159_new,"haxe.ui.components.CheckBoxDefaultTextBehaviour","new",0x3738faaa,"haxe.ui.components.CheckBoxDefaultTextBehaviour.new","haxe/ui/components/CheckBox.hx",159,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_4933129f327f2784_160_set,"haxe.ui.components.CheckBoxDefaultTextBehaviour","set",0x373cc5ec,"haxe.ui.components.CheckBoxDefaultTextBehaviour.set","haxe/ui/components/CheckBox.hx",160,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4933129f327f2784_159_new)
HXDLIN( 159)		super::__construct(component);
            	}

Dynamic CheckBoxDefaultTextBehaviour_obj::__CreateEmpty() { return new CheckBoxDefaultTextBehaviour_obj; }

void *CheckBoxDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic CheckBoxDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBoxDefaultTextBehaviour_obj > _hx_result = new CheckBoxDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CheckBoxDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x4b16ca2e;
	}
}

void CheckBoxDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_4933129f327f2784_160_set)
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (hx::IsNotNull( value )) {
HXLINE( 161)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value);
            		}
            		else {
HXLINE( 161)			_hx_tmp = true;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			return;
            		}
HXLINE( 165)		 ::haxe::ui::components::CheckBox checkbox = ( ( ::haxe::ui::components::CheckBox)(this->_component) );
HXLINE( 166)		 ::haxe::ui::components::Label label = checkbox->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 167)		if (hx::IsNull( label )) {
HXLINE( 168)			label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 169)			label->set_id(HX_("checkbox-label",2a,b1,fb,3d));
HXLINE( 170)			label->addClass(HX_("checkbox-label",2a,b1,fb,3d),null(),null());
HXLINE( 172)			label->registerEvent(HX_("click",48,7c,5e,48),checkbox->_onClick_dyn());
HXLINE( 173)			label->registerEvent(HX_("mouseover",f9,1d,34,0b),checkbox->_onMouseOver_dyn());
HXLINE( 174)			label->registerEvent(HX_("mouseout",89,2f,36,a4),checkbox->_onMouseOut_dyn());
HXLINE( 176)			checkbox->addComponent(label);
            		}
HXLINE( 178)		label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}



hx::ObjectPtr< CheckBoxDefaultTextBehaviour_obj > CheckBoxDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< CheckBoxDefaultTextBehaviour_obj > __this = new CheckBoxDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< CheckBoxDefaultTextBehaviour_obj > CheckBoxDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	CheckBoxDefaultTextBehaviour_obj *__this = (CheckBoxDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxDefaultTextBehaviour_obj), true, "haxe.ui.components.CheckBoxDefaultTextBehaviour"));
	*(void **)__this = CheckBoxDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

CheckBoxDefaultTextBehaviour_obj::CheckBoxDefaultTextBehaviour_obj()
{
}

hx::Val CheckBoxDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CheckBoxDefaultTextBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CheckBoxDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void CheckBoxDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBoxDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CheckBoxDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBoxDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBoxDefaultTextBehaviour_obj::__mClass;

void CheckBoxDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new CheckBoxDefaultTextBehaviour_obj;
	CheckBoxDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.CheckBoxDefaultTextBehaviour","\xb8","\x1d","\xf0","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CheckBoxDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBoxDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CheckBoxDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
