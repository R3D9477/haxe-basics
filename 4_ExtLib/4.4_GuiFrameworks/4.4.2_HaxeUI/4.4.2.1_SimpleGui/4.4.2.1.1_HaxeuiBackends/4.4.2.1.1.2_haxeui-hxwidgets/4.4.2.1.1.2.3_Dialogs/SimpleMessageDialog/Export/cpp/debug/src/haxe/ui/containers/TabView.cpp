// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabViewLayout
#include <haxe/ui/containers/TabViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemoveAllTabs
#include <haxe/ui/containers/_TabView/RemoveAllTabs.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b92b5270ca772aeb_12_new,"haxe.ui.containers.TabView","new",0x3a782f62,"haxe.ui.containers.TabView.new","haxe/ui/containers/TabView.hx",12,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_24_createDefaults,"haxe.ui.containers.TabView","createDefaults",0xff5d2bec,"haxe.ui.containers.TabView.createDefaults","haxe/ui/containers/TabView.hx",24,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_32_createChildren,"haxe.ui.containers.TabView","createChildren",0xc02d7499,"haxe.ui.containers.TabView.createChildren","haxe/ui/containers/TabView.hx",32,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_59_addComponent,"haxe.ui.containers.TabView","addComponent",0x9314c31a,"haxe.ui.containers.TabView.addComponent","haxe/ui/containers/TabView.hx",59,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_86_removeComponent,"haxe.ui.containers.TabView","removeComponent",0x2aaa65db,"haxe.ui.containers.TabView.removeComponent","haxe/ui/containers/TabView.hx",86,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_97_findComponent,"haxe.ui.containers.TabView","findComponent",0x4ab3a6c6,"haxe.ui.containers.TabView.findComponent","haxe/ui/containers/TabView.hx",97,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_117_get_pageIndex,"haxe.ui.containers.TabView","get_pageIndex",0x803d3b9c,"haxe.ui.containers.TabView.get_pageIndex","haxe/ui/containers/TabView.hx",117,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_119_set_pageIndex,"haxe.ui.containers.TabView","set_pageIndex",0xc5431da8,"haxe.ui.containers.TabView.set_pageIndex","haxe/ui/containers/TabView.hx",119,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_136_get_selectedPage,"haxe.ui.containers.TabView","get_selectedPage",0xf631ce91,"haxe.ui.containers.TabView.get_selectedPage","haxe/ui/containers/TabView.hx",136,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_145_get_pages,"haxe.ui.containers.TabView","get_pages",0x3857141d,"haxe.ui.containers.TabView.get_pages","haxe/ui/containers/TabView.hx",145,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_149_get_pageCount,"haxe.ui.containers.TabView","get_pageCount",0x0c8be559,"haxe.ui.containers.TabView.get_pageCount","haxe/ui/containers/TabView.hx",149,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_158_get_selectedButton,"haxe.ui.containers.TabView","get_selectedButton",0x34d76ab4,"haxe.ui.containers.TabView.get_selectedButton","haxe/ui/containers/TabView.hx",158,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_162_removeAllTabs,"haxe.ui.containers.TabView","removeAllTabs",0x8aabcbdd,"haxe.ui.containers.TabView.removeAllTabs","haxe/ui/containers/TabView.hx",162,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_171_set_onBeforeChange,"haxe.ui.containers.TabView","set_onBeforeChange",0xc20d8989,"haxe.ui.containers.TabView.set_onBeforeChange","haxe/ui/containers/TabView.hx",171,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_185_validateData,"haxe.ui.containers.TabView","validateData",0x1ad0069e,"haxe.ui.containers.TabView.validateData","haxe/ui/containers/TabView.hx",185,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_213_onBeforeTabsChange,"haxe.ui.containers.TabView","onBeforeTabsChange",0x0fb0346a,"haxe.ui.containers.TabView.onBeforeTabsChange","haxe/ui/containers/TabView.hx",213,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_b92b5270ca772aeb_217__onTabsChange,"haxe.ui.containers.TabView","_onTabsChange",0xa41252ee,"haxe.ui.containers.TabView._onTabsChange","haxe/ui/containers/TabView.hx",217,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d2df5cde75f242_1_cloneComponent,"haxe.ui.containers.TabView","cloneComponent",0x23dfc5de,"haxe.ui.containers.TabView.cloneComponent","src/haxe/ui/containers/TabView.hx",1,0xbccfb944)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d2df5cde75f242_2_self,"haxe.ui.containers.TabView","self",0xf1ff4e4a,"haxe.ui.containers.TabView.self","src/haxe/ui/containers/TabView.hx",2,0xbccfb944)
namespace haxe{
namespace ui{
namespace containers{

void TabView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_12_new)
HXLINE( 114)		this->_pageIndex = (int)-1;
HXLINE(  18)		super::__construct();
            	}

Dynamic TabView_obj::__CreateEmpty() { return new TabView_obj; }

void *TabView_obj::_hx_vtable = 0;

Dynamic TabView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabView_obj > _hx_result = new TabView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x0abdf4ee) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0abdf4ee;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void TabView_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_b92b5270ca772aeb_24_createDefaults)
HXLINE(  25)		this->super::createDefaults();
HXLINE(  26)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  26)		_g->set(HX_("removeAllTabs",5b,d6,fd,2f),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::containers::_TabView::RemoveAllTabs_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  26)		this->defaultBehaviours(_g);
HXLINE(  29)		this->_defaultLayout =  ::haxe::ui::containers::TabViewLayout_obj::__alloc( HX_CTX );
            	}


