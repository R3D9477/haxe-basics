// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxDefaultTextBehaviour
#include <haxe/ui/components/OptionBoxDefaultTextBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_aa16f833d7e49e50_277_new,"haxe.ui.components.OptionBoxDefaultTextBehaviour","new",0x3b0d5311,"haxe.ui.components.OptionBoxDefaultTextBehaviour.new","haxe/ui/components/OptionBox.hx",277,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_aa16f833d7e49e50_280_set,"haxe.ui.components.OptionBoxDefaultTextBehaviour","set",0x3b111e53,"haxe.ui.components.OptionBoxDefaultTextBehaviour.set","haxe/ui/components/OptionBox.hx",280,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_aa16f833d7e49e50_301_get,"haxe.ui.components.OptionBoxDefaultTextBehaviour","get",0x3b080347,"haxe.ui.components.OptionBoxDefaultTextBehaviour.get","haxe/ui/components/OptionBox.hx",301,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxDefaultTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_aa16f833d7e49e50_277_new)
HXDLIN( 277)		super::__construct(component);
            	}

Dynamic OptionBoxDefaultTextBehaviour_obj::__CreateEmpty() { return new OptionBoxDefaultTextBehaviour_obj; }

void *OptionBoxDefaultTextBehaviour_obj::_hx_vtable = 0;

Dynamic OptionBoxDefaultTextBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OptionBoxDefaultTextBehaviour_obj > _hx_result = new OptionBoxDefaultTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionBoxDefaultTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x51adf715;
	}
}

void OptionBoxDefaultTextBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_aa16f833d7e49e50_280_set)
HXLINE( 281)		bool _hx_tmp;
HXDLIN( 281)		bool _hx_tmp1;
HXDLIN( 281)		if (hx::IsNotNull( value )) {
HXLINE( 281)			_hx_tmp1 = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value);
            		}
            		else {
HXLINE( 281)			_hx_tmp1 = true;
            		}
HXDLIN( 281)		if (!(_hx_tmp1)) {
HXLINE( 281)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value) == this->_value);
            		}
            		else {
HXLINE( 281)			_hx_tmp = true;
            		}
HXDLIN( 281)		if (_hx_tmp) {
HXLINE( 282)			return;
            		}
HXLINE( 285)		 ::haxe::ui::components::OptionBox optionbox = ( ( ::haxe::ui::components::OptionBox)(this->_component) );
HXLINE( 286)		if (hx::IsNull( optionbox->_label )) {
HXLINE( 287)			optionbox->_label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 288)			optionbox->_label->set_id(HX_("optionbox-label",dd,38,33,51));
HXLINE( 289)			optionbox->_label->addClass(HX_("optionbox-label",dd,38,33,51),null(),null());
HXLINE( 291)			optionbox->_label->registerEvent(HX_("click",48,7c,5e,48),optionbox->_onClick_dyn());
HXLINE( 292)			optionbox->_label->registerEvent(HX_("mouseover",f9,1d,34,0b),optionbox->_onMouseOver_dyn());
HXLINE( 293)			optionbox->_label->registerEvent(HX_("mouseout",89,2f,36,a4),optionbox->_onMouseOut_dyn());
HXLINE( 295)			optionbox->addComponent(optionbox->_label);
            		}
HXLINE( 297)		 ::haxe::ui::components::Label optionbox1 = optionbox->_label;
HXDLIN( 297)		optionbox1->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value));
            	}


 ::haxe::ui::util::VariantType OptionBoxDefaultTextBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_aa16f833d7e49e50_301_get)
HXDLIN( 301)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->_value);
            	}



hx::ObjectPtr< OptionBoxDefaultTextBehaviour_obj > OptionBoxDefaultTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< OptionBoxDefaultTextBehaviour_obj > __this = new OptionBoxDefaultTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< OptionBoxDefaultTextBehaviour_obj > OptionBoxDefaultTextBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	OptionBoxDefaultTextBehaviour_obj *__this = (OptionBoxDefaultTextBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxDefaultTextBehaviour_obj), true, "haxe.ui.components.OptionBoxDefaultTextBehaviour"));
	*(void **)__this = OptionBoxDefaultTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

OptionBoxDefaultTextBehaviour_obj::OptionBoxDefaultTextBehaviour_obj()
{
}

void OptionBoxDefaultTextBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBoxDefaultTextBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionBoxDefaultTextBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::core::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

hx::Val OptionBoxDefaultTextBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val OptionBoxDefaultTextBehaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBoxDefaultTextBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OptionBoxDefaultTextBehaviour_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(OptionBoxDefaultTextBehaviour_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OptionBoxDefaultTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBoxDefaultTextBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void OptionBoxDefaultTextBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBoxDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionBoxDefaultTextBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxDefaultTextBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionBoxDefaultTextBehaviour_obj::__mClass;

void OptionBoxDefaultTextBehaviour_obj::__register()
{
	hx::Object *dummy = new OptionBoxDefaultTextBehaviour_obj;
	OptionBoxDefaultTextBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.OptionBoxDefaultTextBehaviour","\x9f","\x76","\x28","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OptionBoxDefaultTextBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OptionBoxDefaultTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBoxDefaultTextBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionBoxDefaultTextBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxDefaultTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxDefaultTextBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
