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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultMaxBehaviour
#include <haxe/ui/components/ScrollDefaultMaxBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultMinBehaviour
#include <haxe/ui/components/ScrollDefaultMinBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultPageSizeBehaviour
#include <haxe/ui/components/ScrollDefaultPageSizeBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ScrollDefaultPosBehaviour
#include <haxe/ui/components/ScrollDefaultPosBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_14_new,"haxe.ui.components.Scroll","new",0xa7e64ba5,"haxe.ui.components.Scroll.new","haxe/ui/components/Scroll.hx",14,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_27_createDefaults,"haxe.ui.components.Scroll","createDefaults",0xf1c64089,"haxe.ui.components.Scroll.createDefaults","haxe/ui/components/Scroll.hx",27,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_37_createChildren,"haxe.ui.components.Scroll","createChildren",0xb2968936,"haxe.ui.components.Scroll.createChildren","haxe/ui/components/Scroll.hx",37,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_91_get_value,"haxe.ui.components.Scroll","get_value",0x1bcb98cd,"haxe.ui.components.Scroll.get_value","haxe/ui/components/Scroll.hx",91,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_94_set_value,"haxe.ui.components.Scroll","set_value",0xff1c84d9,"haxe.ui.components.Scroll.set_value","haxe/ui/components/Scroll.hx",94,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_103_validateData,"haxe.ui.components.Scroll","validateData",0x083bc9fb,"haxe.ui.components.Scroll.validateData","haxe/ui/components/Scroll.hx",103,0x330a6dea)
static const ::String _hx_array_data_e14c9533_6[] = {
	HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_135_get_pos,"haxe.ui.components.Scroll","get_pos",0x035c27f0,"haxe.ui.components.Scroll.get_pos","haxe/ui/components/Scroll.hx",135,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_137_set_pos,"haxe.ui.components.Scroll","set_pos",0xf65db8fc,"haxe.ui.components.Scroll.set_pos","haxe/ui/components/Scroll.hx",137,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_154_animatePos,"haxe.ui.components.Scroll","animatePos",0x767b7cce,"haxe.ui.components.Scroll.animatePos","haxe/ui/components/Scroll.hx",154,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_176_get_min,"haxe.ui.components.Scroll","get_min",0x0359dbee,"haxe.ui.components.Scroll.get_min","haxe/ui/components/Scroll.hx",176,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_178_set_min,"haxe.ui.components.Scroll","set_min",0xf65b6cfa,"haxe.ui.components.Scroll.set_min","haxe/ui/components/Scroll.hx",178,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_197_get_max,"haxe.ui.components.Scroll","get_max",0x0359d500,"haxe.ui.components.Scroll.get_max","haxe/ui/components/Scroll.hx",197,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_199_set_max,"haxe.ui.components.Scroll","set_max",0xf65b660c,"haxe.ui.components.Scroll.set_max","haxe/ui/components/Scroll.hx",199,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_218_get_pageSize,"haxe.ui.components.Scroll","get_pageSize",0x7c0da2d4,"haxe.ui.components.Scroll.get_pageSize","haxe/ui/components/Scroll.hx",218,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_220_set_pageSize,"haxe.ui.components.Scroll","set_pageSize",0x9106c648,"haxe.ui.components.Scroll.set_pageSize","haxe/ui/components/Scroll.hx",220,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_237_get_incrementSize,"haxe.ui.components.Scroll","get_incrementSize",0x6311ebec,"haxe.ui.components.Scroll.get_incrementSize","haxe/ui/components/Scroll.hx",237,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_239_set_incrementSize,"haxe.ui.components.Scroll","set_incrementSize",0x867fc3f8,"haxe.ui.components.Scroll.set_incrementSize","haxe/ui/components/Scroll.hx",239,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_252__onDeinc,"haxe.ui.components.Scroll","_onDeinc",0xca4a1e7a,"haxe.ui.components.Scroll._onDeinc","haxe/ui/components/Scroll.hx",252,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_256__onInc,"haxe.ui.components.Scroll","_onInc",0x88d7061b,"haxe.ui.components.Scroll._onInc","haxe/ui/components/Scroll.hx",256,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_259__onThumbMouseDown,"haxe.ui.components.Scroll","_onThumbMouseDown",0x5a7bc214,"haxe.ui.components.Scroll._onThumbMouseDown","haxe/ui/components/Scroll.hx",259,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_264__onScreenMouseMove,"haxe.ui.components.Scroll","_onScreenMouseMove",0x570cd387,"haxe.ui.components.Scroll._onScreenMouseMove","haxe/ui/components/Scroll.hx",264,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_267__onScreenMouseUp,"haxe.ui.components.Scroll","_onScreenMouseUp",0x14f42d51,"haxe.ui.components.Scroll._onScreenMouseUp","haxe/ui/components/Scroll.hx",267,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_273__onMouseDown,"haxe.ui.components.Scroll","_onMouseDown",0xe8e7b624,"haxe.ui.components.Scroll._onMouseDown","haxe/ui/components/Scroll.hx",273,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_285_deincrementValue,"haxe.ui.components.Scroll","deincrementValue",0xc081539e,"haxe.ui.components.Scroll.deincrementValue","haxe/ui/components/Scroll.hx",285,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_294_incrementValue,"haxe.ui.components.Scroll","incrementValue",0xd5690f9d,"haxe.ui.components.Scroll.incrementValue","haxe/ui/components/Scroll.hx",294,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_75023b74921df955_1_getProperty,"haxe.ui.components.Scroll","getProperty",0x3442d350,"haxe.ui.components.Scroll.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_75023b74921df955_1_setProperty,"haxe.ui.components.Scroll","setProperty",0x3eafda5c,"haxe.ui.components.Scroll.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_55916fb70ef9c91b_1_cloneComponent,"haxe.ui.components.Scroll","cloneComponent",0x1648da7b,"haxe.ui.components.Scroll.cloneComponent","src/haxe/ui/components/Scroll.hx",1,0x3f60d935)
