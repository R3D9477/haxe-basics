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
#ifndef INCLUDED_haxe_ui_components_HSlider
#include <haxe/ui/components/HSlider.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1b06630b7693d7c6_13_new,"haxe.ui.components.HSlider","new",0x4e5bfb35,"haxe.ui.components.HSlider.new","haxe/ui/components/HSlider.hx",13,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_19_createDefaults,"haxe.ui.components.HSlider","createDefaults",0xfd0e9af9,"haxe.ui.components.HSlider.createDefaults","haxe/ui/components/HSlider.hx",19,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_24_createChildren,"haxe.ui.components.HSlider","createChildren",0xbddee3a6,"haxe.ui.components.HSlider.createChildren","haxe/ui/components/HSlider.hx",24,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_47__onValueBackgroundMouseDown,"haxe.ui.components.HSlider","_onValueBackgroundMouseDown",0x7c3a119b,"haxe.ui.components.HSlider._onValueBackgroundMouseDown","haxe/ui/components/HSlider.hx",47,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_68__onValueBackgroundMouseDown,"haxe.ui.components.HSlider","_onValueBackgroundMouseDown",0x7c3a119b,"haxe.ui.components.HSlider._onValueBackgroundMouseDown","haxe/ui/components/HSlider.hx",68,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_78__onValueMouseDown,"haxe.ui.components.HSlider","_onValueMouseDown",0xe89eace9,"haxe.ui.components.HSlider._onValueMouseDown","haxe/ui/components/HSlider.hx",78,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_86__onValueMouseDown,"haxe.ui.components.HSlider","_onValueMouseDown",0xe89eace9,"haxe.ui.components.HSlider._onValueMouseDown","haxe/ui/components/HSlider.hx",86,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_95__onRangeEndThumbMouseDown,"haxe.ui.components.HSlider","_onRangeEndThumbMouseDown",0x91220f62,"haxe.ui.components.HSlider._onRangeEndThumbMouseDown","haxe/ui/components/HSlider.hx",95,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_100__onRangeStartThumbMouseDown,"haxe.ui.components.HSlider","_onRangeStartThumbMouseDown",0x92f6a7a9,"haxe.ui.components.HSlider._onRangeStartThumbMouseDown","haxe/ui/components/HSlider.hx",100,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_105__onScreenMouseMove,"haxe.ui.components.HSlider","_onScreenMouseMove",0x336b25f7,"haxe.ui.components.HSlider._onScreenMouseMove","haxe/ui/components/HSlider.hx",105,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b06630b7693d7c6_141_calcPosFromCoord,"haxe.ui.components.HSlider","calcPosFromCoord",0xfad438f7,"haxe.ui.components.HSlider.calcPosFromCoord","haxe/ui/components/HSlider.hx",141,0xa53a127c)
HX_LOCAL_STACK_FRAME(_hx_pos_ceb062215bf09a9e_1_cloneComponent,"haxe.ui.components.HSlider","cloneComponent",0x219134eb,"haxe.ui.components.HSlider.cloneComponent","src/haxe/ui/components/HSlider.hx",1,0x648188d1)
HX_LOCAL_STACK_FRAME(_hx_pos_ceb062215bf09a9e_2_self,"haxe.ui.components.HSlider","self",0x456ddb17,"haxe.ui.components.HSlider.self","src/haxe/ui/components/HSlider.hx",2,0x648188d1)
namespace haxe{
namespace ui{
namespace components{

void HSlider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic HSlider_obj::__CreateEmpty() { return new HSlider_obj; }

void *HSlider_obj::_hx_vtable = 0;

Dynamic HSlider_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HSlider_obj > _hx_result = new HSlider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HSlider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6a3adc11) {
		if (inClassId<=(int)0x5f23eff4) {
			if (inClassId<=(int)0x4a06d0bc) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
			} else {
				return inClassId==(int)0x5f23eff4;
			}
		} else {
			return inClassId==(int)0x6a3adc11;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7e6e94b9;
	}
}

void HSlider_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_1b06630b7693d7c6_19_createDefaults)
HXLINE(  20)		this->super::createDefaults();
HXLINE(  21)		this->_defaultLayout =  ::haxe::ui::components::HSliderLayout_obj::__alloc( HX_CTX );
            	}


