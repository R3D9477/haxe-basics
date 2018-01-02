// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HScrollLayout
#include <haxe/ui/components/HScrollLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5df611a2357cde8b_76_new,"haxe.ui.components.HScrollLayout","new",0x3c3b102b,"haxe.ui.components.HScrollLayout.new","haxe/ui/components/HScroll.hx",76,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_5df611a2357cde8b_79_resizeChildren,"haxe.ui.components.HScrollLayout","resizeChildren",0x8f6f5168,"haxe.ui.components.HScrollLayout.resizeChildren","haxe/ui/components/HScroll.hx",79,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_5df611a2357cde8b_99_repositionChildren,"haxe.ui.components.HScrollLayout","repositionChildren",0xaa0f3d50,"haxe.ui.components.HScrollLayout.repositionChildren","haxe/ui/components/HScroll.hx",99,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_5df611a2357cde8b_124_get_usableWidth,"haxe.ui.components.HScrollLayout","get_usableWidth",0xce5c03d0,"haxe.ui.components.HScrollLayout.get_usableWidth","haxe/ui/components/HScroll.hx",124,0x8278fc10)
namespace haxe{
namespace ui{
namespace components{

void HScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5df611a2357cde8b_76_new)
HXDLIN(  76)		super::__construct();
            	}

Dynamic HScrollLayout_obj::__CreateEmpty() { return new HScrollLayout_obj; }

void *HScrollLayout_obj::_hx_vtable = 0;

Dynamic HScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HScrollLayout_obj > _hx_result = new HScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x25e9194b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25e9194b;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void HScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_5df611a2357cde8b_79_resizeChildren)
HXLINE(  80)		this->super::resizeChildren();
HXLINE(  82)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->get_component()) );
HXLINE(  83)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  84)		if (hx::IsNotNull( thumb )) {
HXLINE(  85)			Float m = scroll->get_max();
HXDLIN(  85)			Float m1 = (m - scroll->get_min());
HXLINE(  86)			Float ucx = this->get_usableWidth();
HXLINE(  87)			Float thumbWidth = (((Float)scroll->get_pageSize() / (Float)m1) * ucx);
HXLINE(  88)			if ((thumbWidth < this->get_innerHeight())) {
HXLINE(  89)				thumbWidth = this->get_innerHeight();
            			}
            			else {
HXLINE(  90)				if ((thumbWidth > ucx)) {
HXLINE(  91)					thumbWidth = ucx;
            				}
            			}
HXLINE(  93)			bool _hx_tmp;
HXDLIN(  93)			if ((thumbWidth > (int)0)) {
HXLINE(  93)				_hx_tmp = (::Math_obj::isNaN(thumbWidth) == false);
            			}
            			else {
HXLINE(  93)				_hx_tmp = false;
            			}
HXDLIN(  93)			if (_hx_tmp) {
HXLINE(  94)				thumb->set_componentWidth(thumbWidth);
            			}
            		}
            	}


void HScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_5df611a2357cde8b_99_repositionChildren)
HXLINE( 100)		this->super::repositionChildren();
HXLINE( 102)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 103)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (hx::IsNotNull( inc )) {
HXLINE( 104)			_hx_tmp = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 105)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentWidth();
HXDLIN( 105)			Float _hx_tmp2 = (_hx_tmp1 - inc->get_componentWidth());
HXDLIN( 105)			inc->set_left((_hx_tmp2 - this->get_paddingRight()));
            		}
HXLINE( 108)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->get_component()) );
HXLINE( 109)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 110)		if (hx::IsNotNull( thumb )) {
HXLINE( 111)			Float m = scroll->get_max();
HXDLIN( 111)			Float m1 = (m - scroll->get_min());
HXLINE( 112)			Float u = this->get_usableWidth();
HXLINE( 113)			u = (u - thumb->get_componentWidth());
HXLINE( 114)			Float x = scroll->get_pos();
HXDLIN( 114)			Float x1 = (((Float)(x - scroll->get_min()) / (Float)m1) * u);
HXLINE( 115)			x1 = (x1 + this->get_paddingLeft());
HXLINE( 116)			bool _hx_tmp3;
HXDLIN( 116)			if (hx::IsNotNull( deinc )) {
HXLINE( 116)				_hx_tmp3 = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 116)				_hx_tmp3 = false;
            			}
HXDLIN( 116)			if (_hx_tmp3) {
HXLINE( 117)				 ::Dynamic x2 = deinc->get_componentWidth();
HXDLIN( 117)				x1 = (x1 + (x2 + this->get_horizontalSpacing()));
            			}
HXLINE( 119)			thumb->set_left(x1);
            		}
            	}


Float HScrollLayout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_5df611a2357cde8b_124_get_usableWidth)
HXLINE( 125)		Float ucx = this->get_innerWidth();
HXLINE( 126)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 127)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (hx::IsNotNull( deinc )) {
HXLINE( 128)			_hx_tmp = (this->hidden(deinc) == false);
            		}
            		else {
HXLINE( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 129)			 ::Dynamic ucx1 = deinc->get_componentWidth();
HXDLIN( 129)			ucx = (ucx - (ucx1 + this->get_horizontalSpacing()));
            		}
HXLINE( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (hx::IsNotNull( inc )) {
HXLINE( 131)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = false;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXLINE( 132)			 ::Dynamic ucx2 = inc->get_componentWidth();
HXDLIN( 132)			ucx = (ucx - (ucx2 + this->get_horizontalSpacing()));
            		}
HXLINE( 134)		return ucx;
            	}



hx::ObjectPtr< HScrollLayout_obj > HScrollLayout_obj::__new() {
	hx::ObjectPtr< HScrollLayout_obj > __this = new HScrollLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HScrollLayout_obj > HScrollLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HScrollLayout_obj *__this = (HScrollLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HScrollLayout_obj), true, "haxe.ui.components.HScrollLayout"));
	*(void **)__this = HScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HScrollLayout_obj::HScrollLayout_obj()
{
}

hx::Val HScrollLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return hx::Val( get_usableWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HScrollLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HScrollLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	::String(null()) };

static void HScrollLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HScrollLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HScrollLayout_obj::__mClass;

void HScrollLayout_obj::__register()
{
	hx::Object *dummy = new HScrollLayout_obj;
	HScrollLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HScrollLayout","\xb9","\x1e","\x77","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HScrollLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HScrollLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HScrollLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScrollLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
