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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBarLayout
#include <haxe/ui/components/TabBarLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5013957fd959d036_21_new,"haxe.ui.components.TabBar","new",0xee5b7296,"haxe.ui.components.TabBar.new","haxe/ui/components/TabBar.hx",21,0xaabf3019)
HX_DEFINE_STACK_FRAME(_hx_pos_5013957fd959d036_14_new,"haxe.ui.components.TabBar","new",0xee5b7296,"haxe.ui.components.TabBar.new","haxe/ui/components/TabBar.hx",14,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_30_createContainer,"haxe.ui.components.TabBar","createContainer",0x42f549db,"haxe.ui.components.TabBar.createContainer","haxe/ui/components/TabBar.hx",30,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_41_createDefaults,"haxe.ui.components.TabBar","createDefaults",0xd4ed0d38,"haxe.ui.components.TabBar.createDefaults","haxe/ui/components/TabBar.hx",41,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_46_addComponent,"haxe.ui.components.TabBar","addComponent",0x57517966,"haxe.ui.components.TabBar.addComponent","haxe/ui/components/TabBar.hx",46,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_64_removeComponent,"haxe.ui.components.TabBar","removeComponent",0x32ffa70f,"haxe.ui.components.TabBar.removeComponent","haxe/ui/components/TabBar.hx",64,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_80_validateLayout,"haxe.ui.components.TabBar","validateLayout",0x7f99456a,"haxe.ui.components.TabBar.validateLayout","haxe/ui/components/TabBar.hx",80,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_103_showScrollButtons,"haxe.ui.components.TabBar","showScrollButtons",0xcfe3a32d,"haxe.ui.components.TabBar.showScrollButtons","haxe/ui/components/TabBar.hx",103,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_112_showScrollButtons,"haxe.ui.components.TabBar","showScrollButtons",0xcfe3a32d,"haxe.ui.components.TabBar.showScrollButtons","haxe/ui/components/TabBar.hx",112,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_126_showScrollButtons,"haxe.ui.components.TabBar","showScrollButtons",0xcfe3a32d,"haxe.ui.components.TabBar.showScrollButtons","haxe/ui/components/TabBar.hx",126,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_135_scrollLeft,"haxe.ui.components.TabBar","scrollLeft",0xf324473e,"haxe.ui.components.TabBar.scrollLeft","haxe/ui/components/TabBar.hx",135,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_144_scrollRight,"haxe.ui.components.TabBar","scrollRight",0x43a71cc5,"haxe.ui.components.TabBar.scrollRight","haxe/ui/components/TabBar.hx",144,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_165_hideScrollButtons,"haxe.ui.components.TabBar","hideScrollButtons",0xdf9a0c48,"haxe.ui.components.TabBar.hideScrollButtons","haxe/ui/components/TabBar.hx",165,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_174_validateData,"haxe.ui.components.TabBar","validateData",0xdf0cbcea,"haxe.ui.components.TabBar.validateData","haxe/ui/components/TabBar.hx",174,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_189_get_selectedIndex,"haxe.ui.components.TabBar","get_selectedIndex",0x2f3956c4,"haxe.ui.components.TabBar.get_selectedIndex","haxe/ui/components/TabBar.hx",189,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_191_set_selectedIndex,"haxe.ui.components.TabBar","set_selectedIndex",0x52a72ed0,"haxe.ui.components.TabBar.set_selectedIndex","haxe/ui/components/TabBar.hx",191,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_216_get_selectedButton,"haxe.ui.components.TabBar","get_selectedButton",0x68dfe200,"haxe.ui.components.TabBar.get_selectedButton","haxe/ui/components/TabBar.hx",216,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_225_get_buttonCount,"haxe.ui.components.TabBar","get_buttonCount",0x3b7cd84a,"haxe.ui.components.TabBar.get_buttonCount","haxe/ui/components/TabBar.hx",225,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_233_resetSelection,"haxe.ui.components.TabBar","resetSelection",0xbba41a07,"haxe.ui.components.TabBar.resetSelection","haxe/ui/components/TabBar.hx",233,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_241__onButtonMouseDown,"haxe.ui.components.TabBar","_onButtonMouseDown",0x7a9911c1,"haxe.ui.components.TabBar._onButtonMouseDown","haxe/ui/components/TabBar.hx",241,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_1834360851d84128_1_cloneComponent,"haxe.ui.components.TabBar","cloneComponent",0xf96fa72a,"haxe.ui.components.TabBar.cloneComponent","src/haxe/ui/components/TabBar.hx",1,0xb7159b64)
HX_LOCAL_STACK_FRAME(_hx_pos_1834360851d84128_2_self,"haxe.ui.components.TabBar","self",0xa4f6d896,"haxe.ui.components.TabBar.self","src/haxe/ui/components/TabBar.hx",2,0xb7159b64)
HX_LOCAL_STACK_FRAME(_hx_pos_ce3e3a939e2f2437_1_getProperty,"haxe.ui.components.TabBar","getProperty",0xe291d341,"haxe.ui.components.TabBar.getProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_ce3e3a939e2f2437_1_setProperty,"haxe.ui.components.TabBar","setProperty",0xecfeda4d,"haxe.ui.components.TabBar.setProperty","?",1,0x0000003f)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_14_boot,"haxe.ui.components.TabBar","boot",0x99c1d13c,"haxe.ui.components.TabBar.boot","haxe/ui/components/TabBar.hx",14,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_5013957fd959d036_134_boot,"haxe.ui.components.TabBar","boot",0x99c1d13c,"haxe.ui.components.TabBar.boot","haxe/ui/components/TabBar.hx",134,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{

void TabBar_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::TabBar,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::core::MouseEvent e){
            			HX_STACKFRAME(&_hx_pos_5013957fd959d036_21_new)
HXLINE(  21)			if ((e->delta < (int)0)) {
HXLINE(  22)				_gthis->scrollLeft();
            			}
            			else {
HXLINE(  24)				_gthis->scrollRight();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_14_new)
HXLINE( 183)		this->_selectedIndex = (int)-1;
HXLINE(  18)		 ::haxe::ui::components::TabBar _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		super::__construct();
HXLINE(  20)		this->registerEvent(HX_("mousewheel",56,b8,59,54), ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic TabBar_obj::__CreateEmpty() { return new TabBar_obj; }

void *TabBar_obj::_hx_vtable = 0;

Dynamic TabBar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabBar_obj > _hx_result = new TabBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7140e8dc) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x7140e8dc;
		}
	} else {
		return inClassId==(int)0x7673886e;
	}
}

