// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_components_HScroll
#include <haxe/ui/components/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScroll
#include <haxe/ui/components/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_DefaultHScrollPosBehaviour
#include <haxe/ui/containers/DefaultHScrollPosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_DefaultVScrollPosBehaviour
#include <haxe/ui/containers/DefaultVScrollPosBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewLayout
#include <haxe/ui/containers/ScrollViewLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_ScrollEvent
#include <haxe/ui/core/ScrollEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d194136255627609_22_new,"haxe.ui.containers.ScrollView","new",0x3c5772ae,"haxe.ui.containers.ScrollView.new","haxe/ui/containers/ScrollView.hx",22,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_32_createLayout,"haxe.ui.containers.ScrollView","createLayout",0xdd3692b8,"haxe.ui.containers.ScrollView.createLayout","haxe/ui/containers/ScrollView.hx",32,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_35_createDefaults,"haxe.ui.containers.ScrollView","createDefaults",0xba635420,"haxe.ui.containers.ScrollView.createDefaults","haxe/ui/containers/ScrollView.hx",35,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_47_get_layoutName,"haxe.ui.containers.ScrollView","get_layoutName",0x122376d0,"haxe.ui.containers.ScrollView.get_layoutName","haxe/ui/containers/ScrollView.hx",47,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_49_set_layoutName,"haxe.ui.containers.ScrollView","set_layoutName",0x32435f44,"haxe.ui.containers.ScrollView.set_layoutName","haxe/ui/containers/ScrollView.hx",49,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_61_createChildren,"haxe.ui.containers.ScrollView","createChildren",0x7b339ccd,"haxe.ui.containers.ScrollView.createChildren","haxe/ui/containers/ScrollView.hx",61,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_71_createContentContainer,"haxe.ui.containers.ScrollView","createContentContainer",0xbbf69a56,"haxe.ui.containers.ScrollView.createContentContainer","haxe/ui/containers/ScrollView.hx",71,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_80_destroyChildren,"haxe.ui.containers.ScrollView","destroyChildren",0xa7036ba7,"haxe.ui.containers.ScrollView.destroyChildren","haxe/ui/containers/ScrollView.hx",80,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_94_get_vscrollPos,"haxe.ui.containers.ScrollView","get_vscrollPos",0x0eded10c,"haxe.ui.containers.ScrollView.get_vscrollPos","haxe/ui/containers/ScrollView.hx",94,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_96_set_vscrollPos,"haxe.ui.containers.ScrollView","set_vscrollPos",0x2efeb980,"haxe.ui.containers.ScrollView.set_vscrollPos","haxe/ui/containers/ScrollView.hx",96,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_107_get_vscrollMax,"haxe.ui.containers.ScrollView","get_vscrollMax",0x0edc7e1c,"haxe.ui.containers.ScrollView.get_vscrollMax","haxe/ui/containers/ScrollView.hx",107,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_117_get_hscrollPos,"haxe.ui.containers.ScrollView","get_hscrollPos",0x8acc42da,"haxe.ui.containers.ScrollView.get_hscrollPos","haxe/ui/containers/ScrollView.hx",117,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_119_set_hscrollPos,"haxe.ui.containers.ScrollView","set_hscrollPos",0xaaec2b4e,"haxe.ui.containers.ScrollView.set_hscrollPos","haxe/ui/containers/ScrollView.hx",119,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_131_get_contentWidth,"haxe.ui.containers.ScrollView","get_contentWidth",0xf33e7b88,"haxe.ui.containers.ScrollView.get_contentWidth","haxe/ui/containers/ScrollView.hx",131,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_134_set_contentWidth,"haxe.ui.containers.ScrollView","set_contentWidth",0x498068fc,"haxe.ui.containers.ScrollView.set_contentWidth","haxe/ui/containers/ScrollView.hx",134,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_139_get_contentHeight,"haxe.ui.containers.ScrollView","get_contentHeight",0x99bd1425,"haxe.ui.containers.ScrollView.get_contentHeight","haxe/ui/containers/ScrollView.hx",139,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_142_set_contentHeight,"haxe.ui.containers.ScrollView","set_contentHeight",0xbd2aec31,"haxe.ui.containers.ScrollView.set_contentHeight","haxe/ui/containers/ScrollView.hx",142,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_147_get_percentContentWidth,"haxe.ui.containers.ScrollView","get_percentContentWidth",0x62451857,"haxe.ui.containers.ScrollView.get_percentContentWidth","haxe/ui/containers/ScrollView.hx",147,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_150_set_percentContentWidth,"haxe.ui.containers.ScrollView","set_percentContentWidth",0x64a68163,"haxe.ui.containers.ScrollView.set_percentContentWidth","haxe/ui/containers/ScrollView.hx",150,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_155_get_percentContentHeight,"haxe.ui.containers.ScrollView","get_percentContentHeight",0x507fac76,"haxe.ui.containers.ScrollView.get_percentContentHeight","haxe/ui/containers/ScrollView.hx",155,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_158_set_percentContentHeight,"haxe.ui.containers.ScrollView","set_percentContentHeight",0x635a2dea,"haxe.ui.containers.ScrollView.set_percentContentHeight","haxe/ui/containers/ScrollView.hx",158,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_161_addComponent,"haxe.ui.containers.ScrollView","addComponent",0x70d0b64e,"haxe.ui.containers.ScrollView.addComponent","haxe/ui/containers/ScrollView.hx",161,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_171_removeComponent,"haxe.ui.containers.ScrollView","removeComponent",0x15076b27,"haxe.ui.containers.ScrollView.removeComponent","haxe/ui/containers/ScrollView.hx",171,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_182_clearContents,"haxe.ui.containers.ScrollView","clearContents",0xe3e7d795,"haxe.ui.containers.ScrollView.clearContents","haxe/ui/containers/ScrollView.hx",182,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_186_addComponentToSuper,"haxe.ui.containers.ScrollView","addComponentToSuper",0xb2464552,"haxe.ui.containers.ScrollView.addComponentToSuper","haxe/ui/containers/ScrollView.hx",186,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_191_get_contents,"haxe.ui.containers.ScrollView","get_contents",0x46665d15,"haxe.ui.containers.ScrollView.get_contents","haxe/ui/containers/ScrollView.hx",191,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_204_get_horizontalConstraint,"haxe.ui.containers.ScrollView","get_horizontalConstraint",0xd14f6adc,"haxe.ui.containers.ScrollView.get_horizontalConstraint","haxe/ui/containers/ScrollView.hx",204,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_209_get_verticalConstraint,"haxe.ui.containers.ScrollView","get_verticalConstraint",0x3363702e,"haxe.ui.containers.ScrollView.get_verticalConstraint","haxe/ui/containers/ScrollView.hx",209,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_215_get_scrollMode,"haxe.ui.containers.ScrollView","get_scrollMode",0x34a4eecb,"haxe.ui.containers.ScrollView.get_scrollMode","haxe/ui/containers/ScrollView.hx",215,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_217_set_scrollMode,"haxe.ui.containers.ScrollView","set_scrollMode",0x54c4d73f,"haxe.ui.containers.ScrollView.set_scrollMode","haxe/ui/containers/ScrollView.hx",217,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_238_set_onScrollChange,"haxe.ui.containers.ScrollView","set_onScrollChange",0x9b7c7dcb,"haxe.ui.containers.ScrollView.set_onScrollChange","haxe/ui/containers/ScrollView.hx",238,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_253_invalidateScroll,"haxe.ui.containers.ScrollView","invalidateScroll",0x8fbab8da,"haxe.ui.containers.ScrollView.invalidateScroll","haxe/ui/containers/ScrollView.hx",253,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_256_validateInternal,"haxe.ui.containers.ScrollView","validateInternal",0x1e7dfee5,"haxe.ui.containers.ScrollView.validateInternal","haxe/ui/containers/ScrollView.hx",256,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_267_validateScroll,"haxe.ui.containers.ScrollView","validateScroll",0x53bbb5b5,"haxe.ui.containers.ScrollView.validateScroll","haxe/ui/containers/ScrollView.hx",267,0x01b76681)
static const ::String _hx_array_data_dce943bc_34[] = {
	HX_("hscrollPos",1f,b6,47,5c),
};
static const ::String _hx_array_data_dce943bc_35[] = {
	HX_("vscrollPos",51,44,5a,e0),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_304__onMouseWheel,"haxe.ui.containers.ScrollView","_onMouseWheel",0x23a02ce2,"haxe.ui.containers.ScrollView._onMouseWheel","haxe/ui/containers/ScrollView.hx",304,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_316__onMouseDown,"haxe.ui.containers.ScrollView","_onMouseDown",0xd937e5fb,"haxe.ui.containers.ScrollView._onMouseDown","haxe/ui/containers/ScrollView.hx",316,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_350__onMouseMove,"haxe.ui.containers.ScrollView","_onMouseMove",0xdf2ad0aa,"haxe.ui.containers.ScrollView._onMouseMove","haxe/ui/containers/ScrollView.hx",350,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_356__onMouseUp,"haxe.ui.containers.ScrollView","_onMouseUp",0xe7b38bb4,"haxe.ui.containers.ScrollView._onMouseUp","haxe/ui/containers/ScrollView.hx",356,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_414_inertialScroll,"haxe.ui.containers.ScrollView","inertialScroll",0x37d52c51,"haxe.ui.containers.ScrollView.inertialScroll","haxe/ui/containers/ScrollView.hx",414,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_461__onContentsResized,"haxe.ui.containers.ScrollView","_onContentsResized",0x359541ca,"haxe.ui.containers.ScrollView._onContentsResized","haxe/ui/containers/ScrollView.hx",461,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_466_get_hscrollOffset,"haxe.ui.containers.ScrollView","get_hscrollOffset",0xcfaac20d,"haxe.ui.containers.ScrollView.get_hscrollOffset","haxe/ui/containers/ScrollView.hx",466,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_469_checkScrolls,"haxe.ui.containers.ScrollView","checkScrolls",0x80878fd0,"haxe.ui.containers.ScrollView.checkScrolls","haxe/ui/containers/ScrollView.hx",469,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_520__onHScroll,"haxe.ui.containers.ScrollView","_onHScroll",0x87f22269,"haxe.ui.containers.ScrollView._onHScroll","haxe/ui/containers/ScrollView.hx",520,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_524__onVScroll,"haxe.ui.containers.ScrollView","_onVScroll",0xce1ea0f7,"haxe.ui.containers.ScrollView._onVScroll","haxe/ui/containers/ScrollView.hx",524,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_527_updateScrollRect,"haxe.ui.containers.ScrollView","updateScrollRect",0x9101302c,"haxe.ui.containers.ScrollView.updateScrollRect","haxe/ui/containers/ScrollView.hx",527,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9090976e5c2085_1_cloneComponent,"haxe.ui.containers.ScrollView","cloneComponent",0xdee5ee12,"haxe.ui.containers.ScrollView.cloneComponent","src/haxe/ui/containers/ScrollView.hx",1,0x002cd34c)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9090976e5c2085_2_self,"haxe.ui.containers.ScrollView","self",0x937aed7e,"haxe.ui.containers.ScrollView.self","src/haxe/ui/containers/ScrollView.hx",2,0x002cd34c)
