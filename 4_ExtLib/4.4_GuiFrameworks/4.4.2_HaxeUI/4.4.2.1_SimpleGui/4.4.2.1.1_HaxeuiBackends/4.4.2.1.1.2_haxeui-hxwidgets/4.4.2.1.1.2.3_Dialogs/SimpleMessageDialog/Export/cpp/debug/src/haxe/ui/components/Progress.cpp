// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultIndeterminateBehaviour
#include <haxe/ui/components/ProgressDefaultIndeterminateBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultMaxBehaviour
#include <haxe/ui/components/ProgressDefaultMaxBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultMinBehaviour
#include <haxe/ui/components/ProgressDefaultMinBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultPosBehaviour
#include <haxe/ui/components/ProgressDefaultPosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultRangeEndBehaviour
#include <haxe/ui/components/ProgressDefaultRangeEndBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ProgressDefaultRangeStartBehaviour
#include <haxe/ui/components/ProgressDefaultRangeStartBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1fc04db343474ce8_15_new,"haxe.ui.components.Progress","new",0x9d8390c5,"haxe.ui.components.Progress.new","haxe/ui/components/Progress.hx",15,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_26_createDefaults,"haxe.ui.components.Progress","createDefaults",0x27c2cf69,"haxe.ui.components.Progress.createDefaults","haxe/ui/components/Progress.hx",26,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_39_createChildren,"haxe.ui.components.Progress","createChildren",0xe8931816,"haxe.ui.components.Progress.createChildren","haxe/ui/components/Progress.hx",39,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_51_destroyChildren,"haxe.ui.components.Progress","destroyChildren",0xed2fd03e,"haxe.ui.components.Progress.destroyChildren","haxe/ui/components/Progress.hx",51,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_61_get_value,"haxe.ui.components.Progress","get_value",0x20d975ed,"haxe.ui.components.Progress.get_value","haxe/ui/components/Progress.hx",61,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_64_set_value,"haxe.ui.components.Progress","set_value",0x042a61f9,"haxe.ui.components.Progress.set_value","haxe/ui/components/Progress.hx",64,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_79_get_pos,"haxe.ui.components.Progress","get_pos",0x9e527d10,"haxe.ui.components.Progress.get_pos","haxe/ui/components/Progress.hx",79,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_81_set_pos,"haxe.ui.components.Progress","set_pos",0x91540e1c,"haxe.ui.components.Progress.set_pos","haxe/ui/components/Progress.hx",81,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_107_get_min,"haxe.ui.components.Progress","get_min",0x9e50310e,"haxe.ui.components.Progress.get_min","haxe/ui/components/Progress.hx",107,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_109_set_min,"haxe.ui.components.Progress","set_min",0x9151c21a,"haxe.ui.components.Progress.set_min","haxe/ui/components/Progress.hx",109,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_126_get_max,"haxe.ui.components.Progress","get_max",0x9e502a20,"haxe.ui.components.Progress.get_max","haxe/ui/components/Progress.hx",126,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_128_set_max,"haxe.ui.components.Progress","set_max",0x9151bb2c,"haxe.ui.components.Progress.set_max","haxe/ui/components/Progress.hx",128,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_145_get_rangeStart,"haxe.ui.components.Progress","get_rangeStart",0xf29a5969,"haxe.ui.components.Progress.get_rangeStart","haxe/ui/components/Progress.hx",145,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_147_set_rangeStart,"haxe.ui.components.Progress","set_rangeStart",0x12ba41dd,"haxe.ui.components.Progress.set_rangeStart","haxe/ui/components/Progress.hx",147,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_168_get_rangeEnd,"haxe.ui.components.Progress","get_rangeEnd",0xf7eac922,"haxe.ui.components.Progress.get_rangeEnd","haxe/ui/components/Progress.hx",168,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_170_set_rangeEnd,"haxe.ui.components.Progress","set_rangeEnd",0x0ce3ec96,"haxe.ui.components.Progress.set_rangeEnd","haxe/ui/components/Progress.hx",170,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_192_get_indeterminate,"haxe.ui.components.Progress","get_indeterminate",0x453fc977,"haxe.ui.components.Progress.get_indeterminate","haxe/ui/components/Progress.hx",192,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_194_set_indeterminate,"haxe.ui.components.Progress","set_indeterminate",0x68ada183,"haxe.ui.components.Progress.set_indeterminate","haxe/ui/components/Progress.hx",194,0x4b000a8a)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_209_validateData,"haxe.ui.components.Progress","validateData",0x129ce0db,"haxe.ui.components.Progress.validateData","haxe/ui/components/Progress.hx",209,0x4b000a8a)
static const ::String _hx_array_data_3758ca53_19[] = {
	HX_("value",71,7f,b8,31),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f0185815a59eff62_1_getProperty,"haxe.ui.components.Progress","getProperty",0xfe5a3870,"haxe.ui.components.Progress.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_f0185815a59eff62_1_setProperty,"haxe.ui.components.Progress","setProperty",0x08c73f7c,"haxe.ui.components.Progress.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_ff1833df457e1881_1_cloneComponent,"haxe.ui.components.Progress","cloneComponent",0x4c45695b,"haxe.ui.components.Progress.cloneComponent","src/haxe/ui/components/Progress.hx",1,0xea401e95)