void TabBar_obj::createContainer(){
            	HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_30_createContainer)
HXDLIN(  30)		if (hx::IsNull( this->_container )) {
HXLINE(  31)			this->_container =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  32)			this->_container->set_id(HX_("tabbar-contents",e9,7b,ac,dd));
HXLINE(  33)			this->_container->addClass(HX_("tabbar-contents",e9,7b,ac,dd),null(),null());
HXLINE(  34)			this->addComponent(this->_container);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,createContainer,(void))

void TabBar_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_41_createDefaults)
HXLINE(  42)		this->super::createDefaults();
HXLINE(  43)		this->_defaultLayout =  ::haxe::ui::components::TabBarLayout_obj::__alloc( HX_CTX );
            	}


 ::haxe::ui::core::Component TabBar_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_46_addComponent)
HXLINE(  47)		 ::haxe::ui::core::Component v = null();
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		bool _hx_tmp1;
HXDLIN(  49)		if (hx::IsNotEq( child,this->_container )) {
HXLINE(  49)			_hx_tmp1 = (child->get_id() != HX_("tabbar-scroll-left",18,70,e0,85));
            		}
            		else {
HXLINE(  49)			_hx_tmp1 = false;
            		}
HXDLIN(  49)		if (_hx_tmp1) {
HXLINE(  49)			_hx_tmp = (child->get_id() != HX_("tabbar-scroll-right",ab,b2,8e,15));
            		}
            		else {
HXLINE(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			this->createContainer();
HXLINE(  51)			child->addClass(HX_("tabbar-button",01,37,7e,05),null(),null());
HXLINE(  52)			child->registerEvent(HX_("mousedown",07,85,e9,03),this->_onButtonMouseDown_dyn());
HXLINE(  53)			v = this->_container->addComponent(child);
HXLINE(  54)			if ((this->_selectedIndex == (int)-1)) {
HXLINE(  55)				this->set_selectedIndex((int)0);
            			}
            		}
            		else {
HXLINE(  58)			v = this->super::addComponent(child);
            		}
HXLINE(  61)		return v;
            	}


 ::haxe::ui::core::Component TabBar_obj::removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  __o_dispose,hx::Null< bool >  __o_invalidate){
bool dispose = __o_dispose.Default(true);
bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_64_removeComponent)
HXLINE(  65)		 ::haxe::ui::core::Component v = null();
HXLINE(  67)		if (hx::IsNotEq( child,this->_container )) {
HXLINE(  68)			v = this->_container->removeComponent(child,dispose,invalidate);
            		}
            		else {
HXLINE(  70)			v = this->super::removeComponent(child,dispose,invalidate);
            		}