HX_LOCAL_STACK_FRAME(_hx_pos_830dbfff8aa878ab_1_getProperty,"haxe.ui.containers.ScrollView","getProperty",0x532fab59,"haxe.ui.containers.ScrollView.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_830dbfff8aa878ab_1_setProperty,"haxe.ui.containers.ScrollView","setProperty",0x5d9cb265,"haxe.ui.containers.ScrollView.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_22_boot,"haxe.ui.containers.ScrollView","boot",0x8845e624,"haxe.ui.containers.ScrollView.boot","haxe/ui/containers/ScrollView.hx",22,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d194136255627609_289_boot,"haxe.ui.containers.ScrollView","boot",0x8845e624,"haxe.ui.containers.ScrollView.boot","haxe/ui/containers/ScrollView.hx",289,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_22_new)
HXLINE( 300)		this->_inertialTargetY = ((Float)0);
HXLINE( 299)		this->_inertialAmplitudeY = ((Float)0);
HXLINE( 297)		this->_offsetY = ((Float)0);
HXLINE( 294)		this->_inertialTargetX = ((Float)0);
HXLINE( 293)		this->_inertialAmplitudeX = ((Float)0);
HXLINE( 291)		this->_offsetX = ((Float)0);
HXLINE( 212)		this->_scrollMode = HX_("drag",f4,2b,70,42);
HXLINE( 114)		this->_hscrollPos = ((Float)0);
HXLINE(  91)		this->_vscrollPos = ((Float)0);
HXLINE(  44)		this->_layoutName = HX_("vertical",76,bc,15,6a);
HXLINE(  28)		super::__construct();
            	}

Dynamic ScrollView_obj::__CreateEmpty() { return new ScrollView_obj; }

void *ScrollView_obj::_hx_vtable = 0;

Dynamic ScrollView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollView_obj > _hx_result = new ScrollView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x1c7b87fe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c7b87fe;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::layouts::Layout ScrollView_obj::createLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_32_createLayout)
HXDLIN(  32)		return  ::haxe::ui::containers::ScrollViewLayout_obj::__alloc( HX_CTX );
            	}


void ScrollView_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_35_createDefaults)
HXLINE(  36)		this->super::createDefaults();
HXLINE(  37)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  37)		_g->set(HX_("vscrollPos",51,44,5a,e0),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::containers::DefaultVScrollPosBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  37)		_g->set(HX_("hscrollPos",1f,b6,47,5c),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::containers::DefaultHScrollPosBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  37)		this->defaultBehaviours(_g);
HXLINE(  41)		this->_defaultLayout =  ::haxe::ui::containers::ScrollViewLayout_obj::__alloc( HX_CTX );
            	}


::String ScrollView_obj::get_layoutName(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_47_get_layoutName)
HXDLIN(  47)		return this->_layoutName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_layoutName,return )

::String ScrollView_obj::set_layoutName(::String value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_49_set_layoutName)
HXLINE(  50)		if ((this->_layoutName == value)) {
HXLINE(  51)			return value;
            		}
HXLINE(  54)		this->_layoutName = value;
HXLINE(  55)		if (hx::IsNotNull( this->_contents )) {
HXLINE(  56)			 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN(  56)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName()));
            		}
HXLINE(  58)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_layoutName,return )

void ScrollView_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_61_createChildren)
HXLINE(  62)		this->super::createChildren();
HXLINE(  63)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->_onMouseWheel_dyn());
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if ((this->_scrollMode != HX_("drag",f4,2b,70,42))) {
HXLINE(  64)			_hx_tmp = (this->_scrollMode == HX_("inertial",32,2a,a0,a6));
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            		}
HXLINE(  67)		this->createContentContainer();
            	}


void ScrollView_obj::createContentContainer(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_71_createContentContainer)
HXDLIN(  71)		if (hx::IsNull( this->_contents )) {
HXLINE(  72)			this->_contents =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE(  73)			this->_contents->addClass(HX_("scrollview-contents",15,b7,70,a7),null(),null());
HXLINE(  74)			this->_contents->registerEvent(HX_("resize",f4,59,7b,08),this->_onContentsResized_dyn());
HXLINE(  75)			 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN(  75)			_hx_tmp->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName()));
HXLINE(  76)			this->addComponent(this->_contents);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,createContentContainer,(void))

void ScrollView_obj::destroyChildren(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_80_destroyChildren)
HXLINE(  81)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE(  82)			this->removeComponent(this->_hscroll,null(),null());
HXLINE(  83)			this->_hscroll = null();
            		}
HXLINE(  85)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE(  86)			this->removeComponent(this->_vscroll,null(),null());
HXLINE(  87)			this->_vscroll = null();
            		}
            	}


Float ScrollView_obj::get_vscrollPos(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_94_get_vscrollPos)
HXDLIN(  94)		return this->_vscrollPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPos,return )

Float ScrollView_obj::set_vscrollPos(Float value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_96_set_vscrollPos)
HXLINE(  97)		if ((this->_vscrollPos == value)) {
HXLINE(  98)			return value;
            		}
HXLINE( 101)		this->invalidate(HX_("scroll",0d,d8,64,47));
HXLINE( 102)		this->_vscrollPos = value;
HXLINE( 103)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPos,return )

Float ScrollView_obj::get_vscrollMax(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_107_get_vscrollMax)
HXLINE( 108)		if (hx::IsNull( this->_vscroll )) {
HXLINE( 109)			return (int)0;
            		}
HXLINE( 111)		return this->_vscroll->get_max();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMax,return )

Float ScrollView_obj::get_hscrollPos(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_117_get_hscrollPos)
HXDLIN( 117)		return this->_hscrollPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPos,return )

Float ScrollView_obj::set_hscrollPos(Float value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_119_set_hscrollPos)
HXLINE( 120)		if ((this->_hscrollPos == value)) {
HXLINE( 121)			return value;
            		}
HXLINE( 124)		this->invalidate(HX_("scroll",0d,d8,64,47));
HXLINE( 125)		this->_hscrollPos = value;
HXLINE( 126)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPos,return )

 ::Dynamic ScrollView_obj::get_contentWidth(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_131_get_contentWidth)
HXDLIN( 131)		return this->_contents->get_width();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentWidth,return )

 ::Dynamic ScrollView_obj::set_contentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_134_set_contentWidth)
