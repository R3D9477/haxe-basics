// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VSliderLayout
#include <haxe/ui/components/VSliderLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f70d8c2f1f821a2e_159_new,"haxe.ui.components.VSliderLayout","new",0x04065b4d,"haxe.ui.components.VSliderLayout.new","haxe/ui/components/VSlider.hx",159,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_f70d8c2f1f821a2e_162_resizeChildren,"haxe.ui.components.VSliderLayout","resizeChildren",0xe60e7586,"haxe.ui.components.VSliderLayout.resizeChildren","haxe/ui/components/VSlider.hx",162,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_f70d8c2f1f821a2e_203_repositionChildren,"haxe.ui.components.VSliderLayout","repositionChildren",0xef15c86e,"haxe.ui.components.VSliderLayout.repositionChildren","haxe/ui/components/VSlider.hx",203,0x294ca0ae)
namespace haxe{
namespace ui{
namespace components{

void VSliderLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f70d8c2f1f821a2e_159_new)
HXDLIN( 159)		super::__construct();
            	}

Dynamic VSliderLayout_obj::__CreateEmpty() { return new VSliderLayout_obj; }

void *VSliderLayout_obj::_hx_vtable = 0;

Dynamic VSliderLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VSliderLayout_obj > _hx_result = new VSliderLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VSliderLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x1463ab6d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1463ab6d;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VSliderLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_f70d8c2f1f821a2e_162_resizeChildren)
HXLINE( 163)		this->super::resizeChildren();
HXLINE( 165)		 ::haxe::ui::core::Component background = this->get_component()->findComponent(HX_("slider-value-background",76,e1,59,fd),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 166)		 ::haxe::ui::core::Component value = null();
HXLINE( 167)		if (hx::IsNotNull( background )) {
HXLINE( 168)			value = background->findComponent(HX_("slider-value",05,51,e9,70),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 170)		 ::haxe::ui::components::Slider slider = ( ( ::haxe::ui::components::Slider)(this->get_component()) );
HXLINE( 171)		if (hx::IsNotNull( value )) {
HXLINE( 172)			Float ucy = background->get_layout()->get_usableHeight();
HXLINE( 174)			Float cy = (int)0;
HXLINE( 175)			Float _hx_tmp = slider->get_rangeStart();
HXDLIN( 175)			if ((_hx_tmp == slider->get_rangeEnd())) {
HXLINE( 176)				Float cy1 = slider->get_pos();
HXDLIN( 176)				Float cy2 = (cy1 - slider->get_min());
HXDLIN( 176)				Float cy3 = slider->get_max();
HXDLIN( 176)				cy = (((Float)cy2 / (Float)(cy3 - slider->get_min())) * ucy);
            			}
            			else {
HXLINE( 178)				Float cy4 = slider->get_rangeEnd();
HXDLIN( 178)				Float cy5 = (cy4 - slider->get_rangeStart());
HXDLIN( 178)				Float cy6 = (cy5 - slider->get_min());
HXDLIN( 178)				Float cy7 = slider->get_max();
HXDLIN( 178)				cy = (((Float)cy6 / (Float)(cy7 - slider->get_min())) * ucy);
            			}
HXLINE( 181)			if ((cy < (int)0)) {
HXLINE( 182)				cy = (int)0;
            			}
            			else {
HXLINE( 183)				if ((cy > ucy)) {
HXLINE( 184)					cy = ucy;
            				}
            			}
HXLINE( 187)			if ((cy == (int)0)) {
HXLINE( 188)				value->set_componentHeight(cy);
HXLINE( 189)				if ((value->get_hidden() == false)) {
HXLINE( 190)					value->set_hidden(true);
HXLINE( 191)					value->invalidate(HX_("style",31,a5,1d,84));
            				}
            			}
            			else {
HXLINE( 194)				value->set_componentHeight(cy);
HXLINE( 195)				if ((value->get_hidden() == true)) {
HXLINE( 196)					value->set_hidden(false);
HXLINE( 197)					value->invalidate(HX_("style",31,a5,1d,84));
            				}
            			}
            		}
            	}


void VSliderLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_f70d8c2f1f821a2e_203_repositionChildren)
HXLINE( 204)		this->super::repositionChildren();
HXLINE( 206)		 ::haxe::ui::core::Component background = this->get_component()->findComponent(HX_("slider-value-background",76,e1,59,fd),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 207)		 ::haxe::ui::core::Component value = null();
HXLINE( 208)		if (hx::IsNotNull( background )) {
HXLINE( 209)			value = background->findComponent(HX_("slider-value",05,51,e9,70),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 211)		 ::haxe::ui::components::Slider slider = ( ( ::haxe::ui::components::Slider)(this->get_component()) );
HXLINE( 212)		if (hx::IsNotNull( value )) {
HXLINE( 213)			 ::haxe::ui::components::Button rangeStartButton = null();
HXLINE( 214)			 ::haxe::ui::components::Button rangeEndButton = this->get_component()->findComponent(HX_("slider-range-end-button",20,b2,46,71),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 216)			Float ucy = background->get_layout()->get_usableHeight();
HXLINE( 217)			Float y = (ucy - value->get_componentHeight());
HXDLIN( 217)			Float y1 = (y + background->get_layout()->get_paddingTop());
HXLINE( 218)			Float _hx_tmp = slider->get_rangeStart();
HXDLIN( 218)			if ((_hx_tmp != slider->get_rangeEnd())) {
HXLINE( 219)				rangeStartButton = this->get_component()->findComponent(HX_("slider-range-start-button",79,97,9f,45),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 220)				Float y2 = slider->get_rangeStart();
HXDLIN( 220)				Float y3 = (y2 - slider->get_min());
HXDLIN( 220)				Float y4 = slider->get_max();
HXDLIN( 220)				y1 = (y1 - (((Float)y3 / (Float)(y4 - slider->get_min())) * ucy));
            			}
HXLINE( 229)			value->set_top(y1);
HXLINE( 231)			if (hx::IsNotNull( rangeStartButton )) {
HXLINE( 232)				Float _hx_tmp1 = (y1 + this->get_paddingTop());
HXDLIN( 232)				Float _hx_tmp2 = (_hx_tmp1 + value->get_componentHeight());
HXDLIN( 232)				rangeStartButton->set_top((_hx_tmp2 - ((Float)rangeStartButton->get_componentHeight() / (Float)(int)2)));
            			}
HXLINE( 234)			if (hx::IsNotNull( rangeEndButton )) {
HXLINE( 235)				Float _hx_tmp3 = this->get_paddingTop();
HXDLIN( 235)				Float _hx_tmp4 = (_hx_tmp3 + value->get_top());
HXDLIN( 235)				rangeEndButton->set_top((_hx_tmp4 - ((Float)rangeEndButton->get_componentHeight() / (Float)(int)2)));
            			}
            		}
            	}



hx::ObjectPtr< VSliderLayout_obj > VSliderLayout_obj::__new() {
	hx::ObjectPtr< VSliderLayout_obj > __this = new VSliderLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VSliderLayout_obj > VSliderLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VSliderLayout_obj *__this = (VSliderLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VSliderLayout_obj), true, "haxe.ui.components.VSliderLayout"));
	*(void **)__this = VSliderLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VSliderLayout_obj::VSliderLayout_obj()
{
}

hx::Val VSliderLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *VSliderLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VSliderLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VSliderLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void VSliderLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VSliderLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VSliderLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VSliderLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VSliderLayout_obj::__mClass;

void VSliderLayout_obj::__register()
{
	hx::Object *dummy = new VSliderLayout_obj;
	VSliderLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VSliderLayout","\xdb","\xb0","\xf1","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VSliderLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VSliderLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VSliderLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VSliderLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VSliderLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VSliderLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