HX_LOCAL_STACK_FRAME(_hx_pos_ff1833df457e1881_2_self,"haxe.ui.components.Progress","self",0x38e92387,"haxe.ui.components.Progress.self","src/haxe/ui/components/Progress.hx",2,0xea401e95)
HX_LOCAL_STACK_FRAME(_hx_pos_1fc04db343474ce8_15_boot,"haxe.ui.components.Progress","boot",0x2db41c2d,"haxe.ui.components.Progress.boot","haxe/ui/components/Progress.hx",15,0x4b000a8a)
namespace haxe{
namespace ui{
namespace components{

void Progress_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_15_new)
HXLINE( 185)		this->_indeterminate = false;
HXLINE( 161)		this->_rangeEnd = ((Float)0);
HXLINE( 138)		this->_rangeStart = ((Float)0);
HXLINE( 119)		this->_max = ((Float)100);
HXLINE( 100)		this->_min = ((Float)0);
HXLINE(  72)		this->_pos = ((Float)0);
HXLINE(  19)		super::__construct();
HXLINE(  20)		this->set_allowFocus(false);
            	}

Dynamic Progress_obj::__CreateEmpty() { return new Progress_obj; }

void *Progress_obj::_hx_vtable = 0;

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Progress_obj > _hx_result = new Progress_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Progress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x0a86699d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a86699d;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void Progress_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_1fc04db343474ce8_26_createDefaults)
HXLINE(  27)		this->super::createDefaults();
HXLINE(  28)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  28)		_g->set(HX_("min",92,11,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultMinBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		_g->set(HX_("max",a4,0a,53,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultMaxBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		_g->set(HX_("pos",94,5d,55,00),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultPosBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		_g->set(HX_("rangeStart",65,51,b6,56),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultRangeStartBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		_g->set(HX_("rangeEnd",1e,8a,97,c6),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultRangeEndBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		_g->set(HX_("indeterminate",fb,f6,49,0e),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::components::ProgressDefaultIndeterminateBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		this->defaultBehaviours(_g);
            	}


void Progress_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_1fc04db343474ce8_39_createChildren)
HXDLIN(  39)		if (hx::IsNull( this->_value )) {
HXLINE(  40)			this->_value =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  41)			this->_value->set_id(HX_("progress-value",91,33,07,01));
HXLINE(  42)			this->_value->addClass(HX_("progress-value",91,33,07,01),false,null());
HXLINE(  46)			this->addComponent(this->_value);
            		}
            	}


void Progress_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_51_destroyChildren)
HXDLIN(  51)		if (hx::IsNotNull( this->_value )) {
HXLINE(  52)			this->removeComponent(this->_value,null(),null());
HXLINE(  53)			this->_value = null();
            		}
            	}


 ::haxe::ui::util::VariantType Progress_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_61_get_value)
HXDLIN(  61)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
            	}


 ::haxe::ui::util::VariantType Progress_obj::set_value( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_64_set_value)
HXLINE(  65)		this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
HXLINE(  66)		return value;
            	}


Float Progress_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_79_get_pos)
HXDLIN(  79)		return this->_pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pos,return )

Float Progress_obj::set_pos(Float value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_81_set_pos)
HXLINE(  82)		if (this->_ready) {
HXLINE(  83)			if ((value < this->_min)) {
HXLINE(  84)				value = this->_min;
            			}
HXLINE(  86)			if ((value > this->_max)) {
HXLINE(  87)				value = this->_max;
            			}
            		}
HXLINE(  91)		if ((value == this->_pos)) {
HXLINE(  92)			return value;
            		}
HXLINE(  95)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE(  96)		this->_pos = value;
HXLINE(  97)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pos,return )

Float Progress_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_107_get_min)
HXDLIN( 107)		return this->_min;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_min,return )

Float Progress_obj::set_min(Float value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_109_set_min)
HXLINE( 110)		if ((value == this->_min)) {
HXLINE( 111)			return value;
            		}
HXLINE( 114)		this->_min = value;
HXLINE( 115)		this->behaviourSet(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 116)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_min,return )

Float Progress_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_126_get_max)
HXDLIN( 126)		return this->_max;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_max,return )