HXDLIN( 134)		return this->_contents->set_width(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentWidth,return )

 ::Dynamic ScrollView_obj::get_contentHeight(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_139_get_contentHeight)
HXDLIN( 139)		return this->_contents->get_height();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contentHeight,return )

 ::Dynamic ScrollView_obj::set_contentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_142_set_contentHeight)
HXDLIN( 142)		return this->_contents->set_height(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_contentHeight,return )

 ::Dynamic ScrollView_obj::get_percentContentWidth(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_147_get_percentContentWidth)
HXDLIN( 147)		return this->_contents->get_percentWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentWidth,return )

 ::Dynamic ScrollView_obj::set_percentContentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_150_set_percentContentWidth)
HXDLIN( 150)		return this->_contents->set_percentWidth(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentWidth,return )

 ::Dynamic ScrollView_obj::get_percentContentHeight(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_155_get_percentContentHeight)
HXDLIN( 155)		return this->_contents->get_percentHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_percentContentHeight,return )

 ::Dynamic ScrollView_obj::set_percentContentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_158_set_percentContentHeight)
HXDLIN( 158)		return this->_contents->set_percentHeight(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_percentContentHeight,return )

 ::haxe::ui::core::Component ScrollView_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_161_addComponent)
HXLINE( 162)		 ::haxe::ui::core::Component v = null();
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		bool _hx_tmp1;
HXDLIN( 163)		if (!(::Std_obj::is(child,hx::ClassOf< ::haxe::ui::components::HScroll >()))) {
HXLINE( 163)			_hx_tmp1 = ::Std_obj::is(child,hx::ClassOf< ::haxe::ui::components::VScroll >());
            		}
            		else {
HXLINE( 163)			_hx_tmp1 = true;
            		}
HXDLIN( 163)		if (!(_hx_tmp1)) {
HXLINE( 163)			_hx_tmp = hx::IsEq( child,this->_contents );
            		}
            		else {
HXLINE( 163)			_hx_tmp = true;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 164)			v = this->super::addComponent(child);
            		}
            		else {
HXLINE( 166)			v = this->_contents->addComponent(child);
            		}
HXLINE( 168)		return v;
            	}


 ::haxe::ui::core::Component ScrollView_obj::removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  __o_dispose,hx::Null< bool >  __o_invalidate){
bool dispose = __o_dispose.Default(true);
bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_d194136255627609_171_removeComponent)
HXLINE( 172)		 ::haxe::ui::core::Component v = null();
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		bool _hx_tmp1;
HXDLIN( 173)		if (!(::Std_obj::is(child,hx::ClassOf< ::haxe::ui::components::HScroll >()))) {
HXLINE( 173)			_hx_tmp1 = ::Std_obj::is(child,hx::ClassOf< ::haxe::ui::components::VScroll >());
            		}
            		else {
HXLINE( 173)			_hx_tmp1 = true;
            		}
HXDLIN( 173)		if (!(_hx_tmp1)) {
HXLINE( 173)			_hx_tmp = hx::IsEq( child,this->_contents );
            		}
            		else {
HXLINE( 173)			_hx_tmp = true;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 174)			v = this->super::removeComponent(child,dispose,invalidate);
            		}
            		else {
HXLINE( 175)			if (hx::IsNotNull( this->_contents )) {
HXLINE( 176)				v = this->_contents->removeComponent(child,dispose,invalidate);
            			}
            		}
HXLINE( 178)		return v;
            	}


void ScrollView_obj::clearContents(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_182_clearContents)
HXDLIN( 182)		this->_contents->removeAllComponents(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,clearContents,(void))

 ::haxe::ui::core::Component ScrollView_obj::addComponentToSuper( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_186_addComponentToSuper)
HXDLIN( 186)		return this->super::addComponent(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,addComponentToSuper,return )

 ::haxe::ui::core::Component ScrollView_obj::get_contents(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_191_get_contents)
HXDLIN( 191)		return this->_contents;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_contents,return )

 ::haxe::ui::core::Component ScrollView_obj::get_horizontalConstraint(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_204_get_horizontalConstraint)
HXDLIN( 204)		return this->_contents;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_horizontalConstraint,return )

 ::haxe::ui::core::Component ScrollView_obj::get_verticalConstraint(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_209_get_verticalConstraint)
HXDLIN( 209)		return this->_contents;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_verticalConstraint,return )

::String ScrollView_obj::get_scrollMode(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_215_get_scrollMode)
HXDLIN( 215)		return this->_scrollMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_scrollMode,return )

::String ScrollView_obj::set_scrollMode(::String value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_217_set_scrollMode)
HXLINE( 218)		if ((value == this->_scrollMode)) {
HXLINE( 219)			return value;
            		}
HXLINE( 222)		this->_scrollMode = value;
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		if ((this->_scrollMode != HX_("drag",f4,2b,70,42))) {
HXLINE( 223)			_hx_tmp = (this->_scrollMode == HX_("inertial",32,2a,a0,a6));
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            		}
            		else {
HXLINE( 226)			this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->_onMouseDown_dyn());
            		}
HXLINE( 229)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_scrollMode,return )

 ::Dynamic ScrollView_obj::set_onScrollChange( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_238_set_onScrollChange)
HXLINE( 239)		if (hx::IsNotNull( this->_hx___onScrollChange )) {
HXLINE( 240)			this->unregisterEvent(HX_("scrollchange",3d,71,a0,da),this->_hx___onScrollChange);
HXLINE( 241)			this->_hx___onScrollChange = null();
            		}
HXLINE( 243)		this->registerEvent(HX_("scrollchange",3d,71,a0,da),value);
HXLINE( 244)		this->_hx___onScrollChange = value;
HXLINE( 245)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_onScrollChange,return )

void ScrollView_obj::invalidateScroll(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_253_invalidateScroll)
HXDLIN( 253)		this->invalidate(HX_("scroll",0d,d8,64,47));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,invalidateScroll,(void))

void ScrollView_obj::validateInternal(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_256_validateInternal)
HXLINE( 257)		bool scrollInvalid = this->isInvalid(HX_("scroll",0d,d8,64,47));
HXLINE( 258)		bool layoutInvalid = this->isInvalid(HX_("layout",aa,ae,b8,58));
HXLINE( 260)		this->super::validateInternal();
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if (!(scrollInvalid)) {
HXLINE( 262)			_hx_tmp = layoutInvalid;
            		}
            		else {
HXLINE( 262)			_hx_tmp = true;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 263)			this->validateScroll();
            		}
            	}


void ScrollView_obj::validateScroll(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_267_validateScroll)
HXLINE( 268)		 ::haxe::ui::util::VariantType _hx_tmp = this->behaviourGet(HX_("hscrollPos",1f,b6,47,5c));
HXDLIN( 268)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp),this->_hscrollPos )) {
HXLINE( 270)			this->behaviourSet(HX_("hscrollPos",1f,b6,47,5c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_hscrollPos));
HXLINE( 271)			this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_dce943bc_34,1));
            		}
HXLINE( 274)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->behaviourGet(HX_("vscrollPos",51,44,5a,e0));
HXDLIN( 274)		if (hx::IsNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(_hx_tmp1),this->_vscrollPos )) {
HXLINE( 276)			this->behaviourSet(HX_("vscrollPos",51,44,5a,e0),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->_vscrollPos));
HXLINE( 277)			this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_dce943bc_35,1));
            		}
HXLINE( 280)		this->checkScrolls();
HXLINE( 281)		this->updateScrollRect();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,validateScroll,(void))

void ScrollView_obj::_onMouseWheel( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_304__onMouseWheel)
HXDLIN( 304)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 305)			event->cancel();
HXLINE( 306)			if ((event->delta > (int)0)) {
HXLINE( 307)				 ::haxe::ui::components::VScroll _g = this->_vscroll;
HXDLIN( 307)				_g->set_pos((_g->get_pos() - (int)50));
            			}
            			else {
HXLINE( 309)				if ((event->delta < (int)0)) {
HXLINE( 310)					 ::haxe::ui::components::VScroll _g1 = this->_vscroll;
HXDLIN( 310)					_g1->set_pos((_g1->get_pos() + (int)50));
            				}
            			}
HXLINE( 312)			this->dispatch( ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseWheel,(void))

void ScrollView_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_316__onMouseDown)
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		bool _hx_tmp1;
HXDLIN( 317)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 317)			_hx_tmp1 = (this->_hscroll->get_hidden() == true);
            		}
            		else {
HXLINE( 317)			_hx_tmp1 = true;
            		}
HXDLIN( 317)		if (_hx_tmp1) {
HXLINE( 317)			if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 317)				_hx_tmp = (this->_vscroll->get_hidden() == true);
            			}
            			else {
HXLINE( 317)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 317)			_hx_tmp = false;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 318)			return;
            		}
