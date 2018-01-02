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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TextCtrlPassword
#include <haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.h>
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
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
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
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#include <wx/widgets/styles/TextCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_50d10a76d2739927_9_new,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","new",0x4ce1a822,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.new","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",9,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_10_set,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","set",0x4ce57364,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.set","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",10,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_43_get,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","get",0x4cdc5858,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.get","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",43,0x17c5cb8f)
HX_LOCAL_STACK_FRAME(_hx_pos_50d10a76d2739927_51_copyMap,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","copyMap",0x350266a9,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword.copyMap","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPassword.hx",51,0x17c5cb8f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TextCtrlPassword_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_50d10a76d2739927_9_new)
HXDLIN(   9)		super::__construct(component);
            	}

Dynamic TextCtrlPassword_obj::__CreateEmpty() { return new TextCtrlPassword_obj; }

void *TextCtrlPassword_obj::_hx_vtable = 0;

Dynamic TextCtrlPassword_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextCtrlPassword_obj > _hx_result = new TextCtrlPassword_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlPassword_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x6b95aa36;
	}
}

void TextCtrlPassword_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_50d10a76d2739927_10_set)
HXLINE(  11)		this->super::set(value);
HXLINE(  12)		if (hx::IsNull( this->_component->window )) {
HXLINE(  13)			return;
            		}
HXLINE(  16)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  17)			return;
            		}
HXLINE(  20)		int style = (int)0;
HXLINE(  21)		if ((::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value) == true)) {
HXLINE(  22)			style = ((int)style | (int)::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD);
            		}
HXLINE(  25)		 ::haxe::ds::StringMap eventMap = this->copyMap(this->_component->_eventMap);
HXLINE(  26)		{
HXLINE(  26)			 ::Dynamic k = eventMap->keys();
HXDLIN(  26)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  26)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  27)				 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  27)				_hx_tmp->unmapEvent(k1,eventMap->get(k1));
            			}
            		}
HXLINE(  30)		 ::hx::widgets::TextCtrl oldControl = hx::TCast<  ::hx::widgets::TextCtrl >::cast(this->_component->window);
HXLINE(  31)		 ::hx::widgets::Window newControl = oldControl->get_parent();
HXDLIN(  31)		 ::hx::widgets::TextCtrl newControl1 =  ::hx::widgets::TextCtrl_obj::__alloc( HX_CTX ,newControl,oldControl->get_value(),style,null());
HXLINE(  32)		int _hx_tmp1 = oldControl->get_position()->x;
HXDLIN(  32)		newControl1->move(_hx_tmp1,oldControl->get_position()->y);
HXLINE(  33)		newControl1->set_size(oldControl->get_size());
HXLINE(  34)		oldControl->destroy();
HXLINE(  35)		this->_component->window = newControl1;
HXLINE(  36)		this->_component->invalidate(HX_("style",31,a5,1d,84));
HXLINE(  38)		{
HXLINE(  38)			 ::Dynamic k2 = eventMap->keys();
HXDLIN(  38)			while(( (bool)(k2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  38)				::String k3 = ( (::String)(k2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  39)				 ::haxe::ui::core::Component _hx_tmp2 = this->_component;
HXDLIN(  39)				_hx_tmp2->mapEvent(k3,eventMap->get(k3));
            			}
            		}
            	}


 ::haxe::ui::util::VariantType TextCtrlPassword_obj::get(){
            	HX_STACKFRAME(&_hx_pos_50d10a76d2739927_43_get)
HXLINE(  44)		if (hx::IsNull( this->_component->window )) {
HXLINE(  45)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            		}
HXLINE(  48)		int _hx_tmp = this->_component->window->get_windowStyle();
HXDLIN(  48)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool((((int)_hx_tmp & (int)::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD) == ::wx::widgets::styles::TextCtrlStyle_obj::PASSWORD));
            	}


 ::haxe::ds::StringMap TextCtrlPassword_obj::copyMap( ::haxe::ds::StringMap map){
            	HX_GC_STACKFRAME(&_hx_pos_50d10a76d2739927_51_copyMap)
HXLINE(  52)		 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  54)		{
HXLINE(  54)			 ::Dynamic k = map->keys();
HXDLIN(  54)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  54)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  55)				newMap->set(k1,map->get(k1));
            			}
            		}
HXLINE(  58)		return newMap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextCtrlPassword_obj,copyMap,return )


hx::ObjectPtr< TextCtrlPassword_obj > TextCtrlPassword_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextCtrlPassword_obj > __this = new TextCtrlPassword_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextCtrlPassword_obj > TextCtrlPassword_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlPassword_obj *__this = (TextCtrlPassword_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlPassword_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword"));
	*(void **)__this = TextCtrlPassword_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlPassword_obj::TextCtrlPassword_obj()
{
}

hx::Val TextCtrlPassword_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"copyMap") ) { return hx::Val( copyMap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextCtrlPassword_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextCtrlPassword_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlPassword_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("copyMap","\xe7","\x85","\x80","\x43"),
	::String(null()) };

static void TextCtrlPassword_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextCtrlPassword_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextCtrlPassword_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextCtrlPassword_obj::__mClass,"__mClass");
};

#endif

hx::Class TextCtrlPassword_obj::__mClass;

void TextCtrlPassword_obj::__register()
{
	hx::Object *dummy = new TextCtrlPassword_obj;
	TextCtrlPassword_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword","\x30","\xaf","\x66","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextCtrlPassword_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextCtrlPassword_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextCtrlPassword_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextCtrlPassword_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlPassword_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlPassword_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