Float Progress_obj::set_max(Float value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_128_set_max)
HXLINE( 129)		if ((value == this->_max)) {
HXLINE( 130)			return value;
            		}
HXLINE( 133)		this->_max = value;
HXLINE( 134)		this->behaviourSet(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 135)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_max,return )

Float Progress_obj::get_rangeStart(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_145_get_rangeStart)
HXDLIN( 145)		return this->_rangeStart;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_rangeStart,return )

Float Progress_obj::set_rangeStart(Float value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_147_set_rangeStart)
HXLINE( 148)		if (this->_ready) {
HXLINE( 149)			if ((value < this->_min)) {
HXLINE( 150)				value = this->_min;
            			}
HXLINE( 152)			if ((value >= this->_rangeEnd)) {
HXLINE( 153)				value = this->_rangeEnd;
            			}
            		}
HXLINE( 157)		this->_rangeStart = value;
HXLINE( 158)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_rangeStart,return )

Float Progress_obj::get_rangeEnd(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_168_get_rangeEnd)
HXDLIN( 168)		return this->_rangeEnd;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_rangeEnd,return )

Float Progress_obj::set_rangeEnd(Float value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_170_set_rangeEnd)
HXLINE( 171)		if (this->_ready) {
HXLINE( 172)			if ((value > this->_max)) {
HXLINE( 173)				value = this->_max;
            			}
HXLINE( 175)			if ((value <= this->_rangeStart)) {
HXLINE( 176)				value = this->_rangeStart;
            			}
            		}
HXLINE( 180)		this->_rangeEnd = value;
HXLINE( 181)		this->behaviourSet(HX_("rangeEnd",1e,8a,97,c6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 182)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_rangeEnd,return )

bool Progress_obj::get_indeterminate(){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_192_get_indeterminate)
HXDLIN( 192)		return this->_indeterminate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_indeterminate,return )

bool Progress_obj::set_indeterminate(bool value){
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_194_set_indeterminate)
HXLINE( 195)		if ((value == this->_indeterminate)) {
HXLINE( 196)			return value;
            		}
HXLINE( 199)		this->_indeterminate = value;
HXLINE( 200)		this->behaviourSet(HX_("indeterminate",fb,f6,49,0e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 202)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_indeterminate,return )

void Progress_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_1fc04db343474ce8_209_validateData)
HXLINE( 210)		Float minValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviourGet(HX_("min",92,11,53,00)));
HXLINE( 211)		Float maxValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviourGet(HX_("max",a4,0a,53,00)));
HXLINE( 212)		bool indeterminateValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviourGet(HX_("indeterminate",fb,f6,49,0e)));
HXLINE( 214)		if ((indeterminateValue != this->_indeterminate)) {
HXLINE( 215)			this->behaviourSet(HX_("indeterminate",fb,f6,49,0e),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->_indeterminate));
            		}
HXLINE( 218)		if ((minValue != this->_min)) {
HXLINE( 219)			this->behaviourSet(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_min));
            		}
HXLINE( 222)		if ((maxValue != this->_max)) {
HXLINE( 223)			this->behaviourSet(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_max));
            		}
HXLINE( 226)		if ((this->_indeterminate == false)) {
HXLINE( 227)			Float posValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviourGet(HX_("pos",94,5d,55,00)));
HXLINE( 229)			if ((posValue != this->_pos)) {
HXLINE( 230)				this->behaviourSet(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_pos));
HXLINE( 231)				 ::haxe::ui::core::UIEvent changeEvent =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 232)				this->dispatch(changeEvent);
HXLINE( 233)				this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_3758ca53_19,1));
            			}
            		}
            		else {
HXLINE( 237)			Float rangeStartValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviourGet(HX_("rangeStart",65,51,b6,56)));
HXLINE( 238)			Float rangeEndValue = ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviourGet(HX_("rangeEnd",1e,8a,97,c6)));
HXLINE( 240)			if ((rangeStartValue != this->_rangeStart)) {
HXLINE( 241)				this->behaviourSet(HX_("rangeStart",65,51,b6,56),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_rangeStart));
            			}
HXLINE( 244)			if ((rangeEndValue != this->_rangeEnd)) {
HXLINE( 245)				this->behaviourSet(HX_("rangeEnd",1e,8a,97,c6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_rangeEnd));
            			}
            		}
            	}


 ::haxe::ui::util::VariantType Progress_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_f0185815a59eff62_1_getProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("indeterminate",fb,f6,49,0e)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->get_indeterminate());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_max());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_min());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_pos());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("rangeEnd",1e,8a,97,c6)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_rangeEnd());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==HX_("rangeStart",65,51,b6,56)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_rangeStart());
