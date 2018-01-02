// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationComponentRef
#include <haxe/ui/animation/AnimationComponentRef.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationKeyFrame
#include <haxe/ui/animation/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#include <haxe/ui/animation/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterBase
#include <haxe/ui/backend/CallLaterBase.h>
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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#include <haxe/ui/containers/dialogs/DialogButton.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogOptions
#include <haxe/ui/containers/dialogs/DialogOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentClassMap
#include <haxe/ui/core/ComponentClassMap.h>
#endif
#ifndef INCLUDED_haxe_ui_core_DialogEntry
#include <haxe/ui/core/DialogEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_KeyboardEvent
#include <haxe/ui/core/KeyboardEvent.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSourceFactory
#include <haxe/ui/data/DataSourceFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#include <haxe/ui/parsers/ui/ComponentInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_AssetResourceResolver
#include <haxe/ui/parsers/ui/resolvers/AssetResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_ui_scripting_ConditionEvaluator
#include <haxe/ui/scripting/ConditionEvaluator.h>
#endif
#ifndef INCLUDED_haxe_ui_scripting_ScriptInterp
#include <haxe/ui/scripting/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Engine
#include <haxe/ui/styles/Engine.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_Theme
#include <haxe/ui/themes/Theme.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_33_build,"haxe.ui.Toolkit","build",0x3d2a890c,"haxe.ui.Toolkit.build","haxe/ui/Toolkit.hx",33,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_47_init,"haxe.ui.Toolkit","init",0xfa8c72f2,"haxe.ui.Toolkit.init","haxe/ui/Toolkit.hx",47,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_58_onKeyDown,"haxe.ui.Toolkit","onKeyDown",0xa7011720,"haxe.ui.Toolkit.onKeyDown","haxe/ui/Toolkit.hx",58,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_69_get_assets,"haxe.ui.Toolkit","get_assets",0xb69205ae,"haxe.ui.Toolkit.get_assets","haxe/ui/Toolkit.hx",69,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_74_get_screen,"haxe.ui.Toolkit","get_screen",0xb1ebf897,"haxe.ui.Toolkit.get_screen","haxe/ui/Toolkit.hx",74,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_77_componentFromAsset,"haxe.ui.Toolkit","componentFromAsset",0xe844430b,"haxe.ui.Toolkit.componentFromAsset","haxe/ui/Toolkit.hx",77,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_82_componentFromString,"haxe.ui.Toolkit","componentFromString",0x18a34756,"haxe.ui.Toolkit.componentFromString","haxe/ui/Toolkit.hx",82,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_112_buildComponentFromInfo,"haxe.ui.Toolkit","buildComponentFromInfo",0xf2d78229,"haxe.ui.Toolkit.buildComponentFromInfo","haxe/ui/Toolkit.hx",112,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_187_set_pixelsPerRem,"haxe.ui.Toolkit","set_pixelsPerRem",0xae42c469,"haxe.ui.Toolkit.set_pixelsPerRem","haxe/ui/Toolkit.hx",187,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_203_get_scaleX,"haxe.ui.Toolkit","get_scaleX",0xa6b4a7b9,"haxe.ui.Toolkit.get_scaleX","haxe/ui/Toolkit.hx",203,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_218_set_scaleX,"haxe.ui.Toolkit","set_scaleX",0xaa32462d,"haxe.ui.Toolkit.set_scaleX","haxe/ui/Toolkit.hx",218,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_229_get_scaleY,"haxe.ui.Toolkit","get_scaleY",0xa6b4a7ba,"haxe.ui.Toolkit.get_scaleY","haxe/ui/Toolkit.hx",229,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_244_set_scaleY,"haxe.ui.Toolkit","set_scaleY",0xaa32462e,"haxe.ui.Toolkit.set_scaleY","haxe/ui/Toolkit.hx",244,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_255_get_scale,"haxe.ui.Toolkit","get_scale",0xef871fbf,"haxe.ui.Toolkit.get_scale","haxe/ui/Toolkit.hx",255,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_257_set_scale,"haxe.ui.Toolkit","set_scale",0xd2d80bcb,"haxe.ui.Toolkit.set_scale","haxe/ui/Toolkit.hx",257,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_264_callLater,"haxe.ui.Toolkit","callLater",0x2f0b05ec,"haxe.ui.Toolkit.callLater","haxe/ui/Toolkit.hx",264,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_24_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",24,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_25_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",25,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_27_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",27,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_29_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",29,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_30_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",30,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_32_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",32,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_186_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",186,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_198_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",198,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_199_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",199,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_201_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",201,0xed163512)
HX_LOCAL_STACK_FRAME(_hx_pos_2ceee2b7f0fff14e_227_boot,"haxe.ui.Toolkit","boot",0xf5ecbc14,"haxe.ui.Toolkit.boot","haxe/ui/Toolkit.hx",227,0xed163512)
namespace haxe{
namespace ui{

void Toolkit_obj::__construct() { }

Dynamic Toolkit_obj::__CreateEmpty() { return new Toolkit_obj; }

void *Toolkit_obj::_hx_vtable = 0;

Dynamic Toolkit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Toolkit_obj > _hx_result = new Toolkit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Toolkit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dd8649c;
}

 ::haxe::ui::styles::Engine Toolkit_obj::styleSheet;

::String Toolkit_obj::theme;

 ::haxe::ds::StringMap Toolkit_obj::properties;

 ::haxe::ui::util::Properties Toolkit_obj::backendProperties;

 ::haxe::ui::util::GenericConfig Toolkit_obj::nativeConfig;

bool Toolkit_obj::_built;

void Toolkit_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_33_build)
HXLINE(  34)		if ((::haxe::ui::Toolkit_obj::_built == true)) {
HXLINE(  35)			return;
            		}
HXLINE(  37)		{
HXLINE(  37)			::haxe::ui::Toolkit_obj::backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.title",76,d6,8a,78),HX_("::name::",8b,d0,c3,7e));
HXLINE(  39)			::haxe::ui::Toolkit_obj::backendProperties->setProp(HX_("haxe.ui.hxwidgets.frame.fit",2f,ef,70,f7),HX_("true",4e,a7,03,4d));
            		}
