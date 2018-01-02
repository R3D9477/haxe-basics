// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VSlider
#include <haxe/ui/components/VSlider.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c833c25afcde9187_13_new,"haxe.ui.components.VSlider","new",0x5a85d8c3,"haxe.ui.components.VSlider.new","haxe/ui/components/VSlider.hx",13,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_19_createDefaults,"haxe.ui.components.VSlider","createDefaults",0xb956ac2b,"haxe.ui.components.VSlider.createDefaults","haxe/ui/components/VSlider.hx",19,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_24_createChildren,"haxe.ui.components.VSlider","createChildren",0x7a26f4d8,"haxe.ui.components.VSlider.createChildren","haxe/ui/components/VSlider.hx",24,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_40__onValueBackgroundMouseDown,"haxe.ui.components.VSlider","_onValueBackgroundMouseDown",0x3b55a929,"haxe.ui.components.VSlider._onValueBackgroundMouseDown","haxe/ui/components/VSlider.hx",40,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_62__onValueBackgroundMouseDown,"haxe.ui.components.VSlider","_onValueBackgroundMouseDown",0x3b55a929,"haxe.ui.components.VSlider._onValueBackgroundMouseDown","haxe/ui/components/VSlider.hx",62,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_71__onValueMouseDown,"haxe.ui.components.VSlider","_onValueMouseDown",0x6703e6f7,"haxe.ui.components.VSlider._onValueMouseDown","haxe/ui/components/VSlider.hx",71,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_80__onValueMouseDown,"haxe.ui.components.VSlider","_onValueMouseDown",0x6703e6f7,"haxe.ui.components.VSlider._onValueMouseDown","haxe/ui/components/VSlider.hx",80,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_88__onRangeEndThumbMouseDown,"haxe.ui.components.VSlider","_onRangeEndThumbMouseDown",0xb7850770,"haxe.ui.components.VSlider._onRangeEndThumbMouseDown","haxe/ui/components/VSlider.hx",88,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_93__onRangeStartThumbMouseDown,"haxe.ui.components.VSlider","_onRangeStartThumbMouseDown",0x52123f37,"haxe.ui.components.VSlider._onRangeStartThumbMouseDown","haxe/ui/components/VSlider.hx",93,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_98__onScreenMouseMove,"haxe.ui.components.VSlider","_onScreenMouseMove",0x4d98b829,"haxe.ui.components.VSlider._onScreenMouseMove","haxe/ui/components/VSlider.hx",98,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_c833c25afcde9187_135_calcPosFromCoord,"haxe.ui.components.VSlider","calcPosFromCoord",0x66287aa9,"haxe.ui.components.VSlider.calcPosFromCoord","haxe/ui/components/VSlider.hx",135,0x294ca0ae)
HX_LOCAL_STACK_FRAME(_hx_pos_2b446bb44cbe3423_1_cloneComponent,"haxe.ui.components.VSlider","cloneComponent",0xddd9461d,"haxe.ui.components.VSlider.cloneComponent","src/haxe/ui/components/VSlider.hx",1,0xe8941703)
HX_LOCAL_STACK_FRAME(_hx_pos_2b446bb44cbe3423_2_self,"haxe.ui.components.VSlider","self",0xdde5d9c9,"haxe.ui.components.VSlider.self","src/haxe/ui/components/VSlider.hx",2,0xe8941703)
namespace haxe{
namespace ui{
namespace components{

void VSlider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic VSlider_obj::__CreateEmpty() { return new VSlider_obj; }

void *VSlider_obj::_hx_vtable = 0;

Dynamic VSlider_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VSlider_obj > _hx_result = new VSlider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VSlider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			if (inClassId<=(int)0x053e257f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x053e257f;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x6a3adc11 || inClassId==(int)0x7140e8dc;
	}
}

void VSlider_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_c833c25afcde9187_19_createDefaults)
HXLINE(  20)		this->super::createDefaults();
HXLINE(  21)		this->_defaultLayout =  ::haxe::ui::components::VSliderLayout_obj::__alloc( HX_CTX );
            	}