void HSlider_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_24_createChildren)
HXLINE(  25)		this->super::createChildren();
HXLINE(  27)		if (hx::IsLessEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  28)			this->set_componentWidth((int)150);
            		}
HXLINE(  30)		if (hx::IsLessEq( this->get_componentHeight(),(int)0 )) {
HXLINE(  31)			this->set_componentHeight((int)20);
            		}
HXLINE(  34)		bool _hx_tmp = hx::IsNotNull( this->_valueBackground );
            	}


void HSlider_obj::_onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_47__onValueBackgroundMouseDown)
HXDLIN(  47)		 ::haxe::ui::components::HSlider _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		this->super::_onValueBackgroundMouseDown(event);
HXLINE(  49)		if ((this->_value->hitTest(event->screenX,event->screenY) == false)) {
HXLINE(  50)			Float _hx_tmp = this->get_rangeEnd();
HXDLIN(  50)			if ((_hx_tmp != this->get_rangeStart())) {
HXLINE(  51)				Float event1 = event->screenX;
HXDLIN(  51)				if ((event1 < this->_rangeStartThumb->get_screenLeft())) {
HXLINE(  52)					this->_activeThumb = this->_rangeStartThumb;
HXLINE(  53)					Float event2 = event->screenX;
HXDLIN(  53)					Float xpos = (event2 - this->_valueBackground->get_screenLeft());
HXDLIN(  53)					Float xpos1 = (xpos - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN(  53)					Float xpos2 = (xpos1 - this->_valueBackground->get_paddingLeft());
HXLINE(  54)					this->animateRangeStart(this->calcPosFromCoord(xpos2));
HXLINE(  56)					this->_onRangeStartThumbMouseDown(event);
            				}
            				else {
HXLINE(  57)					Float event3 = event->screenX;
HXDLIN(  57)					Float _hx_tmp1 = this->_rangeEndThumb->get_screenLeft();
HXDLIN(  57)					if ((event3 > (_hx_tmp1 + this->_rangeEndThumb->get_componentWidth()))) {
HXLINE(  58)						this->_activeThumb = this->_rangeEndThumb;
HXLINE(  59)						Float event4 = event->screenX;
HXDLIN(  59)						Float xpos3 = (event4 - this->_valueBackground->get_screenLeft());
HXDLIN(  59)						Float xpos4 = (xpos3 - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN(  59)						Float xpos5 = (xpos4 - this->_valueBackground->get_paddingLeft());
HXLINE(  60)						this->animateRangeEnd(this->calcPosFromCoord(xpos5));
HXLINE(  62)						this->_onRangeEndThumbMouseDown(event);
            					}
            				}
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::HSlider,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_68__onValueBackgroundMouseDown)
HXLINE(  68)					if (hx::IsNotNull( _gthis->_activeThumb )) {
HXLINE(  69)						Float _hx_tmp2 = ((Float)_gthis->_activeThumb->get_componentWidth() / (Float)(int)2);
HXDLIN(  69)						 ::Dynamic _hx_tmp3 = _gthis->_valueBackground->get_paddingLeft();
HXDLIN(  69)						_gthis->_mouseDownOffset = (_hx_tmp2 + _hx_tmp3);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  65)				this->_activeThumb = this->_rangeEndThumb;
HXLINE(  66)				Float event5 = event->screenX;
HXDLIN(  66)				Float xpos6 = (event5 - this->_valueBackground->get_screenLeft());
HXDLIN(  66)				Float xpos7 = (xpos6 - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN(  66)				Float xpos8 = (xpos7 - this->_valueBackground->get_paddingLeft());
HXLINE(  67)				this->animatePos(this->calcPosFromCoord(xpos8), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  73)				this->_onRangeEndThumbMouseDown(event);
            			}
            		}
            	}


void HSlider_obj::_onValueMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_78__onValueMouseDown)
HXDLIN(  78)		 ::haxe::ui::components::HSlider _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  79)		this->super::_onValueMouseDown(event);
HXLINE(  80)		Float _hx_tmp = this->get_rangeEnd();
HXDLIN(  80)		if ((_hx_tmp != this->get_rangeStart())) {
HXLINE(  81)			Float event1 = event->screenX;
HXDLIN(  81)			this->_mouseDownOffset = (event1 - this->_value->get_left());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::HSlider,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_86__onValueMouseDown)
HXLINE(  86)				if (hx::IsNotNull( _gthis->_activeThumb )) {
HXLINE(  87)					Float _hx_tmp1 = ((Float)_gthis->_activeThumb->get_componentWidth() / (Float)(int)2);
HXDLIN(  87)					 ::Dynamic _hx_tmp2 = _gthis->_valueBackground->get_paddingLeft();
HXDLIN(  87)					_gthis->_mouseDownOffset = (_hx_tmp1 + _hx_tmp2);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  83)			this->_activeThumb = this->_rangeEndThumb;
HXLINE(  84)			Float event2 = event->screenX;
HXDLIN(  84)			Float xpos = (event2 - this->_valueBackground->get_screenLeft());
HXDLIN(  84)			Float xpos1 = (xpos - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN(  84)			Float xpos2 = (xpos1 - this->_valueBackground->get_paddingLeft());
HXLINE(  85)			this->animatePos(this->calcPosFromCoord(xpos2), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  91)			this->_onRangeEndThumbMouseDown(event);
            		}
            	}


