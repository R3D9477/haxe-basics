// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HScroll
#include <haxe/ui/components/HScroll.h>
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
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b8bc48b02884cbe1_12_new,"haxe.ui.components.HScroll","new",0x08297321,"haxe.ui.components.HScroll.new","haxe/ui/components/HScroll.hx",12,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_b8bc48b02884cbe1_18_createDefaults,"haxe.ui.components.HScroll","createDefaults",0x44cf928d,"haxe.ui.components.HScroll.createDefaults","haxe/ui/components/HScroll.hx",18,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_b8bc48b02884cbe1_26__onThumbMouseDown,"haxe.ui.components.HScroll","_onThumbMouseDown",0x09368a90,"haxe.ui.components.HScroll._onThumbMouseDown","haxe/ui/components/HScroll.hx",26,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_b8bc48b02884cbe1_32__onScreenMouseMove,"haxe.ui.components.HScroll","_onScreenMouseMove",0x8bc1778b,"haxe.ui.components.HScroll._onScreenMouseMove","haxe/ui/components/HScroll.hx",32,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_b8bc48b02884cbe1_62__onMouseDown,"haxe.ui.components.HScroll","_onMouseDown",0x6499bf28,"haxe.ui.components.HScroll._onMouseDown","haxe/ui/components/HScroll.hx",62,0x8278fc10)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e8eefbf218e53_1_cloneComponent,"haxe.ui.components.HScroll","cloneComponent",0x69522c7f,"haxe.ui.components.HScroll.cloneComponent","src/haxe/ui/components/HScroll.hx",1,0x41c07265)
HX_LOCAL_STACK_FRAME(_hx_pos_b34e8eefbf218e53_2_self,"haxe.ui.components.HScroll","self",0x1f6951ab,"haxe.ui.components.HScroll.self","src/haxe/ui/components/HScroll.hx",2,0x41c07265)
namespace haxe{
namespace ui{
namespace components{

void HScroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b8bc48b02884cbe1_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic HScroll_obj::__CreateEmpty() { return new HScroll_obj; }

void *HScroll_obj::_hx_vtable = 0;

Dynamic HScroll_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HScroll_obj > _hx_result = new HScroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55cea6a5) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x419aedfd) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x419aedfd;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x55cea6a5;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void HScroll_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_b8bc48b02884cbe1_18_createDefaults)
HXLINE(  19)		this->super::createDefaults();
HXLINE(  20)		this->_defaultLayout =  ::haxe::ui::components::HScrollLayout_obj::__alloc( HX_CTX );
            	}


void HScroll_obj::_onThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b8bc48b02884cbe1_26__onThumbMouseDown)
HXLINE(  27)		this->super::_onThumbMouseDown(event);
HXLINE(  29)		Float event1 = event->screenX;
HXDLIN(  29)		Float _hx_tmp = (event1 - this->_thumb->get_left());
HXDLIN(  29)		this->_mouseDownOffset = (_hx_tmp + this->get_layout()->get_paddingLeft());
            	}


void HScroll_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b8bc48b02884cbe1_32__onScreenMouseMove)
HXLINE(  33)		this->super::_onScreenMouseMove(event);
HXLINE(  34)		if ((this->_mouseDownOffset == (int)-1)) {
HXLINE(  35)			return;
            		}
HXLINE(  38)		Float xpos = (event->screenX - this->_mouseDownOffset);
HXLINE(  39)		Float minX = (int)0;
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (hx::IsNotNull( this->_deincButton )) {
HXLINE(  40)			_hx_tmp = (this->_deincButton->get_hidden() == false);
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			 ::Dynamic minX1 = this->_deincButton->get_componentWidth();
HXDLIN(  41)			minX = (minX1 + this->get_layout()->get_horizontalSpacing());
            		}
HXLINE(  43)		Float maxX = this->get_layout()->get_usableWidth();
HXDLIN(  43)		Float maxX1 = (maxX - this->_thumb->get_componentWidth());
HXLINE(  44)		bool _hx_tmp1;
HXDLIN(  44)		if (hx::IsNotNull( this->_deincButton )) {
HXLINE(  44)			_hx_tmp1 = (this->_deincButton->get_hidden() == false);
            		}
            		else {
HXLINE(  44)			_hx_tmp1 = false;
            		}
HXDLIN(  44)		if (_hx_tmp1) {
HXLINE(  45)			 ::Dynamic maxX2 = this->_deincButton->get_componentWidth();
HXDLIN(  45)			maxX1 = (maxX1 + (maxX2 + this->get_layout()->get_horizontalSpacing()));
            		}
HXLINE(  47)		if ((xpos < minX)) {
HXLINE(  48)			xpos = minX;
            		}
            		else {
HXLINE(  49)			if ((xpos > maxX1)) {
HXLINE(  50)				xpos = maxX1;
            			}
            		}
HXLINE(  53)		Float ucx = this->get_layout()->get_usableWidth();
HXLINE(  54)		ucx = (ucx - this->_thumb->get_componentWidth());
HXLINE(  55)		Float m = this->get_max();
HXDLIN(  55)		int m1 = ::Std_obj::_hx_int((m - this->get_min()));
HXLINE(  56)		Float v = (xpos - minX);
HXLINE(  57)		Float newValue = this->get_min();
HXDLIN(  57)		Float newValue1 = (newValue + (((Float)v / (Float)ucx) * m1));
HXLINE(  58)		this->set_pos(newValue1);
            	}


void HScroll_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b8bc48b02884cbe1_62__onMouseDown)
HXDLIN(  62)		Float event1 = event->screenX;
HXDLIN(  62)		if ((event1 < this->_thumb->get_screenLeft())) {
HXLINE(  63)			Float _hx_tmp = this->get_pos();
HXDLIN(  63)			this->animatePos((_hx_tmp - this->get_pageSize()));
            		}
            		else {
HXLINE(  64)			Float event2 = event->screenX;
HXDLIN(  64)			Float _hx_tmp1 = this->_thumb->get_screenLeft();
HXDLIN(  64)			if ((event2 > (_hx_tmp1 + this->_thumb->get_componentWidth()))) {
HXLINE(  65)				Float _hx_tmp2 = this->get_pos();
HXDLIN(  65)				this->animatePos((_hx_tmp2 + this->get_pageSize()));
            			}
            		}
            	}


 ::haxe::ui::core::Component HScroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b34e8eefbf218e53_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::HScroll c = ( ( ::haxe::ui::components::HScroll)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component HScroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b34e8eefbf218e53_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::HScroll_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HScroll_obj > HScroll_obj::__new() {
	hx::ObjectPtr< HScroll_obj > __this = new HScroll_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HScroll_obj > HScroll_obj::__alloc(hx::Ctx *_hx_ctx) {
	HScroll_obj *__this = (HScroll_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HScroll_obj), true, "haxe.ui.components.HScroll"));
	*(void **)__this = HScroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HScroll_obj::HScroll_obj()
{
}

hx::Val HScroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return hx::Val( _onThumbMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return hx::Val( _onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HScroll_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String HScroll_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("_onThumbMouseDown","\x0f","\xf8","\xd5","\x49"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void HScroll_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HScroll_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScroll_obj::__mClass,"__mClass");
};

#endif

hx::Class HScroll_obj::__mClass;

void HScroll_obj::__register()
{
	hx::Object *dummy = new HScroll_obj;
	HScroll_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HScroll","\xaf","\x4e","\x8f","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HScroll_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HScroll_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HScroll_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HScroll_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScroll_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