HX_LOCAL_STACK_FRAME(_hx_pos_55916fb70ef9c91b_2_self,"haxe.ui.components.Scroll","self",0x44e9eca7,"haxe.ui.components.Scroll.self","src/haxe/ui/components/Scroll.hx",2,0x3f60d935)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_14_boot,"haxe.ui.components.Scroll","boot",0x39b4e54d,"haxe.ui.components.Scroll.boot","haxe/ui/components/Scroll.hx",14,0x330a6dea)
namespace haxe{
namespace ui{
namespace components{

void Scroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_14_new)
HXLINE( 250)		this->_mouseDownOffset = ((Float)-1);
HXLINE( 230)		this->_incrementSize = ((Float)20);
HXLINE( 211)		this->_pageSize = ((Float)0);
HXLINE( 190)		this->_max = ((Float)100);
HXLINE( 169)		this->_min = ((Float)0);
HXLINE( 128)		this->_pos = ((Float)0);
HXLINE(  20)		super::__construct();
HXLINE(  21)		this->set_allowFocus(false);
            	}

Dynamic Scroll_obj::__CreateEmpty() { return new Scroll_obj; }

void *Scroll_obj::_hx_vtable = 0;

Dynamic Scroll_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Scroll_obj > _hx_result = new Scroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x419aedfd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x419aedfd;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void Scroll_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_27_createDefaults)
HXLINE(  28)		this->super::createDefaults();
HXLINE(  29)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  29)		_g->set(HX_("min",92,11,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ScrollDefaultMinBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("max",a4,0a,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ScrollDefaultMaxBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("pos",94,5d,55,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ScrollDefaultPosBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		_g->set(HX_("pageSize",b0,7a,1b,55),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ScrollDefaultPageSizeBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  29)		this->defaultBehaviours(_g);
            	}


void Scroll_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_37_createChildren)
HXLINE(  38)		if (hx::IsLessEq( this->get_componentWidth(),(int)0 )) {
HXLINE(  39)			this->set_componentWidth((int)100);
            		}
HXLINE(  41)		if (hx::IsLessEq( this->get_componentHeight(),(int)0 )) {
HXLINE(  42)			this->set_componentHeight((int)100);
            		}
HXLINE(  45)		if (hx::IsNull( this->_deincButton )) {
HXLINE(  46)			this->_deincButton =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  47)			this->_deincButton->scriptAccess = false;
HXLINE(  48)			this->_deincButton->customStyle->native = false;
HXLINE(  50)			this->_deincButton->set_id(HX_("scroll-deinc-button",02,43,8d,9e));
HXLINE(  51)			this->_deincButton->addClass(HX_("deinc",fd,9b,24,d7),null(),null());
HXLINE(  52)			this->_deincButton->set_allowFocus(false);
HXLINE(  53)			this->_deincButton->repeater = true;
HXLINE(  54)			this->_deincButton->registerEvent(HX_("click",48,7c,5e,48),this->_onDeinc_dyn());
HXLINE(  55)			this->addComponent(this->_deincButton);
            		}
HXLINE(  58)		if (hx::IsNull( this->_incButton )) {
HXLINE(  59)			this->_incButton =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  60)			this->_incButton->scriptAccess = false;
HXLINE(  61)			this->_incButton->customStyle->native = false;
HXLINE(  63)			this->_incButton->set_id(HX_("scroll-inc-button",41,40,5a,37));
HXLINE(  64)			this->_incButton->addClass(HX_("inc",de,0c,50,00),null(),null());
HXLINE(  65)			this->_incButton->set_allowFocus(false);
HXLINE(  66)			this->_incButton->repeater = true;
HXLINE(  67)			this->_incButton->registerEvent(HX_("click",48,7c,5e,48),this->_onInc_dyn());
HXLINE(  68)			this->addComponent(this->_incButton);
            		}
