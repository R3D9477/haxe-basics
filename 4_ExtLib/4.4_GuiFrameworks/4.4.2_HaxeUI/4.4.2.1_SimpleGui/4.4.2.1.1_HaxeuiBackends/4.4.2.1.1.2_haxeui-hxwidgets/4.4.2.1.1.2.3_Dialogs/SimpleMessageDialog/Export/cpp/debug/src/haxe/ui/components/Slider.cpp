// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#include <haxe/ui/animation/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultMaxBehaviour
#include <haxe/ui/components/SliderDefaultMaxBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultMinBehaviour
#include <haxe/ui/components/SliderDefaultMinBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultPosBehaviour
#include <haxe/ui/components/SliderDefaultPosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultRangeEndBehaviour
#include <haxe/ui/components/SliderDefaultRangeEndBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_SliderDefaultRangeStartBehaviour
#include <haxe/ui/components/SliderDefaultRangeStartBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_573e69c1c46b704a_16_new,"haxe.ui.components.Slider","new",0xee18d3b9,"haxe.ui.components.Slider.new","haxe/ui/components/Slider.hx",16,0x55cb8456)
static const ::String _hx_array_data_09ec8347_1[] = {
	HX_("min",92,11,53,00),HX_("max",a4,0a,53,00),HX_("pos",94,5d,55,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_32_createDefaults,"haxe.ui.components.Slider","createDefaults",0xaa0548f5,"haxe.ui.components.Slider.createDefaults","haxe/ui/components/Slider.hx",32,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_43_createChildren,"haxe.ui.components.Slider","createChildren",0x6ad591a2,"haxe.ui.components.Slider.createChildren","haxe/ui/components/Slider.hx",43,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_78_destroyChildren,"haxe.ui.components.Slider","destroyChildren",0x6517b132,"haxe.ui.components.Slider.destroyChildren","haxe/ui/components/Slider.hx",78,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_102_get_value,"haxe.ui.components.Slider","get_value",0xba4167e1,"haxe.ui.components.Slider.get_value","haxe/ui/components/Slider.hx",102,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_105_set_value,"haxe.ui.components.Slider","set_value",0x9d9253ed,"haxe.ui.components.Slider.set_value","haxe/ui/components/Slider.hx",105,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_120_get_pos,"haxe.ui.components.Slider","get_pos",0x4d764a04,"haxe.ui.components.Slider.get_pos","haxe/ui/components/Slider.hx",120,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_122_set_pos,"haxe.ui.components.Slider","set_pos",0x4077db10,"haxe.ui.components.Slider.set_pos","haxe/ui/components/Slider.hx",122,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_129_animatePos,"haxe.ui.components.Slider","animatePos",0x7f1adf3a,"haxe.ui.components.Slider.animatePos","haxe/ui/components/Slider.hx",129,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_155_get_min,"haxe.ui.components.Slider","get_min",0x4d73fe02,"haxe.ui.components.Slider.get_min","haxe/ui/components/Slider.hx",155,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_157_set_min,"haxe.ui.components.Slider","set_min",0x40758f0e,"haxe.ui.components.Slider.set_min","haxe/ui/components/Slider.hx",157,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_170_get_max,"haxe.ui.components.Slider","get_max",0x4d73f714,"haxe.ui.components.Slider.get_max","haxe/ui/components/Slider.hx",170,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_172_set_max,"haxe.ui.components.Slider","set_max",0x40758820,"haxe.ui.components.Slider.set_max","haxe/ui/components/Slider.hx",172,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_185_get_rangeStart,"haxe.ui.components.Slider","get_rangeStart",0x74dcd2f5,"haxe.ui.components.Slider.get_rangeStart","haxe/ui/components/Slider.hx",185,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_187_set_rangeStart,"haxe.ui.components.Slider","set_rangeStart",0x94fcbb69,"haxe.ui.components.Slider.set_rangeStart","haxe/ui/components/Slider.hx",187,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_216_animateRangeStart,"haxe.ui.components.Slider","animateRangeStart",0xecc8f07f,"haxe.ui.components.Slider.animateRangeStart","haxe/ui/components/Slider.hx",216,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_238_get_rangeEnd,"haxe.ui.components.Slider","get_rangeEnd",0xe69787ae,"haxe.ui.components.Slider.get_rangeEnd","haxe/ui/components/Slider.hx",238,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_240_set_rangeEnd,"haxe.ui.components.Slider","set_rangeEnd",0xfb90ab22,"haxe.ui.components.Slider.set_rangeEnd","haxe/ui/components/Slider.hx",240,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_256_animateRangeEnd,"haxe.ui.components.Slider","animateRangeEnd",0x067c4eb8,"haxe.ui.components.Slider.animateRangeEnd","haxe/ui/components/Slider.hx",256,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_275_setRange,"haxe.ui.components.Slider","setRange",0xa24748c2,"haxe.ui.components.Slider.setRange","haxe/ui/components/Slider.hx",275,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_293_validateData,"haxe.ui.components.Slider","validateData",0x01499f67,"haxe.ui.components.Slider.validateData","haxe/ui/components/Slider.hx",293,0x55cb8456)
static const ::String _hx_array_data_09ec8347_22[] = {
	HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_328__onValueBackgroundMouseDown,"haxe.ui.components.Slider","_onValueBackgroundMouseDown",0x3179561f,"haxe.ui.components.Slider._onValueBackgroundMouseDown","haxe/ui/components/Slider.hx",328,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_332__onValueMouseDown,"haxe.ui.components.Slider","_onValueMouseDown",0x39e3e46d,"haxe.ui.components.Slider._onValueMouseDown","haxe/ui/components/Slider.hx",332,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_338__onRangeEndThumbMouseDown,"haxe.ui.components.Slider","_onRangeEndThumbMouseDown",0xd1706ae6,"haxe.ui.components.Slider._onRangeEndThumbMouseDown","haxe/ui/components/Slider.hx",338,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_344__onRangeStartThumbMouseDown,"haxe.ui.components.Slider","_onRangeStartThumbMouseDown",0x4835ec2d,"haxe.ui.components.Slider._onRangeStartThumbMouseDown","haxe/ui/components/Slider.hx",344,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_350__onScreenMouseMove,"haxe.ui.components.Slider","_onScreenMouseMove",0xfeb681f3,"haxe.ui.components.Slider._onScreenMouseMove","haxe/ui/components/Slider.hx",350,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_359__onScreenMouseUp,"haxe.ui.components.Slider","_onScreenMouseUp",0xa15728bd,"haxe.ui.components.Slider._onScreenMouseUp","haxe/ui/components/Slider.hx",359,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_9e6a08ec545e85fb_1_getProperty,"haxe.ui.components.Slider","getProperty",0xb7198f64,"haxe.ui.components.Slider.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_9e6a08ec545e85fb_1_setProperty,"haxe.ui.components.Slider","setProperty",0xc1869670,"haxe.ui.components.Slider.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_7d400419da0cea24_1_cloneComponent,"haxe.ui.components.Slider","cloneComponent",0xce87e2e7,"haxe.ui.components.Slider.cloneComponent","src/haxe/ui/components/Slider.hx",1,0x6221efa1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d400419da0cea24_2_self,"haxe.ui.components.Slider","self",0x6aee7613,"haxe.ui.components.Slider.self","src/haxe/ui/components/Slider.hx",2,0x6221efa1)
HX_LOCAL_STACK_FRAME(_hx_pos_573e69c1c46b704a_16_boot,"haxe.ui.components.Slider","boot",0x5fb96eb9,"haxe.ui.components.Slider.boot","haxe/ui/components/Slider.hx",16,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{

void Slider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_16_new)
HXLINE( 325)		this->_mouseDownOffset = ((Float)-1);
HXLINE( 231)		this->_rangeEnd = ((Float)0);
HXLINE( 178)		this->_rangeStart = ((Float)0);
HXLINE( 163)		this->_max = ((Float)100);
HXLINE( 148)		this->_min = ((Float)0);
HXLINE( 113)		this->_pos = ((Float)0);
HXLINE(  24)		super::__construct();
HXLINE(  25)		this->set_allowFocus(false);
HXLINE(  26)		this->_behaviourUpdateOrder = ::Array_obj< ::String >::fromData( _hx_array_data_09ec8347_1,3);
            	}

Dynamic Slider_obj::__CreateEmpty() { return new Slider_obj; }

void *Slider_obj::_hx_vtable = 0;

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Slider_obj > _hx_result = new Slider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Slider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x6a3adc11 || inClassId==(int)0x7140e8dc;
	}
}