void TabView_obj::createChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_b92b5270ca772aeb_32_createChildren)
HXLINE(  33)		this->super::createChildren();
HXLINE(  35)		if (hx::IsNull( this->_views )) {
HXLINE(  36)			this->_views = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  39)		if (hx::IsNull( this->_content )) {
HXLINE(  40)			this->_content =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE(  41)			this->_content->set_id(HX_("tabview-content",e6,41,c6,35));
HXLINE(  42)			this->_content->addClass(HX_("tabview-content",e6,41,c6,35),null(),null());
HXLINE(  43)			this->addComponent(this->_content);
            		}
HXLINE(  46)		if (hx::IsNull( this->_tabs )) {
HXLINE(  47)			this->_tabs =  ::haxe::ui::components::TabBar_obj::__alloc( HX_CTX );
HXLINE(  48)			this->_tabs->set_id(HX_("tabview-tabs",b1,fd,eb,1e));
HXLINE(  49)			this->_tabs->addClass(HX_("tabview-tabs",b1,fd,eb,1e),null(),null());
HXLINE(  50)			this->_tabs->registerEvent(HX_("beforeChange",4f,43,d6,e3),this->onBeforeTabsChange_dyn());
HXLINE(  51)			this->_tabs->registerEvent(HX_("change",70,91,72,b7),this->_onTabsChange_dyn());
HXLINE(  52)			this->addComponent(this->_tabs);
            		}
            	}


 ::haxe::ui::core::Component TabView_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_b92b5270ca772aeb_59_addComponent)
HXLINE(  60)		 ::haxe::ui::core::Component v = null();
HXLINE(  61)		if (hx::IsEq( child,this->_tabs )) {
HXLINE(  62)			v = this->super::addComponent(child);
            		}
            		else {
HXLINE(  63)			if (hx::IsEq( child,this->_content )) {
HXLINE(  64)				v = this->super::addComponent(child);
            			}
            			else {
HXLINE(  66)				bool _hx_tmp;
HXDLIN(  66)				if (hx::IsNotNull( this->_views )) {
HXLINE(  66)					_hx_tmp = hx::IsNotNull( this->_tabs );
            				}
            				else {
HXLINE(  66)					_hx_tmp = false;
            				}
HXDLIN(  66)				if (_hx_tmp) {
HXLINE(  67)					::String text = child->get_text();
HXLINE(  68)					::String icon = null();
HXLINE(  69)					if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::containers::Box >())) {
HXLINE(  70)						icon = hx::TCast<  ::haxe::ui::containers::Box >::cast(child)->get_icon();
            					}
HXLINE(  72)					this->_views->push(child);
HXLINE(  73)					 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE(  74)					button->set_text(text);
HXLINE(  75)					button->set_icon(icon);
HXLINE(  76)					this->_tabs->addComponent(button);
HXLINE(  77)					this->invalidate(HX_("data",2a,56,63,42));
            				}
            				else {
HXLINE(  79)					this->super::addComponent(child);
            				}
            			}
            		}