HXLINE(  73)		return v;
            	}


bool TabBar_obj::validateLayout(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_80_validateLayout)
HXLINE(  81)		bool b = this->super::validateLayout();
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (hx::IsNotEq( this->get_native(),true )) {
HXLINE(  82)			_hx_tmp = hx::IsNull( this->_container );
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return b;
            		}
HXLINE(  86)		if (hx::IsNull( this->_containerPosition )) {
HXLINE(  87)			this->_containerPosition = this->get_layout()->get_paddingLeft();
            		}
HXLINE(  90)		bool _hx_tmp1;
HXDLIN(  90)		Float _hx_tmp2 = this->_container->get_width();
HXDLIN(  90)		if ((_hx_tmp2 > this->get_layout()->get_usableWidth())) {
HXLINE(  90)			_hx_tmp1 = (this->get_layout()->get_usableWidth() > (int)0);
            		}
            		else {
HXLINE(  90)			_hx_tmp1 = false;
            		}
HXDLIN(  90)		if (_hx_tmp1) {
HXLINE(  91)			this->showScrollButtons();
HXLINE(  92)			this->_container->set_left(this->_containerPosition);
            		}
            		else {
HXLINE(  94)			this->hideScrollButtons();
HXLINE(  95)			this->_containerPosition = null();
            		}
HXLINE(  98)		return b;
            	}


void TabBar_obj::showScrollButtons(){
            	HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_103_showScrollButtons)
HXDLIN( 103)		 ::haxe::ui::components::TabBar _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 104)		if (hx::IsNull( this->_scrollLeft )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::TabBar,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::core::MouseEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_112_showScrollButtons)
HXLINE( 112)				_gthis->scrollLeft();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 105)			this->_scrollLeft =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 106)			this->_scrollLeft->set_id(HX_("tabbar-scroll-left",18,70,e0,85));
HXLINE( 107)			this->_scrollLeft->addClass(HX_("tabbar-scroll-left",18,70,e0,85),null(),null());
HXLINE( 108)			this->_scrollLeft->set_includeInLayout(false);
HXLINE( 109)			this->_scrollLeft->repeater = true;
HXLINE( 110)			this->addComponent(this->_scrollLeft);
HXLINE( 111)			this->_scrollLeft->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            		else {
HXLINE( 115)			this->_scrollLeft->show();
            		}
HXLINE( 118)		if (hx::IsNull( this->_scrollRight )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::haxe::ui::components::TabBar,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::core::MouseEvent e1){
            				HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_126_showScrollButtons)
HXLINE( 126)				_gthis->scrollRight();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 119)			this->_scrollRight =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 120)			this->_scrollRight->set_id(HX_("tabbar-scroll-right",ab,b2,8e,15));
HXLINE( 121)			this->_scrollRight->addClass(HX_("tabbar-scroll-right",ab,b2,8e,15),null(),null());
HXLINE( 122)			this->_scrollRight->set_includeInLayout(false);
HXLINE( 123)			this->_scrollRight->repeater = true;
HXLINE( 124)			this->addComponent(this->_scrollRight);
HXLINE( 125)			this->_scrollRight->set_onClick( ::Dynamic(new _hx_Closure_1(_gthis)));
            		}
            		else {
HXLINE( 129)			this->_scrollRight->show();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,showScrollButtons,(void))

void TabBar_obj::scrollLeft(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_135_scrollLeft)
HXLINE( 136)		Float x = (this->_container->get_left() + (int)20);
HXLINE( 137)		if ((x > this->get_layout()->get_paddingLeft())) {
HXLINE( 138)			x = this->get_layout()->get_paddingLeft();
            		}
HXLINE( 140)		this->_containerPosition = x;
HXLINE( 141)		this->_container->set_left(x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,scrollLeft,(void))

