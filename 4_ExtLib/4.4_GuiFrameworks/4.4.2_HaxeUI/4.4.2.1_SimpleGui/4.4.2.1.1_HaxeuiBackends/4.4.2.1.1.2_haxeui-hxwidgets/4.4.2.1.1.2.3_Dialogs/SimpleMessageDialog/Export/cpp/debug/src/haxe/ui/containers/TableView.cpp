// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
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
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableViewLayout
#include <haxe/ui/containers/TableViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableViewRow
#include <haxe/ui/containers/TableViewRow.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
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
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
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
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aeede41884d4f898_20_new,"haxe.ui.containers.TableView","new",0x8ec69f9b,"haxe.ui.containers.TableView.new","haxe/ui/containers/TableView.hx",20,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_29_createDefaults,"haxe.ui.containers.TableView","createDefaults",0xf5642453,"haxe.ui.containers.TableView.createDefaults","haxe/ui/containers/TableView.hx",29,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_34_createLayout,"haxe.ui.containers.TableView","createLayout",0x1672e02b,"haxe.ui.containers.TableView.createLayout","haxe/ui/containers/TableView.hx",34,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_37_createChildren,"haxe.ui.containers.TableView","createChildren",0xb6346d00,"haxe.ui.containers.TableView.createChildren","haxe/ui/containers/TableView.hx",37,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_43_onReady,"haxe.ui.containers.TableView","onReady",0x1722c77f,"haxe.ui.containers.TableView.onReady","haxe/ui/containers/TableView.hx",43,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_55__onContentsResized,"haxe.ui.containers.TableView","_onContentsResized",0xa6ada77d,"haxe.ui.containers.TableView._onContentsResized","haxe/ui/containers/TableView.hx",55,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_61_addComponent,"haxe.ui.containers.TableView","addComponent",0xaa0d03c1,"haxe.ui.containers.TableView.addComponent","haxe/ui/containers/TableView.hx",61,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_98__onHeaderResized,"haxe.ui.containers.TableView","_onHeaderResized",0x639e27aa,"haxe.ui.containers.TableView._onHeaderResized","haxe/ui/containers/TableView.hx",98,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_128_get_horizontalConstraint,"haxe.ui.containers.TableView","get_horizontalConstraint",0x2fc398cf,"haxe.ui.containers.TableView.get_horizontalConstraint","haxe/ui/containers/TableView.hx",128,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_132_get_verticalConstraint,"haxe.ui.containers.TableView","get_verticalConstraint",0x99cc2b61,"haxe.ui.containers.TableView.get_verticalConstraint","haxe/ui/containers/TableView.hx",132,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_136_get_hscrollOffset,"haxe.ui.containers.TableView","get_hscrollOffset",0x12c1d3ba,"haxe.ui.containers.TableView.get_hscrollOffset","haxe/ui/containers/TableView.hx",136,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_141_get_dataSource,"haxe.ui.containers.TableView","get_dataSource",0x8758d393,"haxe.ui.containers.TableView.get_dataSource","haxe/ui/containers/TableView.hx",141,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_148_set_dataSource,"haxe.ui.containers.TableView","set_dataSource",0xa778bc07,"haxe.ui.containers.TableView.set_dataSource","haxe/ui/containers/TableView.hx",148,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_156_onDataSourceChanged,"haxe.ui.containers.TableView","onDataSourceChanged",0x6b5d11eb,"haxe.ui.containers.TableView.onDataSourceChanged","haxe/ui/containers/TableView.hx",156,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_161_syncUI,"haxe.ui.containers.TableView","syncUI",0x6e7fb914,"haxe.ui.containers.TableView.syncUI","haxe/ui/containers/TableView.hx",161,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_203_resetSelection,"haxe.ui.containers.TableView","resetSelection",0xdc1b3122,"haxe.ui.containers.TableView.resetSelection","haxe/ui/containers/TableView.hx",203,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_214_get_selectedRow,"haxe.ui.containers.TableView","get_selectedRow",0x1b3a0dd1,"haxe.ui.containers.TableView.get_selectedRow","haxe/ui/containers/TableView.hx",214,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_217_onRowClick,"haxe.ui.containers.TableView","onRowClick",0xcab55e32,"haxe.ui.containers.TableView.onRowClick","haxe/ui/containers/TableView.hx",217,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_234_get_itemCount,"haxe.ui.containers.TableView","get_itemCount",0x68a0c58e,"haxe.ui.containers.TableView.get_itemCount","haxe/ui/containers/TableView.hx",234,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_241_updateScrollRect,"haxe.ui.containers.TableView","updateScrollRect",0x29fcb31f,"haxe.ui.containers.TableView.updateScrollRect","haxe/ui/containers/TableView.hx",241,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_290_validateData,"haxe.ui.containers.TableView","validateData",0x31c84745,"haxe.ui.containers.TableView.validateData","haxe/ui/containers/TableView.hx",290,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_293_updateDisplay,"haxe.ui.containers.TableView","updateDisplay",0xe3a6d634,"haxe.ui.containers.TableView.updateDisplay","haxe/ui/containers/TableView.hx",293,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_aeede41884d4f898_306_validateScroll,"haxe.ui.containers.TableView","validateScroll",0x8ebc85e8,"haxe.ui.containers.TableView.validateScroll","haxe/ui/containers/TableView.hx",306,0x8a42a716)
static const ::String _hx_array_data_444a3629_33[] = {
	HX_("hscrollPos",1f,b6,47,5c),
};
static const ::String _hx_array_data_444a3629_34[] = {
	HX_("vscrollPos",51,44,5a,e0),
};
HX_LOCAL_STACK_FRAME(_hx_pos_839287e9a1377a94_294_cloneComponent,"haxe.ui.containers.TableView","cloneComponent",0x19e6be45,"haxe.ui.containers.TableView.cloneComponent","haxe/ui/macros/Macros.hx",294,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_4d5a3aac83aae919_1_self,"haxe.ui.containers.TableView","self",0x62530ff1,"haxe.ui.containers.TableView.self","src/haxe/ui/containers/TableView.hx",1,0x43141cab)
namespace haxe{
namespace ui{
namespace containers{

void TableView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_20_new)
HXLINE(  22)		this->_itemRenderers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		super::__construct();
            	}

Dynamic TableView_obj::__CreateEmpty() { return new TableView_obj; }

void *TableView_obj::_hx_vtable = 0;

Dynamic TableView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TableView_obj > _hx_result = new TableView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TableView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2222b027) {
		if (inClassId<=(int)0x1c7b87fe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c7b87fe;
		} else {
			return inClassId==(int)0x2222b027;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_TableView__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (hx::Object::*)())&::haxe::ui::containers::TableView_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::TableView_obj::set_dataSource,
};