HXLINE( 321)		event->cancel();
HXLINE( 322)		bool _hx_tmp2;
HXDLIN( 322)		bool _hx_tmp3;
HXDLIN( 322)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 322)			_hx_tmp3 = (this->_hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 322)			_hx_tmp3 = false;
            		}
HXDLIN( 322)		if (_hx_tmp3) {
HXLINE( 322)			_hx_tmp2 = (this->_hscroll->hitTest(event->screenX,event->screenY) == true);
            		}
            		else {
HXLINE( 322)			_hx_tmp2 = false;
            		}
HXDLIN( 322)		if (_hx_tmp2) {
HXLINE( 323)			return;
            		}
HXLINE( 325)		bool _hx_tmp4;
HXDLIN( 325)		bool _hx_tmp5;
HXDLIN( 325)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 325)			_hx_tmp5 = (this->_vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 325)			_hx_tmp5 = false;
            		}
HXDLIN( 325)		if (_hx_tmp5) {
HXLINE( 325)			_hx_tmp4 = (this->_vscroll->hitTest(event->screenX,event->screenY) == true);
            		}
            		else {
HXLINE( 325)			_hx_tmp4 = false;
            		}
HXDLIN( 325)		if (_hx_tmp4) {
HXLINE( 326)			return;
            		}
HXLINE( 329)		Float _hx_tmp6 = this->get_hscrollPos();
HXDLIN( 329)		this->_offsetX = (_hx_tmp6 + event->screenX);
HXLINE( 330)		Float _hx_tmp7 = this->get_vscrollPos();
HXDLIN( 330)		this->_offsetY = (_hx_tmp7 + event->screenY);
HXLINE( 332)		if ((this->_scrollMode == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 333)			this->_inertialTargetX = this->get_hscrollPos();
HXLINE( 334)			this->_inertialTargetY = this->get_vscrollPos();
HXLINE( 335)			this->_inertialAmplitudeX = (int)0;
HXLINE( 336)			this->_inertialAmplitudeY = (int)0;
HXLINE( 338)			this->_screenOffsetX = event->screenX;
HXLINE( 339)			this->_screenOffsetY = event->screenY;
HXLINE( 341)			this->_inertialTimestamp = ::__time_stamp();
            		}
HXLINE( 344)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->_onMouseMove_dyn());
HXLINE( 345)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
HXLINE( 347)		this->dispatch( ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstart",35,4d,bb,3a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseDown,(void))

void ScrollView_obj::_onMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_350__onMouseMove)
HXLINE( 351)		this->set_hscrollPos((this->_offsetX - event->screenX));
HXLINE( 352)		this->set_vscrollPos((this->_offsetY - event->screenY));
HXLINE( 353)		this->dispatch( ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseMove,(void))

void ScrollView_obj::_onMouseUp( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_356__onMouseUp)
HXLINE( 357)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->_onMouseMove_dyn());
HXLINE( 358)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->_onMouseUp_dyn());
HXLINE( 360)		if ((this->_scrollMode == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 361)			Float now = ::__time_stamp();
HXLINE( 362)			Float elapsed = ((now - this->_inertialTimestamp) * (int)1000);
HXLINE( 364)			Float deltaX = ::Math_obj::abs((this->_screenOffsetX - event->screenX));
HXLINE( 365)			Float deltaY = ::Math_obj::abs((this->_screenOffsetY - event->screenY));
HXLINE( 367)			int _hx_tmp;
HXDLIN( 367)			if (((this->_screenOffsetX - event->screenX) < (int)0)) {
HXLINE( 367)				_hx_tmp = (int)0;
            			}
            			else {
HXLINE( 367)				_hx_tmp = (int)1;
            			}
HXDLIN( 367)			this->_inertiaDirectionX = _hx_tmp;
HXLINE( 368)			Float velocityX = ((Float)deltaX / (Float)elapsed);
HXLINE( 369)			Float v = ((Float)((int)1000 * deltaX) / (Float)((int)1 + elapsed));
HXLINE( 370)			velocityX = ((((Float)0.8) * v) + (((Float)0.2) * velocityX));
HXLINE( 372)			int _hx_tmp1;
HXDLIN( 372)			if (((this->_screenOffsetY - event->screenY) < (int)0)) {
HXLINE( 372)				_hx_tmp1 = (int)0;
            			}
            			else {
HXLINE( 372)				_hx_tmp1 = (int)1;
            			}
HXDLIN( 372)			this->_inertiaDirectionY = _hx_tmp1;
HXLINE( 373)			Float velocityY = ((Float)deltaY / (Float)elapsed);
HXLINE( 374)			Float v1 = ((Float)((int)1000 * deltaY) / (Float)((int)1 + elapsed));
HXLINE( 375)			velocityY = ((((Float)0.8) * v1) + (((Float)0.2) * velocityY));
HXLINE( 377)			bool _hx_tmp2;
HXDLIN( 377)			if ((velocityX <= (int)75)) {
HXLINE( 377)				_hx_tmp2 = (velocityY <= (int)75);
            			}
            			else {
HXLINE( 377)				_hx_tmp2 = false;
            			}
HXDLIN( 377)			if (_hx_tmp2) {
HXLINE( 378)				return;
            			}
HXLINE( 381)			this->_inertialTimestamp = ::__time_stamp();
HXLINE( 383)			this->_inertialAmplitudeX = (((Float)0.8) * velocityX);
HXLINE( 384)			if ((this->_inertiaDirectionX == (int)0)) {
HXLINE( 385)				Float _hx_tmp3 = this->get_hscrollPos();
HXDLIN( 385)				this->_inertialTargetX = ::Math_obj::round((_hx_tmp3 - this->_inertialAmplitudeX));
            			}
            			else {
HXLINE( 387)				Float _hx_tmp4 = this->get_hscrollPos();
HXDLIN( 387)				this->_inertialTargetX = ::Math_obj::round((_hx_tmp4 + this->_inertialAmplitudeX));
            			}
HXLINE( 390)			this->_inertialAmplitudeY = (((Float)0.8) * velocityY);
HXLINE( 391)			if ((this->_inertiaDirectionY == (int)0)) {
HXLINE( 392)				Float _hx_tmp5 = this->get_vscrollPos();
HXDLIN( 392)				this->_inertialTargetY = ::Math_obj::round((_hx_tmp5 - this->_inertialAmplitudeY));
            			}
            			else {
HXLINE( 394)				Float _hx_tmp6 = this->get_vscrollPos();
HXDLIN( 394)				this->_inertialTargetY = ::Math_obj::round((_hx_tmp6 + this->_inertialAmplitudeY));
            			}
HXLINE( 397)			bool _hx_tmp7;
HXDLIN( 397)			Float _hx_tmp8 = this->get_hscrollPos();
HXDLIN( 397)			if ((_hx_tmp8 == this->_inertialTargetX)) {
HXLINE( 397)				Float _hx_tmp9 = this->get_vscrollPos();
HXDLIN( 397)				_hx_tmp7 = (_hx_tmp9 == this->_inertialTargetY);
            			}
            			else {
HXLINE( 397)				_hx_tmp7 = false;
            			}
HXDLIN( 397)			if (_hx_tmp7) {
HXLINE( 398)				return;
            			}
HXLINE( 401)			Float _hx_tmp10 = this->get_hscrollPos();
HXDLIN( 401)			if ((_hx_tmp10 == this->_inertialTargetX)) {
HXLINE( 402)				this->_inertialAmplitudeX = (int)0;
            			}
HXLINE( 404)			Float _hx_tmp11 = this->get_vscrollPos();
HXDLIN( 404)			if ((_hx_tmp11 == this->_inertialTargetY)) {
HXLINE( 405)				this->_inertialAmplitudeY = (int)0;
            			}
HXLINE( 408)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            		else {
HXLINE( 410)			this->dispatch( ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseUp,(void))

void ScrollView_obj::inertialScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_414_inertialScroll)
HXLINE( 415)		Float elapsed = ::__time_stamp();
HXDLIN( 415)		Float elapsed1 = ((elapsed - this->_inertialTimestamp) * (int)1000);
HXLINE( 417)		bool finishedX = false;
HXLINE( 418)		if ((this->_inertialAmplitudeX != (int)0)) {
HXLINE( 419)			Float deltaX = -(this->_inertialAmplitudeX);
HXDLIN( 419)			Float deltaX1 = (deltaX * ::Math_obj::exp(((Float)-(elapsed1) / (Float)(int)325)));
HXLINE( 420)			bool _hx_tmp;
HXDLIN( 420)			if (!((deltaX1 > ((Float)0.5)))) {
HXLINE( 420)				_hx_tmp = (deltaX1 < ((Float)-0.5));
            			}
            			else {
HXLINE( 420)				_hx_tmp = true;
            			}
HXDLIN( 420)			if (_hx_tmp) {
HXLINE( 421)				Float oldPos = this->get_hscrollPos();
HXLINE( 422)				if ((this->_inertiaDirectionX == (int)0)) {
HXLINE( 423)					this->set_hscrollPos((this->_inertialTargetX - deltaX1));
            				}
            				else {
HXLINE( 425)					this->set_hscrollPos((this->_inertialTargetX + deltaX1));
            				}
HXLINE( 427)				finishedX = (this->get_hscrollPos() == oldPos);
            			}
            			else {
HXLINE( 429)				finishedX = true;
            			}
            		}
            		else {
HXLINE( 432)			finishedX = true;
            		}
HXLINE( 435)		bool finishedY = false;
HXLINE( 436)		if ((this->_inertialAmplitudeY != (int)0)) {
HXLINE( 437)			Float deltaY = -(this->_inertialAmplitudeY);
HXDLIN( 437)			Float deltaY1 = (deltaY * ::Math_obj::exp(((Float)-(elapsed1) / (Float)(int)325)));
HXLINE( 438)			bool _hx_tmp1;
HXDLIN( 438)			if (!((deltaY1 > ((Float)0.5)))) {
HXLINE( 438)				_hx_tmp1 = (deltaY1 < ((Float)-0.5));
            			}
            			else {
HXLINE( 438)				_hx_tmp1 = true;
            			}
HXDLIN( 438)			if (_hx_tmp1) {
HXLINE( 439)				Float oldPos1 = this->get_vscrollPos();
HXLINE( 440)				if ((this->_inertiaDirectionY == (int)0)) {
HXLINE( 441)					this->set_vscrollPos((this->_inertialTargetY - deltaY1));
            				}
            				else {
HXLINE( 443)					this->set_vscrollPos((this->_inertialTargetY + deltaY1));
            				}
HXLINE( 445)				finishedY = (this->get_vscrollPos() == oldPos1);
            			}
            			else {
HXLINE( 447)				finishedY = true;
            			}
            		}
            		else {
HXLINE( 450)			finishedY = true;
            		}
HXLINE( 453)		bool _hx_tmp2;
HXDLIN( 453)		if ((finishedX == true)) {
HXLINE( 453)			_hx_tmp2 = (finishedY == true);
            		}
            		else {
HXLINE( 453)			_hx_tmp2 = false;
            		}
HXDLIN( 453)		if (_hx_tmp2) {
HXLINE( 454)			this->dispatch( ::haxe::ui::core::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
            		}
            		else {
HXLINE( 456)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,inertialScroll,(void))

void ScrollView_obj::_onContentsResized( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_461__onContentsResized)
HXDLIN( 461)		this->invalidate(HX_("scroll",0d,d8,64,47));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onContentsResized,(void))

Float ScrollView_obj::get_hscrollOffset(){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_466_get_hscrollOffset)
HXDLIN( 466)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollOffset,return )

