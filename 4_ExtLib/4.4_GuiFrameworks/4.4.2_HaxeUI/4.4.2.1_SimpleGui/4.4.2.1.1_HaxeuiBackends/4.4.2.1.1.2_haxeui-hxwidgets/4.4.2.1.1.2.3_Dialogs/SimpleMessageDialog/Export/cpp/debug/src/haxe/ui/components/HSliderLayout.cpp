// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HSliderLayout
#include <haxe/ui/components/HSliderLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1242c4f8f2cc7547_166_new,"haxe.ui.components.HSliderLayout","new",0xdab0df3f,"haxe.ui.components.HSliderLayout.new","haxe/ui/components/HSlider.hx",166,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1242c4f8f2cc7547_169_resizeChildren,"haxe.ui.components.HSliderLayout","resizeChildren",0xb7b272d4,"haxe.ui.components.HSliderLayout.resizeChildren","haxe/ui/components/HSlider.hx",169,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1242c4f8f2cc7547_210_repositionChildren,"haxe.ui.components.HSliderLayout","repositionChildren",0x183d84bc,"haxe.ui.components.HSliderLayout.repositionChildren","haxe/ui/components/HSlider.hx",210,0xa53a127c)
namespace haxe{
namespace ui{
namespace components{

void HSliderLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1242c4f8f2cc7547_166_new)
HXDLIN( 166)		super::__construct();
            	}

Dynamic HSliderLayout_obj::__CreateEmpty() { return new HSliderLayout_obj; }

void *HSliderLayout_obj::_hx_vtable = 0;

Dynamic HSliderLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HSliderLayout_obj > _hx_result = new HSliderLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HSliderLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x07e58843) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x07e58843;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void HSliderLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_1242c4f8f2cc7547_169_resizeChildren)
HXLINE( 170)		this->super::resizeChildren();
HXLINE( 172)		 ::haxe::ui::core::Component background = this->get_component()->findComponent(HX_("slider-value-background",76,e1,59,fd),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 173)		 ::haxe::ui::core::Component value = null();
HXLINE( 174)		if (hx::IsNotNull( background )) {
HXLINE( 175)			value = background->findComponent(HX_("slider-value",05,51,e9,70),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 177)		 ::haxe::ui::components::Slider slider = ( ( ::haxe::ui::components::Slider)(this->get_component()) );
HXLINE( 178)		if (hx::IsNotNull( value )) {
HXLINE( 179)			Float ucx = background->get_layout()->get_usableWidth();
HXLINE( 181)			Float cx = (int)0;
HXLINE( 182)			Float _hx_tmp = slider->get_rangeStart();
HXDLIN( 182)			if ((_hx_tmp == slider->get_rangeEnd())) {
HXLINE( 183)				Float cx1 = slider->get_pos();
HXDLIN( 183)				Float cx2 = (cx1 - slider->get_min());
HXDLIN( 183)				Float cx3 = slider->get_max();
HXDLIN( 183)				cx = (((Float)cx2 / (Float)(cx3 - slider->get_min())) * ucx);
            			}
            			else {
HXLINE( 185)				Float cx4 = slider->get_rangeEnd();
HXDLIN( 185)				Float cx5 = (cx4 - slider->get_rangeStart());
HXDLIN( 185)				Float cx6 = (cx5 - slider->get_min());
HXDLIN( 185)				Float cx7 = slider->get_max();
HXDLIN( 185)				cx = (((Float)cx6 / (Float)(cx7 - slider->get_min())) * ucx);
            			}
HXLINE( 188)			if ((cx < (int)0)) {
HXLINE( 189)				cx = (int)0;
            			}
            			else {
HXLINE( 190)				if ((cx > ucx)) {
HXLINE( 191)					cx = ucx;
            				}
            			}
HXLINE( 194)			if ((cx == (int)0)) {
HXLINE( 195)				value->set_componentWidth(cx);
HXLINE( 196)				if ((value->get_hidden() == false)) {
HXLINE( 197)					value->set_hidden(true);
HXLINE( 198)					value->invalidate(HX_("style",31,a5,1d,84));
            				}
            			}
            			else {
HXLINE( 201)				value->set_componentWidth(cx);
HXLINE( 202)				if ((value->get_hidden() == true)) {
HXLINE( 203)					value->set_hidden(false);
HXLINE( 204)					value->invalidate(HX_("style",31,a5,1d,84));
            				}
            			}
            		}
            	}


void HSliderLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_1242c4f8f2cc7547_210_repositionChildren)
HXLINE( 211)		this->super::repositionChildren();
HXLINE( 213)		 ::haxe::ui::core::Component background = this->get_component()->findComponent(HX_("slider-value-background",76,e1,59,fd),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 214)		 ::haxe::ui::core::Component value = null();
HXLINE( 215)		if (hx::IsNotNull( background )) {
HXLINE( 216)			value = background->findComponent(HX_("slider-value",05,51,e9,70),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
            		}
HXLINE( 218)		 ::haxe::ui::components::Slider slider = ( ( ::haxe::ui::components::Slider)(this->get_component()) );
HXLINE( 219)		if (hx::IsNotNull( value )) {
HXLINE( 220)			 ::haxe::ui::components::Button rangeStartButton = null();
HXLINE( 221)			 ::haxe::ui::components::Button rangeEndButton = this->get_component()->findComponent(HX_("slider-range-end-button",20,b2,46,71),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 223)			Float x = (int)0;
HXLINE( 224)			Float _hx_tmp = slider->get_rangeStart();
HXDLIN( 224)			if ((_hx_tmp != slider->get_rangeEnd())) {
HXLINE( 225)				rangeStartButton = this->get_component()->findComponent(HX_("slider-range-start-button",79,97,9f,45),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 226)				Float ucx = background->get_layout()->get_usableWidth();
HXLINE( 227)				Float x1 = slider->get_rangeStart();
HXDLIN( 227)				Float x2 = (x1 - slider->get_min());
HXDLIN( 227)				Float x3 = slider->get_max();
HXDLIN( 227)				x = (((Float)x2 / (Float)(x3 - slider->get_min())) * ucx);
            			}
HXLINE( 231)			value->set_left((x + background->get_layout()->get_paddingLeft()));
HXLINE( 233)			if (hx::IsNotNull( rangeStartButton )) {
HXLINE( 234)				rangeStartButton->set_left(x);
            			}
HXLINE( 236)			if (hx::IsNotNull( rangeEndButton )) {
HXLINE( 237)				Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 237)				Float _hx_tmp2 = (_hx_tmp1 + value->get_left());
HXDLIN( 237)				Float _hx_tmp3 = (_hx_tmp2 + value->get_componentWidth());
HXDLIN( 237)				rangeEndButton->set_left((_hx_tmp3 - ((Float)rangeEndButton->get_componentWidth() / (Float)(int)2)));
            			}
            		}
            	}



hx::ObjectPtr< HSliderLayout_obj > HSliderLayout_obj::__new() {
	hx::ObjectPtr< HSliderLayout_obj > __this = new HSliderLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HSliderLayout_obj > HSliderLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HSliderLayout_obj *__this = (HSliderLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HSliderLayout_obj), true, "haxe.ui.components.HSliderLayout"));
	*(void **)__this = HSliderLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HSliderLayout_obj::HSliderLayout_obj()
{
}

hx::Val HSliderLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *HSliderLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HSliderLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HSliderLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void HSliderLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HSliderLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HSliderLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HSliderLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HSliderLayout_obj::__mClass;

void HSliderLayout_obj::__register()
{
	hx::Object *dummy = new HSliderLayout_obj;
	HSliderLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HSliderLayout","\xcd","\xd3","\x6a","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HSliderLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HSliderLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HSliderLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HSliderLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSliderLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSliderLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