void *TableView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_TableView__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

void TableView_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_29_createDefaults)
HXDLIN(  29)		this->super::createDefaults();
            	}


 ::haxe::ui::layouts::Layout TableView_obj::createLayout(){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_34_createLayout)
HXDLIN(  34)		return  ::haxe::ui::containers::TableViewLayout_obj::__alloc( HX_CTX );
            	}


void TableView_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_37_createChildren)
HXLINE(  38)		this->super::createChildren();
HXLINE(  39)		this->set_percentContentWidth((int)100);
HXLINE(  40)		this->_contents->addClass(HX_("tableview-contents",74,2a,d3,78),false,null());
            	}


void TableView_obj::onReady(){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_43_onReady)
HXLINE(  44)		this->super::onReady();
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (hx::IsNotNull( this->_header )) {
HXLINE(  46)			int _hx_tmp1 = this->_itemRenderers->length;
HXDLIN(  46)			_hx_tmp = (_hx_tmp1 < this->_header->get_childComponents()->length);
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			int delta = (this->_header->get_childComponents()->length - this->_itemRenderers->length);
HXLINE(  48)			{
HXLINE(  48)				int _g1 = (int)0;
HXDLIN(  48)				int _g = delta;
HXDLIN(  48)				while((_g1 < _g)){
HXLINE(  48)					_g1 = (_g1 + (int)1);
HXDLIN(  48)					int n = (_g1 - (int)1);
HXLINE(  49)					this->addComponent( ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX ));
            				}
            			}
            		}
            	}


void TableView_obj::_onContentsResized( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_55__onContentsResized)
HXDLIN(  55)		this->super::_onContentsResized(event);
            	}


 ::haxe::ui::core::Component TableView_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_61_addComponent)