void Slider_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_32_createDefaults)
HXLINE(  33)		this->super::createDefaults();
HXLINE(  34)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  34)		_g->set(HX_("min",92,11,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::SliderDefaultMinBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  34)		_g->set(HX_("max",a4,0a,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::SliderDefaultMaxBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  34)		_g->set(HX_("pos",94,5d,55,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::SliderDefaultPosBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  34)		_g->set(HX_("rangeStart",65,51,b6,56),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::SliderDefaultRangeStartBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  34)		_g->set(HX_("rangeEnd",1e,8a,97,c6),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::SliderDefaultRangeEndBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  34)		this->defaultBehaviours(_g);
            	}


void Slider_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_43_createChildren)
HXLINE(  44)		this->super::createChildren();
HXLINE(  46)		if (hx::IsNull( this->_valueBackground )) {
HXLINE(  47)			this->_valueBackground =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  48)			this->_valueBackground->set_id(HX_("slider-value-background",76,e1,59,fd));
HXLINE(  49)			this->_valueBackground->addClass(HX_("slider-value-background",76,e1,59,fd),null(),null());
HXLINE(  50)			this->addComponent(this->_valueBackground);
HXLINE(  51)			this->_valueBackground->registerEvent(HX_("mousedown",07,85,e9,03),this->_onValueBackgroundMouseDown_dyn());
            		}
