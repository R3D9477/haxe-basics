// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HProgressLayout
#include <haxe/ui/components/HProgressLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_198de3447be163db_40_new,"haxe.ui.components.HProgressLayout","new",0xb27a044b,"haxe.ui.components.HProgressLayout.new","haxe/ui/components/HProgress.hx",40,0x3dcaee30)
HX_LOCAL_STACK_FRAME(_hx_pos_198de3447be163db_43_resizeChildren,"haxe.ui.components.HProgressLayout","resizeChildren",0x125a9148,"haxe.ui.components.HProgressLayout.resizeChildren","haxe/ui/components/HProgress.hx",43,0x3dcaee30)
HX_LOCAL_STACK_FRAME(_hx_pos_198de3447be163db_74_repositionChildren,"haxe.ui.components.HProgressLayout","repositionChildren",0xb6c7ed30,"haxe.ui.components.HProgressLayout.repositionChildren","haxe/ui/components/HProgress.hx",74,0x3dcaee30)
namespace haxe{
namespace ui{
namespace components{

void HProgressLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_198de3447be163db_40_new)
HXDLIN(  40)		super::__construct();
            	}

Dynamic HProgressLayout_obj::__CreateEmpty() { return new HProgressLayout_obj; }

void *HProgressLayout_obj::_hx_vtable = 0;

Dynamic HProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HProgressLayout_obj > _hx_result = new HProgressLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HProgressLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x399ecb07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x399ecb07;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void HProgressLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_198de3447be163db_43_resizeChildren)
HXLINE(  44)		this->super::resizeChildren();
HXLINE(  46)		 ::haxe::ui::core::Component value = this->get_component()->findComponent(HX_("progress-value",91,33,07,01),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  47)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->get_component()) );
HXLINE(  48)		if (hx::IsNotNull( value )) {
HXLINE(  49)			Float ucx = this->get_usableWidth();
HXLINE(  51)			Float cx = (int)0;
HXLINE(  52)			if ((progress->get_indeterminate() == false)) {
HXLINE(  53)				Float cx1 = progress->get_pos();
HXDLIN(  53)				Float cx2 = (cx1 - progress->get_min());
HXDLIN(  53)				Float cx3 = progress->get_max();
HXDLIN(  53)				cx = (((Float)cx2 / (Float)(cx3 - progress->get_min())) * ucx);
            			}
            			else {
HXLINE(  55)				Float cx4 = progress->get_rangeEnd();
HXDLIN(  55)				Float cx5 = (cx4 - progress->get_rangeStart());
HXDLIN(  55)				Float cx6 = (cx5 - progress->get_min());
HXDLIN(  55)				Float cx7 = progress->get_max();
HXDLIN(  55)				cx = (((Float)cx6 / (Float)(cx7 - progress->get_min())) * ucx);
            			}
HXLINE(  58)			if ((cx < (int)0)) {
HXLINE(  59)				cx = (int)0;
            			}
            			else {
HXLINE(  60)				if ((cx > ucx)) {
HXLINE(  61)					cx = ucx;
            				}
            			}
HXLINE(  64)			if ((cx == (int)0)) {
HXLINE(  65)				value->set_componentWidth((int)0);
HXLINE(  66)				value->set_hidden(true);
            			}
            			else {
HXLINE(  68)				value->set_componentWidth(cx);
HXLINE(  69)				value->set_hidden(false);
            			}
            		}
            	}


void HProgressLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_198de3447be163db_74_repositionChildren)
HXLINE(  75)		this->super::repositionChildren();
HXLINE(  77)		 ::haxe::ui::core::Component value = this->get_component()->findComponent(HX_("progress-value",91,33,07,01),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  78)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->get_component()) );
HXLINE(  79)		if (hx::IsNotNull( value )) {
HXLINE(  80)			if ((progress->get_indeterminate() == true)) {
HXLINE(  81)				Float ucx = this->get_usableWidth();
HXLINE(  82)				Float _hx_tmp = this->get_paddingLeft();
HXDLIN(  82)				Float _hx_tmp1 = progress->get_rangeStart();
HXDLIN(  82)				Float _hx_tmp2 = (_hx_tmp1 - progress->get_min());
HXDLIN(  82)				Float _hx_tmp3 = progress->get_max();
HXDLIN(  82)				value->set_left((_hx_tmp + (((Float)_hx_tmp2 / (Float)(_hx_tmp3 - progress->get_min())) * ucx)));
            			}
            		}
            	}



hx::ObjectPtr< HProgressLayout_obj > HProgressLayout_obj::__new() {
	hx::ObjectPtr< HProgressLayout_obj > __this = new HProgressLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HProgressLayout_obj > HProgressLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HProgressLayout_obj *__this = (HProgressLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HProgressLayout_obj), true, "haxe.ui.components.HProgressLayout"));
	*(void **)__this = HProgressLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HProgressLayout_obj::HProgressLayout_obj()
{
}

hx::Val HProgressLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HProgressLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HProgressLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HProgressLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void HProgressLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HProgressLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HProgressLayout_obj::__mClass;

void HProgressLayout_obj::__register()
{
	hx::Object *dummy = new HProgressLayout_obj;
	HProgressLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HProgressLayout","\xd9","\x82","\xe1","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HProgressLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HProgressLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HProgressLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HProgressLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HProgressLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HProgressLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