void VSlider_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_24_createChildren)
HXLINE(  25)		this->super::createChildren();
HXLINE(  26)		if (hx::IsLessEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  27)			this->set_componentWidth((int)20);
            		}
HXLINE(  29)		if (hx::IsLessEq( this->get_componentHeight(),(int)0 )) {
HXLINE(  30)			this->set_componentHeight((int)150);
            		}
HXLINE(  33)		bool _hx_tmp = hx::IsNotNull( this->_valueBackground );
            	}


void VSlider_obj::_onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_40__onValueBackgroundMouseDown)
HXDLIN(  40)		 ::haxe::ui::components::VSlider _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)		this->super::_onValueBackgroundMouseDown(event);
HXLINE(  42)		if ((this->_value->hitTest(event->screenX,event->screenY) == false)) {
HXLINE(  43)			Float _hx_tmp = this->get_rangeEnd();
HXDLIN(  43)			if ((_hx_tmp != this->get_rangeStart())) {
HXLINE(  44)				Float event1 = event->screenY;
HXDLIN(  44)				if ((event1 < this->_rangeEndThumb->get_screenTop())) {
HXLINE(  45)					this->_activeThumb = this->_rangeEndThumb;
HXLINE(  46)					Float event2 = event->screenY;
HXDLIN(  46)					Float ypos = (event2 - this->_valueBackground->get_screenTop());
HXDLIN(  46)					Float ypos1 = (ypos - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN(  46)					Float ypos2 = (ypos1 - this->_valueBackground->get_paddingBottom());
HXLINE(  48)					this->animateRangeEnd(this->calcPosFromCoord(ypos2));
HXLINE(  49)					this->_onRangeEndThumbMouseDown(event);
            				}
            				else {
HXLINE(  50)					Float event3 = event->screenY;
HXDLIN(  50)					Float _hx_tmp1 = this->_rangeStartThumb->get_screenTop();
HXDLIN(  50)					if ((event3 > (_hx_tmp1 + this->_rangeStartThumb->get_componentHeight()))) {
HXLINE(  51)						this->_activeThumb = this->_rangeStartThumb;
HXLINE(  52)						Float event4 = event->screenY;
HXDLIN(  52)						Float ypos3 = (event4 - this->_valueBackground->get_screenTop());
HXDLIN(  52)						Float ypos4 = (ypos3 - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN(  52)						Float ypos5 = (ypos4 - this->_valueBackground->get_paddingBottom());
HXLINE(  54)						this->animateRangeStart(this->calcPosFromCoord(ypos5));
HXLINE(  55)						this->_onRangeStartThumbMouseDown(event);
            					}
            				}
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::VSlider,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_c833c25afcde9187_62__onValueBackgroundMouseDown)
HXLINE(  62)					if (hx::IsNotNull( _gthis->_activeThumb )) {
HXLINE(  63)						Float _hx_tmp2 = ((Float)_gthis->_activeThumb->get_componentWidth() / (Float)(int)2);
HXDLIN(  63)						 ::Dynamic _hx_tmp3 = _gthis->_valueBackground->get_paddingBottom();
HXDLIN(  63)						_gthis->_mouseDownOffset = (_hx_tmp2 + _hx_tmp3);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  58)				this->_activeThumb = this->_rangeEndThumb;
HXLINE(  59)				Float event5 = event->screenY;
HXDLIN(  59)				Float ypos6 = (event5 - this->_valueBackground->get_screenTop());
HXDLIN(  59)				Float ypos7 = (ypos6 - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN(  59)				Float ypos8 = (ypos7 - this->_valueBackground->get_paddingBottom());
HXLINE(  61)				this->animatePos(this->calcPosFromCoord(ypos8), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  66)				this->_onRangeEndThumbMouseDown(event);
            			}
            		}
            	}


void VSlider_obj::_onValueMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_71__onValueMouseDown)
HXDLIN(  71)		 ::haxe::ui::components::VSlider _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  72)		this->super::_onValueMouseDown(event);
HXLINE(  73)		Float _hx_tmp = this->get_rangeEnd();
HXDLIN(  73)		if ((_hx_tmp != this->get_rangeStart())) {
HXLINE(  74)			Float event1 = event->screenY;
HXDLIN(  74)			this->_mouseDownOffset = (event1 - this->_value->get_top());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::VSlider,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_c833c25afcde9187_80__onValueMouseDown)
HXLINE(  80)				if (hx::IsNotNull( _gthis->_activeThumb )) {
HXLINE(  81)					Float _hx_tmp1 = ((Float)_gthis->_activeThumb->get_componentWidth() / (Float)(int)2);
HXDLIN(  81)					 ::Dynamic _hx_tmp2 = _gthis->_valueBackground->get_paddingBottom();
HXDLIN(  81)					_gthis->_mouseDownOffset = (_hx_tmp1 + _hx_tmp2);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  76)			this->_activeThumb = this->_rangeEndThumb;
HXLINE(  77)			Float event2 = event->screenY;
HXDLIN(  77)			Float ypos = (event2 - this->_valueBackground->get_screenTop());
HXDLIN(  77)			Float ypos1 = (ypos - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN(  77)			Float ypos2 = (ypos1 - this->_valueBackground->get_paddingBottom());
HXLINE(  79)			this->animatePos(this->calcPosFromCoord(ypos2), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  84)			this->_onRangeEndThumbMouseDown(event);
            		}
            	}