HXLINE(  71)		if (hx::IsNull( this->_thumb )) {
HXLINE(  72)			this->_thumb =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  73)			this->_thumb->scriptAccess = false;
HXLINE(  74)			this->_thumb->customStyle->native = false;
HXLINE(  76)			this->_thumb->set_id(HX_("scroll-thumb-button",09,22,79,34));
HXLINE(  77)			this->_thumb->addClass(HX_("thumb",16,a2,92,0f),null(),null());
HXLINE(  78)			this->_thumb->set_allowFocus(false);
HXLINE(  79)			this->_thumb->remainPressed = true;
HXLINE(  80)			this->_thumb->registerEvent(HX_("mousedown",07,85,e9,03),this->_onThumbMouseDown_dyn());
HXLINE(  81)			this->addComponent(this->_thumb);
            		}
HXLINE(  84)		this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            	}


 ::haxe::ui::util::VariantType Scroll_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_91_get_value)
HXDLIN(  91)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
            	}


 ::haxe::ui::util::VariantType Scroll_obj::set_value( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_94_set_value)
HXLINE(  95)		this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
HXLINE(  96)		return value;
            	}


void Scroll_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_103_validateData)
HXLINE( 104)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("min",92,11,53,00));
HXDLIN( 104)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp),this->_min )) {
HXLINE( 105)			this->behaviourSet(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_min));
            		}
HXLINE( 108)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("max",a4,0a,53,00));
HXDLIN( 108)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp1),this->_max )) {
HXLINE( 109)			this->behaviourSet(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_max));
            		}
HXLINE( 112)		 ::haxe::ui::util::VariantType _hx_tmp2 = this->behaviourGet(HX_("pageSize",b0,7a,1b,55));
HXDLIN( 112)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp2),this->_pageSize )) {
HXLINE( 113)			this->behaviourSet(HX_("pageSize",b0,7a,1b,55),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_pageSize));
            		}
HXLINE( 116)		 ::haxe::ui::util::VariantType _hx_tmp3 = this->behaviourGet(HX_("pos",94,5d,55,00));
HXDLIN( 116)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp3),this->_pos )) {
HXLINE( 117)			this->behaviourSet(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_pos));
HXLINE( 119)			 ::haxe::ui::core::UIEvent changeEvent =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 120)			this->dispatch(changeEvent);
HXLINE( 121)			this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_e14c9533_6,1));
            		}
            	}


Float Scroll_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_135_get_pos)
HXDLIN( 135)		return this->_pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_pos,return )

Float Scroll_obj::set_pos(Float value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_137_set_pos)
HXLINE( 138)		if (this->_ready) {
HXLINE( 139)			if ((value < this->_min)) {
HXLINE( 140)				value = this->_min;
            			}
HXLINE( 142)			if ((value > this->_max)) {
HXLINE( 143)				value = this->_max;
            			}
            		}
HXLINE( 147)		if ((value != this->_pos)) {
HXLINE( 148)			this->_pos = value;
HXLINE( 149)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 151)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_pos,return )

void Scroll_obj::animatePos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_154_animatePos)
HXLINE( 155)		if ((this->get_animatable() == false)) {
HXLINE( 156)			this->set_pos(value);
HXLINE( 157)			return;
            		}
HXLINE( 160)		::String animationId = this->getClassProperty(HX_("animation.pos",2a,ef,2f,26));
HXLINE( 161)		if (hx::IsNull( animationId )) {
HXLINE( 162)			this->set_pos(value);
HXLINE( 163)			return;
            		}
HXLINE( 166)		 ::haxe::ui::animation::AnimationManager _hx_tmp = ::haxe::ui::animation::AnimationManager_obj::get_instance();
HXDLIN( 166)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 166)		_g->set(HX_("target",51,f3,ec,86),hx::ObjectPtr<OBJ_>(this));
HXDLIN( 166)		 ::haxe::ds::StringMap _hx_tmp1 = _g;
HXDLIN( 166)		 ::haxe::ds::StringMap _g1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 166)		_g1->set(HX_("pos",94,5d,55,00),value);
HXDLIN( 166)		_hx_tmp->run(animationId,_hx_tmp1,_g1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,animatePos,(void))

