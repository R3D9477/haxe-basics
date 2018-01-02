// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Switch
#include <haxe/ui/components/Switch.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SwitchLayout
#include <haxe/ui/components/SwitchLayout.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9794de3888c4724_198_new,"haxe.ui.components.SwitchLayout","new",0xb3599c56,"haxe.ui.components.SwitchLayout.new","haxe/ui/components/Switch.hx",198,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_f9794de3888c4724_201_repositionChildren,"haxe.ui.components.SwitchLayout","repositionChildren",0xb0451985,"haxe.ui.components.SwitchLayout.repositionChildren","haxe/ui/components/Switch.hx",201,0x0342e663)
namespace haxe{
namespace ui{
namespace components{

void SwitchLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f9794de3888c4724_198_new)
HXDLIN( 198)		super::__construct();
            	}

Dynamic SwitchLayout_obj::__CreateEmpty() { return new SwitchLayout_obj; }

void *SwitchLayout_obj::_hx_vtable = 0;

Dynamic SwitchLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SwitchLayout_obj > _hx_result = new SwitchLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SwitchLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x3a6b85ae) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3a6b85ae;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void SwitchLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_f9794de3888c4724_201_repositionChildren)
HXLINE( 202)		 ::haxe::ui::components::Switch switchComp = ( ( ::haxe::ui::components::Switch)(this->_component) );
HXLINE( 203)		 ::haxe::ui::components::Button button = switchComp->findComponent(HX_("switch-button",6b,de,6c,db),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 204)		 ::haxe::ui::components::Label label = switchComp->findComponent(HX_("switch-label",9b,83,49,55),null(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 205)		bool _hx_tmp;
HXDLIN( 205)		if (hx::IsNotNull( button )) {
HXLINE( 205)			_hx_tmp = hx::IsNull( label );
            		}
            		else {
HXLINE( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 206)			return;
            		}
HXLINE( 209)		button->set_top(this->get_paddingTop());
HXLINE( 210)		Float _hx_tmp1 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 210)		label->set_top((_hx_tmp1 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXLINE( 212)		if ((switchComp->get_selected() == true)) {
HXLINE( 213)			 ::Dynamic _hx_tmp2 = switchComp->get_componentWidth();
HXDLIN( 213)			Float _hx_tmp3 = (_hx_tmp2 - button->get_componentWidth());
HXDLIN( 213)			button->set_left((_hx_tmp3 - this->get_paddingRight()));
HXLINE( 214)			Float _hx_tmp4 = ((Float)button->get_componentWidth() / (Float)(int)2);
HXDLIN( 214)			label->set_left((_hx_tmp4 - ((Float)label->get_componentWidth() / (Float)(int)2)));
            		}
            		else {
HXLINE( 216)			button->set_left(this->get_paddingLeft());
HXLINE( 217)			 ::Dynamic _hx_tmp5 = button->get_left();
HXDLIN( 217)			Float _hx_tmp6 = (_hx_tmp5 + button->get_componentWidth());
HXDLIN( 217)			Float _hx_tmp7 = (_hx_tmp6 + ((Float)button->get_componentWidth() / (Float)(int)2));
HXDLIN( 217)			label->set_left((_hx_tmp7 - ((Float)label->get_componentWidth() / (Float)(int)2)));
            		}
            	}



hx::ObjectPtr< SwitchLayout_obj > SwitchLayout_obj::__new() {
	hx::ObjectPtr< SwitchLayout_obj > __this = new SwitchLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SwitchLayout_obj > SwitchLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	SwitchLayout_obj *__this = (SwitchLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SwitchLayout_obj), true, "haxe.ui.components.SwitchLayout"));
	*(void **)__this = SwitchLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SwitchLayout_obj::SwitchLayout_obj()
{
}

hx::Val SwitchLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SwitchLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SwitchLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void SwitchLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SwitchLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SwitchLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SwitchLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class SwitchLayout_obj::__mClass;

void SwitchLayout_obj::__register()
{
	hx::Object *dummy = new SwitchLayout_obj;
	SwitchLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.SwitchLayout","\x64","\x79","\xdb","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SwitchLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SwitchLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SwitchLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SwitchLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