void VSlider_obj::_onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_88__onRangeEndThumbMouseDown)
HXLINE(  89)		this->super::_onRangeEndThumbMouseDown(event);
HXLINE(  90)		Float event1 = event->screenY;
HXDLIN(  90)		Float _hx_tmp = (event1 - this->_activeThumb->get_screenTop());
HXDLIN(  90)		this->_mouseDownOffset = (_hx_tmp + this->_valueBackground->get_paddingBottom());
            	}


void VSlider_obj::_onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_93__onRangeStartThumbMouseDown)
HXLINE(  94)		this->super::_onRangeStartThumbMouseDown(event);
HXLINE(  95)		Float event1 = event->screenY;
HXDLIN(  95)		Float _hx_tmp = (event1 - this->_activeThumb->get_screenTop());
HXDLIN(  95)		this->_mouseDownOffset = (_hx_tmp + this->_valueBackground->get_paddingBottom());
            	}


void VSlider_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_98__onScreenMouseMove)
HXLINE(  99)		this->super::_onScreenMouseMove(event);
HXLINE( 100)		if ((this->_mouseDownOffset == (int)-1)) {
HXLINE( 101)			return;
            		}
HXLINE( 104)		if (hx::IsNotNull( this->_activeThumb )) {
HXLINE( 105)			Float event1 = event->screenY;
HXDLIN( 105)			Float ypos = (event1 - this->_valueBackground->get_screenTop());
HXDLIN( 105)			Float ypos1 = (ypos - this->_mouseDownOffset);
HXLINE( 106)			Float _hx_tmp = this->get_rangeEnd();
HXDLIN( 106)			if ((_hx_tmp != this->get_rangeStart())) {
HXLINE( 107)				if (hx::IsEq( this->_activeThumb,this->_rangeEndThumb )) {
HXLINE( 108)					this->set_rangeEnd(this->calcPosFromCoord(ypos1));
            				}
            				else {
HXLINE( 109)					if (hx::IsEq( this->_activeThumb,this->_rangeStartThumb )) {
HXLINE( 110)						this->set_rangeStart(this->calcPosFromCoord(ypos1));
            					}
            				}
            			}
            			else {
HXLINE( 113)				this->set_pos(this->calcPosFromCoord(ypos1));
            			}
            		}
            		else {
HXLINE( 116)			Float diff = this->get_rangeEnd();
HXDLIN( 116)			Float diff1 = (diff - this->get_rangeStart());
HXLINE( 117)			Float ypos2 = (event->screenY - this->_mouseDownOffset);
HXLINE( 118)			ypos2 = (ypos2 + this->_value->get_componentHeight());
HXLINE( 119)			this->_activeThumb = this->_rangeStartThumb;
HXLINE( 120)			Float start = (ypos2 - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN( 120)			Float start1 = this->calcPosFromCoord((start - this->_valueBackground->get_paddingBottom()));
HXLINE( 121)			this->_activeThumb = null();
HXLINE( 123)			if (((start1 + diff1) > this->get_max())) {
HXLINE( 124)				return;
            			}
HXLINE( 127)			Float end = (start1 + diff1);
HXLINE( 128)			this->setRange(start1,end);
            		}
            	}