void ScrollView_obj::checkScrolls(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_469_checkScrolls)
HXLINE( 470)		bool _hx_tmp;
HXDLIN( 470)		bool _hx_tmp1;
HXDLIN( 470)		bool _hx_tmp2;
HXDLIN( 470)		bool _hx_tmp3;
HXDLIN( 470)		bool _hx_tmp4;
HXDLIN( 470)		if ((this->get_isReady() != false)) {
HXLINE( 470)			_hx_tmp4 = hx::IsNull( this->get_horizontalConstraint() );
            		}
            		else {
HXLINE( 470)			_hx_tmp4 = true;
            		}
HXDLIN( 470)		if (!(_hx_tmp4)) {
HXLINE( 470)			_hx_tmp3 = (this->get_horizontalConstraint()->get_childComponents()->length == (int)0);
            		}
            		else {
HXLINE( 470)			_hx_tmp3 = true;
            		}
HXDLIN( 470)		if (!(_hx_tmp3)) {
HXLINE( 470)			_hx_tmp2 = hx::IsNull( this->get_verticalConstraint() );
            		}
            		else {
HXLINE( 470)			_hx_tmp2 = true;
            		}
HXDLIN( 470)		if (!(_hx_tmp2)) {
HXLINE( 470)			_hx_tmp1 = (this->get_verticalConstraint()->get_childComponents()->length == (int)0);
            		}
            		else {
HXLINE( 470)			_hx_tmp1 = true;
            		}
HXDLIN( 470)		if (!(_hx_tmp1)) {
HXLINE( 470)			_hx_tmp = hx::IsEq( this->get_native(),true );
            		}
            		else {
HXLINE( 470)			_hx_tmp = true;
            		}
HXDLIN( 470)		if (_hx_tmp) {
HXLINE( 474)			return;
            		}
HXLINE( 477)		 ::haxe::ui::util::Size usableSize = this->get_layout()->get_usableSize();
HXLINE( 478)		 ::Dynamic _hx_tmp5 = this->get_horizontalConstraint()->get_componentWidth();
HXDLIN( 478)		if (hx::IsGreater( _hx_tmp5,usableSize->width )) {
HXLINE( 479)			if (hx::IsNull( this->_hscroll )) {
HXLINE( 480)				this->_hscroll =  ::haxe::ui::components::HScroll_obj::__alloc( HX_CTX );
HXLINE( 481)				this->_hscroll->set_percentWidth((int)100);
HXLINE( 482)				this->_hscroll->set_id(HX_("scrollview-hscroll",da,fc,19,11));
HXLINE( 483)				this->_hscroll->registerEvent(HX_("change",70,91,72,b7),this->_onHScroll_dyn());
HXLINE( 484)				this->addComponent(this->_hscroll);
            			}
HXLINE( 487)			this->_hscroll->set_hidden(false);
HXLINE( 488)			 ::haxe::ui::components::HScroll _hx_tmp6 = this->_hscroll;
HXDLIN( 488)			 ::Dynamic _hx_tmp7 = this->get_horizontalConstraint()->get_componentWidth();
HXDLIN( 488)			Float _hx_tmp8 = (_hx_tmp7 - usableSize->width);
HXDLIN( 488)			_hx_tmp6->set_max((_hx_tmp8 - this->get_hscrollOffset()));
HXLINE( 489)			 ::haxe::ui::components::HScroll _hx_tmp9 = this->_hscroll;
HXDLIN( 489)			Float usableSize1 = usableSize->width;
HXDLIN( 489)			Float _hx_tmp10 = ((Float)usableSize1 / (Float)this->get_horizontalConstraint()->get_componentWidth());
HXDLIN( 489)			_hx_tmp9->set_pageSize((_hx_tmp10 * this->_hscroll->get_max()));
HXLINE( 491)			this->_hscroll->syncValidation();
            		}
            		else {
HXLINE( 493)			if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 494)				this->_hscroll->set_hidden(true);
            			}
            		}
HXLINE( 498)		 ::Dynamic _hx_tmp11 = this->get_verticalConstraint()->get_componentHeight();
HXDLIN( 498)		if (hx::IsGreater( _hx_tmp11,usableSize->height )) {
HXLINE( 499)			if (hx::IsNull( this->_vscroll )) {
HXLINE( 500)				this->_vscroll =  ::haxe::ui::components::VScroll_obj::__alloc( HX_CTX );
HXLINE( 501)				this->_vscroll->set_percentHeight((int)100);
HXLINE( 502)				this->_vscroll->set_id(HX_("scrollview-vscroll",68,7b,46,57));
HXLINE( 503)				this->_vscroll->registerEvent(HX_("change",70,91,72,b7),this->_onVScroll_dyn());
HXLINE( 504)				this->addComponent(this->_vscroll);
            			}
HXLINE( 507)			this->_vscroll->set_hidden(false);
HXLINE( 508)			 ::haxe::ui::components::VScroll _hx_tmp12 = this->_vscroll;
HXDLIN( 508)			 ::Dynamic _hx_tmp13 = this->get_verticalConstraint()->get_componentHeight();
HXDLIN( 508)			_hx_tmp12->set_max((_hx_tmp13 - usableSize->height));
HXLINE( 509)			 ::haxe::ui::components::VScroll _hx_tmp14 = this->_vscroll;
HXDLIN( 509)			Float usableSize2 = usableSize->height;
HXDLIN( 509)			Float _hx_tmp15 = ((Float)usableSize2 / (Float)this->get_verticalConstraint()->get_componentHeight());
HXDLIN( 509)			_hx_tmp14->set_pageSize((_hx_tmp15 * this->_vscroll->get_max()));
HXLINE( 511)			this->_vscroll->syncValidation();
            		}
            		else {
HXLINE( 513)			if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 514)				this->_vscroll->set_hidden(true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,checkScrolls,(void))