HXLINE(  54)		if (hx::IsNull( this->_value )) {
HXLINE(  55)			this->_value =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  56)			this->_value->set_id(HX_("slider-value",05,51,e9,70));
HXLINE(  57)			this->_value->addClass(HX_("slider-value",05,51,e9,70),null(),null());
HXLINE(  61)			this->_valueBackground->addComponent(this->_value);
HXLINE(  62)			this->_value->registerEvent(HX_("mousedown",07,85,e9,03),this->_onValueMouseDown_dyn());
            		}
HXLINE(  65)		if (hx::IsNull( this->_rangeEndThumb )) {
HXLINE(  66)			this->_rangeEndThumb =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  67)			this->_rangeEndThumb->scriptAccess = false;
HXLINE(  68)			this->_rangeEndThumb->customStyle->native = false;
HXLINE(  70)			this->_rangeEndThumb->set_id(HX_("slider-range-end-button",20,b2,46,71));
HXLINE(  71)			this->_rangeEndThumb->addClass(HX_("slider-button",de,f1,66,e5),null(),null());
HXLINE(  72)			this->_rangeEndThumb->remainPressed = true;
HXLINE(  73)			this->addComponent(this->_rangeEndThumb);
HXLINE(  74)			this->_rangeEndThumb->registerEvent(HX_("mousedown",07,85,e9,03),this->_onRangeEndThumbMouseDown_dyn());
            		}
            	}


void Slider_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_78_destroyChildren)
HXLINE(  79)		if (hx::IsNotNull( this->_valueBackground )) {
HXLINE(  80)			if (hx::IsNotNull( this->_value )) {
HXLINE(  81)				this->_valueBackground->removeComponent(this->_value,null(),null());
HXLINE(  82)				this->_value = null();
            			}
HXLINE(  84)			this->removeComponent(this->_valueBackground,null(),null());
HXLINE(  85)			this->_valueBackground = null();
            		}
HXLINE(  88)		if (hx::IsNotNull( this->_rangeEndThumb )) {
HXLINE(  89)			this->removeComponent(this->_rangeEndThumb,null(),null());
HXLINE(  90)			this->_rangeEndThumb = null();
            		}