HXLINE(  83)		return v;
            	}


 ::haxe::ui::core::Component TabView_obj::removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  __o_dispose,hx::Null< bool >  __o_invalidate){
bool dispose = __o_dispose.Default(true);
bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_86_removeComponent)
HXLINE(  87)		 ::haxe::ui::core::Component v = null();
HXLINE(  88)		if (hx::IsEq( child,this->_tabs )) {
HXLINE(  89)			v = this->super::removeComponent(child,dispose,null());
            		}
            		else {
HXLINE(  90)			if (hx::IsEq( child,this->_content )) {
HXLINE(  91)				v = this->super::removeComponent(child,dispose,null());
            			}
            		}
HXLINE(  94)		return v;
            	}


 ::Dynamic TabView_obj::findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String __o_searchType){
::String searchType = __o_searchType.Default(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_97_findComponent)
HXLINE(  98)		 ::Dynamic match = this->super::findComponent(criteria,type,recursive,searchType);
HXLINE(  99)		if (hx::IsNull( match )) {
HXLINE( 100)			int _g = (int)0;
HXDLIN( 100)			::Array< ::Dynamic> _g1 = this->_views;
HXDLIN( 100)			while((_g < _g1->length)){
HXLINE( 100)				 ::haxe::ui::core::Component view = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 100)				_g = (_g + (int)1);
HXLINE( 101)				match = view->findComponent(criteria,type,recursive,searchType);
HXLINE( 102)				if (hx::IsNotNull( match )) {
HXLINE( 103)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 107)		return match;
            	}


int TabView_obj::get_pageIndex(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_117_get_pageIndex)
HXDLIN( 117)		return this->_pageIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageIndex,return )

int TabView_obj::set_pageIndex(int value){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_119_set_pageIndex)
HXLINE( 120)		if ((value < (int)0)) {
HXLINE( 121)			return value;
            		}
HXLINE( 124)		if ((this->_pageIndex == value)) {
HXLINE( 125)			return value;
            		}
HXLINE( 128)		this->_pageIndex = value;
HXLINE( 129)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if (hx::IsNotNull( this->_layout )) {
HXLINE( 130)			_hx_tmp = (this->_layoutLocked == true);
            		}
            		else {
HXLINE( 130)			_hx_tmp = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp)) {
HXLINE( 130)			this->invalidate(HX_("layout",aa,ae,b8,58));
            		}
HXLINE( 132)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_pageIndex,return )

 ::haxe::ui::core::Component TabView_obj::get_selectedPage(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_136_get_selectedPage)
HXLINE( 137)		if ((this->_pageIndex < (int)0)) {
HXLINE( 138)			return null();
            		}
HXLINE( 140)		return this->_views->__get(this->_pageIndex).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedPage,return )

::Array< ::Dynamic> TabView_obj::get_pages(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_145_get_pages)
HXDLIN( 145)		return this->_views;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pages,return )

int TabView_obj::get_pageCount(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_149_get_pageCount)
HXLINE( 150)		if (hx::IsNull( this->_tabs )) {
HXLINE( 151)			return (int)0;
            		}
HXLINE( 153)		return this->_tabs->get_buttonCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageCount,return )

 ::haxe::ui::components::Button TabView_obj::get_selectedButton(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_158_get_selectedButton)
HXDLIN( 158)		return this->_tabs->get_selectedButton();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedButton,return )

void TabView_obj::removeAllTabs(){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_162_removeAllTabs)
HXDLIN( 162)		this->behaviourRun(HX_("removeAllTabs",5b,d6,fd,2f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,removeAllTabs,(void))

 ::Dynamic TabView_obj::set_onBeforeChange( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_171_set_onBeforeChange)
HXLINE( 172)		if (hx::IsNotNull( this->_hx___onBeforeChange )) {
HXLINE( 173)			this->unregisterEvent(HX_("beforeChange",4f,43,d6,e3),this->_hx___onBeforeChange);
HXLINE( 174)			this->_hx___onBeforeChange = null();
            		}
HXLINE( 176)		this->registerEvent(HX_("beforeChange",4f,43,d6,e3),value);
HXLINE( 177)		this->_hx___onBeforeChange = value;
HXLINE( 178)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_onBeforeChange,return )

void TabView_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_b92b5270ca772aeb_185_validateData)
HXLINE( 186)		if (hx::IsEq( this->get_native(),true )) {
HXLINE( 187)			return;
            		}
