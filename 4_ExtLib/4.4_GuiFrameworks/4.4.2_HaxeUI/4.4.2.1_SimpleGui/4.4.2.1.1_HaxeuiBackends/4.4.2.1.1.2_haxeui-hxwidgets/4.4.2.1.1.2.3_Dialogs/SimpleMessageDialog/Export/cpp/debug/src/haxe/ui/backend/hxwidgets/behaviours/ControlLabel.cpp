// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlLabel
#include <haxe/ui/backend/hxwidgets/behaviours/ControlLabel.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TextCtrl
#include <hx/widgets/TextCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eaf2ed8d718df123_12_new,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","new",0x100495c6,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.new","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",12,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_13_set,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","set",0x10086108,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.set","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",13,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_31_get,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","get",0x0fff45fc,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.get","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",31,0x0dcc09eb)
HX_LOCAL_STACK_FRAME(_hx_pos_eaf2ed8d718df123_45_normalizeText,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel","normalizeText",0x0e333bc0,"haxe.ui.backend.hxwidgets.behaviours.ControlLabel.normalizeText","haxe/ui/backend/hxwidgets/behaviours/ControlLabel.hx",45,0x0dcc09eb)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlLabel_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_12_new)
HXDLIN(  12)		super::__construct(component);
            	}

Dynamic ControlLabel_obj::__CreateEmpty() { return new ControlLabel_obj; }

void *ControlLabel_obj::_hx_vtable = 0;

Dynamic ControlLabel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlLabel_obj > _hx_result = new ControlLabel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x437b8412;
	}
}

void ControlLabel_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_13_set)
HXLINE(  14)		this->super::set(value);
HXLINE(  15)		if (hx::IsNull( this->_component->window )) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		 ::hx::widgets::Control ctrl = ( ( ::hx::widgets::Control)(this->_component->window) );
HXLINE(  20)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value) == false)) {
HXLINE(  21)			if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::TextCtrl >())) {
HXLINE(  22)				 ::hx::widgets::TextCtrl textctrl = ( ( ::hx::widgets::TextCtrl)(this->_component->window) );
HXLINE(  23)				textctrl->set_value(this->normalizeText(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
            			}
            			else {
HXLINE(  25)				ctrl->set_label(this->normalizeText(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
            			}
HXLINE(  27)			{
HXLINE(  27)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  27)				bool _hx_tmp;
HXDLIN(  27)				if (hx::IsNotNull( _this->_layout )) {
HXLINE(  27)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(  27)					_hx_tmp = true;
            				}
HXDLIN(  27)				if (!(_hx_tmp)) {
HXLINE(  27)					_this->invalidate(HX_("layout",aa,ae,b8,58));
            				}
            			}
            		}
            	}


 ::haxe::ui::util::VariantType ControlLabel_obj::get(){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_31_get)
HXLINE(  32)		if (hx::IsNull( this->_component->window )) {
HXLINE(  33)			return null();
            		}
HXLINE(  36)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::TextCtrl >())) {
HXLINE(  37)			 ::hx::widgets::TextCtrl textctrl = ( ( ::hx::widgets::TextCtrl)(this->_component->window) );
HXLINE(  38)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(textctrl->get_value());
            		}
HXLINE(  41)		 ::hx::widgets::Control ctrl = ( ( ::hx::widgets::Control)(this->_component->window) );
HXLINE(  42)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(ctrl->get_label());
            	}


::String ControlLabel_obj::normalizeText(::String s){
            	HX_STACKFRAME(&_hx_pos_eaf2ed8d718df123_45_normalizeText)
HXLINE(  46)		s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXLINE(  47)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlLabel_obj,normalizeText,return )


hx::ObjectPtr< ControlLabel_obj > ControlLabel_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlLabel_obj > __this = new ControlLabel_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlLabel_obj > ControlLabel_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlLabel_obj *__this = (ControlLabel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlLabel_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlLabel"));
	*(void **)__this = ControlLabel_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlLabel_obj::ControlLabel_obj()
{
}

hx::Val ControlLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalizeText") ) { return hx::Val( normalizeText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlLabel_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlLabel_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("normalizeText","\xda","\x7a","\x5b","\x01"),
	::String(null()) };

static void ControlLabel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlLabel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlLabel_obj::__mClass;

void ControlLabel_obj::__register()
{
	hx::Object *dummy = new ControlLabel_obj;
	ControlLabel_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlLabel","\xd4","\xfa","\x50","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlLabel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlLabel_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlLabel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlLabel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlLabel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