Float VSlider_obj::calcPosFromCoord(Float ypos){
            	HX_STACKFRAME(&_hx_pos_c833c25afcde9187_135_calcPosFromCoord)
HXLINE( 136)		Float minY = -(((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXLINE( 137)		Float maxY = this->get_layout()->get_usableHeight();
HXDLIN( 137)		Float maxY1 = (maxY - ((Float)this->_activeThumb->get_componentHeight() / (Float)(int)2));
HXDLIN( 137)		 ::Dynamic maxY2 = this->_valueBackground->get_paddingTop();
HXDLIN( 137)		Float maxY3 = (maxY1 - (maxY2 + this->_valueBackground->get_paddingBottom()));
HXLINE( 139)		if ((ypos < minY)) {
HXLINE( 140)			ypos = minY;
            		}
            		else {
HXLINE( 141)			if ((ypos > maxY3)) {
HXLINE( 142)				ypos = maxY3;
            			}
            		}
HXLINE( 145)		Float ucy = this->get_layout()->get_usableHeight();
HXDLIN( 145)		 ::Dynamic ucy1 = this->_valueBackground->get_paddingTop();
HXDLIN( 145)		Float ucy2 = (ucy - (ucy1 + this->_valueBackground->get_paddingBottom()));
HXLINE( 146)		Float m = this->get_max();
HXDLIN( 146)		Float m1 = (m - this->get_min());
HXLINE( 147)		Float v = (ypos - minY);
HXLINE( 148)		Float newValue = this->get_min();
HXDLIN( 148)		Float newValue1 = (newValue + (((Float)v / (Float)ucy2) * m1));
HXLINE( 149)		return (this->get_max() - newValue1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VSlider_obj,calcPosFromCoord,return )

 ::haxe::ui::core::Component VSlider_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_2b446bb44cbe3423_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::VSlider c = ( ( ::haxe::ui::components::VSlider)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component VSlider_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_2b446bb44cbe3423_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::VSlider_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< VSlider_obj > VSlider_obj::__new() {
	hx::ObjectPtr< VSlider_obj > __this = new VSlider_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VSlider_obj > VSlider_obj::__alloc(hx::Ctx *_hx_ctx) {
	VSlider_obj *__this = (VSlider_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VSlider_obj), true, "haxe.ui.components.VSlider"));
	*(void **)__this = VSlider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VSlider_obj::VSlider_obj()
{
}

hx::Val VSlider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calcPosFromCoord") ) { return hx::Val( calcPosFromCoord_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onValueMouseDown") ) { return hx::Val( _onValueMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return hx::Val( _onScreenMouseMove_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_onRangeEndThumbMouseDown") ) { return hx::Val( _onRangeEndThumbMouseDown_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_onValueBackgroundMouseDown") ) { return hx::Val( _onValueBackgroundMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onRangeStartThumbMouseDown") ) { return hx::Val( _onRangeStartThumbMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VSlider_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VSlider_obj_sStaticStorageInfo = 0;
#endif

static ::String VSlider_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("_onValueBackgroundMouseDown","\xc6","\xcf","\x7f","\xa3"),
	HX_HCSTRING("_onValueMouseDown","\x54","\x17","\x05","\xdf"),
	HX_HCSTRING("_onRangeEndThumbMouseDown","\xcd","\x5c","\xe9","\x7d"),
	HX_HCSTRING("_onRangeStartThumbMouseDown","\xd4","\x65","\x3c","\xba"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("calcPosFromCoord","\xec","\x44","\xf8","\x03"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void VSlider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VSlider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VSlider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VSlider_obj::__mClass,"__mClass");
};

#endif

hx::Class VSlider_obj::__mClass;

void VSlider_obj::__register()
{
	hx::Object *dummy = new VSlider_obj;
	VSlider_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VSlider","\x51","\xbb","\x5b","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VSlider_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VSlider_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VSlider_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VSlider_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VSlider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VSlider_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