void ScrollView_obj::_onHScroll( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_520__onHScroll)
HXDLIN( 520)		this->set_hscrollPos(this->_hscroll->get_pos());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onHScroll,(void))

void ScrollView_obj::_onVScroll( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d194136255627609_524__onVScroll)
HXDLIN( 524)		this->set_vscrollPos(this->_vscroll->get_pos());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onVScroll,(void))

void ScrollView_obj::updateScrollRect(){
            	HX_GC_STACKFRAME(&_hx_pos_d194136255627609_527_updateScrollRect)
HXLINE( 528)		if (hx::IsNull( this->_contents )) {
HXLINE( 529)			return;
            		}
HXLINE( 532)		 ::haxe::ui::util::Size usableSize = this->get_layout()->get_usableSize();
HXLINE( 534)		Float clipCX = usableSize->width;
HXLINE( 535)		if (hx::IsGreater( clipCX,this->_contents->get_componentWidth() )) {
HXLINE( 536)			clipCX = this->_contents->get_componentWidth();
            		}
HXLINE( 538)		Float clipCY = usableSize->height;
HXLINE( 539)		if (hx::IsGreater( clipCY,this->_contents->get_componentHeight() )) {
HXLINE( 540)			clipCY = this->_contents->get_componentHeight();
            		}
HXLINE( 543)		Float xpos = (int)0;
HXLINE( 544)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 545)			xpos = this->_hscroll->get_pos();
            		}
HXLINE( 547)		Float ypos = (int)0;
HXLINE( 548)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 549)			ypos = this->_vscroll->get_pos();
            		}
HXLINE( 552)		int rc = ::Std_obj::_hx_int(xpos);
HXDLIN( 552)		 ::haxe::ui::util::Rectangle rc1 =  ::haxe::ui::util::Rectangle_obj::__alloc( HX_CTX ,rc,::Std_obj::_hx_int(ypos),clipCX,clipCY);
HXLINE( 553)		this->_contents->set_componentClipRect(rc1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,updateScrollRect,(void))

 ::haxe::ui::core::Component ScrollView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7b9090976e5c2085_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::ScrollView c = ( ( ::haxe::ui::containers::ScrollView)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component ScrollView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_7b9090976e5c2085_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::ScrollView_obj::__alloc( HX_CTX );
            	}


 ::haxe::ui::util::VariantType ScrollView_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_830dbfff8aa878ab_1_getProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("hscrollPos",1f,b6,47,5c)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_hscrollPos());