HXLINE(  38)		{
HXLINE(  38)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("styles/main.css",db,29,33,58));
HXLINE(  42)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("BindingInfo",33,0e,bc,9b),HX_("haxe.ui.core.Component.BindingInfo",25,24,38,a8));
HXLINE(  43)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DeferredBindingInfo",54,2d,bd,34),HX_("haxe.ui.core.Component.DeferredBindingInfo",46,85,0b,53));
HXLINE(  47)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Component",9d,d0,26,b1),HX_("haxe.ui.core.Component",60,d3,76,13));
HXLINE(  50)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ComponentDefaultDisabledBehaviour",dd,7a,ac,e5),HX_("haxe.ui.core.Component.ComponentDefaultDisabledBehaviour",4f,16,a2,89));
HXLINE(  54)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TabBar",9e,e6,d1,b0),HX_("haxe.ui.components.TabBar",a4,2f,25,16));
HXLINE(  57)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TabBarLayout",e8,d3,ce,23),HX_("haxe.ui.components.TabBar.TabBarLayout",f2,3a,78,6c));
HXLINE(  59)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HScroll",75,b2,02,2e),HX_("haxe.ui.components.HScroll",af,4e,8f,71));
HXLINE(  60)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HScrollLayout",ff,9a,b0,16),HX_("haxe.ui.components.HScroll.HScrollLayout",00,99,53,02));
HXLINE(  65)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HSlider",89,a0,a2,56),HX_("haxe.ui.components.HSlider",c3,3c,2f,9a));
HXLINE(  68)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HSliderLayout",13,50,a4,34),HX_("haxe.ui.components.HSlider.HSliderLayout",28,37,54,13));
HXLINE(  72)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Scroll",2d,4c,f9,7b),HX_("haxe.ui.components.Scroll",33,95,4c,e1));
HXLINE(  74)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollDefaultMinBehaviour",7f,5c,27,90),HX_("haxe.ui.components.Scroll.ScrollDefaultMinBehaviour",84,33,5e,e9));
HXLINE(  78)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollDefaultMaxBehaviour",2d,b1,1c,0c),HX_("haxe.ui.components.Scroll.ScrollDefaultMaxBehaviour",32,88,53,65));
HXLINE(  80)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollDefaultPosBehaviour",3d,80,10,1c),HX_("haxe.ui.components.Scroll.ScrollDefaultPosBehaviour",42,57,47,75));
HXLINE(  82)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollDefaultPageSizeBehaviour",b9,26,c3,13),HX_("haxe.ui.components.Scroll.ScrollDefaultPageSizeBehaviour",94,bd,29,51));
HXLINE(  87)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Slider",41,3a,99,a4),HX_("haxe.ui.components.Slider",47,83,ec,09));
HXLINE(  88)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SliderDefaultMinBehaviour",eb,0a,d1,37),HX_("haxe.ui.components.Slider.SliderDefaultMinBehaviour",04,19,58,8b));
HXLINE(  93)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SliderDefaultMaxBehaviour",99,5f,c6,b3),HX_("haxe.ui.components.Slider.SliderDefaultMaxBehaviour",b2,6d,4d,07));
HXLINE(  96)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SliderDefaultPosBehaviour",a9,2e,ba,c3),HX_("haxe.ui.components.Slider.SliderDefaultPosBehaviour",c2,3c,41,17));
HXLINE( 100)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SliderDefaultRangeStartBehaviour",78,73,81,ae),HX_("haxe.ui.components.Slider.SliderDefaultRangeStartBehaviour",7f,4a,05,42));
HXLINE( 104)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SliderDefaultRangeEndBehaviour",9f,43,d7,ca),HX_("haxe.ui.components.Slider.SliderDefaultRangeEndBehaviour",e6,7a,e9,4b));
HXLINE( 112)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Switch",14,be,0d,fa),HX_("haxe.ui.components.Switch",1a,07,61,5f));
HXLINE( 113)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("SwitchLayout",de,a7,ea,3c),HX_("haxe.ui.components.Switch.SwitchLayout",b2,45,62,20));
HXLINE( 115)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextArea",fa,9a,21,1d),HX_("haxe.ui.components.TextArea",80,b1,9d,f4));
HXLINE( 118)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextAreaDefaultTextBehaviour",69,fa,a7,e2),HX_("haxe.ui.components.TextArea.TextAreaDefaultTextBehaviour",17,a2,4e,17));
HXLINE( 121)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextAreaDefaultPlaceholderBehaviour",d1,da,27,9b),HX_("haxe.ui.components.TextArea.TextAreaDefaultPlaceholderBehaviour",e3,a4,fd,af));
HXLINE( 125)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextAreaDefaultWrapBehaviour",ac,81,7c,75),HX_("haxe.ui.components.TextArea.TextAreaDefaultWrapBehaviour",5a,29,23,aa));
HXLINE( 129)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextAreaLayout",44,35,94,3e),HX_("haxe.ui.components.TextArea.TextAreaLayout",72,e8,50,ac));
HXLINE( 131)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("OptionBox",76,59,26,24),HX_("haxe.ui.components.OptionBox",30,f8,3d,d9));
HXLINE( 132)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("OptionBoxDefaultTextBehaviour",e5,5e,c5,48),HX_("haxe.ui.components.OptionBox.OptionBoxDefaultTextBehaviour",27,6a,32,29));
HXLINE( 134)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("OptionBoxDefaultSelectedBehaviour",f7,89,3d,77),HX_("haxe.ui.components.OptionBox.OptionBoxDefaultSelectedBehaviour",39,5e,fe,fa));
HXLINE( 136)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("OptionBoxValue",1b,8a,39,c8),HX_("haxe.ui.components.OptionBox.OptionBoxValue",99,fc,b0,a1));
HXLINE( 138)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Label",d4,7d,dc,02),HX_("haxe.ui.components.Label",8e,b7,db,5c));
HXLINE( 140)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("LabelLayout",9e,b7,eb,87),HX_("haxe.ui.components.Label.LabelLayout",be,3e,29,5c));
HXLINE( 141)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("LabelDefaultTextBehaviour",43,26,d5,5d),HX_("haxe.ui.components.Label.LabelDefaultTextBehaviour",63,e5,84,93));
HXLINE( 145)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DropDown",51,5c,ba,c1),HX_("haxe.ui.components.DropDown",d7,72,36,99));
HXDLIN( 145)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DropDownDefaultDataSourceBehaviour",48,1c,05,3e),HX_("haxe.ui.components.DropDown.DropDownDefaultDataSourceBehaviour",7f,ed,f5,44));
HXLINE( 147)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DropDownDefaultSelectedItemBehaviour",bf,54,aa,e1),HX_("haxe.ui.components.DropDown.DropDownDefaultSelectedItemBehaviour",b6,21,5b,23));
HXLINE( 148)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextField",ad,04,54,3b),HX_("haxe.ui.components.TextField",67,a3,6b,f0));
HXLINE( 149)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextFieldDefaultTextBehaviour",9c,8f,bd,0d),HX_("haxe.ui.components.TextField.TextFieldDefaultTextBehaviour",55,76,3d,6c));
HXLINE( 150)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextFieldDefaultIconBehaviour",50,bb,68,81),HX_("haxe.ui.components.TextField.TextFieldDefaultIconBehaviour",09,a2,e8,df));
HXLINE( 155)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextFieldDefaultPasswordBehaviour",6e,d1,b9,7a),HX_("haxe.ui.components.TextField.TextFieldDefaultPasswordBehaviour",a7,08,46,33));
HXLINE( 158)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextFieldDefaultPlaceholderBehaviour",fe,a1,2b,ee),HX_("haxe.ui.components.TextField.TextFieldDefaultPlaceholderBehaviour",65,f4,88,95));
HXLINE( 159)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TextFieldLayout",37,67,7d,6f),HX_("haxe.ui.components.TextField.TextFieldLayout",30,ec,5f,df));
HXLINE( 161)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Column",f6,c2,1f,fb),HX_("haxe.ui.components.Column",fc,0b,73,60));
HXLINE( 164)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Progress",cd,b3,dc,5f),HX_("haxe.ui.components.Progress",53,ca,58,37));
HXLINE( 168)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultMinBehaviour",df,38,47,03),HX_("haxe.ui.components.Progress.ProgressDefaultMinBehaviour",44,40,91,71));
HXLINE( 169)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultMaxBehaviour",8d,8d,3c,7f),HX_("haxe.ui.components.Progress.ProgressDefaultMaxBehaviour",f2,94,86,ed));
HXLINE( 173)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultPosBehaviour",9d,5c,30,8f),HX_("haxe.ui.components.Progress.ProgressDefaultPosBehaviour",02,64,7a,fd));
HXLINE( 175)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultRangeStartBehaviour",04,ac,ef,3f),HX_("haxe.ui.components.Progress.ProgressDefaultRangeStartBehaviour",3f,8b,eb,80));
HXLINE( 182)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultRangeEndBehaviour",2b,01,f2,51),HX_("haxe.ui.components.Progress.ProgressDefaultRangeEndBehaviour",a6,0b,fa,b8));
HXLINE( 187)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ProgressDefaultIndeterminateBehaviour",56,5f,79,d9),HX_("haxe.ui.components.Progress.ProgressDefaultIndeterminateBehaviour",fb,76,f2,b4));
HXLINE( 193)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VGrid",3c,e6,ba,b3),HX_("haxe.ui.components.VGrid",f6,1f,ba,0d));
HXLINE( 198)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HGrid",2e,c7,1e,a4),HX_("haxe.ui.components.HGrid",e8,00,1e,fe));
HXLINE( 200)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VProgress",23,fa,f5,3c),HX_("haxe.ui.components.VProgress",dd,98,0d,f2));
HXLINE( 203)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VProgressLayout",2d,d9,69,15),HX_("haxe.ui.components.VProgress.VProgressLayout",9c,1f,4b,4d));
HXLINE( 205)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Image",3b,8f,96,50),HX_("haxe.ui.components.Image",f5,c8,95,aa));
HXLINE( 207)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ImageLayout",45,50,2b,85),HX_("haxe.ui.components.Image.ImageLayout",4c,e7,ea,2e));
HXLINE( 209)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ImageDefaultResourceBehaviour",e9,8d,bf,32),HX_("haxe.ui.components.Image.ImageDefaultResourceBehaviour",b0,72,8c,12));
HXLINE( 214)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("CheckBox",43,46,8f,86),HX_("haxe.ui.components.CheckBox",c9,5c,0b,5e));
HXLINE( 218)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("CheckBoxDefaultTextBehaviour",32,60,ed,17),HX_("haxe.ui.components.CheckBox.CheckBoxDefaultTextBehaviour",f7,20,72,22));
HXLINE( 223)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("CheckBoxDefaultSelectedBehaviour",c4,b5,d4,b6),HX_("haxe.ui.components.CheckBox.CheckBoxDefaultSelectedBehaviour",09,bd,a9,b0));
HXLINE( 229)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("CheckBoxValue",2e,16,22,dd),HX_("haxe.ui.components.CheckBox.CheckBoxValue",c9,db,8b,fa));
HXLINE( 231)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VScroll",03,31,2f,74),HX_("haxe.ui.components.VScroll",3d,cd,bb,b7));
HXLINE( 233)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VScrollLayout",0d,78,37,e7),HX_("haxe.ui.components.VScroll.VScrollLayout",1c,11,3a,8a));
HXLINE( 235)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Spacer",0c,15,e9,ec),HX_("haxe.ui.components.Spacer",12,5e,3c,52));
HXLINE( 238)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VSlider",17,1f,cf,9c),HX_("haxe.ui.components.VSlider",51,bb,5b,e0));
HXLINE( 242)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VSliderLayout",21,2d,2b,05),HX_("haxe.ui.components.VSlider.VSliderLayout",44,af,3a,9b));
HXLINE( 246)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HProgress",15,3c,c2,b3),HX_("haxe.ui.components.HProgress",cf,da,d9,68));
HXLINE( 249)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HProgressLayout",9f,1c,a7,ef),HX_("haxe.ui.components.HProgress.HProgressLayout",00,29,23,a9));
HXLINE( 254)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Button",12,d6,74,0e),HX_("haxe.ui.components.Button",18,1f,c8,73));
HXLINE( 257)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ButtonDefaultTextBehaviour",81,51,2c,b8),HX_("haxe.ui.components.Button.ButtonDefaultTextBehaviour",17,2b,9b,c1));
HXLINE( 262)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ButtonDefaultIconBehaviour",35,7d,d7,2b),HX_("haxe.ui.components.Button.ButtonDefaultIconBehaviour",cb,56,46,35));
HXLINE( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ButtonLayout",5c,d2,88,c8),HX_("haxe.ui.components.Button.ButtonLayout",72,b1,af,5d));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ListView",03,be,f5,07),HX_("haxe.ui.containers.ListView",0d,a6,4d,ae));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ListViewDefaultDataSourceBehaviour",7a,54,91,51),HX_("haxe.ui.containers.ListView.ListViewDefaultDataSourceBehaviour",3b,c0,ec,5e));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollView",32,c5,bf,02),HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DefaultVScrollPosBehaviour",ab,1f,82,ea),HX_("haxe.ui.containers.ScrollView.DefaultVScrollPosBehaviour",1d,07,3f,cf));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DefaultHScrollPosBehaviour",1d,04,cb,a3),HX_("haxe.ui.containers.ScrollView.DefaultHScrollPosBehaviour",8f,eb,87,88));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ScrollViewLayout",7c,d9,df,cc),HX_("haxe.ui.containers.ScrollView.ScrollViewLayout",6e,5e,8e,0a));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Grid",e6,02,45,2f),HX_("haxe.ui.containers.Grid",f0,9d,b1,51));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("ContinuousHBox",52,9f,9f,b3),HX_("haxe.ui.containers.ContinuousHBox",dc,2a,ac,48));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Box",eb,75,32,00),HX_("haxe.ui.containers.Box",21,8a,37,a2));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TableView",73,15,b7,5d),HX_("haxe.ui.containers.TableView",29,36,4a,44));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TableViewLayout",7d,50,26,7f),HX_("haxe.ui.containers.TableView.TableViewLayout",38,8c,70,a9));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TableViewRow",67,2e,66,fc),HX_("haxe.ui.containers.TableView.TableViewRow",cc,1f,cb,97));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TabView",3a,2f,16,14),HX_("haxe.ui.containers.TabView",70,96,d8,b7));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("TabViewLayout",84,79,8d,b2),HX_("haxe.ui.containers.TabView.TabViewLayout",06,6f,3b,0d));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("RemoveAllTabs",3b,26,ee,77),HX_("haxe.ui.containers.TabView.RemoveAllTabs",bd,1b,9c,d2));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Header",ad,7d,94,31),HX_("haxe.ui.containers.Header",37,6f,a5,3c));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("HBox",a3,d2,c9,2f),HX_("haxe.ui.containers.HBox",ad,6d,36,52));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Absolute",97,8a,47,9d),HX_("haxe.ui.containers.Absolute",a1,72,9f,43));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("VBox",55,cf,0a,39),HX_("haxe.ui.containers.VBox",5f,6a,77,5b));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Stack",28,d7,38,17),HX_("haxe.ui.containers.Stack",de,e4,d3,13));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DialogButton",fa,ec,99,c2),HX_("haxe.ui.containers.dialogs.DialogButton",a7,8f,ac,ce));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Dialog",e8,78,c7,e5),HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("MessageDialog",cf,0d,4e,6f),HX_("haxe.ui.containers.dialogs.MessageDialog",82,c2,89,f3));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DialogOptions",56,4f,9e,99),HX_("haxe.ui.containers.dialogs.DialogOptions",09,04,da,1d));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("AnimationComponentRef",9a,d5,f4,ce),HX_("haxe.ui.animation.AnimationComponentRef",de,51,3a,bd));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("AnimationKeyFrame",12,2d,26,12),HX_("haxe.ui.animation.AnimationKeyFrame",56,37,df,86));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Animation",e4,ce,07,ed),HX_("haxe.ui.animation.Animation",28,f5,0a,49));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("AnimationManager",e9,4f,ae,3b),HX_("haxe.ui.animation.AnimationManager",25,3a,62,64));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Std",83,60,3f,00),HX_("Std",83,60,3f,00));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("Std",83,60,3f,00),hx::ClassOf< ::Std >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("StringTools",6a,db,63,03),HX_("StringTools",6a,db,63,03));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("StringTools",6a,db,63,03),hx::ClassOf< ::StringTools >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DialogEntry",6a,26,a5,62),HX_("haxe.ui.core.Screen.DialogEntry",65,b7,e4,f0));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("DialogEntry",6a,26,a5,62),hx::ClassOf< ::haxe::ui::core::DialogEntry >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Screen",8c,af,f1,7b),HX_("haxe.ui.core.Screen",e9,a4,c1,d3));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("Screen",8c,af,f1,7b),hx::ClassOf< ::haxe::ui::core::Screen >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("UIEvent",26,fd,9f,07),HX_("haxe.ui.core.UIEvent",29,b9,c6,85));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("UIEvent",26,fd,9f,07),hx::ClassOf< ::haxe::ui::core::UIEvent >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("MouseEvent",d5,bf,42,8a),HX_("haxe.ui.core.MouseEvent",b2,27,f5,2d));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("MouseEvent",d5,bf,42,8a),hx::ClassOf< ::haxe::ui::core::MouseEvent >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("Dialog",e8,78,c7,e5),HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("Dialog",e8,78,c7,e5),hx::ClassOf< ::haxe::ui::containers::dialogs::Dialog >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DialogOptions",56,4f,9e,99),HX_("haxe.ui.containers.dialogs.DialogOptions",09,04,da,1d));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("DialogOptions",56,4f,9e,99),hx::ClassOf< ::haxe::ui::containers::dialogs::DialogOptions >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("DialogButton",fa,ec,99,c2),HX_("haxe.ui.containers.dialogs.DialogButton",a7,8f,ac,ce));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("DialogButton",fa,ec,99,c2),hx::ClassOf< ::haxe::ui::containers::dialogs::DialogButton >());
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addClassAlias(HX_("AnimationManager",e9,4f,ae,3b),HX_("haxe.ui.animation.AnimationManager",25,3a,62,64));
HXDLIN( 266)			::haxe::ui::scripting::ScriptInterp_obj::addStaticClass(HX_("AnimationManager",e9,4f,ae,3b),hx::ClassOf< ::haxe::ui::animation::AnimationManager >());
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->getTheme(HX_("test",52,c8,f9,4c))->parent = HX_("default",c1,d8,c3,9b);
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("test",52,c8,f9,4c),HX_("haxeui-core/styles/test/main.css",5b,e4,5e,95));
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("default",c1,d8,c3,9b),HX_("haxeui-core/styles/default/main.css",ac,d6,ca,62));
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("global",63,31,b2,a7),HX_("haxeui-core/styles/global.css",88,82,c9,63));
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->getTheme(HX_("native",97,c9,1c,22))->parent = HX_("default",c1,d8,c3,9b);
HXDLIN( 266)			::haxe::ui::themes::ThemeManager_obj::get_instance()->addStyleResource(HX_("native",97,c9,1c,22),HX_("haxeui-core/styles/native/main.css",76,1e,48,cf));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.hprogress.animation.indeterminate",72,d9,1e,ca),HX_("haxe.ui.components.animation.indeterminate",4b,d0,78,a0));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.vprogress.animation.indeterminate",80,d1,81,f0),HX_("haxe.ui.components.animation.indeterminate",4b,d0,78,a0));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.hslider.animation.pos",3f,3a,e1,06),HX_("haxe.ui.components.animation.pos",e4,72,f6,1a));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.hslider.animation.rangeStart",1a,30,50,96),HX_("haxe.ui.components.animation.rangeStart",15,86,55,45));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.hslider.animation.rangeEnd",93,e1,94,0a),HX_("haxe.ui.components.animation.rangeEnd",ce,32,77,ff));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.vslider.animation.pos",4d,d5,40,be),HX_("haxe.ui.components.animation.pos",e4,72,f6,1a));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.vslider.animation.rangeStart",cc,32,ac,c4),HX_("haxe.ui.components.animation.rangeStart",15,86,55,45));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.vslider.animation.rangeEnd",c5,73,c2,24),HX_("haxe.ui.components.animation.rangeEnd",ce,32,77,ff));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.hscroll.animation.pos",2b,51,d4,13),HX_("haxe.ui.components.animation.pos",e4,72,f6,1a));
HXDLIN( 266)			::haxe::ui::Toolkit_obj::properties->set(HX_("haxe.ui.components.vscroll.animation.pos",39,ec,33,cb),HX_("haxe.ui.components.animation.pos",e4,72,f6,1a));
HXDLIN( 266)			 ::haxe::ui::animation::Animation a =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a->id = HX_("haxe.ui.components.animation.pos",e4,72,f6,1a);
HXDLIN( 266)			a->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Bounce.easeNone",4c,c9,f5,36));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf = a->addKeyFrame((int)300);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref = kf->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref->addVar(HX_("pos",94,5d,55,00),HX_("pos",94,5d,55,00));
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a->id,a);
HXDLIN( 266)			 ::haxe::ui::animation::Animation a1 =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a1->id = HX_("haxe.ui.components.animation.rangeStart",15,86,55,45);
HXDLIN( 266)			a1->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Bounce.easeOut",7a,d8,f9,62));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf1 = a1->addKeyFrame((int)300);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref1 = kf1->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref1->addVar(HX_("rangeStart",65,51,b6,56),HX_("rangeStart",65,51,b6,56));
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a1->id,a1);
HXDLIN( 266)			 ::haxe::ui::animation::Animation a2 =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a2->id = HX_("haxe.ui.components.animation.rangeEnd",ce,32,77,ff);
HXDLIN( 266)			a2->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Bounce.easeOut",7a,d8,f9,62));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf2 = a2->addKeyFrame((int)300);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref2 = kf2->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref2->addVar(HX_("rangeEnd",1e,8a,97,c6),HX_("rangeEnd",1e,8a,97,c6));
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a2->id,a2);
HXDLIN( 266)			 ::haxe::ui::animation::Animation a3 =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a3->id = HX_("haxe.ui.components.animation.indeterminate",4b,d0,78,a0);
HXDLIN( 266)			a3->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Back.easeIn",ba,da,15,92));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf3 = a3->addKeyFrame((int)0);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref3 = kf3->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref3->addProperty(HX_("rangeEnd",1e,8a,97,c6),(int)25);
HXDLIN( 266)			ref3->addProperty(HX_("rangeStart",65,51,b6,56),(int)0);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf4 = a3->addKeyFrame((int)500);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref4 = kf4->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref4->addProperty(HX_("rangeEnd",1e,8a,97,c6),(int)100);
HXDLIN( 266)			ref4->addProperty(HX_("rangeStart",65,51,b6,56),(int)75);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf5 = a3->addKeyFrame((int)1000);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref5 = kf5->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref5->addProperty(HX_("rangeEnd",1e,8a,97,c6),(int)25);
HXDLIN( 266)			ref5->addProperty(HX_("rangeStart",65,51,b6,56),(int)0);
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a3->id,a3);
HXDLIN( 266)			 ::haxe::ui::animation::Animation a4 =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a4->id = HX_("haxe.ui.components.animation.dialog.show",b3,0f,2f,20);
HXDLIN( 266)			a4->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Linear.easeNone",4f,09,c7,02));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf6 = a4->addKeyFrame((int)0);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref6 = kf6->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref6->addProperty(HX_("opacity",cb,5d,65,eb),(int)0);
HXDLIN( 266)			ref6->addVar(HX_("top",95,66,58,00),HX_("startTop",53,13,9c,42));
HXDLIN( 266)			ref6->addVar(HX_("left",07,08,b0,47),HX_("startLeft",89,81,a3,00));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf7 = a4->addKeyFrame((int)300);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref7 = kf7->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref7->addProperty(HX_("opacity",cb,5d,65,eb),(int)1);
HXDLIN( 266)			ref7->addVar(HX_("top",95,66,58,00),HX_("endTop",7a,b5,78,fa));
HXDLIN( 266)			ref7->addVar(HX_("left",07,08,b0,47),HX_("endLeft",82,c1,d4,29));
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a4->id,a4);
HXDLIN( 266)			 ::haxe::ui::animation::Animation a5 =  ::haxe::ui::animation::Animation_obj::__alloc( HX_CTX );
HXDLIN( 266)			a5->id = HX_("haxe.ui.components.animation.dialog.hide",78,6f,ea,18);
HXDLIN( 266)			a5->easing = ::haxe::ui::animation::Animation_obj::easingFromString(HX_("Linear.easeNone",4f,09,c7,02));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf8 = a5->addKeyFrame((int)0);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref8 = kf8->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref8->addProperty(HX_("opacity",cb,5d,65,eb),(int)1);
HXDLIN( 266)			ref8->addVar(HX_("top",95,66,58,00),HX_("startTop",53,13,9c,42));
HXDLIN( 266)			ref8->addVar(HX_("left",07,08,b0,47),HX_("startLeft",89,81,a3,00));
HXDLIN( 266)			 ::haxe::ui::animation::AnimationKeyFrame kf9 = a5->addKeyFrame((int)300);
HXDLIN( 266)			 ::haxe::ui::animation::AnimationComponentRef ref9 = kf9->addComponentRef(HX_("target",51,f3,ec,86));
HXDLIN( 266)			ref9->addProperty(HX_("opacity",cb,5d,65,eb),(int)0);
HXDLIN( 266)			ref9->addVar(HX_("top",95,66,58,00),HX_("endTop",7a,b5,78,fa));
HXDLIN( 266)			ref9->addVar(HX_("left",07,08,b0,47),HX_("endLeft",82,c1,d4,29));
HXDLIN( 266)			::haxe::ui::animation::AnimationManager_obj::get_instance()->registerAnimation(a5->id,a5);
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("label",f4,0d,af,6f),HX_("haxe.ui.components.Label",8e,b7,db,5c));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("vslider",17,83,e9,9a),HX_("haxe.ui.components.VSlider",51,bb,5b,e0));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("scrollview",f2,94,35,21),HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("messagedialog",cf,49,c9,f2),HX_("haxe.ui.containers.dialogs.MessageDialog",82,c2,89,f3));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("text",ad,cc,f9,4c),HX_("haxe.ui.components.Label",8e,b7,db,5c));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("vprogress",23,5e,71,c1),HX_("haxe.ui.components.VProgress",dd,98,0d,f2));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("tabbar",9e,ba,55,7c),HX_("haxe.ui.components.TabBar",a4,2f,25,16));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("absolute",77,ce,95,c3),HX_("haxe.ui.containers.Absolute",a1,72,9f,43));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("image",5b,1f,69,bd),HX_("haxe.ui.components.Image",f5,c8,95,aa));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("optionboxvalue",fb,c9,04,b1),HX_("haxe.ui.components.OptionBox.OptionBoxValue",99,fc,b0,a1));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("listview",c3,d5,6a,43),HX_("haxe.ui.containers.ListView",0d,a6,4d,ae));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("hslider",89,04,bd,54),HX_("haxe.ui.components.HSlider",c3,3c,2f,9a));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("vbox",55,eb,49,4e),HX_("haxe.ui.containers.VBox",5f,6a,77,5b));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("itemrenderer",56,55,53,bd),HX_("haxe.ui.core.ItemRenderer",b3,36,19,22));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("continuoushbox",32,27,89,1e),HX_("haxe.ui.containers.ContinuousHBox",dc,2a,ac,48));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("component",bd,f0,53,0f),HX_("haxe.ui.core.Component",60,d3,76,13));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("tableview",73,09,0b,d1),HX_("haxe.ui.containers.TableView",29,36,4a,44));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("header",8d,09,00,fd),HX_("haxe.ui.containers.Header",37,6f,a5,3c));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("hbox",a3,ee,08,45),HX_("haxe.ui.containers.HBox",ad,6d,36,52));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("hgrid",2e,2b,18,26),HX_("haxe.ui.components.HGrid",e8,00,1e,fe));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("textfield",ed,b4,53,06),HX_("haxe.ui.components.TextField",67,a3,6b,f0));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("column",d6,4e,8b,c6),HX_("haxe.ui.components.Column",fc,0b,73,60));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("checkbox",43,d2,f5,ac),HX_("haxe.ui.components.CheckBox",c9,5c,0b,5e));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("spacer",ec,a0,54,b8),HX_("haxe.ui.components.Spacer",12,5e,3c,52));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("tableviewrow",87,02,1b,67),HX_("haxe.ui.containers.TableView.TableViewRow",cc,1f,cb,97));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("vscroll",03,95,49,72),HX_("haxe.ui.components.VScroll",3d,cd,bb,b7));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("optionbox",b6,c1,6b,82),HX_("haxe.ui.components.OptionBox",30,f8,3d,d9));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("box",0b,be,4a,00),HX_("haxe.ui.containers.Box",21,8a,37,a2));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("hscroll",75,16,1d,2c),HX_("haxe.ui.components.HScroll",af,4e,8f,71));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("checkboxvalue",4e,9a,52,28),HX_("haxe.ui.components.CheckBox.CheckBoxValue",c9,db,8b,fa));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("hprogress",15,a0,3d,38),HX_("haxe.ui.components.HProgress",cf,da,d9,68));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("progress",ad,f7,2a,86),HX_("haxe.ui.components.Progress",53,ca,58,37));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("vgrid",3c,4a,b4,35),HX_("haxe.ui.components.VGrid",f6,1f,ba,0d));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("grid",c6,d6,6b,44),HX_("haxe.ui.containers.Grid",f0,9d,b1,51));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("tabview",3a,db,eb,5b),HX_("haxe.ui.containers.TabView",70,96,d8,b7));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("stack",48,67,0b,84),HX_("haxe.ui.containers.Stack",de,e4,d3,13));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("slider",21,c6,04,70),HX_("haxe.ui.components.Slider",47,83,ec,09));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("dropdown",11,74,2f,fd),HX_("haxe.ui.components.DropDown",d7,72,36,99));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("textarea",ba,b2,96,58),HX_("haxe.ui.components.TextArea",80,b1,9d,f4));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("basicitemrenderer",04,cd,79,17),HX_("haxe.ui.core.BasicItemRenderer",e7,92,c8,1d));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("scroll",0d,d8,64,47),HX_("haxe.ui.components.Scroll",33,95,4c,e1));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("button",f2,61,e0,d9),HX_("haxe.ui.components.Button",18,1f,c8,73));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("dialog",c8,04,33,b1),HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3));
HXDLIN( 266)			::haxe::ui::core::ComponentClassMap_obj::_hx_register(HX_("switch",f4,49,79,c5),HX_("haxe.ui.components.Switch",1a,07,61,5f));
            		}