HXLINE(  92)		if (hx::IsNotNull( this->_rangeStartThumb )) {
HXLINE(  93)			this->removeComponent(this->_rangeStartThumb,null(),null());
HXLINE(  94)			this->_rangeStartThumb = null();
            		}
            	}


 ::haxe::ui::util::VariantType Slider_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_102_get_value)
HXDLIN( 102)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
            	}


 ::haxe::ui::util::VariantType Slider_obj::set_value( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_105_set_value)
HXLINE( 106)		this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
HXLINE( 107)		return value;
            	}


Float Slider_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_120_get_pos)
HXDLIN( 120)		return this->_pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_pos,return )

Float Slider_obj::set_pos(Float value){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_122_set_pos)
HXLINE( 123)		this->_pos = value;
HXLINE( 124)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_pos,return )

void Slider_obj::animatePos(Float value, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_129_animatePos)
HXLINE( 130)		if ((this->get_animatable() == false)) {
HXLINE( 131)			this->set_pos(value);
HXLINE( 132)			return;
            		}
HXLINE( 135)		::String animationId = this->getClassProperty(HX_("animation.pos",2a,ef,2f,26));
HXLINE( 136)		if (hx::IsNull( animationId )) {
HXLINE( 137)			this->set_pos(value);
HXLINE( 138)			return;
            		}
HXLINE( 141)		if (hx::IsNotNull( this->_currentAnimation )) {
HXLINE( 142)			this->_currentAnimation->stop();
            		}
HXLINE( 145)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 145)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 145)		_g->set(HX_("target",51,f3,ec,86),hx::ObjectPtr<OBJ_>(this));
HXDLIN( 145)		 ::haxe::ds::StringMap _hx_tmp1 = _g;
HXDLIN( 145)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 145)		_g1->set(HX_("pos",94,5d,55,00),value);
HXDLIN( 145)		this->_currentAnimation = _hx_tmp->run(animationId,_hx_tmp1,_g1,callback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Slider_obj,animatePos,(void))

Float Slider_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_155_get_min)
HXDLIN( 155)		return this->_min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_min,return )

Float Slider_obj::set_min(Float value){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_157_set_min)
HXLINE( 158)		this->_min = value;
HXLINE( 159)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 160)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_min,return )

Float Slider_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_170_get_max)
HXDLIN( 170)		return this->_max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_max,return )

Float Slider_obj::set_max(Float value){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_172_set_max)
HXLINE( 173)		this->_max = value;
HXLINE( 174)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 175)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_max,return )

Float Slider_obj::get_rangeStart(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_185_get_rangeStart)
HXDLIN( 185)		return this->_rangeStart;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_rangeStart,return )

Float Slider_obj::set_rangeStart(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_187_set_rangeStart)
HXLINE( 188)		if (this->_ready) {
HXLINE( 189)			if ((value < this->_min)) {
HXLINE( 190)				value = this->_min;
            			}
HXLINE( 192)			if ((value >= (this->_rangeEnd - (int)1))) {
HXLINE( 193)				value = (this->_rangeEnd - (int)1);
            			}
            		}
HXLINE( 196)		if ((value != this->_rangeStart)) {
HXLINE( 197)			if (hx::IsNull( this->_rangeStartThumb )) {
HXLINE( 198)				this->_rangeStartThumb =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 199)				this->_rangeStartThumb->scriptAccess = false;
HXLINE( 200)				this->_rangeStartThumb->set_native(false);
HXLINE( 202)				this->_rangeStartThumb->set_id(HX_("slider-range-start-button",79,97,9f,45));
HXLINE( 203)				this->_rangeStartThumb->addClass(HX_("slider-button",de,f1,66,e5),null(),null());
HXLINE( 204)				this->_rangeStartThumb->remainPressed = true;
HXLINE( 205)				this->_rangeStartThumb->registerEvent(HX_("mousedown",07,85,e9,03),this->_onRangeStartThumbMouseDown_dyn());
HXLINE( 206)				this->addComponent(this->_rangeStartThumb);
            			}
HXLINE( 209)			this->_rangeStart = value;
HXLINE( 210)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 213)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_rangeStart,return )