HXLINE(  62)		 ::haxe::ui::core::Component v = null();
HXLINE(  63)		if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::containers::Header >())) {
HXLINE(  64)			this->_header = hx::TCast<  ::haxe::ui::containers::Header >::cast(child);
HXLINE(  65)			this->_header->registerEvent(HX_("resize",f4,59,7b,08),this->_onHeaderResized_dyn());
HXLINE(  78)			v = this->addComponentToSuper(child);
HXLINE(  79)			if (hx::IsNotNull( this->_dataSource )) {
HXLINE(  80)				this->invalidate(HX_("data",2a,56,63,42));
            			}
            		}
            		else {
HXLINE(  82)			if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE(  86)				 ::haxe::ui::core::ItemRenderer itemRenderer = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child);
HXLINE(  87)				itemRenderer->set_allowHover(false);
HXLINE(  88)				this->_itemRenderers->push(itemRenderer);
            			}
            			else {
HXLINE(  89)				if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::components::VScroll >())) {
HXLINE(  90)					child->set_includeInLayout(false);
HXLINE(  91)					this->super::addComponent(child);
            				}
            				else {
HXLINE(  93)					v = this->super::addComponent(child);
            				}
            			}
            		}
HXLINE(  95)		return v;
            	}


void TableView_obj::_onHeaderResized( ::haxe::ui::core::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_98__onHeaderResized)
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,_onHeaderResized,(void))

 ::haxe::ui::core::Component TableView_obj::get_horizontalConstraint(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_128_get_horizontalConstraint)
HXDLIN( 128)		return this->_header;
            	}


 ::haxe::ui::core::Component TableView_obj::get_verticalConstraint(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_132_get_verticalConstraint)
HXDLIN( 132)		return this->_contents;
            	}


Float TableView_obj::get_hscrollOffset(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_136_get_hscrollOffset)
HXDLIN( 136)		return (int)2;
            	}


 ::haxe::ui::data::DataSource TableView_obj::get_dataSource(){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_141_get_dataSource)
HXLINE( 142)		if (hx::IsNull( this->_dataSource )) {
HXLINE( 143)			this->_dataSource =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null());
HXLINE( 144)			this->_dataSource->onChange = this->onDataSourceChanged_dyn();
            		}
HXLINE( 146)		return this->_dataSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource TableView_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_148_set_dataSource)
HXLINE( 149)		this->_dataSource = value;
HXLINE( 150)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 151)		this->_dataSource->onChange = this->onDataSourceChanged_dyn();
HXLINE( 152)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,set_dataSource,return )

void TableView_obj::onDataSourceChanged(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_156_onDataSourceChanged)
HXDLIN( 156)		if ((this->_ready == true)) {
HXLINE( 157)			this->invalidate(HX_("data",2a,56,63,42));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,onDataSourceChanged,(void))

void TableView_obj::syncUI(){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_161_syncUI)
HXLINE( 162)		bool _hx_tmp;
HXDLIN( 162)		bool _hx_tmp1;
HXDLIN( 162)		bool _hx_tmp2;
HXDLIN( 162)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 162)			_hx_tmp2 = hx::IsNull( this->_header );
            		}
            		else {
HXLINE( 162)			_hx_tmp2 = true;
            		}
HXDLIN( 162)		if (!(_hx_tmp2)) {
HXLINE( 162)			_hx_tmp1 = hx::IsNull( this->_contents );
            		}
            		else {
HXLINE( 162)			_hx_tmp1 = true;
            		}
HXDLIN( 162)		if (!(_hx_tmp1)) {
HXLINE( 162)			int _hx_tmp3 = this->_itemRenderers->length;
HXDLIN( 162)			_hx_tmp = (_hx_tmp3 < this->_header->get_childComponents()->length);
            		}
            		else {
HXLINE( 162)			_hx_tmp = true;
            		}
HXDLIN( 162)		if (_hx_tmp) {
HXLINE( 163)			return;
            		}