HXLINE(  39)		{
HXLINE(  39)			 ::haxe::ui::util::GenericConfig s1 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE(  42)			s1->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Button",18,1f,c8,73));
HXDLIN(  42)			s1->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Button",0f,d0,5e,a5));
HXLINE(  43)			s1->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN(  43)			 ::haxe::ui::util::GenericConfig s2 = s1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  47)			s2->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN(  47)			s2->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE(  49)			 ::haxe::ui::util::GenericConfig s21 = s1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  50)			s21->values->set(HX_("id",db,5b,00,00),HX_("icon",79,e7,b2,45));
HXLINE(  51)			s21->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXLINE(  53)			 ::haxe::ui::util::GenericConfig s22 = s1->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  54)			s22->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN(  54)			s22->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE(  58)			 ::haxe::ui::util::GenericConfig s23 = s1->addSection(HX_("size",c1,a0,53,4c));
HXDLIN(  58)			s23->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE(  60)			s23->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN(  60)			 ::haxe::ui::util::GenericConfig s11 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE(  62)			s11->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Label",8e,b7,db,5c));
HXLINE(  63)			s11->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticText",2b,24,1f,34));
HXLINE(  68)			s11->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN(  68)			 ::haxe::ui::util::GenericConfig s24 = s11->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  69)			s24->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXLINE(  72)			s24->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE(  73)			 ::haxe::ui::util::GenericConfig s25 = s11->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  74)			s25->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXLINE(  77)			s25->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE(  78)			 ::haxe::ui::util::GenericConfig s26 = s11->addSection(HX_("size",c1,a0,53,4c));
HXDLIN(  78)			s26->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE(  79)			s26->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE(  82)			 ::haxe::ui::util::GenericConfig s12 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN(  82)			s12->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.CheckBox",c9,5c,0b,5e));
HXDLIN(  82)			s12->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.CheckBox",80,79,69,27));
HXDLIN(  82)			s12->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE(  83)			 ::haxe::ui::util::GenericConfig s27 = s12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  84)			s27->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXLINE(  85)			s27->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE(  88)			 ::haxe::ui::util::GenericConfig s28 = s12->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN(  88)			s28->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXLINE(  89)			s28->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE(  93)			 ::haxe::ui::util::GenericConfig s29 = s12->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE(  94)			s29->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXLINE(  95)			s29->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE(  96)			 ::haxe::ui::util::GenericConfig s210 = s12->addSection(HX_("size",c1,a0,53,4c));
HXLINE(  99)			s210->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 100)			s210->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 100)			 ::haxe::ui::util::GenericConfig s13 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 103)			s13->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.OptionBox",30,f8,3d,d9));
HXLINE( 104)			s13->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.RadioButton",10,9e,50,d7));
HXLINE( 107)			s13->values->set(HX_("constructor",fa,2c,c5,97),HX_("null, $style",88,15,7c,33));
HXLINE( 109)			s13->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 112)			 ::haxe::ui::util::GenericConfig s211 = s13->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 112)			s211->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXDLIN( 112)			s211->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 113)			 ::haxe::ui::util::GenericConfig s212 = s13->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 114)			s212->values->set(HX_("id",db,5b,00,00),HX_("selected",5b,2a,6d,b1));
HXLINE( 115)			s212->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 117)			 ::haxe::ui::util::GenericConfig s213 = s13->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 118)			s213->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXLINE( 119)			s213->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 122)			 ::haxe::ui::util::GenericConfig s214 = s13->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 123)			s214->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 124)			s214->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE( 125)			 ::haxe::ui::util::GenericConfig s14 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 125)			s14->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.TextField",67,a3,6b,f0));
HXLINE( 128)			s14->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.TextCtrl",55,cb,4f,bf));
HXLINE( 129)			s14->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 130)			 ::haxe::ui::util::GenericConfig s215 = s14->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 130)			s215->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXLINE( 131)			s215->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 132)			 ::haxe::ui::util::GenericConfig s216 = s14->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 133)			s216->values->set(HX_("id",db,5b,00,00),HX_("password",1b,23,d0,48));
HXDLIN( 133)			s216->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPassword",30,af,66,40));
HXLINE( 134)			 ::haxe::ui::util::GenericConfig s217 = s14->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 135)			s217->values->set(HX_("id",db,5b,00,00),HX_("placeholder",73,73,f3,ba));
HXDLIN( 135)			s217->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.TextCtrlPlaceholder",7e,e2,dd,bc));
HXLINE( 136)			 ::haxe::ui::util::GenericConfig s218 = s14->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 137)			s218->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 137)			s218->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 138)			 ::haxe::ui::util::GenericConfig s219 = s14->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 140)			s219->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 141)			s219->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 141)			 ::haxe::ui::util::GenericConfig s15 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 142)			s15->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.TextArea",80,b1,9d,f4));
HXLINE( 143)			s15->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.TextCtrl",55,cb,4f,bf));
HXLINE( 145)			s15->values->set(HX_("constructor",fa,2c,c5,97),HX_("null, $style",88,15,7c,33));
HXDLIN( 145)			s15->values->set(HX_("style",31,a5,1d,84),HX_("TextCtrlStyle.MULTILINE, TextCtrlStyle.HSCROLL",d4,7e,84,45));
HXLINE( 146)			s15->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 146)			 ::haxe::ui::util::GenericConfig s220 = s15->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 146)			s220->values->set(HX_("id",db,5b,00,00),HX_("text",ad,cc,f9,4c));
HXLINE( 147)			s220->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlLabel",d4,fa,50,cb));
HXLINE( 148)			 ::haxe::ui::util::GenericConfig s221 = s15->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 148)			s221->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 148)			s221->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 149)			 ::haxe::ui::util::GenericConfig s222 = s15->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 149)			s222->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 150)			s222->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 150)			 ::haxe::ui::util::GenericConfig s16 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 153)			s16->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HProgress",cf,da,d9,68));
HXLINE( 154)			s16->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 154)			s16->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXLINE( 155)			s16->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 156)			 ::haxe::ui::util::GenericConfig s223 = s16->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 156)			s223->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXLINE( 158)			s223->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 158)			 ::haxe::ui::util::GenericConfig s224 = s16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 159)			s224->values->set(HX_("id",db,5b,00,00),HX_("indeterminate",fb,f6,49,0e));
HXDLIN( 159)			s224->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlPulse",f9,33,2b,26));
HXLINE( 160)			 ::haxe::ui::util::GenericConfig s225 = s16->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 161)			s225->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 161)			s225->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 164)			 ::haxe::ui::util::GenericConfig s226 = s16->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 164)			s226->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 168)			s226->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE( 169)			 ::haxe::ui::util::GenericConfig s17 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 169)			s17->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VProgress",dd,98,0d,f2));
HXDLIN( 169)			s17->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Gauge",7c,18,12,2e));
HXDLIN( 169)			s17->values->set(HX_("constructor",fa,2c,c5,97),HX_("100, $style",72,c9,1d,36));
HXLINE( 172)			s17->values->set(HX_("style",31,a5,1d,84),HX_("GaugeStyle.VERTICAL",0c,19,ac,d6));
HXLINE( 173)			s17->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 173)			 ::haxe::ui::util::GenericConfig s227 = s17->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 174)			s227->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXLINE( 175)			s227->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 179)			 ::haxe::ui::util::GenericConfig s228 = s17->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 180)			s228->values->set(HX_("id",db,5b,00,00),HX_("indeterminate",fb,f6,49,0e));
HXLINE( 182)			s228->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlPulse",f9,33,2b,26));
HXLINE( 186)			 ::haxe::ui::util::GenericConfig s229 = s17->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 187)			s229->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 187)			s229->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 189)			 ::haxe::ui::util::GenericConfig s230 = s17->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 192)			s230->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 193)			s230->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE( 198)			 ::haxe::ui::util::GenericConfig s18 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 199)			s18->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HSlider",c3,3c,2f,9a));
HXDLIN( 199)			s18->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Slider",3e,34,83,3b));
HXLINE( 201)			s18->values->set(HX_("constructor",fa,2c,c5,97),HX_("0, 0, 100, $style",f2,1a,13,55));
HXLINE( 203)			s18->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 203)			 ::haxe::ui::util::GenericConfig s231 = s18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 205)			s231->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 205)			s231->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 207)			 ::haxe::ui::util::GenericConfig s232 = s18->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 207)			s232->values->set(HX_("id",db,5b,00,00),HX_("min",92,11,53,00));
HXLINE( 208)			s232->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMin",72,06,a6,29));
HXLINE( 210)			 ::haxe::ui::util::GenericConfig s233 = s18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 211)			s233->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXLINE( 212)			s233->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 216)			 ::haxe::ui::util::GenericConfig s234 = s18->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 218)			s234->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 218)			s234->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 221)			 ::haxe::ui::util::GenericConfig s235 = s18->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 222)			s235->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 225)			s235->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE( 227)			 ::haxe::ui::util::GenericConfig s19 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 228)			s19->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VSlider",51,bb,5b,e0));
HXLINE( 229)			s19->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Slider",3e,34,83,3b));
HXLINE( 231)			s19->values->set(HX_("constructor",fa,2c,c5,97),HX_("0, 0, 100, $style",f2,1a,13,55));
HXLINE( 232)			s19->values->set(HX_("style",31,a5,1d,84),HX_("SliderStyle.VERTICAL",74,b5,86,a7));
HXLINE( 233)			s19->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXLINE( 234)			 ::haxe::ui::util::GenericConfig s236 = s19->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 234)			s236->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXLINE( 235)			s236->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXLINE( 237)			 ::haxe::ui::util::GenericConfig s237 = s19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 239)			s237->values->set(HX_("id",db,5b,00,00),HX_("min",92,11,53,00));
HXLINE( 240)			s237->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMin",72,06,a6,29));
HXLINE( 244)			 ::haxe::ui::util::GenericConfig s238 = s19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 245)			s238->values->set(HX_("id",db,5b,00,00),HX_("max",a4,0a,53,00));
HXLINE( 246)			s238->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMax",84,ff,a5,29));
HXLINE( 248)			 ::haxe::ui::util::GenericConfig s239 = s19->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 250)			s239->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXLINE( 253)			s239->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXLINE( 254)			 ::haxe::ui::util::GenericConfig s240 = s19->addSection(HX_("size",c1,a0,53,4c));
HXLINE( 255)			s240->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXLINE( 257)			s240->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXLINE( 258)			 ::haxe::ui::util::GenericConfig s110 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXLINE( 260)			s110->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.TabView",70,96,d8,b7));
HXLINE( 263)			s110->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Notebook",78,6c,01,e0));
HXLINE( 265)			 ::haxe::ui::util::GenericConfig s241 = s110->addSection(HX_("behaviour",3d,f2,ab,35));
HXLINE( 266)			s241->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s241->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s242 = s110->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s242->values->set(HX_("id",db,5b,00,00),HX_("removeAllTabs",5b,d6,fd,2f));
HXDLIN( 266)			s242->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs",23,83,7a,78));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s243 = s110->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s243->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.NotebookSize",2e,4f,7f,b3));
HXDLIN( 266)			s243->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s111 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s111->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.ScrollView",bc,43,e9,dc));
HXDLIN( 266)			s111->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrolledWindow",d9,f1,9e,22));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s244 = s111->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s244->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s244->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s245 = s111->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s245->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXDLIN( 266)			s245->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s112 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s112->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.ListView",0d,a6,4d,ae));
HXDLIN( 266)			s112->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.SimpleListView",b7,e2,20,d0));
HXDLIN( 266)			s112->values->set(HX_("condition",9b,e9,33,fc),HX_("this._itemRenderer=='BasicItemRenderer' || this._itemRenderer==null",91,8d,53,1f));
HXDLIN( 266)			s112->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s246 = s112->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s246->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s246->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s247 = s112->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s247->values->set(HX_("id",db,5b,00,00),HX_("dataSource",a5,76,d3,1d));
HXDLIN( 266)			s247->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource",a5,cb,61,4c));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s248 = s112->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s248->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.WindowSize",03,44,ec,97));
HXDLIN( 266)			s248->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s113 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s113->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.HScroll",af,4e,8f,71));
HXDLIN( 266)			s113->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrollBar",c9,d9,e1,fd));
HXDLIN( 266)			s113->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 266)			s113->values->set(HX_("style",31,a5,1d,84),HX_("ScrollBarStyle.HORIZONTAL",c7,6c,15,a2));
HXDLIN( 266)			s113->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s249 = s113->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s249->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 266)			s249->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s250 = s113->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s250->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s250->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s251 = s113->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s251->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXDLIN( 266)			s251->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s114 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s114->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.VScroll",3d,cd,bb,b7));
HXDLIN( 266)			s114->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.ScrollBar",c9,d9,e1,fd));
HXDLIN( 266)			s114->values->set(HX_("constructor",fa,2c,c5,97),HX_("$style",8d,a2,f6,e8));
HXDLIN( 266)			s114->values->set(HX_("style",31,a5,1d,84),HX_("ScrollBarStyle.VERTICAL",99,79,a3,a9));
HXDLIN( 266)			s114->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s252 = s114->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s252->values->set(HX_("id",db,5b,00,00),HX_("pos",94,5d,55,00));
HXDLIN( 266)			s252->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlValue",51,6c,5a,8d));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s253 = s114->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s253->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s253->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s254 = s114->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s254->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXDLIN( 266)			s254->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s115 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s115->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.Image",f5,c8,95,aa));
HXDLIN( 266)			s115->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap",ed,c2,d4,ed));
HXDLIN( 266)			s115->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s255 = s115->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s255->values->set(HX_("id",db,5b,00,00),HX_("resource",ce,5c,a0,12));
HXDLIN( 266)			s255->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap",0f,67,19,c3));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s256 = s115->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s256->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s256->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s257 = s115->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s257->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXDLIN( 266)			s257->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s116 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s116->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3));
HXDLIN( 266)			s116->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Dialog",e5,72,b1,7c));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s258 = s116->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s258->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s258->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s259 = s116->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s259->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.DialogSize",db,00,18,81));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s117 = ::haxe::ui::Toolkit_obj::nativeConfig->addSection(HX_("component",bd,f0,53,0f));
HXDLIN( 266)			s117->values->set(HX_("id",db,5b,00,00),HX_("haxe.ui.components.DropDown",d7,72,36,99));
HXDLIN( 266)			s117->values->set(HX_("class",38,78,58,48),HX_("hx.widgets.Choice",7e,2d,2e,8c));
HXDLIN( 266)			s117->values->set(HX_("allowChildren",e8,aa,24,41),HX_("false",a3,35,4f,fb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s260 = s117->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s260->values->set(HX_("id",db,5b,00,00),HX_("dataSource",a5,76,d3,1d));
HXDLIN( 266)			s260->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceDataSource",63,d9,af,eb));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s261 = s117->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s261->values->set(HX_("id",db,5b,00,00),HX_("selectedItem",0e,e5,59,d6));
HXDLIN( 266)			s261->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ChoiceSelectedItem",4c,f3,22,1e));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s262 = s117->addSection(HX_("behaviour",3d,f2,ab,35));
HXDLIN( 266)			s262->values->set(HX_("id",db,5b,00,00),HX_("disabled",7c,41,04,7c));
HXDLIN( 266)			s262->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.behaviours.ControlDisable",c8,4e,f7,aa));
HXDLIN( 266)			 ::haxe::ui::util::GenericConfig s263 = s117->addSection(HX_("size",c1,a0,53,4c));
HXDLIN( 266)			s263->values->set(HX_("class",38,78,58,48),HX_("haxe.ui.backend.hxwidgets.size.BestSize",b7,ba,5a,fd));
HXDLIN( 266)			s263->values->set(HX_("includePadding",89,18,b5,13),HX_("false",a3,35,4f,fb));
            		}
HXLINE(  40)		::haxe::ui::Toolkit_obj::_built = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,build,(void))