void Slider_obj::animateRangeStart(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_216_animateRangeStart)
HXLINE( 217)		if ((this->get_animatable() == false)) {
HXLINE( 218)			this->set_rangeStart(value);
HXLINE( 219)			return;
            		}
HXLINE( 222)		::String animationId = this->getClassProperty(HX_("animation.rangeStart",8f,be,4e,16));
HXLINE( 223)		if (hx::IsNull( animationId )) {
HXLINE( 224)			this->set_rangeStart(value);
HXLINE( 225)			return;
            		}
HXLINE( 228)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 228)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 228)		_g->set(HX_("target",51,f3,ec,86),hx::ObjectPtr<OBJ_>(this));
HXDLIN( 228)		 ::haxe::ds::StringMap _hx_tmp1 = _g;
HXDLIN( 228)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 228)		_g1->set(HX_("rangeStart",65,51,b6,56),value);
HXDLIN( 228)		_hx_tmp->run(animationId,_hx_tmp1,_g1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,animateRangeStart,(void))

Float Slider_obj::get_rangeEnd(){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_238_get_rangeEnd)
HXDLIN( 238)		return this->_rangeEnd;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_rangeEnd,return )

Float Slider_obj::set_rangeEnd(Float value){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_240_set_rangeEnd)
HXLINE( 241)		if (this->_ready) {
HXLINE( 242)			if ((value > this->_max)) {
HXLINE( 243)				value = this->_max;
            			}
HXLINE( 245)			if ((value <= (this->_rangeStart + (int)1))) {
HXLINE( 246)				value = (this->_rangeStart + (int)1);
            			}
            		}
HXLINE( 249)		if ((value != this->_rangeEnd)) {
HXLINE( 250)			this->_rangeEnd = value;
HXLINE( 251)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 253)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_rangeEnd,return )

void Slider_obj::animateRangeEnd(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_256_animateRangeEnd)
HXLINE( 257)		if ((this->get_animatable() == false)) {
HXLINE( 258)			this->set_rangeEnd(value);
HXLINE( 259)			return;
            		}
HXLINE( 262)		::String animationId = this->getClassProperty(HX_("animation.rangeEnd",c8,78,57,e3));
HXLINE( 263)		if (hx::IsNull( animationId )) {
HXLINE( 264)			this->set_rangeEnd(value);
HXLINE( 265)			return;
            		}
HXLINE( 268)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 268)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 268)		_g->set(HX_("target",51,f3,ec,86),hx::ObjectPtr<OBJ_>(this));
HXDLIN( 268)		 ::haxe::ds::StringMap _hx_tmp1 = _g;
HXDLIN( 268)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 268)		_g1->set(HX_("rangeEnd",1e,8a,97,c6),value);
HXDLIN( 268)		_hx_tmp->run(animationId,_hx_tmp1,_g1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,animateRangeEnd,(void))

void Slider_obj::setRange(Float start,Float end){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_275_setRange)
HXLINE( 276)		bool invalidate = false;
HXLINE( 277)		if ((start != this->_rangeStart)) {
HXLINE( 278)			this->_rangeStart = start;
HXLINE( 279)			invalidate = true;
            		}
HXLINE( 281)		if ((end != this->_rangeEnd)) {
HXLINE( 282)			this->_rangeEnd = end;
HXLINE( 283)			invalidate = true;
            		}
HXLINE( 285)		if ((invalidate == true)) {
HXLINE( 286)			this->invalidate(HX_("data",2a,56,63,42));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Slider_obj,setRange,(void))

void Slider_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_573e69c1c46b704a_293_validateData)
HXLINE( 294)		bool notifyChange = false;
HXLINE( 296)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("min",92,11,53,00));
HXDLIN( 296)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp),this->_min )) {
HXLINE( 297)			this->behaviourSet(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_min));
            		}
HXLINE( 299)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("max",a4,0a,53,00));
HXDLIN( 299)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp1),this->_max )) {
HXLINE( 300)			this->behaviourSet(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_max));
            		}