HXLINE( 166)		int delta = this->_dataSource->get_size();
HXDLIN( 166)		int delta1 = (delta - this->get_itemCount());
HXLINE( 167)		if ((delta1 > (int)0)) {
HXLINE( 168)			int _g1 = (int)0;
HXDLIN( 168)			int _g = delta1;
HXDLIN( 168)			while((_g1 < _g)){
HXLINE( 168)				_g1 = (_g1 + (int)1);
HXDLIN( 168)				int n = (_g1 - (int)1);
HXLINE( 169)				 ::haxe::ui::containers::TableViewRow row =  ::haxe::ui::containers::TableViewRow_obj::__alloc( HX_CTX );
HXLINE( 170)				row->addClass(HX_("tableview-row",00,bb,ed,a2),null(),null());
HXLINE( 171)				{
HXLINE( 171)					int _g3 = (int)0;
HXDLIN( 171)					int _g2 = this->_header->get_childComponents()->length;
HXDLIN( 171)					while((_g3 < _g2)){
HXLINE( 171)						_g3 = (_g3 + (int)1);
HXDLIN( 171)						int n1 = (_g3 - (int)1);
HXLINE( 172)						row->addComponent(Dynamic( this->_itemRenderers->__get(n1).StaticCast<  ::haxe::ui::core::ItemRenderer >()->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >());
            					}
            				}
HXLINE( 174)				row->registerEvent(HX_("click",48,7c,5e,48),this->onRowClick_dyn());
HXLINE( 175)				this->addComponent(row);
            			}
            		}
            		else {
HXLINE( 177)			if ((delta1 < (int)0)) {
HXLINE( 178)				while((delta1 < (int)0)){
HXLINE( 179)					 ::haxe::ui::containers::Box _hx_tmp4 = this->_contents;
HXDLIN( 179)					::Array< ::Dynamic> _hx_tmp5 = this->_contents->get_childComponents();
HXDLIN( 179)					_hx_tmp4->removeComponent(_hx_tmp5->__get((this->_contents->get_childComponents()->length - (int)1)).StaticCast<  ::haxe::ui::core::Component >(),null(),null());
HXLINE( 180)					delta1 = (delta1 + (int)1);
            				}
            			}
            		}
HXLINE( 184)		{
HXLINE( 184)			int _g11 = (int)0;
HXDLIN( 184)			int _g4 = this->_dataSource->get_size();
HXDLIN( 184)			while((_g11 < _g4)){
HXLINE( 184)				_g11 = (_g11 + (int)1);
HXDLIN( 184)				int n2 = (_g11 - (int)1);
HXLINE( 185)				 ::haxe::ui::containers::TableViewRow row1 = hx::TCast<  ::haxe::ui::containers::TableViewRow >::cast(this->_contents->get_childComponents()->__get(n2).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 187)				 ::Dynamic data = this->_dataSource->get(n2);
HXLINE( 188)				row1->userData = data;
HXLINE( 189)				{
HXLINE( 189)					int _g31 = (int)0;
HXDLIN( 189)					int _g21 = this->_header->get_childComponents()->length;
HXDLIN( 189)					while((_g31 < _g21)){
HXLINE( 189)						_g31 = (_g31 + (int)1);
HXDLIN( 189)						int c = (_g31 - (int)1);
HXLINE( 190)						 ::haxe::ui::core::ItemRenderer item = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(row1->get_childComponents()->__get(c).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 191)						::String _hx_tmp6;
HXDLIN( 191)						if ((hx::Mod(n2,(int)2) == (int)0)) {
HXLINE( 191)							_hx_tmp6 = HX_("even",1a,6f,1c,43);
            						}
            						else {
HXLINE( 191)							_hx_tmp6 = HX_("odd",af,91,54,00);
            						}
HXDLIN( 191)						item->addClass(_hx_tmp6,null(),null());
HXLINE( 192)						::String textData = ( (::String)(::Reflect_obj::field(data,this->_header->get_childComponents()->__get(c).StaticCast<  ::haxe::ui::core::Component >()->get_id())) );
HXLINE( 193)						if (hx::IsNotNull( textData )) {
HXLINE( 194)							item->set_data( ::Dynamic(hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("value",71,7f,b8,31),textData)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 199)		this->invalidate(HX_("display",42,2a,4a,bb));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,syncUI,(void))

void TableView_obj::resetSelection(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_203_resetSelection)
HXDLIN( 203)		if (hx::IsNotNull( this->_selectedRow )) {
HXLINE( 204)			{
HXLINE( 204)				int _g = (int)0;
HXDLIN( 204)				::Array< ::Dynamic> _g1 = this->_selectedRow->get_childComponents();
HXDLIN( 204)				while((_g < _g1->length)){
HXLINE( 204)					 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 204)					_g = (_g + (int)1);
HXLINE( 205)					c->removeClass(HX_(":selected",95,f4,1e,7c),null(),null());
            				}
            			}
HXLINE( 207)			this->_selectedRow = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,resetSelection,(void))

 ::haxe::ui::containers::TableViewRow TableView_obj::get_selectedRow(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_214_get_selectedRow)
HXDLIN( 214)		return this->_selectedRow;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_selectedRow,return )

void TableView_obj::onRowClick( ::haxe::ui::core::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_217_onRowClick)
HXLINE( 218)		if (hx::IsEq( this->_selectedRow,event->target )) {
HXLINE( 219)			return;
            		}
HXLINE( 222)		this->resetSelection();
HXLINE( 224)		this->_selectedRow = ( ( ::haxe::ui::containers::TableViewRow)(event->target) );
HXLINE( 225)		{
HXLINE( 225)			int _g = (int)0;
HXDLIN( 225)			::Array< ::Dynamic> _g1 = this->_selectedRow->get_childComponents();
HXDLIN( 225)			while((_g < _g1->length)){
HXLINE( 225)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 225)				_g = (_g + (int)1);
HXLINE( 226)				c->addClass(HX_(":selected",95,f4,1e,7c),null(),null());
            			}
            		}
HXLINE( 229)		 ::haxe::ui::core::UIEvent event1 =  ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7));
HXLINE( 230)		this->dispatch(event1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,onRowClick,(void))