void Toolkit_obj::init( ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_47_init)
HXLINE(  48)		::haxe::ui::Toolkit_obj::build();
HXLINE(  49)		::haxe::ui::themes::ThemeManager_obj::get_instance()->applyTheme(::haxe::ui::Toolkit_obj::theme);
HXLINE(  50)		if (hx::IsNotNull( options )) {
HXLINE(  51)			::haxe::ui::Toolkit_obj::get_screen()->options = options;
HXLINE(  52)			::haxe::ui::ToolkitAssets_obj::get_instance()->options = options;
            		}
HXLINE(  54)		::haxe::ui::Toolkit_obj::get_screen()->registerEvent(HX_("keydown",81,3d,6e,b1),::haxe::ui::Toolkit_obj::onKeyDown_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,init,(void))

void Toolkit_obj::onKeyDown( ::haxe::ui::core::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_58_onKeyDown)
HXDLIN(  58)		if ((event->keyCode == (int)9)) {
HXLINE(  59)			if ((event->shiftKey == false)) {
HXLINE(  60)				::haxe::ui::focus::FocusManager_obj::get_instance()->focusNext();
            			}
            			else {
HXLINE(  62)				::haxe::ui::focus::FocusManager_obj::get_instance()->focusPrev();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,onKeyDown,(void))

 ::haxe::ui::ToolkitAssets Toolkit_obj::assets;

 ::haxe::ui::ToolkitAssets Toolkit_obj::get_assets(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_69_get_assets)
HXDLIN(  69)		return ::haxe::ui::ToolkitAssets_obj::get_instance();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_assets,return )

 ::haxe::ui::core::Screen Toolkit_obj::screen;

 ::haxe::ui::core::Screen Toolkit_obj::get_screen(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_74_get_screen)