HXLINE( 302)		 ::haxe::ui::util::VariantType _hx_tmp2 = this->behaviourGet(HX_("rangeEnd",1e,8a,97,c6));
HXDLIN( 302)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp2),this->_rangeEnd )) {
HXLINE( 303)			this->behaviourSet(HX_("rangeEnd",1e,8a,97,c6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_rangeEnd));
HXLINE( 304)			notifyChange = true;
            		}
HXLINE( 306)		 ::haxe::ui::util::VariantType _hx_tmp3 = this->behaviourGet(HX_("rangeStart",65,51,b6,56));
HXDLIN( 306)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp3),this->_rangeStart )) {
HXLINE( 307)			this->behaviourSet(HX_("rangeStart",65,51,b6,56),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_rangeStart));
HXLINE( 308)			notifyChange = true;
            		}
HXLINE( 310)		 ::haxe::ui::util::VariantType _hx_tmp4 = this->behaviourGet(HX_("pos",94,5d,55,00));
HXDLIN( 310)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp4),this->_pos )) {
HXLINE( 311)			this->behaviourSet(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_pos));
HXLINE( 312)			notifyChange = true;
            		}
HXLINE( 315)		if ((notifyChange == true)) {
HXLINE( 316)			 ::haxe::ui::core::UIEvent changeEvent =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 317)			this->dispatch(changeEvent);
HXLINE( 318)			this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_09ec8347_22,1));
            		}
            	}


void Slider_obj::_onValueBackgroundMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_328__onValueBackgroundMouseDown)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onValueBackgroundMouseDown,(void))

void Slider_obj::_onValueMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_332__onValueMouseDown)
HXLINE( 333)		this->_activeThumb = null();
HXLINE( 334)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 335)		this->get_screen()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onValueMouseDown,(void))

void Slider_obj::_onRangeEndThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_338__onRangeEndThumbMouseDown)
HXLINE( 339)		this->_activeThumb = this->_rangeEndThumb;
HXLINE( 340)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 341)		this->get_screen()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onRangeEndThumbMouseDown,(void))

void Slider_obj::_onRangeStartThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_344__onRangeStartThumbMouseDown)
HXLINE( 345)		this->_activeThumb = this->_rangeStartThumb;
HXLINE( 346)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 347)		this->get_screen()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onRangeStartThumbMouseDown,(void))

void Slider_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_350__onScreenMouseMove)
HXLINE( 351)		if ((this->_mouseDownOffset == (int)-1)) {
HXLINE( 352)			return;
            		}
HXLINE( 354)		bool _hx_tmp;
HXDLIN( 354)		if (hx::IsNotNull( this->_currentAnimation )) {
HXLINE( 354)			_hx_tmp = (event->buttonDown == true);
            		}
            		else {
HXLINE( 354)			_hx_tmp = false;
            		}
HXDLIN( 354)		if (_hx_tmp) {
HXLINE( 355)			this->_currentAnimation->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseMove,(void))

void Slider_obj::_onScreenMouseUp( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_359__onScreenMouseUp)
HXLINE( 360)		this->_mouseDownOffset = (int)-1;
HXLINE( 361)		this->_activeThumb = null();
HXLINE( 362)		this->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 363)		this->get_screen()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseUp,(void))

 ::haxe::ui::util::VariantType Slider_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_9e6a08ec545e85fb_1_getProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_max());