Float Scroll_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_176_get_min)
HXDLIN( 176)		return this->_min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_min,return )

Float Scroll_obj::set_min(Float value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_178_set_min)
HXLINE( 179)		if ((value != this->_min)) {
HXLINE( 180)			this->_min = value;
HXLINE( 181)			if ((this->_pos < this->_min)) {
HXLINE( 182)				this->_pos = this->_min;
            			}
HXLINE( 185)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 187)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_min,return )

Float Scroll_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_197_get_max)
HXDLIN( 197)		return this->_max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_max,return )

Float Scroll_obj::set_max(Float value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_199_set_max)
HXLINE( 200)		if ((value != this->_max)) {
HXLINE( 201)			this->_max = value;
HXLINE( 202)			if ((this->_pos > this->_max)) {
HXLINE( 203)				this->_pos = this->_max;
            			}
HXLINE( 206)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 208)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_max,return )

Float Scroll_obj::get_pageSize(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_218_get_pageSize)
HXDLIN( 218)		return this->_pageSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_pageSize,return )

Float Scroll_obj::set_pageSize(Float value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_220_set_pageSize)
HXLINE( 221)		if ((value == this->_pageSize)) {
HXLINE( 222)			return value;
            		}
HXLINE( 225)		this->_pageSize = value;
HXLINE( 226)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 227)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_pageSize,return )

Float Scroll_obj::get_incrementSize(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_237_get_incrementSize)
HXDLIN( 237)		return this->_incrementSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_incrementSize,return )

Float Scroll_obj::set_incrementSize(Float value){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_239_set_incrementSize)
HXLINE( 240)		if ((this->_incrementSize == value)) {
HXLINE( 241)			return value;
            		}
HXLINE( 243)		this->_incrementSize = value;
HXLINE( 244)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_incrementSize,return )

void Scroll_obj::_onDeinc( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_252__onDeinc)
HXDLIN( 252)		this->deincrementValue();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onDeinc,(void))

void Scroll_obj::_onInc( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_256__onInc)
HXDLIN( 256)		this->incrementValue();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onInc,(void))

void Scroll_obj::_onThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_259__onThumbMouseDown)
HXLINE( 260)		this->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 261)		this->get_screen()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onThumbMouseDown,(void))

void Scroll_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_264__onScreenMouseMove)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onScreenMouseMove,(void))

void Scroll_obj::_onScreenMouseUp( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_267__onScreenMouseUp)
HXLINE( 268)		this->_mouseDownOffset = (int)-1;
HXLINE( 269)		this->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->_onScreenMouseUp_dyn());
HXLINE( 270)		this->get_screen()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->_onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onScreenMouseUp,(void))

void Scroll_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_273__onMouseDown)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,_onMouseDown,(void))

void Scroll_obj::deincrementValue(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_285_deincrementValue)
HXDLIN( 285)		Float _hx_tmp = this->get_pos();
HXDLIN( 285)		this->animatePos((_hx_tmp - this->_incrementSize));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,deincrementValue,(void))

void Scroll_obj::incrementValue(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_294_incrementValue)
HXDLIN( 294)		Float _hx_tmp = this->get_pos();
HXDLIN( 294)		this->animatePos((_hx_tmp + this->_incrementSize));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,incrementValue,(void))

 ::haxe::ui::util::VariantType Scroll_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_75023b74921df955_1_getProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("incrementSize",90,16,fc,4b)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_incrementSize());