int TableView_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_234_get_itemCount)
HXLINE( 235)		if (hx::IsNull( this->_contents )) {
HXLINE( 236)			return (int)0;
            		}
HXLINE( 238)		return this->_contents->get_childComponents()->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_itemCount,return )

void TableView_obj::updateScrollRect(){
            	HX_GC_STACKFRAME(&_hx_pos_aeede41884d4f898_241_updateScrollRect)
HXLINE( 242)		 ::haxe::ui::util::Rectangle rc = null();
HXLINE( 244)		Float ucx = this->get_layout()->get_usableWidth();
HXLINE( 245)		Float ucy = this->get_layout()->get_usableHeight();
HXLINE( 247)		Float xpos = (int)0;
HXLINE( 248)		if (hx::IsNotNull( this->_hscroll )) {
HXLINE( 249)			xpos = this->_hscroll->get_pos();
            		}
HXLINE( 252)		Float ypos = (int)0;
HXLINE( 253)		if (hx::IsNotNull( this->_vscroll )) {
HXLINE( 254)			ypos = this->_vscroll->get_pos();
            		}
HXLINE( 257)		bool _hx_tmp;
HXDLIN( 257)		if (hx::IsNotNull( this->_header )) {
HXLINE( 257)			if (hx::IsNotEq( this->get_native(),false )) {
HXLINE( 257)				_hx_tmp = hx::IsNull( this->get_native() );
            			}
            			else {
HXLINE( 257)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 257)			_hx_tmp = false;
            		}
HXDLIN( 257)		if (_hx_tmp) {
HXLINE( 258)			Float clipCX = ucx;
HXLINE( 259)			if (hx::IsGreater( clipCX,this->_header->get_componentWidth() )) {
HXLINE( 260)				clipCX = this->_header->get_componentWidth();
            			}
HXLINE( 262)			int rc1 = ::Std_obj::_hx_int((xpos + (int)1));
HXDLIN( 262)			 ::haxe::ui::util::Rectangle rc2 =  ::haxe::ui::util::Rectangle_obj::__alloc( HX_CTX ,rc1,(int)1,clipCX,this->_header->get_componentHeight());
HXLINE( 263)			this->_header->set_componentClipRect(rc2);
            		}
HXLINE( 270)		if (hx::IsNotNull( this->_contents )) {
HXLINE( 271)			Float clipCX1 = ucx;
HXLINE( 272)			if (hx::IsGreater( clipCX1,this->_contents->get_componentWidth() )) {
HXLINE( 273)				clipCX1 = this->_contents->get_componentWidth();
            			}
HXLINE( 275)			Float clipCY = ucy;
HXLINE( 276)			if (hx::IsGreater( clipCY,this->_contents->get_componentHeight() )) {
HXLINE( 277)				clipCY = this->_contents->get_componentHeight();
            			}
HXLINE( 280)			int rc3 = ::Std_obj::_hx_int(xpos);
HXDLIN( 280)			 ::haxe::ui::util::Rectangle rc4 =  ::haxe::ui::util::Rectangle_obj::__alloc( HX_CTX ,rc3,::Std_obj::_hx_int(ypos),clipCX1,clipCY);
HXLINE( 281)			this->_contents->set_componentClipRect(rc4);
            		}
            	}