void HSlider_obj::_onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_95__onRangeEndThumbMouseDown)
HXLINE(  96)		this->super::_onRangeEndThumbMouseDown(event);
HXLINE(  97)		Float event1 = event->screenX;
HXDLIN(  97)		Float _hx_tmp = (event1 - this->_activeThumb->get_screenLeft());
HXDLIN(  97)		this->_mouseDownOffset = (_hx_tmp + this->_valueBackground->get_paddingLeft());
            	}


void HSlider_obj::_onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_100__onRangeStartThumbMouseDown)
HXLINE( 101)		this->super::_onRangeStartThumbMouseDown(event);
HXLINE( 102)		Float event1 = event->screenX;
HXDLIN( 102)		Float _hx_tmp = (event1 - this->_activeThumb->get_screenLeft());
HXDLIN( 102)		this->_mouseDownOffset = (_hx_tmp + this->_valueBackground->get_paddingLeft());
            	}


void HSlider_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_105__onScreenMouseMove)
HXLINE( 106)		this->super::_onScreenMouseMove(event);
HXLINE( 107)		if ((this->_mouseDownOffset == (int)-1)) {
HXLINE( 108)			return;
            		}
HXLINE( 111)		if (hx::IsNotNull( this->_activeThumb )) {
HXLINE( 112)			Float event1 = event->screenX;
HXDLIN( 112)			Float xpos = (event1 - this->_valueBackground->get_screenLeft());
HXDLIN( 112)			Float xpos1 = (xpos - this->_mouseDownOffset);
HXLINE( 113)			Float _hx_tmp = this->get_rangeEnd();
HXDLIN( 113)			if ((_hx_tmp != this->get_rangeStart())) {
HXLINE( 114)				if (hx::IsEq( this->_activeThumb,this->_rangeEndThumb )) {
HXLINE( 115)					this->set_rangeEnd(this->calcPosFromCoord(xpos1));
            				}
            				else {
HXLINE( 116)					if (hx::IsEq( this->_activeThumb,this->_rangeStartThumb )) {
HXLINE( 117)						this->set_rangeStart(this->calcPosFromCoord(xpos1));
            					}
            				}
            			}
            			else {
HXLINE( 120)				this->set_pos(this->calcPosFromCoord(xpos1));
            			}
            		}
            		else {
HXLINE( 123)			Float diff = this->get_rangeEnd();
HXDLIN( 123)			Float diff1 = (diff - this->get_rangeStart());
HXLINE( 124)			Float xpos2 = (event->screenX - this->_mouseDownOffset);
HXLINE( 125)			this->_activeThumb = this->_rangeStartThumb;
HXLINE( 126)			Float start = (xpos2 - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN( 126)			Float start1 = this->calcPosFromCoord((start - this->_valueBackground->get_paddingLeft()));
HXLINE( 127)			this->_activeThumb = null();
HXLINE( 129)			if (((start1 + diff1) > this->get_max())) {
HXLINE( 130)				return;
            			}
HXLINE( 133)			Float end = (start1 + diff1);
HXLINE( 134)			this->setRange(start1,end);
            		}
            	}