HXDLIN(   1)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_max());
HXDLIN(   1)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_min());
HXDLIN(   1)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("pageSize",b0,7a,1b,55)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pageSize());
HXDLIN(   1)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
HXDLIN(   1)			goto _hx_goto_26;
            		}
            		_hx_goto_26:;
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType Scroll_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_75023b74921df955_1_setProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("incrementSize",90,16,fc,4b)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_incrementSize(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_max(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("pageSize",b0,7a,1b,55)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_pageSize(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_28;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_28;
            		}
            		_hx_goto_28:;
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


 ::haxe::ui::core::Component Scroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_55916fb70ef9c91b_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Scroll c = ( ( ::haxe::ui::components::Scroll)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_pos(this->get_pos());
HXLINE(   4)		c->set_min(this->get_min());
HXLINE(   5)		c->set_max(this->get_max());
HXLINE(   6)		c->set_pageSize(this->get_pageSize());
HXLINE(   7)		c->set_incrementSize(this->get_incrementSize());
HXLINE(   8)		return c;
            	}


 ::haxe::ui::core::Component Scroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_55916fb70ef9c91b_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Scroll_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Scroll_obj > Scroll_obj::__new() {
	hx::ObjectPtr< Scroll_obj > __this = new Scroll_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Scroll_obj > Scroll_obj::__alloc(hx::Ctx *_hx_ctx) {
	Scroll_obj *__this = (Scroll_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Scroll_obj), true, "haxe.ui.components.Scroll"));
	*(void **)__this = Scroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Scroll_obj::Scroll_obj()
{
}

void Scroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroll);
	HX_MARK_MEMBER_NAME(_incButton,"_incButton");
	HX_MARK_MEMBER_NAME(_deincButton,"_deincButton");
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pageSize,"_pageSize");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_incButton,"_incButton");
	HX_VISIT_MEMBER_NAME(_deincButton,"_deincButton");
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pageSize,"_pageSize");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Scroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"_thumb") ) { return hx::Val( _thumb ); }
		if (HX_FIELD_EQ(inName,"_onInc") ) { return hx::Val( _onInc_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pageSize() ); }
		if (HX_FIELD_EQ(inName,"_onDeinc") ) { return hx::Val( _onDeinc_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"_pageSize") ) { return hx::Val( _pageSize ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { return hx::Val( _incButton ); }
		if (HX_FIELD_EQ(inName,"animatePos") ) { return hx::Val( animatePos_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { return hx::Val( _deincButton ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return hx::Val( get_pageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return hx::Val( set_pageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_incrementSize() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return hx::Val( _incrementSize ); }
		if (HX_FIELD_EQ(inName,"incrementValue") ) { return hx::Val( incrementValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return hx::Val( _mouseDownOffset ); }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return hx::Val( _onScreenMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"deincrementValue") ) { return hx::Val( deincrementValue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return hx::Val( get_incrementSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return hx::Val( set_incrementSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return hx::Val( _onThumbMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return hx::Val( _onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Scroll_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pageSize(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { _pageSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { _incButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { _deincButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_incrementSize(inValue.Cast< Float >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97"));
	outFields->push(HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6"));
	outFields->push(HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"));
	outFields->push(HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c"));
	outFields->push(HX_HCSTRING("pageSize","\xb0","\x7a","\x1b","\x55"));
	outFields->push(HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"));
	outFields->push(HX_HCSTRING("incrementSize","\x90","\x16","\xfc","\x4b"));
	outFields->push(HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Scroll_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Scroll_obj,_incButton),HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Scroll_obj,_deincButton),HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(Scroll_obj,_thumb),HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_pos),HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_min),HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_pageSize),HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_incrementSize),HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,_mouseDownOffset),HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Scroll_obj_sStaticStorageInfo = 0;
#endif

static ::String Scroll_obj_sMemberFields[] = {
	HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97"),
	HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6"),
	HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("animatePos","\x73","\xd5","\x5f","\x80"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c"),
	HX_HCSTRING("get_pageSize","\xb9","\x2e","\x35","\x0a"),
	HX_HCSTRING("set_pageSize","\x2d","\x52","\x2e","\x1f"),
	HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"),
	HX_HCSTRING("get_incrementSize","\xe7","\x21","\x6c","\x52"),
	HX_HCSTRING("set_incrementSize","\xf3","\xf9","\xd9","\x75"),
	HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"),
	HX_HCSTRING("_onDeinc","\xdf","\x93","\x1a","\xa7"),
	HX_HCSTRING("_onInc","\x40","\xe8","\x4e","\x2e"),
	HX_HCSTRING("_onThumbMouseDown","\x0f","\xf8","\xd5","\x49"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("deincrementValue","\x03","\x36","\x8d","\x7b"),
	HX_HCSTRING("incrementValue","\xc2","\x1e","\x77","\xe5"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Scroll_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Scroll_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#endif

hx::Class Scroll_obj::__mClass;

void Scroll_obj::__register()
{
	hx::Object *dummy = new Scroll_obj;
	Scroll_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Scroll","\x33","\x95","\x4c","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Scroll_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Scroll_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scroll_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Scroll_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scroll_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Scroll_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_14_boot)
HXDLIN(  14)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("max",a4,0a,53,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("min",92,11,53,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(2,HX_("pos",94,5d,55,00), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(3,HX_("incrementSize",90,16,fc,4b), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(4,HX_("pageSize",b0,7a,1b,55), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