void TableView_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_290_validateData)
HXDLIN( 290)		this->syncUI();
            	}


void TableView_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_293_updateDisplay)
HXLINE( 294)		this->super::updateDisplay();
HXLINE( 296)		{
HXLINE( 296)			int _g = (int)0;
HXDLIN( 296)			::Array< ::Dynamic> _g1 = this->_contents->get_childComponents();
HXDLIN( 296)			while((_g < _g1->length)){
HXLINE( 296)				 ::haxe::ui::core::Component row = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 296)				_g = (_g + (int)1);
HXLINE( 297)				{
HXLINE( 297)					int _g3 = (int)0;
HXDLIN( 297)					int _g2 = this->_header->get_childComponents()->length;
HXDLIN( 297)					while((_g3 < _g2)){
HXLINE( 297)						_g3 = (_g3 + (int)1);
HXDLIN( 297)						int c = (_g3 - (int)1);
HXLINE( 298)						 ::haxe::ui::core::Component item = row->get_childComponents()->__get(c).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 299)						item->set_percentWidth(null());
HXLINE( 300)						item->set_componentWidth((this->_header->get_childComponents()->__get(c).StaticCast<  ::haxe::ui::core::Component >()->get_componentWidth() - (int)2));
            					}
            				}
            			}
            		}
            	}


void TableView_obj::validateScroll(){
            	HX_STACKFRAME(&_hx_pos_aeede41884d4f898_306_validateScroll)
HXLINE( 307)		this->checkScrolls();
HXLINE( 308)		this->updateScrollRect();
HXLINE( 310)		this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_444a3629_33,1));
HXLINE( 311)		this->handleBindings(::Array_obj< ::String >::fromData( _hx_array_data_444a3629_34,1));
            	}


 ::haxe::ui::core::Component TableView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_839287e9a1377a94_294_cloneComponent)
HXLINE(   1)		 ::haxe::ui::containers::TableView c = ( ( ::haxe::ui::containers::TableView)(this->super::cloneComponent()) );
HXLINE( 318)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 319)			c->set_dataSource(this->_dataSource->clone());
            		}
HXLINE(   1)		return c;
            	}


 ::haxe::ui::core::Component TableView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_4d5a3aac83aae919_1_self)
HXDLIN(   1)		return  ::haxe::ui::containers::TableView_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TableView_obj > TableView_obj::__new() {
	hx::ObjectPtr< TableView_obj > __this = new TableView_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TableView_obj > TableView_obj::__alloc(hx::Ctx *_hx_ctx) {
	TableView_obj *__this = (TableView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TableView_obj), true, "haxe.ui.containers.TableView"));
	*(void **)__this = TableView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TableView_obj::TableView_obj()
{
}