HXDLIN(  74)		return ::haxe::ui::core::Screen_obj::get_instance();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_screen,return )

 ::haxe::ui::core::Component Toolkit_obj::componentFromAsset(::String assetId){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_77_componentFromAsset)
HXLINE(  78)		::String data = ::haxe::ui::ToolkitAssets_obj::get_instance()->getText(assetId);
HXLINE(  79)		return ::haxe::ui::Toolkit_obj::componentFromString(data,null(), ::haxe::ui::parsers::ui::resolvers::AssetResourceResolver_obj::__alloc( HX_CTX ,assetId,null()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,componentFromAsset,return )

 ::haxe::ui::core::Component Toolkit_obj::componentFromString(::String data,::String type, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_82_componentFromString)
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (hx::IsNotNull( data )) {
HXLINE(  83)			_hx_tmp = (data.length == (int)0);
            		}
            		else {
HXLINE(  83)			_hx_tmp = true;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			return null();
            		}
HXLINE(  87)		if (hx::IsNull( type )) {
HXLINE(  88)			if (::StringTools_obj::startsWith(::StringTools_obj::trim(data),HX_("<",3c,00,00,00))) {
HXLINE(  89)				type = HX_("xml",d7,6d,5b,00);
            			}
            		}
HXLINE(  93)		 ::haxe::ui::parsers::ui::ComponentParser parser = ::haxe::ui::parsers::ui::ComponentParser_obj::get(type);
HXLINE(  94)		if (hx::IsNull( parser )) {
HXLINE(  95)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  95)			_hx_tmp1(((HX_("WARNING: type \"",9e,ae,e5,c5) + type) + HX_("\" not recognised",fa,2a,a2,aa)),hx::SourceInfo(HX_("Toolkit.hx",e0,f8,1b,71),95,HX_("haxe.ui.Toolkit",cc,33,92,fa),HX_("componentFromString",f8,50,fa,88)));
HXLINE(  96)			return null();
            		}