HXDLIN(   1)			goto _hx_goto_49;
            		}
            		if (  (_hx_switch_0==HX_("vscrollPos",51,44,5a,e0)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->get_vscrollPos());
HXDLIN(   1)			goto _hx_goto_49;
            		}
            		_hx_goto_49:;
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType ScrollView_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_830dbfff8aa878ab_1_setProperty)
HXDLIN(   1)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("hscrollPos",1f,b6,47,5c)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_hscrollPos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_51;
            		}
            		if (  (_hx_switch_0==HX_("vscrollPos",51,44,5a,e0)) ){
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(this->set_vscrollPos(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
HXDLIN(   1)			goto _hx_goto_51;
            		}
            		_hx_goto_51:;
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


int ScrollView_obj::INERTIAL_TIME_CONSTANT;


hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__new() {
	hx::ObjectPtr< ScrollView_obj > __this = new ScrollView_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScrollView_obj *__this = (ScrollView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollView_obj), true, "haxe.ui.containers.ScrollView"));
	*(void **)__this = ScrollView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollView_obj::ScrollView_obj()
{
}

void ScrollView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollView);
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	HX_MARK_MEMBER_NAME(_layoutName,"_layoutName");
	HX_MARK_MEMBER_NAME(_vscrollPos,"_vscrollPos");
	HX_MARK_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_MARK_MEMBER_NAME(_hscrollPos,"_hscrollPos");
	HX_MARK_MEMBER_NAME(contents,"contents");
	HX_MARK_MEMBER_NAME(horizontalConstraint,"horizontalConstraint");
	HX_MARK_MEMBER_NAME(verticalConstraint,"verticalConstraint");
	HX_MARK_MEMBER_NAME(_scrollMode,"_scrollMode");
	HX_MARK_MEMBER_NAME(_hx___onScrollChange,"__onScrollChange");
	HX_MARK_MEMBER_NAME(onScrollChange,"onScrollChange");
	HX_MARK_MEMBER_NAME(_inertialTimestamp,"_inertialTimestamp");
	HX_MARK_MEMBER_NAME(_offsetX,"_offsetX");
	HX_MARK_MEMBER_NAME(_screenOffsetX,"_screenOffsetX");
	HX_MARK_MEMBER_NAME(_inertialAmplitudeX,"_inertialAmplitudeX");
	HX_MARK_MEMBER_NAME(_inertialTargetX,"_inertialTargetX");
	HX_MARK_MEMBER_NAME(_inertiaDirectionX,"_inertiaDirectionX");
	HX_MARK_MEMBER_NAME(_offsetY,"_offsetY");
	HX_MARK_MEMBER_NAME(_screenOffsetY,"_screenOffsetY");
	HX_MARK_MEMBER_NAME(_inertialAmplitudeY,"_inertialAmplitudeY");
	HX_MARK_MEMBER_NAME(_inertialTargetY,"_inertialTargetY");
	HX_MARK_MEMBER_NAME(_inertiaDirectionY,"_inertiaDirectionY");
	HX_MARK_MEMBER_NAME(hscrollOffset,"hscrollOffset");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	HX_VISIT_MEMBER_NAME(_layoutName,"_layoutName");
	HX_VISIT_MEMBER_NAME(_vscrollPos,"_vscrollPos");
	HX_VISIT_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_VISIT_MEMBER_NAME(_hscrollPos,"_hscrollPos");
	HX_VISIT_MEMBER_NAME(contents,"contents");
	HX_VISIT_MEMBER_NAME(horizontalConstraint,"horizontalConstraint");
	HX_VISIT_MEMBER_NAME(verticalConstraint,"verticalConstraint");
	HX_VISIT_MEMBER_NAME(_scrollMode,"_scrollMode");
	HX_VISIT_MEMBER_NAME(_hx___onScrollChange,"__onScrollChange");
	HX_VISIT_MEMBER_NAME(onScrollChange,"onScrollChange");
	HX_VISIT_MEMBER_NAME(_inertialTimestamp,"_inertialTimestamp");
	HX_VISIT_MEMBER_NAME(_offsetX,"_offsetX");
	HX_VISIT_MEMBER_NAME(_screenOffsetX,"_screenOffsetX");
	HX_VISIT_MEMBER_NAME(_inertialAmplitudeX,"_inertialAmplitudeX");
	HX_VISIT_MEMBER_NAME(_inertialTargetX,"_inertialTargetX");
	HX_VISIT_MEMBER_NAME(_inertiaDirectionX,"_inertiaDirectionX");
	HX_VISIT_MEMBER_NAME(_offsetY,"_offsetY");
	HX_VISIT_MEMBER_NAME(_screenOffsetY,"_screenOffsetY");
	HX_VISIT_MEMBER_NAME(_inertialAmplitudeY,"_inertialAmplitudeY");
	HX_VISIT_MEMBER_NAME(_inertialTargetY,"_inertialTargetY");
	HX_VISIT_MEMBER_NAME(_inertiaDirectionY,"_inertiaDirectionY");
	HX_VISIT_MEMBER_NAME(hscrollOffset,"hscrollOffset");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ScrollView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return hx::Val( _hscroll ); }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return hx::Val( _vscroll ); }
		if (HX_FIELD_EQ(inName,"contents") ) { return hx::Val( inCallProp == hx::paccAlways ? get_contents() : contents ); }
		if (HX_FIELD_EQ(inName,"_offsetX") ) { return hx::Val( _offsetX ); }
		if (HX_FIELD_EQ(inName,"_offsetY") ) { return hx::Val( _offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return hx::Val( _contents ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_layoutName() ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_vscrollPos() ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return hx::Val( inCallProp == hx::paccAlways ? get_vscrollMax() : vscrollMax ); }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_hscrollPos() ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_scrollMode() ); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return hx::Val( _onMouseUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onHScroll") ) { return hx::Val( _onHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onVScroll") ) { return hx::Val( _onVScroll_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { return hx::Val( _layoutName ); }
		if (HX_FIELD_EQ(inName,"_vscrollPos") ) { return hx::Val( _vscrollPos ); }
		if (HX_FIELD_EQ(inName,"_hscrollPos") ) { return hx::Val( _hscrollPos ); }
		if (HX_FIELD_EQ(inName,"_scrollMode") ) { return hx::Val( _scrollMode ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLayout") ) { return hx::Val( createLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_contentWidth() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_contents") ) { return hx::Val( get_contents_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { return hx::Val( _onMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return hx::Val( checkScrolls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_contentHeight() ); }
		if (HX_FIELD_EQ(inName,"clearContents") ) { return hx::Val( clearContents_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return hx::Val( _onMouseWheel_dyn() ); }
		if (HX_FIELD_EQ(inName,"hscrollOffset") ) { return hx::Val( inCallProp == hx::paccAlways ? get_hscrollOffset() : hscrollOffset ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_layoutName") ) { return hx::Val( get_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutName") ) { return hx::Val( set_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return hx::Val( get_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return hx::Val( set_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return hx::Val( get_vscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return hx::Val( get_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return hx::Val( set_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollMode") ) { return hx::Val( get_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollMode") ) { return hx::Val( set_scrollMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScrollChange") ) { return hx::Val( onScrollChange ); }
		if (HX_FIELD_EQ(inName,"validateScroll") ) { return hx::Val( validateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"_screenOffsetX") ) { return hx::Val( _screenOffsetX ); }
		if (HX_FIELD_EQ(inName,"_screenOffsetY") ) { return hx::Val( _screenOffsetY ); }
		if (HX_FIELD_EQ(inName,"inertialScroll") ) { return hx::Val( inertialScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyChildren") ) { return hx::Val( destroyChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return hx::Val( get_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentWidth") ) { return hx::Val( set_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onScrollChange") ) { return hx::Val( _hx___onScrollChange ); }
		if (HX_FIELD_EQ(inName,"invalidateScroll") ) { return hx::Val( invalidateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateInternal") ) { return hx::Val( validateInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertialTargetX") ) { return hx::Val( _inertialTargetX ); }
		if (HX_FIELD_EQ(inName,"_inertialTargetY") ) { return hx::Val( _inertialTargetY ); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return hx::Val( updateScrollRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return hx::Val( get_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_contentHeight") ) { return hx::Val( set_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollOffset") ) { return hx::Val( get_hscrollOffset_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"verticalConstraint") ) { return hx::Val( inCallProp == hx::paccAlways ? get_verticalConstraint() : verticalConstraint ); }
		if (HX_FIELD_EQ(inName,"set_onScrollChange") ) { return hx::Val( set_onScrollChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertialTimestamp") ) { return hx::Val( _inertialTimestamp ); }
		if (HX_FIELD_EQ(inName,"_inertiaDirectionX") ) { return hx::Val( _inertiaDirectionX ); }
		if (HX_FIELD_EQ(inName,"_inertiaDirectionY") ) { return hx::Val( _inertiaDirectionY ); }
		if (HX_FIELD_EQ(inName,"_onContentsResized") ) { return hx::Val( _onContentsResized_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_percentContentWidth() ); }
		if (HX_FIELD_EQ(inName,"addComponentToSuper") ) { return hx::Val( addComponentToSuper_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertialAmplitudeX") ) { return hx::Val( _inertialAmplitudeX ); }
		if (HX_FIELD_EQ(inName,"_inertialAmplitudeY") ) { return hx::Val( _inertialAmplitudeY ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_percentContentHeight() ); }
		if (HX_FIELD_EQ(inName,"horizontalConstraint") ) { return hx::Val( inCallProp == hx::paccAlways ? get_horizontalConstraint() : horizontalConstraint ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return hx::Val( createContentContainer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalConstraint") ) { return hx::Val( get_verticalConstraint_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_percentContentWidth") ) { return hx::Val( get_percentContentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentWidth") ) { return hx::Val( set_percentContentWidth_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_percentContentHeight") ) { return hx::Val( get_percentContentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentContentHeight") ) { return hx::Val( set_percentContentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_horizontalConstraint") ) { return hx::Val( get_horizontalConstraint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ScrollView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast<  ::haxe::ui::components::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast<  ::haxe::ui::components::VScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contents") ) { contents=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetX") ) { _offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetY") ) { _offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _contents=inValue.Cast<  ::haxe::ui::containers::Box >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_layoutName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_vscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { vscrollMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_hscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scrollMode") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_scrollMode(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { _layoutName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscrollPos") ) { _vscrollPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hscrollPos") ) { _hscrollPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollMode") ) { _scrollMode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_contentWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_contentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"hscrollOffset") ) { hscrollOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScrollChange") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_onScrollChange(inValue.Cast<  ::Dynamic >()) );onScrollChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenOffsetX") ) { _screenOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenOffsetY") ) { _screenOffsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onScrollChange") ) { _hx___onScrollChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertialTargetX") ) { _inertialTargetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertialTargetY") ) { _inertialTargetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"verticalConstraint") ) { verticalConstraint=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertialTimestamp") ) { _inertialTimestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertiaDirectionX") ) { _inertiaDirectionX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertiaDirectionY") ) { _inertiaDirectionY=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"percentContentWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_percentContentWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_inertialAmplitudeX") ) { _inertialAmplitudeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertialAmplitudeY") ) { _inertialAmplitudeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"percentContentHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_percentContentHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"horizontalConstraint") ) { horizontalConstraint=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_contents","\x79","\xfc","\xb9","\x76"));
	outFields->push(HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"));
	outFields->push(HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"));
	outFields->push(HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6"));
	outFields->push(HX_HCSTRING("layoutName","\x15","\xea","\x9e","\xe3"));
	outFields->push(HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2"));
	outFields->push(HX_HCSTRING("vscrollPos","\x51","\x44","\x5a","\xe0"));
	outFields->push(HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0"));
	outFields->push(HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e"));
	outFields->push(HX_HCSTRING("hscrollPos","\x1f","\xb6","\x47","\x5c"));
	outFields->push(HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0"));
	outFields->push(HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8"));
	outFields->push(HX_HCSTRING("percentContentWidth","\x72","\x94","\x55","\x51"));
	outFields->push(HX_HCSTRING("percentContentHeight","\xfb","\xc7","\xdb","\x8f"));
	outFields->push(HX_HCSTRING("contents","\x1a","\x05","\x24","\x2f"));
	outFields->push(HX_HCSTRING("horizontalConstraint","\x61","\x86","\xab","\x10"));
	outFields->push(HX_HCSTRING("verticalConstraint","\x73","\x30","\x1b","\xc5"));
	outFields->push(HX_HCSTRING("_scrollMode","\x2f","\x2f","\xaa","\xd8"));
	outFields->push(HX_HCSTRING("scrollMode","\x10","\x62","\x20","\x06"));
	outFields->push(HX_HCSTRING("_inertialTimestamp","\x05","\x59","\x4d","\x66"));
	outFields->push(HX_HCSTRING("_offsetX","\xe6","\x62","\x1d","\x11"));
	outFields->push(HX_HCSTRING("_screenOffsetX","\x9a","\x6b","\xe0","\xb2"));
	outFields->push(HX_HCSTRING("_inertialAmplitudeX","\xa6","\xaa","\xec","\xff"));
	outFields->push(HX_HCSTRING("_inertialTargetX","\x56","\xbe","\x8b","\x20"));
	outFields->push(HX_HCSTRING("_inertiaDirectionX","\x94","\xab","\x07","\x1e"));
	outFields->push(HX_HCSTRING("_offsetY","\xe7","\x62","\x1d","\x11"));
	outFields->push(HX_HCSTRING("_screenOffsetY","\x9b","\x6b","\xe0","\xb2"));
	outFields->push(HX_HCSTRING("_inertialAmplitudeY","\xa7","\xaa","\xec","\xff"));
	outFields->push(HX_HCSTRING("_inertialTargetY","\x57","\xbe","\x8b","\x20"));
	outFields->push(HX_HCSTRING("_inertiaDirectionY","\x95","\xab","\x07","\x1e"));
	outFields->push(HX_HCSTRING("hscrollOffset","\xe8","\xe7","\x34","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ScrollView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::containers::Box*/ ,(int)offsetof(ScrollView_obj,_contents),HX_HCSTRING("_contents","\x79","\xfc","\xb9","\x76")},
	{hx::fsObject /*::haxe::ui::components::HScroll*/ ,(int)offsetof(ScrollView_obj,_hscroll),HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65")},
	{hx::fsObject /*::haxe::ui::components::VScroll*/ ,(int)offsetof(ScrollView_obj,_vscroll),HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac")},
	{hx::fsString,(int)offsetof(ScrollView_obj,_layoutName),HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_vscrollPos),HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,vscrollMax),HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_hscrollPos),HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(ScrollView_obj,contents),HX_HCSTRING("contents","\x1a","\x05","\x24","\x2f")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(ScrollView_obj,horizontalConstraint),HX_HCSTRING("horizontalConstraint","\x61","\x86","\xab","\x10")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(ScrollView_obj,verticalConstraint),HX_HCSTRING("verticalConstraint","\x73","\x30","\x1b","\xc5")},
	{hx::fsString,(int)offsetof(ScrollView_obj,_scrollMode),HX_HCSTRING("_scrollMode","\x2f","\x2f","\xaa","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ScrollView_obj,_hx___onScrollChange),HX_HCSTRING("__onScrollChange","\x3c","\xd0","\x63","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ScrollView_obj,onScrollChange),HX_HCSTRING("onScrollChange","\x1c","\x45","\x24","\x39")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertialTimestamp),HX_HCSTRING("_inertialTimestamp","\x05","\x59","\x4d","\x66")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_offsetX),HX_HCSTRING("_offsetX","\xe6","\x62","\x1d","\x11")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_screenOffsetX),HX_HCSTRING("_screenOffsetX","\x9a","\x6b","\xe0","\xb2")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertialAmplitudeX),HX_HCSTRING("_inertialAmplitudeX","\xa6","\xaa","\xec","\xff")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertialTargetX),HX_HCSTRING("_inertialTargetX","\x56","\xbe","\x8b","\x20")},
	{hx::fsInt,(int)offsetof(ScrollView_obj,_inertiaDirectionX),HX_HCSTRING("_inertiaDirectionX","\x94","\xab","\x07","\x1e")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_offsetY),HX_HCSTRING("_offsetY","\xe7","\x62","\x1d","\x11")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_screenOffsetY),HX_HCSTRING("_screenOffsetY","\x9b","\x6b","\xe0","\xb2")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertialAmplitudeY),HX_HCSTRING("_inertialAmplitudeY","\xa7","\xaa","\xec","\xff")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertialTargetY),HX_HCSTRING("_inertialTargetY","\x57","\xbe","\x8b","\x20")},
	{hx::fsInt,(int)offsetof(ScrollView_obj,_inertiaDirectionY),HX_HCSTRING("_inertiaDirectionY","\x95","\xab","\x07","\x1e")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,hscrollOffset),HX_HCSTRING("hscrollOffset","\xe8","\xe7","\x34","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ScrollView_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ScrollView_obj::INERTIAL_TIME_CONSTANT,HX_HCSTRING("INERTIAL_TIME_CONSTANT","\x09","\xa9","\xdf","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollView_obj_sMemberFields[] = {
	HX_HCSTRING("_contents","\x79","\xfc","\xb9","\x76"),
	HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"),
	HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"),
	HX_HCSTRING("createLayout","\xc6","\xee","\x0d","\x7b"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6"),
	HX_HCSTRING("get_layoutName","\x5e","\x72","\x94","\x59"),
	HX_HCSTRING("set_layoutName","\xd2","\x5a","\xb4","\x79"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("createContentContainer","\xe4","\xd3","\x42","\xa7"),
	HX_HCSTRING("destroyChildren","\x59","\x8c","\x6e","\xe2"),
	HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2"),
	HX_HCSTRING("get_vscrollPos","\x9a","\xcc","\x4f","\x56"),
	HX_HCSTRING("set_vscrollPos","\x0e","\xb5","\x6f","\x76"),
	HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0"),
	HX_HCSTRING("get_vscrollMax","\xaa","\x79","\x4d","\x56"),
	HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e"),
	HX_HCSTRING("get_hscrollPos","\x68","\x3e","\x3d","\xd2"),
	HX_HCSTRING("set_hscrollPos","\xdc","\x26","\x5d","\xf2"),
	HX_HCSTRING("get_contentWidth","\x96","\xf6","\x8f","\xb5"),
	HX_HCSTRING("set_contentWidth","\x0a","\xe4","\xd1","\x0b"),
	HX_HCSTRING("get_contentHeight","\x57","\x45","\xb7","\xde"),
	HX_HCSTRING("set_contentHeight","\x63","\x1d","\x25","\x02"),
	HX_HCSTRING("get_percentContentWidth","\x09","\x3b","\xab","\x59"),
	HX_HCSTRING("set_percentContentWidth","\x15","\xa4","\x0c","\x5c"),
	HX_HCSTRING("get_percentContentHeight","\x84","\xe5","\x77","\xd2"),
	HX_HCSTRING("set_percentContentHeight","\xf8","\x66","\x52","\xe5"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("clearContents","\xc7","\x07","\x81","\x62"),
	HX_HCSTRING("addComponentToSuper","\x04","\xa7","\x14","\xcf"),
	HX_HCSTRING("contents","\x1a","\x05","\x24","\x2f"),
	HX_HCSTRING("get_contents","\x23","\xb9","\x3d","\xe4"),
	HX_HCSTRING("horizontalConstraint","\x61","\x86","\xab","\x10"),
	HX_HCSTRING("get_horizontalConstraint","\xea","\xa3","\x47","\x53"),
	HX_HCSTRING("verticalConstraint","\x73","\x30","\x1b","\xc5"),
	HX_HCSTRING("get_verticalConstraint","\xbc","\xa9","\xaf","\x1e"),
	HX_HCSTRING("_scrollMode","\x2f","\x2f","\xaa","\xd8"),
	HX_HCSTRING("get_scrollMode","\x59","\xea","\x15","\x7c"),
	HX_HCSTRING("set_scrollMode","\xcd","\xd2","\x35","\x9c"),
	HX_HCSTRING("__onScrollChange","\x3c","\xd0","\x63","\x6d"),
	HX_HCSTRING("onScrollChange","\x1c","\x45","\x24","\x39"),
	HX_HCSTRING("set_onScrollChange","\x59","\x58","\x6d","\xb1"),
	HX_HCSTRING("invalidateScroll","\xe8","\x33","\x0c","\x52"),
	HX_HCSTRING("validateInternal","\xf3","\x79","\xcf","\xe0"),
	HX_HCSTRING("validateScroll","\x43","\xb1","\x2c","\x9b"),
	HX_HCSTRING("_inertialTimestamp","\x05","\x59","\x4d","\x66"),
	HX_HCSTRING("_offsetX","\xe6","\x62","\x1d","\x11"),
	HX_HCSTRING("_screenOffsetX","\x9a","\x6b","\xe0","\xb2"),
	HX_HCSTRING("_inertialAmplitudeX","\xa6","\xaa","\xec","\xff"),
	HX_HCSTRING("_inertialTargetX","\x56","\xbe","\x8b","\x20"),
	HX_HCSTRING("_inertiaDirectionX","\x94","\xab","\x07","\x1e"),
	HX_HCSTRING("_offsetY","\xe7","\x62","\x1d","\x11"),
	HX_HCSTRING("_screenOffsetY","\x9b","\x6b","\xe0","\xb2"),
	HX_HCSTRING("_inertialAmplitudeY","\xa7","\xaa","\xec","\xff"),
	HX_HCSTRING("_inertialTargetY","\x57","\xbe","\x8b","\x20"),
	HX_HCSTRING("_inertiaDirectionY","\x95","\xab","\x07","\x1e"),
	HX_HCSTRING("_onMouseWheel","\x14","\x5d","\x39","\xa2"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseMove","\xb8","\x2c","\x02","\x7d"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("inertialScroll","\xdf","\x27","\x46","\x7f"),
	HX_HCSTRING("_onContentsResized","\x58","\x1c","\x86","\x4b"),
	HX_HCSTRING("hscrollOffset","\xe8","\xe7","\x34","\x0e"),
	HX_HCSTRING("get_hscrollOffset","\x3f","\xf3","\xa4","\x14"),
	HX_HCSTRING("checkScrolls","\xde","\xeb","\x5e","\x1e"),
	HX_HCSTRING("_onHScroll","\xf7","\xbe","\xfe","\x93"),
	HX_HCSTRING("_onVScroll","\x85","\x3d","\x2b","\xda"),
	HX_HCSTRING("updateScrollRect","\x3a","\xab","\x52","\x53"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	::String(null()) };

static void ScrollView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScrollView_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScrollView_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#endif

hx::Class ScrollView_obj::__mClass;

static ::String ScrollView_obj_sStaticFields[] = {
	HX_HCSTRING("INERTIAL_TIME_CONSTANT","\x09","\xa9","\xdf","\xc0"),
	::String(null())
};

void ScrollView_obj::__register()
{
	hx::Object *dummy = new ScrollView_obj;
	ScrollView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.ScrollView","\xbc","\x43","\xe9","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ScrollView_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d194136255627609_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("vscrollPos",51,44,5a,e0), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null())))
            				->setFixed(1,HX_("hscrollPos",1f,b6,47,5c), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_d194136255627609_289_boot)
HXDLIN( 289)		INERTIAL_TIME_CONSTANT = (int)325;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