void TableView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableView);
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_itemRenderers,"_itemRenderers");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_selectedRow,"_selectedRow");
	HX_MARK_MEMBER_NAME(selectedRow,"selectedRow");
	HX_MARK_MEMBER_NAME(itemCount,"itemCount");
	 ::haxe::ui::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_itemRenderers,"_itemRenderers");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_selectedRow,"_selectedRow");
	HX_VISIT_MEMBER_NAME(selectedRow,"selectedRow");
	HX_VISIT_MEMBER_NAME(itemCount,"itemCount");
	 ::haxe::ui::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TableView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"syncUI") ) { return hx::Val( syncUI_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return hx::Val( onReady_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_itemCount() : itemCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"onRowClick") ) { return hx::Val( onRowClick_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return hx::Val( _dataSource ); }
		if (HX_FIELD_EQ(inName,"selectedRow") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedRow() : selectedRow ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLayout") ) { return hx::Val( createLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selectedRow") ) { return hx::Val( _selectedRow ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return hx::Val( get_itemCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return hx::Val( updateDisplay_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_itemRenderers") ) { return hx::Val( _itemRenderers ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSelection") ) { return hx::Val( resetSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateScroll") ) { return hx::Val( validateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_selectedRow") ) { return hx::Val( get_selectedRow_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onHeaderResized") ) { return hx::Val( _onHeaderResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return hx::Val( updateScrollRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_hscrollOffset") ) { return hx::Val( get_hscrollOffset_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onContentsResized") ) { return hx::Val( _onContentsResized_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onDataSourceChanged") ) { return hx::Val( onDataSourceChanged_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_verticalConstraint") ) { return hx::Val( get_verticalConstraint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_horizontalConstraint") ) { return hx::Val( get_horizontalConstraint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TableView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::haxe::ui::containers::Header >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { itemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast<  ::haxe::ui::data::DataSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedRow") ) { selectedRow=inValue.Cast<  ::haxe::ui::containers::TableViewRow >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_selectedRow") ) { _selectedRow=inValue.Cast<  ::haxe::ui::containers::TableViewRow >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_itemRenderers") ) { _itemRenderers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"));
	outFields->push(HX_HCSTRING("_itemRenderers","\x7e","\x26","\xbc","\xcb"));
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	outFields->push(HX_HCSTRING("_selectedRow","\x80","\xc8","\x17","\x96"));
	outFields->push(HX_HCSTRING("selectedRow","\x7f","\x1a","\x0e","\x30"));
	outFields->push(HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TableView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::containers::Header*/ ,(int)offsetof(TableView_obj,_header),HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TableView_obj,_itemRenderers),HX_HCSTRING("_itemRenderers","\x7e","\x26","\xbc","\xcb")},
	{hx::fsObject /*::haxe::ui::data::DataSource*/ ,(int)offsetof(TableView_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{hx::fsObject /*::haxe::ui::containers::TableViewRow*/ ,(int)offsetof(TableView_obj,_selectedRow),HX_HCSTRING("_selectedRow","\x80","\xc8","\x17","\x96")},
	{hx::fsObject /*::haxe::ui::containers::TableViewRow*/ ,(int)offsetof(TableView_obj,selectedRow),HX_HCSTRING("selectedRow","\x7f","\x1a","\x0e","\x30")},
	{hx::fsInt,(int)offsetof(TableView_obj,itemCount),HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TableView_obj_sStaticStorageInfo = 0;
#endif

static ::String TableView_obj_sMemberFields[] = {
	HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"),
	HX_HCSTRING("_itemRenderers","\x7e","\x26","\xbc","\xcb"),
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createLayout","\xc6","\xee","\x0d","\x7b"),
	HX_HCSTRING("createChildren","\x5b","\x98","\xa4","\xc2"),
	HX_HCSTRING("onReady","\xc4","\x3e","\xf8","\x7c"),
	HX_HCSTRING("_onContentsResized","\x58","\x1c","\x86","\x4b"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("_onHeaderResized","\xc5","\x1f","\xf4","\x8c"),
	HX_HCSTRING("get_horizontalConstraint","\xea","\xa3","\x47","\x53"),
	HX_HCSTRING("get_verticalConstraint","\xbc","\xa9","\xaf","\x1e"),
	HX_HCSTRING("get_hscrollOffset","\x3f","\xf3","\xa4","\x14"),
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("onDataSourceChanged","\xb0","\xdc","\xea","\x03"),
	HX_HCSTRING("syncUI","\x6f","\x91","\x87","\xef"),
	HX_HCSTRING("resetSelection","\x7d","\x5c","\x8b","\xe8"),
	HX_HCSTRING("_selectedRow","\x80","\xc8","\x17","\x96"),
	HX_HCSTRING("selectedRow","\x7f","\x1a","\x0e","\x30"),
	HX_HCSTRING("get_selectedRow","\x16","\xd2","\xef","\xf0"),
	HX_HCSTRING("onRowClick","\x0d","\x00","\x00","\xce"),
	HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"),
	HX_HCSTRING("get_itemCount","\x93","\x7e","\xb2","\x0b"),
	HX_HCSTRING("updateScrollRect","\x3a","\xab","\x52","\x53"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("updateDisplay","\x39","\x8f","\xb8","\x86"),
	HX_HCSTRING("validateScroll","\x43","\xb1","\x2c","\x9b"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void TableView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TableView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#endif

hx::Class TableView_obj::__mClass;

void TableView_obj::__register()
{
	hx::Object *dummy = new TableView_obj;
	TableView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.TableView","\x29","\x36","\x4a","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TableView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TableView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TableView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