HXLINE(  99)		 ::haxe::ui::parsers::ui::ComponentInfo c = parser->parse(data,resourceResolver);
HXLINE( 100)		 ::haxe::ui::core::Component component = ::haxe::ui::Toolkit_obj::buildComponentFromInfo(c,callback);
HXLINE( 102)		::String fullScript = HX_("",00,00,00,00);
HXLINE( 103)		{
HXLINE( 103)			int _g = (int)0;
HXDLIN( 103)			::Array< ::String > _g1 = c->scriptlets;
HXDLIN( 103)			while((_g < _g1->length)){
HXLINE( 103)				::String scriptString = _g1->__get(_g);
HXDLIN( 103)				_g = (_g + (int)1);
HXLINE( 104)				fullScript = (fullScript + scriptString);
            			}
            		}
HXLINE( 107)		component->set_script(fullScript);
HXLINE( 109)		return component;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Toolkit_obj,componentFromString,return )

 ::haxe::ui::core::Component Toolkit_obj::buildComponentFromInfo( ::haxe::ui::parsers::ui::ComponentInfo c, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_112_buildComponentFromInfo)
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (hx::IsNotNull( c->condition )) {
HXLINE( 113)			_hx_tmp = ( ::haxe::ui::scripting::ConditionEvaluator_obj::__alloc( HX_CTX )->evaluate(c->condition) == false);
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			return null();
            		}
HXLINE( 117)		::String className = ::haxe::ui::core::ComponentClassMap_obj::get(c->type.toLowerCase());
HXLINE( 118)		if (hx::IsNull( className )) {
HXLINE( 119)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN( 119)			_hx_tmp1((HX_("WARNING: no class found for component: ",49,80,eb,1b) + c->type),hx::SourceInfo(HX_("Toolkit.hx",e0,f8,1b,71),119,HX_("haxe.ui.Toolkit",cc,33,92,fa),HX_("buildComponentFromInfo",c7,a9,e0,70)));
HXLINE( 120)			return null();
            		}