HXDLIN(   1)			goto _hx_goto_29;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_min());
HXDLIN(   1)			goto _hx_goto_29;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
HXDLIN(   1)			goto _hx_goto_29;
            		}
            		if (  (_hx_switch_0==HX_("rangeEnd",1e,8a,97,c6)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_rangeEnd());
HXDLIN(   1)			goto _hx_goto_29;
            		}
            		if (  (_hx_switch_0==HX_("rangeStart",65,51,b6,56)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_rangeStart());
HXDLIN(   1)			goto _hx_goto_29;
            		}
            		_hx_goto_29:;
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType Slider_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_9e6a08ec545e85fb_1_setProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_max(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_31;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_31;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_31;
            		}
            		if (  (_hx_switch_0==HX_("rangeEnd",1e,8a,97,c6)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_rangeEnd(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_31;
            		}
            		if (  (_hx_switch_0==HX_("rangeStart",65,51,b6,56)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_rangeStart(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_31;
            		}
            		_hx_goto_31:;
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


 ::haxe::ui::core::Component Slider_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7d400419da0cea24_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Slider c = ( ( ::haxe::ui::components::Slider)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_pos(this->get_pos());
HXLINE(   4)		c->set_min(this->get_min());
HXLINE(   5)		c->set_max(this->get_max());
HXLINE(   6)		c->set_rangeStart(this->get_rangeStart());
HXLINE(   7)		c->set_rangeEnd(this->get_rangeEnd());
HXLINE(   8)		return c;
            	}


 ::haxe::ui::core::Component Slider_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_7d400419da0cea24_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Slider_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Slider_obj > Slider_obj::__new() {
	hx::ObjectPtr< Slider_obj > __this = new Slider_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Slider_obj > Slider_obj::__alloc(hx::Ctx *_hx_ctx) {
	Slider_obj *__this = (Slider_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Slider_obj), true, "haxe.ui.components.Slider"));
	*(void **)__this = Slider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(_valueBackground,"_valueBackground");
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_rangeStartThumb,"_rangeStartThumb");
	HX_MARK_MEMBER_NAME(_rangeEndThumb,"_rangeEndThumb");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_currentAnimation,"_currentAnimation");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_rangeStart,"_rangeStart");
	HX_MARK_MEMBER_NAME(_rangeEnd,"_rangeEnd");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_MARK_MEMBER_NAME(_activeThumb,"_activeThumb");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_valueBackground,"_valueBackground");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_rangeStartThumb,"_rangeStartThumb");
	HX_VISIT_MEMBER_NAME(_rangeEndThumb,"_rangeEndThumb");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_currentAnimation,"_currentAnimation");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_rangeStart,"_rangeStart");
	HX_VISIT_MEMBER_NAME(_rangeEnd,"_rangeEnd");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_VISIT_MEMBER_NAME(_activeThumb,"_activeThumb");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Slider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pos() ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_max() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return hx::Val( _pos ); }
		if (HX_FIELD_EQ(inName,"_min") ) { return hx::Val( _min ); }
		if (HX_FIELD_EQ(inName,"_max") ) { return hx::Val( _max ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return hx::Val( _value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return hx::Val( set_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return hx::Val( set_max_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rangeEnd") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rangeEnd() ); }
		if (HX_FIELD_EQ(inName,"setRange") ) { return hx::Val( setRange_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"_rangeEnd") ) { return hx::Val( _rangeEnd ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animatePos") ) { return hx::Val( animatePos_dyn() ); }
		if (HX_FIELD_EQ(inName,"rangeStart") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rangeStart() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rangeStart") ) { return hx::Val( _rangeStart ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rangeEnd") ) { return hx::Val( get_rangeEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rangeEnd") ) { return hx::Val( set_rangeEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_activeThumb") ) { return hx::Val( _activeThumb ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rangeEndThumb") ) { return hx::Val( _rangeEndThumb ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rangeStart") ) { return hx::Val( get_rangeStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rangeStart") ) { return hx::Val( set_rangeStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"animateRangeEnd") ) { return hx::Val( animateRangeEnd_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_valueBackground") ) { return hx::Val( _valueBackground ); }
		if (HX_FIELD_EQ(inName,"_rangeStartThumb") ) { return hx::Val( _rangeStartThumb ); }
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return hx::Val( _mouseDownOffset ); }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return hx::Val( _onScreenMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentAnimation") ) { return hx::Val( _currentAnimation ); }
		if (HX_FIELD_EQ(inName,"animateRangeStart") ) { return hx::Val( animateRangeStart_dyn() ); }
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

hx::Val Slider_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_min(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_max(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rangeEnd") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rangeEnd(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rangeEnd") ) { _rangeEnd=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rangeStart") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rangeStart(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rangeStart") ) { _rangeStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_activeThumb") ) { _activeThumb=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rangeEndThumb") ) { _rangeEndThumb=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_valueBackground") ) { _valueBackground=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeStartThumb") ) { _rangeStartThumb=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentAnimation") ) { _currentAnimation=inValue.Cast<  ::haxe::ui::animation::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_valueBackground","\x40","\x71","\xc8","\xc8"));
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_rangeStartThumb","\xf2","\xd4","\x6e","\x6d"));
	outFields->push(HX_HCSTRING("_rangeEndThumb","\x59","\x0b","\x9b","\x15"));
	outFields->push(HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("_currentAnimation","\xea","\x51","\xe0","\xd6"));
	outFields->push(HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29"));
	outFields->push(HX_HCSTRING("rangeStart","\x65","\x51","\xb6","\x56"));
	outFields->push(HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e"));
	outFields->push(HX_HCSTRING("rangeEnd","\x1e","\x8a","\x97","\xc6"));
	outFields->push(HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"));
	outFields->push(HX_HCSTRING("_activeThumb","\x71","\x50","\xe1","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Slider_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(Slider_obj,_valueBackground),HX_HCSTRING("_valueBackground","\x40","\x71","\xc8","\xc8")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(Slider_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Slider_obj,_rangeStartThumb),HX_HCSTRING("_rangeStartThumb","\xf2","\xd4","\x6e","\x6d")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Slider_obj,_rangeEndThumb),HX_HCSTRING("_rangeEndThumb","\x59","\x0b","\x9b","\x15")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_pos),HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f")},
	{hx::fsObject /*::haxe::ui::animation::Animation*/ ,(int)offsetof(Slider_obj,_currentAnimation),HX_HCSTRING("_currentAnimation","\xea","\x51","\xe0","\xd6")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_min),HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_rangeStart),HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_rangeEnd),HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_mouseDownOffset),HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Slider_obj,_activeThumb),HX_HCSTRING("_activeThumb","\x71","\x50","\xe1","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Slider_obj_sStaticStorageInfo = 0;
#endif

static ::String Slider_obj_sMemberFields[] = {
	HX_HCSTRING("_valueBackground","\x40","\x71","\xc8","\xc8"),
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_rangeStartThumb","\xf2","\xd4","\x6e","\x6d"),
	HX_HCSTRING("_rangeEndThumb","\x59","\x0b","\x9b","\x15"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("_currentAnimation","\xea","\x51","\xe0","\xd6"),
	HX_HCSTRING("animatePos","\x73","\xd5","\x5f","\x80"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29"),
	HX_HCSTRING("get_rangeStart","\xae","\xd9","\xab","\xcc"),
	HX_HCSTRING("set_rangeStart","\x22","\xc2","\xcb","\xec"),
	HX_HCSTRING("animateRangeStart","\x66","\x23","\xea","\x91"),
	HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e"),
	HX_HCSTRING("get_rangeEnd","\x27","\x3e","\xb1","\x7b"),
	HX_HCSTRING("set_rangeEnd","\x9b","\x61","\xaa","\x90"),
	HX_HCSTRING("animateRangeEnd","\xdf","\x29","\xd3","\x83"),
	HX_HCSTRING("setRange","\xbb","\x0e","\x54","\xf2"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"),
	HX_HCSTRING("_activeThumb","\x71","\x50","\xe1","\xd1"),
	HX_HCSTRING("_onValueBackgroundMouseDown","\xc6","\xcf","\x7f","\xa3"),
	HX_HCSTRING("_onValueMouseDown","\x54","\x17","\x05","\xdf"),
	HX_HCSTRING("_onRangeEndThumbMouseDown","\xcd","\x5c","\xe9","\x7d"),
	HX_HCSTRING("_onRangeStartThumbMouseDown","\xd4","\x65","\x3c","\xba"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Slider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Slider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#endif

hx::Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	hx::Object *dummy = new Slider_obj;
	Slider_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Slider","\x47","\x83","\xec","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Slider_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Slider_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Slider_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Slider_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Slider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Slider_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Slider_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_573e69c1c46b704a_16_boot)
HXDLIN(  16)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("rangeEnd",1e,8a,97,c6), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("max",a4,0a,53,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(2,HX_("min",92,11,53,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(3,HX_("pos",94,5d,55,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(4,HX_("rangeStart",65,51,b6,56), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