Float HSlider_obj::calcPosFromCoord(Float xpos){
            	HX_STACKFRAME(&_hx_pos_1b06630b7693d7c6_141_calcPosFromCoord)
HXLINE( 142)		Float minX = -(((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXLINE( 143)		Float maxX = this->get_layout()->get_usableWidth();
HXDLIN( 143)		Float maxX1 = (maxX - ((Float)this->_activeThumb->get_componentWidth() / (Float)(int)2));
HXDLIN( 143)		 ::Dynamic maxX2 = this->_valueBackground->get_paddingLeft();
HXDLIN( 143)		Float maxX3 = (maxX1 - (maxX2 + this->_valueBackground->get_paddingRight()));
HXLINE( 145)		if ((xpos < minX)) {
HXLINE( 146)			xpos = minX;
            		}
            		else {
HXLINE( 147)			if ((xpos > maxX3)) {
HXLINE( 148)				xpos = maxX3;
            			}
            		}
HXLINE( 151)		Float ucx = this->get_layout()->get_usableWidth();
HXDLIN( 151)		 ::Dynamic ucx1 = this->_valueBackground->get_paddingLeft();
HXDLIN( 151)		Float ucx2 = (ucx - (ucx1 + this->_valueBackground->get_paddingRight()));
HXLINE( 153)		Float m = this->get_max();
HXDLIN( 153)		Float m1 = (m - this->get_min());
HXLINE( 154)		Float v = (xpos - minX);
HXLINE( 155)		Float newValue = this->get_min();
HXDLIN( 155)		Float newValue1 = (newValue + (((Float)v / (Float)ucx2) * m1));
HXLINE( 156)		return newValue1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HSlider_obj,calcPosFromCoord,return )

 ::haxe::ui::core::Component HSlider_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_ceb062215bf09a9e_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::HSlider c = ( ( ::haxe::ui::components::HSlider)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component HSlider_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ceb062215bf09a9e_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::HSlider_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HSlider_obj > HSlider_obj::__new() {
	hx::ObjectPtr< HSlider_obj > __this = new HSlider_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HSlider_obj > HSlider_obj::__alloc(hx::Ctx *_hx_ctx) {
	HSlider_obj *__this = (HSlider_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HSlider_obj), true, "haxe.ui.components.HSlider"));
	*(void **)__this = HSlider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HSlider_obj::HSlider_obj()
{
}

hx::Val HSlider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *HSlider_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HSlider_obj_sStaticStorageInfo = 0;
#endif

static ::String HSlider_obj_sMemberFields[] = {
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

static void HSlider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HSlider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HSlider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HSlider_obj::__mClass,"__mClass");
};

#endif

hx::Class HSlider_obj::__mClass;

void HSlider_obj::__register()
{
	hx::Object *dummy = new HSlider_obj;
	HSlider_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HSlider","\xc3","\x3c","\x2f","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HSlider_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HSlider_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HSlider_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HSlider_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HSlider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HSlider_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