HXLINE( 123)		 ::haxe::ui::core::Component component = ( ( ::haxe::ui::core::Component)(::Type_obj::createInstance(::Type_obj::resolveClass(className),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 124)		if (hx::IsNull( component )) {
HXLINE( 125)			 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN( 125)			_hx_tmp2((HX_("WARNING: could not create class instance: ",39,44,fa,91) + className),hx::SourceInfo(HX_("Toolkit.hx",e0,f8,1b,71),125,HX_("haxe.ui.Toolkit",cc,33,92,fa),HX_("buildComponentFromInfo",c7,a9,e0,70)));
HXLINE( 126)			return null();
            		}
HXLINE( 129)		if (hx::IsNotNull( c->id )) {
HXLINE( 129)			component->set_id(c->id);
            		}
HXLINE( 130)		if (hx::IsNotNull( c->left )) {
HXLINE( 130)			component->set_left(c->left);
            		}
HXLINE( 131)		if (hx::IsNotNull( c->top )) {
HXLINE( 131)			component->set_top(c->top);
            		}
HXLINE( 132)		if (hx::IsNotNull( c->width )) {
HXLINE( 132)			component->set_width(c->width);
            		}
HXLINE( 133)		if (hx::IsNotNull( c->height )) {
HXLINE( 133)			component->set_height(c->height);
            		}
HXLINE( 134)		if (hx::IsNotNull( c->percentWidth )) {
HXLINE( 134)			component->set_percentWidth(c->percentWidth);
            		}
HXLINE( 135)		if (hx::IsNotNull( c->percentHeight )) {
HXLINE( 135)			component->set_percentHeight(c->percentHeight);
            		}
HXLINE( 136)		if (hx::IsNotNull( c->text )) {
HXLINE( 136)			component->set_text(c->text);
            		}
HXLINE( 137)		if (hx::IsNotNull( c->styleNames )) {
HXLINE( 137)			component->set_styleNames(c->styleNames);
            		}
HXLINE( 138)		if (hx::IsNotNull( c->style )) {
HXLINE( 138)			component->set_styleString(c->style);
            		}
HXLINE( 140)		if (::Std_obj::is(component,hx::ClassOf< ::haxe::ui::containers::Box >())) {
HXLINE( 141)			 ::haxe::ui::containers::Box box = hx::TCast<  ::haxe::ui::containers::Box >::cast(component);
HXLINE( 142)			if (hx::IsNotNull( c->layoutName )) {
HXLINE( 142)				box->set_layoutName(c->layoutName);
            			}
            		}
HXLINE( 145)		if (::Std_obj::is(component,hx::ClassOf< ::haxe::ui::containers::ScrollView >())) {
HXLINE( 146)			 ::haxe::ui::containers::ScrollView scrollview = hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(component);
HXLINE( 147)			if (hx::IsNotNull( c->contentWidth )) {
HXLINE( 147)				scrollview->set_contentWidth(c->contentWidth);
            			}
HXLINE( 148)			if (hx::IsNotNull( c->contentHeight )) {
HXLINE( 148)				scrollview->set_contentHeight(c->contentHeight);
            			}
HXLINE( 149)			if (hx::IsNotNull( c->percentContentWidth )) {
HXLINE( 149)				scrollview->set_percentContentWidth(c->percentContentWidth);
            			}
HXLINE( 150)			if (hx::IsNotNull( c->percentContentHeight )) {
HXLINE( 150)				scrollview->set_percentContentHeight(c->percentContentHeight);
            			}
            		}
HXLINE( 153)		{
HXLINE( 153)			 ::Dynamic propName = c->properties->keys();
HXDLIN( 153)			while(( (bool)(propName->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 153)				::String propName1 = ( (::String)(propName->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 154)				 ::Dynamic propValue = c->properties->get(propName1);
HXLINE( 155)				if (::StringTools_obj::startsWith(propName1,HX_("on",1f,61,00,00))) {
HXLINE( 156)					component->addScriptEvent(propName1,( (::String)(propValue) ));
            				}
            				else {
HXLINE( 158)					bool _hx_tmp3;
HXDLIN( 158)					bool _hx_tmp4;
HXDLIN( 158)					bool _hx_tmp5;
HXDLIN( 158)					if (hx::IsNotEq( propValue,HX_("true",4e,a7,03,4d) )) {
HXLINE( 158)						_hx_tmp5 = hx::IsEq( propValue,HX_("yes",27,29,5c,00) );
            					}
            					else {
HXLINE( 158)						_hx_tmp5 = true;
            					}
HXDLIN( 158)					if (!(_hx_tmp5)) {
HXLINE( 158)						_hx_tmp4 = hx::IsEq( propValue,HX_("false",a3,35,4f,fb) );
            					}
            					else {
HXLINE( 158)						_hx_tmp4 = true;
            					}
HXDLIN( 158)					if (!(_hx_tmp4)) {
HXLINE( 158)						_hx_tmp3 = hx::IsEq( propValue,HX_("no",41,60,00,00) );
            					}
            					else {
HXLINE( 158)						_hx_tmp3 = true;
            					}
HXDLIN( 158)					if (_hx_tmp3) {
HXLINE( 159)						if (hx::IsNotEq( propValue,HX_("true",4e,a7,03,4d) )) {
HXLINE( 159)							propValue = hx::IsEq( propValue,HX_("yes",27,29,5c,00) );
            						}
            						else {
HXLINE( 159)							propValue = true;
            						}
            					}
            					else {
HXLINE( 160)						if (hx::IsNotNull( ::Std_obj::parseInt(( (::String)(propValue) )) )) {
HXLINE( 161)							propValue = ::Std_obj::parseInt(( (::String)(propValue) ));
            						}
            					}
HXLINE( 164)					::Reflect_obj::setProperty(component,propName1,propValue);
            				}
            			}
            		}
HXLINE( 168)		bool _hx_tmp6;
HXDLIN( 168)		if (::Std_obj::is(component,hx::ClassOf< ::haxe::ui::core::IDataComponent >())) {
HXLINE( 168)			_hx_tmp6 = hx::IsNotNull( c->data );
            		}
            		else {
HXLINE( 168)			_hx_tmp6 = false;
            		}
HXDLIN( 168)		if (_hx_tmp6) {
HXLINE( 169)			 ::Dynamic _hx_tmp7 = component->__Field(HX_("set_dataSource",62,e7,e8,b3), hx::paccDynamic);
HXDLIN( 169)			 ::haxe::ui::data::DataSourceFactory _hx_tmp8 =  ::haxe::ui::data::DataSourceFactory_obj::__alloc( HX_CTX );
HXDLIN( 169)			_hx_tmp7(_hx_tmp8->fromString(c->get_dataString(),hx::ClassOf< ::haxe::ui::data::ArrayDataSource >()));
            		}
HXLINE( 172)		{
HXLINE( 172)			int _g = (int)0;
HXDLIN( 172)			::Array< ::Dynamic> _g1 = c->children;
HXDLIN( 172)			while((_g < _g1->length)){
HXLINE( 172)				 ::haxe::ui::parsers::ui::ComponentInfo childInfo = _g1->__get(_g).StaticCast<  ::haxe::ui::parsers::ui::ComponentInfo >();
HXDLIN( 172)				_g = (_g + (int)1);
HXLINE( 173)				 ::haxe::ui::core::Component childComponent = ::haxe::ui::Toolkit_obj::buildComponentFromInfo(childInfo,callback);
HXLINE( 174)				if (hx::IsNotNull( childComponent )) {
HXLINE( 175)					component->addComponent(childComponent);
            				}
            			}
            		}
HXLINE( 179)		if (hx::IsNotNull( callback )) {
HXLINE( 180)			callback(component);
            		}
HXLINE( 183)		return component;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,buildComponentFromInfo,return )

int Toolkit_obj::pixelsPerRem;

int Toolkit_obj::set_pixelsPerRem(int value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_187_set_pixelsPerRem)
HXLINE( 188)		if ((::haxe::ui::Toolkit_obj::pixelsPerRem == value)) {
HXLINE( 189)			return value;
            		}
HXLINE( 192)		::haxe::ui::Toolkit_obj::pixelsPerRem = value;
HXLINE( 193)		::haxe::ui::core::Screen_obj::get_instance()->refreshStyleRootComponents();
HXLINE( 195)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_pixelsPerRem,return )

bool Toolkit_obj::autoScale;

int Toolkit_obj::autoScaleDPIThreshold;

Float Toolkit_obj::_scaleX;

Float Toolkit_obj::get_scaleX(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_203_get_scaleX)
HXLINE( 204)		if ((::haxe::ui::Toolkit_obj::_scaleX == (int)0)) {
HXLINE( 205)			if ((::haxe::ui::Toolkit_obj::autoScale == true)) {
HXLINE( 206)				Float dpi = ::haxe::ui::core::Screen_obj::get_instance()->get_dpi();
HXLINE( 207)				if ((dpi > ::haxe::ui::Toolkit_obj::autoScaleDPIThreshold)) {
HXLINE( 208)					::haxe::ui::Toolkit_obj::_scaleX = ::Math_obj::fround(((Float)dpi / (Float)::haxe::ui::Toolkit_obj::autoScaleDPIThreshold));
            				}
            				else {
HXLINE( 210)					::haxe::ui::Toolkit_obj::_scaleX = (int)1;
            				}
            			}
            			else {
HXLINE( 213)				::haxe::ui::Toolkit_obj::_scaleX = (int)1;
            			}
            		}
HXLINE( 216)		return ::haxe::ui::Toolkit_obj::_scaleX;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scaleX,return )

Float Toolkit_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_218_set_scaleX)
HXLINE( 219)		if ((::haxe::ui::Toolkit_obj::_scaleX == value)) {
HXLINE( 220)			return value;
            		}
HXLINE( 222)		::haxe::ui::Toolkit_obj::_scaleX = ::Math_obj::fround(value);
HXLINE( 223)		::haxe::ui::Toolkit_obj::autoScale = false;
HXLINE( 224)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scaleX,return )

Float Toolkit_obj::_scaleY;

Float Toolkit_obj::get_scaleY(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_229_get_scaleY)
HXLINE( 230)		if ((::haxe::ui::Toolkit_obj::_scaleY == (int)0)) {
HXLINE( 231)			if ((::haxe::ui::Toolkit_obj::autoScale == true)) {
HXLINE( 232)				Float dpi = ::haxe::ui::core::Screen_obj::get_instance()->get_dpi();
HXLINE( 233)				if ((dpi > ::haxe::ui::Toolkit_obj::autoScaleDPIThreshold)) {
HXLINE( 234)					::haxe::ui::Toolkit_obj::_scaleY = ::Math_obj::fround(((Float)dpi / (Float)::haxe::ui::Toolkit_obj::autoScaleDPIThreshold));
            				}
            				else {
HXLINE( 236)					::haxe::ui::Toolkit_obj::_scaleY = (int)1;
            				}
            			}
            			else {
HXLINE( 239)				::haxe::ui::Toolkit_obj::_scaleY = (int)1;
            			}
            		}
HXLINE( 242)		return ::haxe::ui::Toolkit_obj::_scaleY;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scaleY,return )