void TabBar_obj::scrollRight(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_144_scrollRight)
HXLINE( 145)		Float x = (this->_container->get_left() - (int)20);
HXLINE( 146)		Float max = this->_container->get_width();
HXDLIN( 146)		Float max1 = -((max - this->get_width()));
HXLINE( 148)		 ::haxe::ui::components::Button left = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 149)		 ::haxe::ui::components::Button right = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (hx::IsNotNull( left )) {
HXLINE( 150)			_hx_tmp = (left->get_hidden() == false);
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 151)			max1 = (max1 - left->get_width());
HXLINE( 152)			max1 = (max1 - this->get_layout()->get_horizontalSpacing());
            		}
HXLINE( 154)		bool _hx_tmp1;
HXDLIN( 154)		if (hx::IsNotNull( right )) {
HXLINE( 154)			_hx_tmp1 = (right->get_hidden() == false);
            		}
            		else {
HXLINE( 154)			_hx_tmp1 = false;
            		}
HXDLIN( 154)		if (_hx_tmp1) {
HXLINE( 155)			max1 = (max1 - right->get_width());
            		}
HXLINE( 158)		if ((x < max1)) {
HXLINE( 159)			x = max1;
            		}
HXLINE( 161)		this->_containerPosition = x;
HXLINE( 162)		this->_container->set_left(x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,scrollRight,(void))

void TabBar_obj::hideScrollButtons(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_165_hideScrollButtons)
HXLINE( 166)		if (hx::IsNotNull( this->_scrollLeft )) {
HXLINE( 167)			this->_scrollLeft->hide();
            		}
HXLINE( 169)		if (hx::IsNotNull( this->_scrollRight )) {
HXLINE( 170)			this->_scrollRight->hide();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,hideScrollButtons,(void))

void TabBar_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_174_validateData)
HXLINE( 175)		 ::haxe::ui::core::UIEvent event =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 176)		event->target = hx::ObjectPtr<OBJ_>(this);
HXLINE( 177)		this->dispatch(event);
            	}


int TabBar_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_189_get_selectedIndex)
HXDLIN( 189)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_5013957fd959d036_191_set_selectedIndex)
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		bool _hx_tmp1;
HXDLIN( 192)		if ((value >= (int)0)) {
HXLINE( 192)			_hx_tmp1 = (this->_selectedIndex == value);
            		}
            		else {
HXLINE( 192)			_hx_tmp1 = true;
            		}
HXDLIN( 192)		if (!(_hx_tmp1)) {
HXLINE( 192)			_hx_tmp = hx::IsNull( this->_container );
            		}
            		else {
HXLINE( 192)			_hx_tmp = true;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 193)			return value;
            		}
HXLINE( 196)		if ((this->_selectedIndex != (int)-1)) {
HXLINE( 197)			this->dispatch( ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("beforeChange",4f,43,d6,e3)));
            		}
HXLINE( 200)		this->_selectedIndex = value;
HXLINE( 201)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 203)		 ::haxe::ui::components::Button button = hx::TCast<  ::haxe::ui::components::Button >::cast(this->_container->getComponentAt(this->_selectedIndex));
HXLINE( 204)		if (hx::IsNotNull( button )) {
HXLINE( 205)			if (hx::IsNotNull( this->_currentButton )) {
HXLINE( 206)				this->_currentButton->removeClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
            			}
HXLINE( 208)			this->_currentButton = button;
HXLINE( 209)			this->_currentButton->addClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
HXLINE( 210)			bool _hx_tmp2;
HXDLIN( 210)			if (hx::IsNotNull( this->_layout )) {
HXLINE( 210)				_hx_tmp2 = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 210)				_hx_tmp2 = true;
            			}
HXDLIN( 210)			if (!(_hx_tmp2)) {
HXLINE( 210)				this->invalidate(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE( 212)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

 ::haxe::ui::components::Button TabBar_obj::get_selectedButton(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_216_get_selectedButton)
HXLINE( 217)		if ((this->_selectedIndex < (int)0)) {
HXLINE( 218)			return null();
            		}
HXLINE( 221)		return hx::TCast<  ::haxe::ui::components::Button >::cast(this->_container->get_childComponents()->__get(this->_selectedIndex).StaticCast<  ::haxe::ui::core::Component >());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedButton,return )

int TabBar_obj::get_buttonCount(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_225_get_buttonCount)
HXLINE( 226)		if (hx::IsNull( this->_container )) {
HXLINE( 227)			return (int)0;
            		}
HXLINE( 230)		return this->_container->get_childComponents()->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_buttonCount,return )