HXLINE( 190)		this->_tabs->set_selectedIndex(this->_pageIndex);
HXLINE( 191)		 ::haxe::ui::core::Component view = this->_views->__get(this->_pageIndex).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 192)		if (hx::IsNotNull( view )) {
HXLINE( 193)			if (hx::IsNotNull( this->_currentView )) {
HXLINE( 195)				this->_currentView->hide();
            			}
HXLINE( 197)			if ((this->_content->getComponentIndex(view) == (int)-1)) {
HXLINE( 198)				this->_content->addComponent(view);
            			}
            			else {
HXLINE( 200)				view->show();
            			}
HXLINE( 203)			this->_currentView = view;
            		}
HXLINE( 206)		this->dispatch( ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7)));
            	}


void TabView_obj::onBeforeTabsChange( ::haxe::ui::core::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b92b5270ca772aeb_213_onBeforeTabsChange)
HXDLIN( 213)		this->dispatch( ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("beforeChange",4f,43,d6,e3)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,onBeforeTabsChange,(void))

void TabView_obj::_onTabsChange( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_b92b5270ca772aeb_217__onTabsChange)
HXDLIN( 217)		this->set_pageIndex(this->_tabs->get_selectedIndex());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,_onTabsChange,(void))

 ::haxe::ui::core::Component TabView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d0d2df5cde75f242_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::TabView c = ( ( ::haxe::ui::containers::TabView)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component TabView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d0d2df5cde75f242_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::TabView_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TabView_obj > TabView_obj::__new() {
	hx::ObjectPtr< TabView_obj > __this = new TabView_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TabView_obj > TabView_obj::__alloc(hx::Ctx *_hx_ctx) {
	TabView_obj *__this = (TabView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabView_obj), true, "haxe.ui.containers.TabView"));
	*(void **)__this = TabView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabView_obj::TabView_obj()
{
}

void TabView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabView);
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_views,"_views");
	HX_MARK_MEMBER_NAME(_currentView,"_currentView");
	HX_MARK_MEMBER_NAME(_pageIndex,"_pageIndex");
	HX_MARK_MEMBER_NAME(selectedPage,"selectedPage");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(pageCount,"pageCount");
	HX_MARK_MEMBER_NAME(selectedButton,"selectedButton");
	HX_MARK_MEMBER_NAME(_hx___onBeforeChange,"__onBeforeChange");
	HX_MARK_MEMBER_NAME(onBeforeChange,"onBeforeChange");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_views,"_views");
	HX_VISIT_MEMBER_NAME(_currentView,"_currentView");
	HX_VISIT_MEMBER_NAME(_pageIndex,"_pageIndex");
	HX_VISIT_MEMBER_NAME(selectedPage,"selectedPage");
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(pageCount,"pageCount");
	HX_VISIT_MEMBER_NAME(selectedButton,"selectedButton");
	HX_VISIT_MEMBER_NAME(_hx___onBeforeChange,"__onBeforeChange");
	HX_VISIT_MEMBER_NAME(onBeforeChange,"onBeforeChange");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TabView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { return hx::Val( _tabs ); }
		if (HX_FIELD_EQ(inName,"pages") ) { return hx::Val( inCallProp == hx::paccAlways ? get_pages() : pages ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { return hx::Val( _views ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return hx::Val( _content ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pageIndex() ); }
		if (HX_FIELD_EQ(inName,"get_pages") ) { return hx::Val( get_pages_dyn() ); }
		if (HX_FIELD_EQ(inName,"pageCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_pageCount() : pageCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_pageIndex") ) { return hx::Val( _pageIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_currentView") ) { return hx::Val( _currentView ); }
		if (HX_FIELD_EQ(inName,"selectedPage") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedPage() : selectedPage ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageIndex") ) { return hx::Val( get_pageIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pageIndex") ) { return hx::Val( set_pageIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return hx::Val( get_pageCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAllTabs") ) { return hx::Val( removeAllTabs_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onTabsChange") ) { return hx::Val( _onTabsChange_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedButton() : selectedButton ); }
		if (HX_FIELD_EQ(inName,"onBeforeChange") ) { return hx::Val( onBeforeChange ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedPage") ) { return hx::Val( get_selectedPage_dyn() ); }
		if (HX_FIELD_EQ(inName,"__onBeforeChange") ) { return hx::Val( _hx___onBeforeChange ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedButton") ) { return hx::Val( get_selectedButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onBeforeChange") ) { return hx::Val( set_onBeforeChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"onBeforeTabsChange") ) { return hx::Val( onBeforeTabsChange_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TabView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast<  ::haxe::ui::components::TabBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_views") ) { _views=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast<  ::haxe::ui::containers::VBox >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_pageIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"pageCount") ) { pageCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_pageIndex") ) { _pageIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentView") ) { _currentView=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedPage") ) { selectedPage=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedButton") ) { selectedButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBeforeChange") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_onBeforeChange(inValue.Cast<  ::Dynamic >()) );onBeforeChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onBeforeChange") ) { _hx___onBeforeChange=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"));
	outFields->push(HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"));
	outFields->push(HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32"));
	outFields->push(HX_HCSTRING("_currentView","\x3f","\xb9","\xea","\xec"));
	outFields->push(HX_HCSTRING("_pageIndex","\x04","\xee","\xcd","\xbf"));
	outFields->push(HX_HCSTRING("pageIndex","\x43","\x72","\x2b","\x64"));
	outFields->push(HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda"));
	outFields->push(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"));
	outFields->push(HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"));
	outFields->push(HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TabView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::TabBar*/ ,(int)offsetof(TabView_obj,_tabs),HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00")},
	{hx::fsObject /*::haxe::ui::containers::VBox*/ ,(int)offsetof(TabView_obj,_content),HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TabView_obj,_views),HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(TabView_obj,_currentView),HX_HCSTRING("_currentView","\x3f","\xb9","\xea","\xec")},
	{hx::fsInt,(int)offsetof(TabView_obj,_pageIndex),HX_HCSTRING("_pageIndex","\x04","\xee","\xcd","\xbf")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(TabView_obj,selectedPage),HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TabView_obj,pages),HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd")},
	{hx::fsInt,(int)offsetof(TabView_obj,pageCount),HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0")},
	{hx::fsObject /*::haxe::ui::components::Button*/ ,(int)offsetof(TabView_obj,selectedButton),HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TabView_obj,_hx___onBeforeChange),HX_HCSTRING("__onBeforeChange","\x2e","\x2e","\x05","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TabView_obj,onBeforeChange),HX_HCSTRING("onBeforeChange","\x0e","\xa3","\xc5","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TabView_obj_sStaticStorageInfo = 0;
#endif

static ::String TabView_obj_sMemberFields[] = {
	HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"),
	HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"),
	HX_HCSTRING("_views","\xaf","\x2d","\xe4","\x32"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("removeComponent","\xd9","\x8b","\x72","\x50"),
	HX_HCSTRING("findComponent","\x44","\xb1","\x05","\xf0"),
	HX_HCSTRING("_currentView","\x3f","\xb9","\xea","\xec"),
	HX_HCSTRING("_pageIndex","\x04","\xee","\xcd","\xbf"),
	HX_HCSTRING("get_pageIndex","\x1a","\x46","\x8f","\x25"),
	HX_HCSTRING("set_pageIndex","\x26","\x28","\x95","\x6a"),
	HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda"),
	HX_HCSTRING("get_selectedPage","\xd3","\xe6","\x8a","\xdf"),
	HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"),
	HX_HCSTRING("get_pages","\x9b","\x87","\xf6","\x00"),
	HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"),
	HX_HCSTRING("get_pageCount","\xd7","\xef","\xdd","\xb1"),
	HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"),
	HX_HCSTRING("get_selectedButton","\x76","\x97","\xd8","\xf8"),
	HX_HCSTRING("removeAllTabs","\x5b","\xd6","\xfd","\x2f"),
	HX_HCSTRING("__onBeforeChange","\x2e","\x2e","\x05","\x42"),
	HX_HCSTRING("onBeforeChange","\x0e","\xa3","\xc5","\x0d"),
	HX_HCSTRING("set_onBeforeChange","\x4b","\xb6","\x0e","\x86"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("onBeforeTabsChange","\x2c","\x61","\xb1","\xd3"),
	HX_HCSTRING("_onTabsChange","\x6c","\x5d","\x64","\x49"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void TabView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#endif

hx::Class TabView_obj::__mClass;

void TabView_obj::__register()
{
	hx::Object *dummy = new TabView_obj;
	TabView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.TabView","\x70","\x96","\xd8","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TabView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TabView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