Float Toolkit_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_244_set_scaleY)
HXLINE( 245)		if ((::haxe::ui::Toolkit_obj::_scaleY == value)) {
HXLINE( 246)			return value;
            		}
HXLINE( 248)		::haxe::ui::Toolkit_obj::_scaleY = ::Math_obj::fround(value);
HXLINE( 249)		::haxe::ui::Toolkit_obj::autoScale = false;
HXLINE( 250)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scaleY,return )

Float Toolkit_obj::get_scale(){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_255_get_scale)
HXDLIN( 255)		Float _hx_tmp = ::haxe::ui::Toolkit_obj::get_scaleX();
HXDLIN( 255)		return ::Math_obj::max(_hx_tmp,::haxe::ui::Toolkit_obj::get_scaleY());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_scale,return )

Float Toolkit_obj::set_scale(Float value){
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_257_set_scale)
HXLINE( 258)		::haxe::ui::Toolkit_obj::set_scaleX(value);
HXLINE( 259)		::haxe::ui::Toolkit_obj::set_scaleY(value);
HXLINE( 260)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_scale,return )

void Toolkit_obj::callLater( ::Dynamic fn){
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_264_callLater)
HXDLIN( 264)		 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,fn);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,callLater,(void))


Toolkit_obj::Toolkit_obj()
{
}

bool Toolkit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { outValue = ( theme ); return true; }
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_scale() ); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_built") ) { outValue = ( _built ); return true; }
		if (HX_FIELD_EQ(inName,"assets") ) { outValue = ( inCallProp == hx::paccAlways ? get_assets() : assets ); return true; }
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = ( inCallProp == hx::paccAlways ? get_screen() : screen ); return true; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_scaleX() ); return true; } }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_scaleY() ); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { outValue = ( _scaleX ); return true; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { outValue = ( _scaleY ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { outValue = onKeyDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { outValue = ( autoScale ); return true; }
		if (HX_FIELD_EQ(inName,"get_scale") ) { outValue = get_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scale") ) { outValue = set_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callLater") ) { outValue = callLater_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleSheet") ) { outValue = ( styleSheet ); return true; }
		if (HX_FIELD_EQ(inName,"properties") ) { outValue = ( properties ); return true; }
		if (HX_FIELD_EQ(inName,"get_assets") ) { outValue = get_assets_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_screen") ) { outValue = get_screen_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { outValue = get_scaleX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { outValue = set_scaleX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { outValue = get_scaleY_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { outValue = set_scaleY_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeConfig") ) { outValue = ( nativeConfig ); return true; }
		if (HX_FIELD_EQ(inName,"pixelsPerRem") ) { outValue = ( pixelsPerRem ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_pixelsPerRem") ) { outValue = set_pixelsPerRem_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backendProperties") ) { outValue = ( backendProperties ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"componentFromAsset") ) { outValue = componentFromAsset_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"componentFromString") ) { outValue = componentFromString_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoScaleDPIThreshold") ) { outValue = ( autoScaleDPIThreshold ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"buildComponentFromInfo") ) { outValue = buildComponentFromInfo_dyn(); return true; }
	}
	return false;
}

bool Toolkit_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { theme=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_scale(ioValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_built") ) { _built=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"assets") ) { assets=ioValue.Cast<  ::haxe::ui::ToolkitAssets >(); return true; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=ioValue.Cast<  ::haxe::ui::core::Screen >(); return true; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_scaleX(ioValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_scaleY(ioValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoScale") ) { autoScale=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleSheet") ) { styleSheet=ioValue.Cast<  ::haxe::ui::styles::Engine >(); return true; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nativeConfig") ) { nativeConfig=ioValue.Cast<  ::haxe::ui::util::GenericConfig >(); return true; }
		if (HX_FIELD_EQ(inName,"pixelsPerRem") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_pixelsPerRem(ioValue.Cast< int >()) ); else pixelsPerRem=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backendProperties") ) { backendProperties=ioValue.Cast<  ::haxe::ui::util::Properties >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoScaleDPIThreshold") ) { autoScaleDPIThreshold=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Toolkit_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Toolkit_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::styles::Engine*/ ,(void *) &Toolkit_obj::styleSheet,HX_HCSTRING("styleSheet","\xae","\x3b","\x16","\xfc")},
	{hx::fsString,(void *) &Toolkit_obj::theme,HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Toolkit_obj::properties,HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ui::util::Properties*/ ,(void *) &Toolkit_obj::backendProperties,HX_HCSTRING("backendProperties","\x27","\x1d","\x2b","\x0a")},
	{hx::fsObject /*::haxe::ui::util::GenericConfig*/ ,(void *) &Toolkit_obj::nativeConfig,HX_HCSTRING("nativeConfig","\xb9","\x5f","\xe9","\x7c")},
	{hx::fsBool,(void *) &Toolkit_obj::_built,HX_HCSTRING("_built","\x7f","\x22","\xd2","\xb6")},
	{hx::fsObject /*::haxe::ui::ToolkitAssets*/ ,(void *) &Toolkit_obj::assets,HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{hx::fsObject /*::haxe::ui::core::Screen*/ ,(void *) &Toolkit_obj::screen,HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsInt,(void *) &Toolkit_obj::pixelsPerRem,HX_HCSTRING("pixelsPerRem","\x8a","\x67","\x2b","\x3a")},
	{hx::fsBool,(void *) &Toolkit_obj::autoScale,HX_HCSTRING("autoScale","\x9b","\x0c","\xda","\x56")},
	{hx::fsInt,(void *) &Toolkit_obj::autoScaleDPIThreshold,HX_HCSTRING("autoScaleDPIThreshold","\xc9","\x7d","\x55","\xdf")},
	{hx::fsFloat,(void *) &Toolkit_obj::_scaleX,HX_HCSTRING("_scaleX","\x2d","\xfc","\x9c","\xaa")},
	{hx::fsFloat,(void *) &Toolkit_obj::_scaleY,HX_HCSTRING("_scaleY","\x2e","\xfc","\x9c","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Toolkit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Toolkit_obj::styleSheet,"styleSheet");
	HX_MARK_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::properties,"properties");
	HX_MARK_MEMBER_NAME(Toolkit_obj::backendProperties,"backendProperties");
	HX_MARK_MEMBER_NAME(Toolkit_obj::nativeConfig,"nativeConfig");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_built,"_built");
	HX_MARK_MEMBER_NAME(Toolkit_obj::assets,"assets");
	HX_MARK_MEMBER_NAME(Toolkit_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(Toolkit_obj::pixelsPerRem,"pixelsPerRem");
	HX_MARK_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(Toolkit_obj::autoScaleDPIThreshold,"autoScaleDPIThreshold");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_scaleY,"_scaleY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Toolkit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::styleSheet,"styleSheet");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::properties,"properties");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::backendProperties,"backendProperties");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::nativeConfig,"nativeConfig");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_built,"_built");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::assets,"assets");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::pixelsPerRem,"pixelsPerRem");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::autoScaleDPIThreshold,"autoScaleDPIThreshold");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_scaleY,"_scaleY");
};

#endif

hx::Class Toolkit_obj::__mClass;

static ::String Toolkit_obj_sStaticFields[] = {
	HX_HCSTRING("styleSheet","\xae","\x3b","\x16","\xfc"),
	HX_HCSTRING("theme","\x09","\x7e","\x86","\x0f"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("backendProperties","\x27","\x1d","\x2b","\x0a"),
	HX_HCSTRING("nativeConfig","\xb9","\x5f","\xe9","\x7c"),
	HX_HCSTRING("_built","\x7f","\x22","\xd2","\xb6"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("get_assets","\x4c","\xb8","\x8a","\x3c"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("get_screen","\x35","\xab","\xe4","\x37"),
	HX_HCSTRING("componentFromAsset","\xa9","\xc3","\x3d","\x32"),
	HX_HCSTRING("componentFromString","\xf8","\x50","\xfa","\x88"),
	HX_HCSTRING("buildComponentFromInfo","\xc7","\xa9","\xe0","\x70"),
	HX_HCSTRING("pixelsPerRem","\x8a","\x67","\x2b","\x3a"),
	HX_HCSTRING("set_pixelsPerRem","\x87","\x41","\x0c","\x95"),
	HX_HCSTRING("autoScale","\x9b","\x0c","\xda","\x56"),
	HX_HCSTRING("autoScaleDPIThreshold","\xc9","\x7d","\x55","\xdf"),
	HX_HCSTRING("_scaleX","\x2d","\xfc","\x9c","\xaa"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("_scaleY","\x2e","\xfc","\x9c","\xaa"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("callLater","\x0e","\x11","\xfc","\xfb"),
	::String(null())
};

void Toolkit_obj::__register()
{
	hx::Object *dummy = new Toolkit_obj;
	Toolkit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.Toolkit","\xcc","\x33","\x92","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Toolkit_obj::__GetStatic;
	__mClass->mSetStaticField = &Toolkit_obj::__SetStatic;
	__mClass->mMarkFunc = Toolkit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Toolkit_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Toolkit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Toolkit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Toolkit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Toolkit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Toolkit_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_24_boot)
HXDLIN(  24)		styleSheet =  ::haxe::ui::styles::Engine_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_25_boot)
HXDLIN(  25)		theme = HX_("default",c1,d8,c3,9b);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_27_boot)
HXDLIN(  27)		properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_29_boot)
HXDLIN(  29)		backendProperties =  ::haxe::ui::util::Properties_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_30_boot)
HXDLIN(  30)		nativeConfig =  ::haxe::ui::util::GenericConfig_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_32_boot)
HXDLIN(  32)		_built = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_186_boot)
HXDLIN( 186)		pixelsPerRem = (int)16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_198_boot)
HXDLIN( 198)		autoScale = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_199_boot)
HXDLIN( 199)		autoScaleDPIThreshold = (int)160;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_201_boot)
HXDLIN( 201)		_scaleX = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ceee2b7f0fff14e_227_boot)
HXDLIN( 227)		_scaleY = ((Float)0);
            	}
}

} // end namespace haxe
} // end namespace ui