void TabBar_obj::resetSelection(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_233_resetSelection)
HXLINE( 234)		this->_selectedIndex = (int)-1;
HXLINE( 235)		this->_currentButton = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,resetSelection,(void))

void TabBar_obj::_onButtonMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_241__onButtonMouseDown)
HXLINE( 242)		if (hx::IsEq( event->target,this->_currentButton )) {
HXLINE( 243)			return;
            		}
HXLINE( 246)		this->set_selectedIndex(this->_container->getComponentIndex(event->target));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,_onButtonMouseDown,(void))

 ::haxe::ui::core::Component TabBar_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1834360851d84128_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::TabBar c = ( ( ::haxe::ui::components::TabBar)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component TabBar_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_1834360851d84128_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::TabBar_obj::__alloc( HX_CTX );
            	}


 ::haxe::ui::util::VariantType TabBar_obj::getProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_ce3e3a939e2f2437_1_getProperty)
HXDLIN(   1)		if ((name == HX_("selectedIndex",b7,76,56,b4))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(this->get_selectedIndex());
            		}
HXDLIN(   1)		return this->super::getProperty(name);
            	}


 ::haxe::ui::util::VariantType TabBar_obj::setProperty(::String name, ::haxe::ui::util::VariantType v){
            	HX_STACKFRAME(&_hx_pos_ce3e3a939e2f2437_1_setProperty)
HXDLIN(   1)		if ((name == HX_("selectedIndex",b7,76,56,b4))) {
HXDLIN(   1)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(this->set_selectedIndex(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(v)));
            		}
HXDLIN(   1)		return this->super::setProperty(name,v);
            	}


int TabBar_obj::SCROLL_INCREMENT;


hx::ObjectPtr< TabBar_obj > TabBar_obj::__new() {
	hx::ObjectPtr< TabBar_obj > __this = new TabBar_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TabBar_obj > TabBar_obj::__alloc(hx::Ctx *_hx_ctx) {
	TabBar_obj *__this = (TabBar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabBar_obj), true, "haxe.ui.components.TabBar"));
	*(void **)__this = TabBar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBar_obj::TabBar_obj()
{
}

void TabBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBar);
	HX_MARK_MEMBER_NAME(_currentButton,"_currentButton");
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_scrollLeft,"_scrollLeft");
	HX_MARK_MEMBER_NAME(_scrollRight,"_scrollRight");
	HX_MARK_MEMBER_NAME(_containerPosition,"_containerPosition");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(selectedButton,"selectedButton");
	HX_MARK_MEMBER_NAME(buttonCount,"buttonCount");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentButton,"_currentButton");
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_scrollLeft,"_scrollLeft");
	HX_VISIT_MEMBER_NAME(_scrollRight,"_scrollRight");
	HX_VISIT_MEMBER_NAME(_containerPosition,"_containerPosition");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(selectedButton,"selectedButton");
	HX_VISIT_MEMBER_NAME(buttonCount,"buttonCount");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TabBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return hx::Val( _container ); }
		if (HX_FIELD_EQ(inName,"scrollLeft") ) { return hx::Val( scrollLeft_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollLeft") ) { return hx::Val( _scrollLeft ); }
		if (HX_FIELD_EQ(inName,"scrollRight") ) { return hx::Val( scrollRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"buttonCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_buttonCount() : buttonCount ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return hx::Val( getProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_scrollRight") ) { return hx::Val( _scrollRight ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentButton") ) { return hx::Val( _currentButton ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateLayout") ) { return hx::Val( validateLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedButton() : selectedButton ); }
		if (HX_FIELD_EQ(inName,"resetSelection") ) { return hx::Val( resetSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createContainer") ) { return hx::Val( createContainer_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonCount") ) { return hx::Val( get_buttonCount_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showScrollButtons") ) { return hx::Val( showScrollButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideScrollButtons") ) { return hx::Val( hideScrollButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_containerPosition") ) { return hx::Val( _containerPosition ); }
		if (HX_FIELD_EQ(inName,"get_selectedButton") ) { return hx::Val( get_selectedButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onButtonMouseDown") ) { return hx::Val( _onButtonMouseDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TabBar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast<  ::haxe::ui::containers::HBox >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollLeft") ) { _scrollLeft=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonCount") ) { buttonCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scrollRight") ) { _scrollRight=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentButton") ) { _currentButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { selectedButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_containerPosition") ) { _containerPosition=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_currentButton","\x4c","\xd3","\x8e","\xfb"));
	outFields->push(HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"));
	outFields->push(HX_HCSTRING("_scrollLeft","\xd3","\x63","\xf9","\xd7"));
	outFields->push(HX_HCSTRING("_scrollRight","\x90","\x02","\x4b","\x99"));
	outFields->push(HX_HCSTRING("_containerPosition","\xcb","\x1f","\x7e","\x46"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"));
	outFields->push(HX_HCSTRING("buttonCount","\x7d","\x05","\x0e","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TabBar_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(TabBar_obj,_currentButton),HX_HCSTRING("_currentButton","\x4c","\xd3","\x8e","\xfb")},
	{hx::fsObject /*::haxe::ui::containers::HBox*/ ,(int)offsetof(TabBar_obj,_container),HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(TabBar_obj,_scrollLeft),HX_HCSTRING("_scrollLeft","\xd3","\x63","\xf9","\xd7")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(TabBar_obj,_scrollRight),HX_HCSTRING("_scrollRight","\x90","\x02","\x4b","\x99")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TabBar_obj,_containerPosition),HX_HCSTRING("_containerPosition","\xcb","\x1f","\x7e","\x46")},
	{hx::fsInt,(int)offsetof(TabBar_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(TabBar_obj,selectedButton),HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d")},
	{hx::fsInt,(int)offsetof(TabBar_obj,buttonCount),HX_HCSTRING("buttonCount","\x7d","\x05","\x0e","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TabBar_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TabBar_obj::SCROLL_INCREMENT,HX_HCSTRING("SCROLL_INCREMENT","\x1d","\xe8","\x39","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TabBar_obj_sMemberFields[] = {
	HX_HCSTRING("_currentButton","\x4c","\xd3","\x8e","\xfb"),
	HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"),
	HX_HCSTRING("createContainer","\xa5","\x2e","\x68","\x60"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("validateLayout","\xe0","\x87","\x80","\xac"),
	HX_HCSTRING("_scrollLeft","\xd3","\x63","\xf9","\xd7"),
	HX_HCSTRING("_scrollRight","\x90","\x02","\x4b","\x99"),
	HX_HCSTRING("showScrollButtons","\x77","\xce","\x70","\x5b"),
	HX_HCSTRING("_containerPosition","\xcb","\x1f","\x7e","\x46"),
	HX_HCSTRING("scrollLeft","\xb4","\x96","\x6f","\x05"),
	HX_HCSTRING("scrollRight","\x8f","\x54","\x41","\x33"),
	HX_HCSTRING("hideScrollButtons","\x92","\x37","\x27","\x6b"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"),
	HX_HCSTRING("get_selectedButton","\x76","\x97","\xd8","\xf8"),
	HX_HCSTRING("buttonCount","\x7d","\x05","\x0e","\x98"),
	HX_HCSTRING("get_buttonCount","\x14","\xbd","\xef","\x58"),
	HX_HCSTRING("resetSelection","\x7d","\x5c","\x8b","\xe8"),
	HX_HCSTRING("_onButtonMouseDown","\x37","\xc7","\x91","\x0a"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	::String(null()) };

static void TabBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TabBar_obj::SCROLL_INCREMENT,"SCROLL_INCREMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TabBar_obj::SCROLL_INCREMENT,"SCROLL_INCREMENT");
};

#endif

hx::Class TabBar_obj::__mClass;

static ::String TabBar_obj_sStaticFields[] = {
	HX_HCSTRING("SCROLL_INCREMENT","\x1d","\xe8","\x39","\xc4"),
	::String(null())
};

void TabBar_obj::__register()
{
	hx::Object *dummy = new TabBar_obj;
	TabBar_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TabBar","\xa4","\x2f","\x25","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TabBar_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TabBar_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TabBar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabBar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_14_boot)
HXDLIN(  14)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("selectedIndex",b7,76,56,b4), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("bindable",d7,85,59,c3),null()))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_134_boot)
HXDLIN( 134)		SCROLL_INCREMENT = (int)20;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
