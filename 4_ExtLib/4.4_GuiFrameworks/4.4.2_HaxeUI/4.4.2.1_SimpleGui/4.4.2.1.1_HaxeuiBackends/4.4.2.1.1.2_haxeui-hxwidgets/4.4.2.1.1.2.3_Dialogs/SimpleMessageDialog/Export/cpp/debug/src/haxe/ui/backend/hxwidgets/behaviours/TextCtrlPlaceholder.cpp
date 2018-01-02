// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TextCtrlPlaceholder
#include <haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1764ce2987a580b2_5_new,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","new",0x29af9a70,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.new","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",5,0x60955f9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1764ce2987a580b2_6_set,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","set",0x29b365b2,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.set","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",6,0x60955f9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1764ce2987a580b2_14_get,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","get",0x29aa4aa6,"haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder.get","haxe/ui/backend/hxwidgets/behaviours/TextCtrlPlaceholder.hx",14,0x60955f9f)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TextCtrlPlaceholder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_5_new)
HXDLIN(   5)		super::__construct(component);
            	}

Dynamic TextCtrlPlaceholder_obj::__CreateEmpty() { return new TextCtrlPlaceholder_obj; }

void *TextCtrlPlaceholder_obj::_hx_vtable = 0;

Dynamic TextCtrlPlaceholder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextCtrlPlaceholder_obj > _hx_result = new TextCtrlPlaceholder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlPlaceholder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ef50f38) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x2ef50f38;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void TextCtrlPlaceholder_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_6_set)
HXLINE(   7)		this->super::set(value);
HXLINE(   8)		if (hx::IsNull( this->_component->window )) {
HXLINE(   9)			return;
            		}
            	}


 ::haxe::ui::util::VariantType TextCtrlPlaceholder_obj::get(){
            	HX_STACKFRAME(&_hx_pos_1764ce2987a580b2_14_get)
HXDLIN(  14)		return null();
            	}



hx::ObjectPtr< TextCtrlPlaceholder_obj > TextCtrlPlaceholder_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< TextCtrlPlaceholder_obj > __this = new TextCtrlPlaceholder_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< TextCtrlPlaceholder_obj > TextCtrlPlaceholder_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlPlaceholder_obj *__this = (TextCtrlPlaceholder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlPlaceholder_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder"));
	*(void **)__this = TextCtrlPlaceholder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlPlaceholder_obj::TextCtrlPlaceholder_obj()
{
}

hx::Val TextCtrlPlaceholder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextCtrlPlaceholder_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextCtrlPlaceholder_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlPlaceholder_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void TextCtrlPlaceholder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextCtrlPlaceholder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextCtrlPlaceholder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextCtrlPlaceholder_obj::__mClass,"__mClass");
};

#endif

hx::Class TextCtrlPlaceholder_obj::__mClass;

void TextCtrlPlaceholder_obj::__register()
{
	hx::Object *dummy = new TextCtrlPlaceholder_obj;
	TextCtrlPlaceholder_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder","\x7e","\xe2","\xdd","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextCtrlPlaceholder_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextCtrlPlaceholder_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextCtrlPlaceholder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextCtrlPlaceholder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlPlaceholder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlPlaceholder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
