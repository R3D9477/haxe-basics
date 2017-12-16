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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScrollLayout
#include <haxe/ui/components/VScrollLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7348c4531fe6ee96_79_new,"haxe.ui.components.VScrollLayout","new",0x65908c39,"haxe.ui.components.VScrollLayout.new","haxe/ui/components/VScroll.hx",79,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_7348c4531fe6ee96_82_resizeChildren,"haxe.ui.components.VScrollLayout","resizeChildren",0xbdcb541a,"haxe.ui.components.VScrollLayout.resizeChildren","haxe/ui/components/VScroll.hx",82,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_7348c4531fe6ee96_102_repositionChildren,"haxe.ui.components.VScrollLayout","repositionChildren",0x80e78102,"haxe.ui.components.VScrollLayout.repositionChildren","haxe/ui/components/VScroll.hx",102,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_7348c4531fe6ee96_127_get_usableHeight,"haxe.ui.components.VScrollLayout","get_usableHeight",0xf7de5e0f,"haxe.ui.components.VScrollLayout.get_usableHeight","haxe/ui/components/VScroll.hx",127,0x068b8a42)
namespace haxe{
namespace ui{
namespace components{

void VScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7348c4531fe6ee96_79_new)
HXDLIN(  79)		super::__construct();
            	}

Dynamic VScrollLayout_obj::__CreateEmpty() { return new VScrollLayout_obj; }

void *VScrollLayout_obj::_hx_vtable = 0;

Dynamic VScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VScrollLayout_obj > _hx_result = new VScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x32673c75) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32673c75;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_7348c4531fe6ee96_82_resizeChildren)
HXLINE(  83)		this->super::resizeChildren();
HXLINE(  85)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->get_component()) );
HXLINE(  86)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  87)		if (hx::IsNotNull( thumb )) {
HXLINE(  88)			Float m = scroll->get_max();
HXDLIN(  88)			Float m1 = (m - scroll->get_min());
HXLINE(  89)			Float ucy = this->get_usableHeight();
HXLINE(  90)			Float thumbHeight = (((Float)scroll->get_pageSize() / (Float)m1) * ucy);
HXLINE(  91)			if ((thumbHeight < this->get_innerWidth())) {
HXLINE(  92)				thumbHeight = this->get_innerWidth();
            			}
            			else {
HXLINE(  93)				if ((thumbHeight > ucy)) {
HXLINE(  94)					thumbHeight = ucy;
            				}
            			}
HXLINE(  96)			bool _hx_tmp;
HXDLIN(  96)			if ((thumbHeight > (int)0)) {
HXLINE(  96)				_hx_tmp = (::Math_obj::isNaN(thumbHeight) == false);
            			}
            			else {
HXLINE(  96)				_hx_tmp = false;
            			}
HXDLIN(  96)			if (_hx_tmp) {
HXLINE(  97)				thumb->set_componentHeight(thumbHeight);
            			}
            		}
            	}


void VScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_7348c4531fe6ee96_102_repositionChildren)
HXLINE( 103)		this->super::repositionChildren();
HXLINE( 105)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 106)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (hx::IsNotNull( inc )) {
HXLINE( 107)			_hx_tmp = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 108)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentHeight();
HXDLIN( 108)			Float _hx_tmp2 = (_hx_tmp1 - inc->get_componentHeight());
HXDLIN( 108)			inc->set_top((_hx_tmp2 - this->get_paddingBottom()));
            		}
HXLINE( 111)		 ::haxe::ui::components::Scroll scroll = ( ( ::haxe::ui::components::Scroll)(this->get_component()) );
HXLINE( 112)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 113)		if (hx::IsNotNull( thumb )) {
HXLINE( 114)			Float m = scroll->get_max();
HXDLIN( 114)			Float m1 = (m - scroll->get_min());
HXLINE( 115)			Float u = this->get_usableHeight();
HXLINE( 116)			u = (u - thumb->get_componentHeight());
HXLINE( 117)			Float y = scroll->get_pos();
HXDLIN( 117)			Float y1 = (((Float)(y - scroll->get_min()) / (Float)m1) * u);
HXLINE( 118)			y1 = (y1 + this->get_paddingTop());
HXLINE( 119)			bool _hx_tmp3;
HXDLIN( 119)			if (hx::IsNotNull( deinc )) {
HXLINE( 119)				_hx_tmp3 = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 119)				_hx_tmp3 = false;
            			}
HXDLIN( 119)			if (_hx_tmp3) {
HXLINE( 120)				 ::Dynamic y2 = deinc->get_componentHeight();
HXDLIN( 120)				y1 = (y1 + (y2 + this->get_verticalSpacing()));
            			}
HXLINE( 122)			thumb->set_top(y1);
            		}
            	}


Float VScrollLayout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_7348c4531fe6ee96_127_get_usableHeight)
HXLINE( 128)		Float ucy = this->get_innerHeight();
HXLINE( 129)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 130)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (hx::IsNotNull( deinc )) {
HXLINE( 131)			_hx_tmp = (this->hidden(deinc) == false);
            		}
            		else {
HXLINE( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			 ::Dynamic ucy1 = deinc->get_componentHeight();
HXDLIN( 132)			ucy = (ucy - (ucy1 + this->get_verticalSpacing()));
            		}
HXLINE( 134)		bool _hx_tmp1;
HXDLIN( 134)		if (hx::IsNotNull( inc )) {
HXLINE( 134)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 134)			_hx_tmp1 = false;
            		}
HXDLIN( 134)		if (_hx_tmp1) {
HXLINE( 135)			 ::Dynamic ucy2 = inc->get_componentHeight();
HXDLIN( 135)			ucy = (ucy - (ucy2 + this->get_verticalSpacing()));
            		}
HXLINE( 137)		return ucy;
            	}



hx::ObjectPtr< VScrollLayout_obj > VScrollLayout_obj::__new() {
	hx::ObjectPtr< VScrollLayout_obj > __this = new VScrollLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VScrollLayout_obj > VScrollLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VScrollLayout_obj *__this = (VScrollLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VScrollLayout_obj), true, "haxe.ui.components.VScrollLayout"));
	*(void **)__this = VScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VScrollLayout_obj::VScrollLayout_obj()
{
}

hx::Val VScrollLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return hx::Val( get_usableHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VScrollLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VScrollLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	::String(null()) };

static void VScrollLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VScrollLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VScrollLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VScrollLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VScrollLayout_obj::__mClass;

void VScrollLayout_obj::__register()
{
	hx::Object *dummy = new VScrollLayout_obj;
	VScrollLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VScrollLayout","\xc7","\xfb","\xfd","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VScrollLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VScrollLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VScrollLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