HXDLIN(   1)			goto _hx_goto_20;
            		}
            		_hx_goto_20:;
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType Progress_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_f0185815a59eff62_1_setProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("indeterminate",fb,f6,49,0e)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(this->set_indeterminate(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_max(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_min(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("pos",94,5d,55,00)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_pos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("rangeEnd",1e,8a,97,c6)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_rangeEnd(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		if (  (_hx_switch_0==HX_("rangeStart",65,51,b6,56)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_rangeStart(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_22;
            		}
            		_hx_goto_22:;
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


 ::haxe::ui::core::Component Progress_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_ff1833df457e1881_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Progress c = ( ( ::haxe::ui::components::Progress)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_pos(this->get_pos());
HXLINE(   4)		c->set_min(this->get_min());
HXLINE(   5)		c->set_max(this->get_max());
HXLINE(   6)		c->set_rangeStart(this->get_rangeStart());
HXLINE(   7)		c->set_rangeEnd(this->get_rangeEnd());
HXLINE(   8)		c->set_indeterminate(this->get_indeterminate());
HXLINE(   9)		return c;
            	}


 ::haxe::ui::core::Component Progress_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ff1833df457e1881_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Progress_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Progress_obj > Progress_obj::__new() {
	hx::ObjectPtr< Progress_obj > __this = new Progress_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Progress_obj > Progress_obj::__alloc(hx::Ctx *_hx_ctx) {
	Progress_obj *__this = (Progress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Progress_obj), true, "haxe.ui.components.Progress"));
	*(void **)__this = Progress_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_rangeStart,"_rangeStart");
	HX_MARK_MEMBER_NAME(_rangeEnd,"_rangeEnd");
	HX_MARK_MEMBER_NAME(_indeterminate,"_indeterminate");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_rangeStart,"_rangeStart");
	HX_VISIT_MEMBER_NAME(_rangeEnd,"_rangeEnd");
	HX_VISIT_MEMBER_NAME(_indeterminate,"_indeterminate");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Progress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"_rangeEnd") ) { return hx::Val( _rangeEnd ); }
		break;
	case 10:
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
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indeterminate") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_indeterminate() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rangeStart") ) { return hx::Val( get_rangeStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rangeStart") ) { return hx::Val( set_rangeStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"_indeterminate") ) { return hx::Val( _indeterminate ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_indeterminate") ) { return hx::Val( get_indeterminate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_indeterminate") ) { return hx::Val( set_indeterminate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Progress_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
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
	case 13:
		if (HX_FIELD_EQ(inName,"indeterminate") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_indeterminate(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_indeterminate") ) { _indeterminate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29"));
	outFields->push(HX_HCSTRING("rangeStart","\x65","\x51","\xb6","\x56"));
	outFields->push(HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e"));
	outFields->push(HX_HCSTRING("rangeEnd","\x1e","\x8a","\x97","\xc6"));
	outFields->push(HX_HCSTRING("_indeterminate","\x3c","\xe7","\x9b","\x4c"));
	outFields->push(HX_HCSTRING("indeterminate","\xfb","\xf6","\x49","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Progress_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(Progress_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_pos),HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_min),HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_rangeStart),HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_rangeEnd),HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e")},
	{hx::fsBool,(int)offsetof(Progress_obj,_indeterminate),HX_HCSTRING("_indeterminate","\x3c","\xe7","\x9b","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Progress_obj_sStaticStorageInfo = 0;
#endif

static ::String Progress_obj_sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("_rangeStart","\x84","\x1e","\x40","\x29"),
	HX_HCSTRING("get_rangeStart","\xae","\xd9","\xab","\xcc"),
	HX_HCSTRING("set_rangeStart","\x22","\xc2","\xcb","\xec"),
	HX_HCSTRING("_rangeEnd","\x7d","\x81","\x2d","\x0e"),
	HX_HCSTRING("get_rangeEnd","\x27","\x3e","\xb1","\x7b"),
	HX_HCSTRING("set_rangeEnd","\x9b","\x61","\xaa","\x90"),
	HX_HCSTRING("_indeterminate","\x3c","\xe7","\x9b","\x4c"),
	HX_HCSTRING("get_indeterminate","\x52","\x02","\xba","\x14"),
	HX_HCSTRING("set_indeterminate","\x5e","\xda","\x27","\x38"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Progress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Progress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

hx::Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Object *dummy = new Progress_obj;
	Progress_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Progress","\x53","\xca","\x58","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Progress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Progress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Progress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Progress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Progress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Progress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Progress_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1fc04db343474ce8_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(6)
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
            				->setFixed(4,HX_("indeterminate",fb,f6,49,0e), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(5,HX_("rangeStart",65,51,b6,56), ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null())
            					->setFixed(1,HX_("bindable",d7,85,59,c3),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
