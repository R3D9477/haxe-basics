// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListViewDefaultDataSourceBehaviour
#include <haxe/ui/containers/ListViewDefaultDataSourceBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ClassFactory
#include <haxe/ui/core/ClassFactory.h>
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
#ifndef INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer
#include <haxe/ui/data/transformation/NativeTypeTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#include <haxe/ui/validation/ValidationManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8cd988d67443219_19_new,"haxe.ui.containers.ListView","new",0x7809d17f,"haxe.ui.containers.ListView.new","haxe/ui/containers/ListView.hx",19,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_26_createDefaults,"haxe.ui.containers.ListView","createDefaults",0x8f7a34ef,"haxe.ui.containers.ListView.createDefaults","haxe/ui/containers/ListView.hx",26,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_34_createContentContainer,"haxe.ui.containers.ListView","createContentContainer",0x64216225,"haxe.ui.containers.ListView.createContentContainer","haxe/ui/containers/ListView.hx",34,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_41_addComponent,"haxe.ui.containers.ListView","addComponent",0x83ae755d,"haxe.ui.containers.ListView.addComponent","haxe/ui/containers/ListView.hx",41,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_62_onItemClick,"haxe.ui.containers.ListView","onItemClick",0x04e77d35,"haxe.ui.containers.ListView.onItemClick","haxe/ui/containers/ListView.hx",62,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_80_get_selectedIndex,"haxe.ui.containers.ListView","get_selectedIndex",0x0b149b6d,"haxe.ui.containers.ListView.get_selectedIndex","haxe/ui/containers/ListView.hx",80,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_82_set_selectedIndex,"haxe.ui.containers.ListView","set_selectedIndex",0x2e827379,"haxe.ui.containers.ListView.set_selectedIndex","haxe/ui/containers/ListView.hx",82,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_92_get_selectedItem,"haxe.ui.containers.ListView","get_selectedItem",0x89d34918,"haxe.ui.containers.ListView.get_selectedItem","haxe/ui/containers/ListView.hx",92,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_99_set_selectedItem,"haxe.ui.containers.ListView","set_selectedItem",0xe015368c,"haxe.ui.containers.ListView.set_selectedItem","haxe/ui/containers/ListView.hx",99,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_109_resetSelection,"haxe.ui.containers.ListView","resetSelection",0x763141be,"haxe.ui.containers.ListView.resetSelection","haxe/ui/containers/ListView.hx",109,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_112_addItem,"haxe.ui.containers.ListView","addItem",0x4cb38473,"haxe.ui.containers.ListView.addItem","haxe/ui/containers/ListView.hx",112,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_124_get_itemCount,"haxe.ui.containers.ListView","get_itemCount",0xfc42bc72,"haxe.ui.containers.ListView.get_itemCount","haxe/ui/containers/ListView.hx",124,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_132_get_itemHeight,"haxe.ui.containers.ListView","get_itemHeight",0xf3f53ee4,"haxe.ui.containers.ListView.get_itemHeight","haxe/ui/containers/ListView.hx",132,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_144_get_itemRendererFunction,"haxe.ui.containers.ListView","get_itemRendererFunction",0xb4345cb8,"haxe.ui.containers.ListView.get_itemRendererFunction","haxe/ui/containers/ListView.hx",144,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_146_set_itemRendererFunction,"haxe.ui.containers.ListView","set_itemRendererFunction",0xc70ede2c,"haxe.ui.containers.ListView.set_itemRendererFunction","haxe/ui/containers/ListView.hx",146,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_159_get_itemRendererClass,"haxe.ui.containers.ListView","get_itemRendererClass",0xb72d8298,"haxe.ui.containers.ListView.get_itemRendererClass","haxe/ui/containers/ListView.hx",159,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_161_set_itemRendererClass,"haxe.ui.containers.ListView","set_itemRendererClass",0x0b3650a4,"haxe.ui.containers.ListView.set_itemRendererClass","haxe/ui/containers/ListView.hx",161,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_169_get_dataSource,"haxe.ui.containers.ListView","get_dataSource",0x216ee42f,"haxe.ui.containers.ListView.get_dataSource","haxe/ui/containers/ListView.hx",169,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_177_set_dataSource,"haxe.ui.containers.ListView","set_dataSource",0x418ecca3,"haxe.ui.containers.ListView.set_dataSource","haxe/ui/containers/ListView.hx",177,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_186_onDataSourceChanged,"haxe.ui.containers.ListView","onDataSourceChanged",0x96f94bcf,"haxe.ui.containers.ListView.onDataSourceChanged","haxe/ui/containers/ListView.hx",186,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_189_syncUI,"haxe.ui.containers.ListView","syncUI",0x6b45cdb0,"haxe.ui.containers.ListView.syncUI","haxe/ui/containers/ListView.hx",189,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_224_itemToRenderer,"haxe.ui.containers.ListView","itemToRenderer",0xecd93e12,"haxe.ui.containers.ListView.itemToRenderer","haxe/ui/containers/ListView.hx",224,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_243_invalidateIndex,"haxe.ui.containers.ListView","invalidateIndex",0x0f456736,"haxe.ui.containers.ListView.invalidateIndex","haxe/ui/containers/ListView.hx",243,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_246_validateInternal,"haxe.ui.containers.ListView","validateInternal",0x8fa9f174,"haxe.ui.containers.ListView.validateInternal","haxe/ui/containers/ListView.hx",246,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_284_validateData,"haxe.ui.containers.ListView","validateData",0x0b69b8e1,"haxe.ui.containers.ListView.validateData","haxe/ui/containers/ListView.hx",284,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_290_validateIndex,"haxe.ui.containers.ListView","validateIndex",0xdaa4987b,"haxe.ui.containers.ListView.validateIndex","haxe/ui/containers/ListView.hx",290,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_307_validateLayout,"haxe.ui.containers.ListView","validateLayout",0x3a266d21,"haxe.ui.containers.ListView.validateLayout","haxe/ui/containers/ListView.hx",307,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_ee424ce0d6434ec3_294_cloneComponent,"haxe.ui.containers.ListView","cloneComponent",0xb3fccee1,"haxe.ui.containers.ListView.cloneComponent","haxe/ui/macros/Macros.hx",294,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_26f6b626bf6b13a3_1_self,"haxe.ui.containers.ListView","self",0x93db858d,"haxe.ui.containers.ListView.self","src/haxe/ui/containers/ListView.hx",1,0x8077d31b)
HX_LOCAL_STACK_FRAME(_hx_pos_a8cd988d67443219_20_boot,"haxe.ui.containers.ListView","boot",0x88a67e33,"haxe.ui.containers.ListView.boot","haxe/ui/containers/ListView.hx",20,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{

void ListView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_19_new)
HXLINE(  77)		this->_selectedIndex = (int)-1;
HXLINE(  23)		super::__construct();
            	}

Dynamic ListView_obj::__CreateEmpty() { return new ListView_obj; }

void *ListView_obj::_hx_vtable = 0;

Dynamic ListView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListView_obj > _hx_result = new ListView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c7b87fe) {
		if (inClassId<=(int)0x0b216533) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b216533;
		} else {
			return inClassId==(int)0x1c7b87fe;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_containers_ListView__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (hx::Object::*)())&::haxe::ui::containers::ListView_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::containers::ListView_obj::set_dataSource,
};

void *ListView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_containers_ListView__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

void ListView_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_a8cd988d67443219_26_createDefaults)
HXLINE(  27)		this->super::createDefaults();
HXLINE(  28)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  28)		_g->set(HX_("dataSource",a5,76,d3,1d),( ( ::haxe::ui::core::Behaviour)( ::haxe::ui::containers::ListViewDefaultDataSourceBehaviour_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this))) ));
HXDLIN(  28)		this->defaultBehaviours(_g);
            	}


void ListView_obj::createContentContainer(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_34_createContentContainer)
HXDLIN(  34)		if (hx::IsNull( this->_contents )) {
HXLINE(  35)			this->super::createContentContainer();
HXLINE(  36)			this->_contents->set_percentWidth((int)100);
HXLINE(  37)			this->_contents->addClass(HX_("listview-contents",24,54,5f,b1),null(),null());
            		}
            	}


 ::haxe::ui::core::Component ListView_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_41_addComponent)
HXLINE(  42)		 ::haxe::ui::core::Component r = null();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE(  43)			if (hx::IsNull( this->_itemRenderer )) {
HXLINE(  43)				_hx_tmp = hx::IsNull( this->_itemRendererFunction );
            			}
            			else {
HXLINE(  43)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			this->_itemRenderer = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child);
HXLINE(  45)			this->createContentContainer();
HXLINE(  49)			if (hx::IsNotNull( this->_dataSource )) {
HXLINE(  50)				this->invalidate(HX_("data",2a,56,63,42));
            			}
            		}
            		else {
HXLINE(  53)			if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE(  54)				child->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn());
            			}
HXLINE(  56)			r = this->super::addComponent(child);
            		}
HXLINE(  58)		return r;
            	}


void ListView_obj::onItemClick( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_62_onItemClick)
HXLINE(  63)		if (hx::IsEq( event->target,this->_currentSelection )) {
HXLINE(  64)			return;
            		}
HXLINE(  67)		::Array< ::Dynamic> arr = event->target->findComponentsUnderPoint(event->screenX,event->screenY);
HXLINE(  68)		{
HXLINE(  68)			int _g = (int)0;
HXDLIN(  68)			while((_g < arr->length)){
HXLINE(  68)				 ::haxe::ui::core::Component a = arr->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  68)				_g = (_g + (int)1);
HXLINE(  69)				if (::Std_obj::is(a,hx::ClassOf< ::haxe::ui::core::InteractiveComponent >())) {
HXLINE(  70)					return;
            				}
            			}
            		}
HXLINE(  74)		this->set_selectedItem(hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(event->target));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,onItemClick,(void))

int ListView_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_80_get_selectedIndex)
HXDLIN(  80)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndex,return )

int ListView_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_82_set_selectedIndex)
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		bool _hx_tmp1;
HXDLIN(  83)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE(  83)			_hx_tmp1 = (value < this->_dataSource->get_size());
            		}
            		else {
HXLINE(  83)			_hx_tmp1 = false;
            		}
HXDLIN(  83)		if (_hx_tmp1) {
HXLINE(  83)			_hx_tmp = (this->_selectedIndex != value);
            		}
            		else {
HXLINE(  83)			_hx_tmp = false;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			this->_selectedIndex = value;
HXLINE(  85)			this->invalidate(HX_("index",12,9b,14,be));
            		}
HXLINE(  88)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndex,return )

 ::haxe::ui::core::ItemRenderer ListView_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_92_get_selectedItem)
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		bool _hx_tmp1;
HXDLIN(  93)		if (hx::IsNotNull( this->get_contents() )) {
HXLINE(  93)			_hx_tmp1 = (this->_selectedIndex == (int)-1);
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = true;
            		}
HXDLIN(  93)		if (!(_hx_tmp1)) {
HXLINE(  93)			_hx_tmp = hx::IsNull( this->get_contents()->get_childComponents()->__get(this->_selectedIndex).StaticCast<  ::haxe::ui::core::Component >() );
            		}
            		else {
HXLINE(  93)			_hx_tmp = true;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			return null();
            		}
HXLINE(  97)		return hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(this->get_contents()->get_childComponents()->__get(this->_selectedIndex).StaticCast<  ::haxe::ui::core::Component >());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItem,return )

 ::haxe::ui::core::ItemRenderer ListView_obj::set_selectedItem( ::haxe::ui::core::ItemRenderer value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_99_set_selectedItem)
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 100)			_hx_tmp = hx::IsNotNull( this->_contents );
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 102)			this->set_selectedIndex(this->get_contents()->get_childComponents()->indexOf(value,null()));
            		}
HXLINE( 105)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedItem,return )

void ListView_obj::resetSelection(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_109_resetSelection)
HXDLIN( 109)		this->set_selectedIndex((int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,resetSelection,(void))

 ::haxe::ui::core::ItemRenderer ListView_obj::addItem( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_112_addItem)
HXLINE( 113)		 ::haxe::ui::core::ItemRenderer r = this->itemToRenderer(data);
HXLINE( 114)		r->set_percentWidth((int)100);
HXLINE( 115)		int n = this->get_contents()->get_childComponents()->length;
HXLINE( 116)		 ::haxe::ui::core::ItemRenderer item = ( ( ::haxe::ui::core::ItemRenderer)(this->addComponent(r)) );
HXLINE( 117)		::String _hx_tmp;
HXDLIN( 117)		if ((hx::Mod(n,(int)2) == (int)0)) {
HXLINE( 117)			_hx_tmp = HX_("even",1a,6f,1c,43);
            		}
            		else {
HXLINE( 117)			_hx_tmp = HX_("odd",af,91,54,00);
            		}
HXDLIN( 117)		item->addClass(_hx_tmp,null(),null());
HXLINE( 118)		item->set_data(data);
HXLINE( 120)		return item;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,addItem,return )

int ListView_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_124_get_itemCount)
HXLINE( 125)		if (hx::IsNull( this->_dataSource )) {
HXLINE( 126)			return (int)0;
            		}
HXLINE( 128)		return this->_dataSource->get_size();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemCount,return )

Float ListView_obj::get_itemHeight(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_132_get_itemHeight)
HXLINE( 133)		bool _hx_tmp;
HXDLIN( 133)		if ((this->get_itemCount() != (int)0)) {
HXLINE( 133)			_hx_tmp = hx::IsNull( this->get_contents() );
            		}
            		else {
HXLINE( 133)			_hx_tmp = true;
            		}
HXDLIN( 133)		if (_hx_tmp) {
HXLINE( 134)			return (int)0;
            		}
HXLINE( 137)		this->validate();
HXLINE( 138)		return this->itemHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemHeight,return )

 ::Dynamic ListView_obj::get_itemRendererFunction(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_144_get_itemRendererFunction)
HXDLIN( 144)		return this->_itemRendererFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRendererFunction,return )

 ::Dynamic ListView_obj::set_itemRendererFunction( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_146_set_itemRendererFunction)
HXLINE( 147)		if (hx::IsNotEq( this->_itemRendererFunction,value )) {
HXLINE( 148)			this->_itemRendererFunction = value;
HXLINE( 150)			this->invalidate(HX_("data",2a,56,63,42));
            		}
HXLINE( 153)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRendererFunction,return )

hx::Class ListView_obj::get_itemRendererClass(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_159_get_itemRendererClass)
HXDLIN( 159)		return ::Type_obj::getClass(this->_itemRenderer);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRendererClass,return )

hx::Class ListView_obj::set_itemRendererClass(hx::Class value){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_161_set_itemRendererClass)
HXLINE( 162)		this->_itemRenderer = ( ( ::haxe::ui::core::ItemRenderer)(::Type_obj::createInstance(value,::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 163)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 164)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRendererClass,return )

 ::haxe::ui::data::DataSource ListView_obj::get_dataSource(){
            	HX_GC_STACKFRAME(&_hx_pos_a8cd988d67443219_169_get_dataSource)
HXLINE( 170)		if (hx::IsNull( this->_dataSource )) {
HXLINE( 171)			this->_dataSource =  ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX , ::haxe::ui::data::transformation::NativeTypeTransformer_obj::__alloc( HX_CTX ));
HXLINE( 173)			this->behaviourGet(HX_("dataSource",a5,76,d3,1d));
            		}
HXLINE( 175)		return this->_dataSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource ListView_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_a8cd988d67443219_177_set_dataSource)
HXLINE( 178)		this->_dataSource = value;
HXLINE( 179)		this->_dataSource->transformer =  ::haxe::ui::data::transformation::NativeTypeTransformer_obj::__alloc( HX_CTX );
HXLINE( 180)		this->invalidate(HX_("data",2a,56,63,42));
HXLINE( 182)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_dataSource,return )

void ListView_obj::onDataSourceChanged(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_186_onDataSourceChanged)
HXDLIN( 186)		this->invalidate(HX_("data",2a,56,63,42));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,onDataSourceChanged,(void))

void ListView_obj::syncUI(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_189_syncUI)
HXLINE( 190)		if (hx::IsNull( this->_dataSource )) {
HXLINE( 191)			return;
            		}
HXLINE( 194)		{
HXLINE( 194)			int _g1 = (int)0;
HXDLIN( 194)			int _g = this->_dataSource->get_size();
HXDLIN( 194)			while((_g1 < _g)){
HXLINE( 194)				_g1 = (_g1 + (int)1);
HXDLIN( 194)				int n = (_g1 - (int)1);
HXLINE( 195)				 ::Dynamic data = this->_dataSource->get(n);
HXLINE( 196)				 ::haxe::ui::core::ItemRenderer item = null();
HXLINE( 197)				if ((n < this->get_contents()->get_childComponents()->length)) {
HXLINE( 198)					item = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(this->get_contents()->get_childComponents()->__get(n).StaticCast<  ::haxe::ui::core::Component >());
HXLINE( 199)					item->removeClass(HX_("even",1a,6f,1c,43),null(),null());
HXLINE( 200)					item->removeClass(HX_("odd",af,91,54,00),null(),null());
HXLINE( 202)					bool _hx_tmp;
HXDLIN( 202)					if (hx::IsNotNull( this->_itemRendererFunction )) {
HXLINE( 202)						_hx_tmp = !(::Std_obj::is(item,( ( ::haxe::ui::core::ClassFactory)(this->_itemRendererFunction(data)) )->generator));
            					}
            					else {
HXLINE( 202)						_hx_tmp = false;
            					}
HXDLIN( 202)					if (_hx_tmp) {
HXLINE( 204)						this->get_contents()->removeComponent(item,null(),null());
HXLINE( 205)						item = ( ( ::haxe::ui::core::ItemRenderer)(this->addComponent(this->itemToRenderer(data))) );
HXLINE( 206)						this->get_contents()->setComponentIndex(item,n);
            					}
            				}
            				else {
HXLINE( 209)					item = ( ( ::haxe::ui::core::ItemRenderer)(this->addComponent(this->itemToRenderer(data))) );
HXLINE( 210)					this->get_contents()->setComponentIndex(item,n);
            				}
HXLINE( 213)				::String _hx_tmp1;
HXDLIN( 213)				if ((hx::Mod(n,(int)2) == (int)0)) {
HXLINE( 213)					_hx_tmp1 = HX_("even",1a,6f,1c,43);
            				}
            				else {
HXLINE( 213)					_hx_tmp1 = HX_("odd",af,91,54,00);
            				}
HXDLIN( 213)				item->addClass(_hx_tmp1,null(),null());
HXLINE( 214)				item->set_data(data);
            			}
            		}
HXLINE( 217)		while(true){
HXLINE( 217)			int _hx_tmp2 = this->_dataSource->get_size();
HXDLIN( 217)			if (!((_hx_tmp2 < this->get_contents()->get_childComponents()->length))) {
HXLINE( 217)				goto _hx_goto_22;
            			}
HXLINE( 218)			 ::haxe::ui::core::Component _hx_tmp3 = this->get_contents();
HXDLIN( 218)			::Array< ::Dynamic> _hx_tmp4 = this->get_contents()->get_childComponents();
HXDLIN( 218)			_hx_tmp3->removeComponent(_hx_tmp4->__get((this->get_contents()->get_childComponents()->length - (int)1)).StaticCast<  ::haxe::ui::core::Component >(),null(),null());
            		}
            		_hx_goto_22:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,syncUI,(void))

 ::haxe::ui::core::ItemRenderer ListView_obj::itemToRenderer( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_a8cd988d67443219_224_itemToRenderer)
HXDLIN( 224)		if (hx::IsNotNull( this->_itemRendererFunction )) {
HXLINE( 225)			return ( ( ::haxe::ui::core::ClassFactory)(this->_itemRendererFunction(data)) )->newInstance().StaticCast<  ::haxe::ui::core::ItemRenderer >();
            		}
            		else {
HXLINE( 227)			if (hx::IsNull( this->_itemRenderer )) {
HXLINE( 228)				this->_itemRenderer =  ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX );
            			}
HXLINE( 230)			return Dynamic( this->_itemRenderer->cloneComponent()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
            		}
HXLINE( 224)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,itemToRenderer,return )

void ListView_obj::invalidateIndex(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_243_invalidateIndex)
HXDLIN( 243)		this->invalidate(HX_("index",12,9b,14,be));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,invalidateIndex,(void))

void ListView_obj::validateInternal(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_246_validateInternal)
HXLINE( 247)		bool dataInvalid = this->isInvalid(HX_("data",2a,56,63,42));
HXLINE( 248)		bool indexInvalid = this->isInvalid(HX_("index",12,9b,14,be));
HXLINE( 249)		bool styleInvalid = this->isInvalid(HX_("style",31,a5,1d,84));
HXLINE( 250)		bool positionInvalid = this->isInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 251)		bool displayInvalid = this->isInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 252)		bool layoutInvalid;
HXDLIN( 252)		if (this->isInvalid(HX_("layout",aa,ae,b8,58))) {
HXLINE( 252)			layoutInvalid = (this->_layoutLocked == false);
            		}
            		else {
HXLINE( 252)			layoutInvalid = false;
            		}
HXLINE( 253)		bool scrollInvalid = this->isInvalid(HX_("scroll",0d,d8,64,47));
HXLINE( 255)		if (dataInvalid) {
HXLINE( 256)			this->validateData();
            		}
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		if (!(dataInvalid)) {
HXLINE( 259)			_hx_tmp = indexInvalid;
            		}
            		else {
HXLINE( 259)			_hx_tmp = true;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			this->validateIndex();
            		}
HXLINE( 263)		if (styleInvalid) {
HXLINE( 264)			this->validateStyle();
            		}
HXLINE( 267)		if (positionInvalid) {
HXLINE( 268)			this->validatePosition();
            		}
HXLINE( 271)		if (layoutInvalid) {
HXLINE( 272)			if (!(this->validateLayout())) {
HXLINE( 272)				displayInvalid = displayInvalid;
            			}
            			else {
HXLINE( 272)				displayInvalid = true;
            			}
            		}
HXLINE( 275)		bool _hx_tmp1;
HXDLIN( 275)		if (!(scrollInvalid)) {
HXLINE( 275)			_hx_tmp1 = layoutInvalid;
            		}
            		else {
HXLINE( 275)			_hx_tmp1 = true;
            		}
HXDLIN( 275)		if (_hx_tmp1) {
HXLINE( 276)			this->validateScroll();
            		}
HXLINE( 279)		bool _hx_tmp2;
HXDLIN( 279)		if (!(displayInvalid)) {
HXLINE( 279)			_hx_tmp2 = styleInvalid;
            		}
            		else {
HXLINE( 279)			_hx_tmp2 = true;
            		}
HXDLIN( 279)		if (_hx_tmp2) {
HXLINE( 280)			::haxe::ui::validation::ValidationManager_obj::get_instance()->addDisplay(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


void ListView_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_284_validateData)
HXLINE( 285)		this->behaviourSet(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(this->_dataSource));
HXLINE( 287)		this->super::validateData();
            	}


void ListView_obj::validateIndex(){
            	HX_GC_STACKFRAME(&_hx_pos_a8cd988d67443219_290_validateIndex)
HXLINE( 291)		 ::haxe::ui::core::ItemRenderer selectedItem = this->get_selectedItem();
HXLINE( 292)		if (hx::IsNotEq( this->_currentSelection,selectedItem )) {
HXLINE( 294)			if (hx::IsNotNull( this->_currentSelection )) {
HXLINE( 295)				this->_currentSelection->removeClass(HX_(":selected",95,f4,1e,7c),true,true);
            			}
HXLINE( 298)			this->_currentSelection = selectedItem;
HXLINE( 300)			if (hx::IsNotNull( this->_currentSelection )) {
HXLINE( 301)				this->_currentSelection->addClass(HX_(":selected",95,f4,1e,7c),true,true);
HXLINE( 302)				this->dispatch( ::haxe::ui::core::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,validateIndex,(void))

bool ListView_obj::validateLayout(){
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_307_validateLayout)
HXLINE( 308)		bool result = this->super::validateLayout();
HXLINE( 310)		this->createContentContainer();
HXLINE( 311)		if (hx::IsNull( this->get_contents() )) {
HXLINE( 312)			return result;
            		}
HXLINE( 316)		int n = (int)0;
HXLINE( 317)		Float cy = this->get_contents()->get_layout()->get_paddingTop();
HXDLIN( 317)		Float cy1 = (cy + this->get_contents()->get_layout()->get_paddingBottom());
HXLINE( 318)		Float scy = this->get_contents()->get_layout()->get_verticalSpacing();
HXLINE( 319)		{
HXLINE( 319)			int _g = (int)0;
HXDLIN( 319)			::Array< ::Dynamic> _g1 = this->get_contents()->get_childComponents();
HXDLIN( 319)			while((_g < _g1->length)){
HXLINE( 319)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 319)				_g = (_g + (int)1);
HXLINE( 320)				cy1 = (cy1 + (child->get_height() + scy));
HXLINE( 321)				n = (n + (int)1);
HXLINE( 322)				if ((n > (int)100)) {
HXLINE( 323)					goto _hx_goto_29;
            				}
            			}
            			_hx_goto_29:;
            		}
HXLINE( 326)		if ((n > (int)0)) {
HXLINE( 327)			cy1 = (cy1 - scy);
            		}
HXLINE( 329)		this->itemHeight = ((Float)cy1 / (Float)n);
HXLINE( 331)		return result;
            	}


 ::haxe::ui::core::Component ListView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_ee424ce0d6434ec3_294_cloneComponent)
HXLINE(   1)		 ::haxe::ui::containers::ListView c = ( ( ::haxe::ui::containers::ListView)(this->super::cloneComponent()) );
HXLINE( 338)		if (hx::IsNotNull( this->_dataSource )) {
HXLINE( 339)			c->set_dataSource(this->_dataSource->clone());
            		}
HXLINE(   1)		return c;
            	}


 ::haxe::ui::core::Component ListView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_26f6b626bf6b13a3_1_self)
HXDLIN(   1)		return  ::haxe::ui::containers::ListView_obj::__alloc( HX_CTX );
            	}


int ListView_obj::NO_SELECTION;


hx::ObjectPtr< ListView_obj > ListView_obj::__new() {
	hx::ObjectPtr< ListView_obj > __this = new ListView_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ListView_obj > ListView_obj::__alloc(hx::Ctx *_hx_ctx) {
	ListView_obj *__this = (ListView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListView_obj), true, "haxe.ui.containers.ListView"));
	*(void **)__this = ListView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(_currentSelection,"_currentSelection");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(itemCount,"itemCount");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_MEMBER_NAME(_itemRendererFunction,"_itemRendererFunction");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	 ::haxe::ui::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentSelection,"_currentSelection");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(itemCount,"itemCount");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
	HX_VISIT_MEMBER_NAME(_itemRendererFunction,"_itemRendererFunction");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	 ::haxe::ui::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ListView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"syncUI") ) { return hx::Val( syncUI_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addItem") ) { return hx::Val( addItem_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_itemCount() : itemCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return hx::Val( inCallProp == hx::paccAlways ? get_itemHeight() : itemHeight ); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_dataSource() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return hx::Val( onItemClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return hx::Val( _dataSource ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return hx::Val( get_itemCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return hx::Val( _itemRenderer ); }
		if (HX_FIELD_EQ(inName,"validateIndex") ) { return hx::Val( validateIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"resetSelection") ) { return hx::Val( resetSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return hx::Val( get_itemHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemToRenderer") ) { return hx::Val( itemToRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateLayout") ) { return hx::Val( validateLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"invalidateIndex") ) { return hx::Val( invalidateIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateInternal") ) { return hx::Val( validateInternal_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentSelection") ) { return hx::Val( _currentSelection ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemRendererClass") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_itemRendererClass() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onDataSourceChanged") ) { return hx::Val( onDataSourceChanged_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"itemRendererFunction") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_itemRendererFunction() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_itemRendererFunction") ) { return hx::Val( _itemRendererFunction ); }
		if (HX_FIELD_EQ(inName,"get_itemRendererClass") ) { return hx::Val( get_itemRendererClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRendererClass") ) { return hx::Val( set_itemRendererClass_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return hx::Val( createContentContainer_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_itemRendererFunction") ) { return hx::Val( get_itemRendererFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_itemRendererFunction") ) { return hx::Val( set_itemRendererFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ListView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { itemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast<  ::haxe::ui::data::DataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedItem(inValue.Cast<  ::haxe::ui::core::ItemRenderer >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentSelection") ) { _currentSelection=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemRendererClass") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_itemRendererClass(inValue.Cast< hx::Class >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"itemRendererFunction") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_itemRendererFunction(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_itemRendererFunction") ) { _itemRendererFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_currentSelection","\x32","\x5b","\xc6","\x19"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("selectedItem","\x0e","\xe5","\x59","\xd6"));
	outFields->push(HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"));
	outFields->push(HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0"));
	outFields->push(HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"));
	outFields->push(HX_HCSTRING("itemRendererClass","\xe2","\xca","\x9f","\xf1"));
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ListView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::ItemRenderer*/ ,(int)offsetof(ListView_obj,_currentSelection),HX_HCSTRING("_currentSelection","\x32","\x5b","\xc6","\x19")},
	{hx::fsInt,(int)offsetof(ListView_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsInt,(int)offsetof(ListView_obj,itemCount),HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a")},
	{hx::fsFloat,(int)offsetof(ListView_obj,itemHeight),HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,_itemRendererFunction),HX_HCSTRING("_itemRendererFunction","\x8d","\xe8","\xe3","\x43")},
	{hx::fsObject /*::haxe::ui::core::ItemRenderer*/ ,(int)offsetof(ListView_obj,_itemRenderer),HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79")},
	{hx::fsObject /*::haxe::ui::data::DataSource*/ ,(int)offsetof(ListView_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ListView_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ListView_obj::NO_SELECTION,HX_HCSTRING("NO_SELECTION","\x6e","\x63","\x0c","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ListView_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("createContentContainer","\xe4","\xd3","\x42","\xa7"),
	HX_HCSTRING("addComponent","\x5c","\x12","\xa8","\x0e"),
	HX_HCSTRING("_currentSelection","\x32","\x5b","\xc6","\x19"),
	HX_HCSTRING("onItemClick","\x16","\xc5","\x8c","\x6a"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_selectedItem","\x97","\xd1","\xf8","\xda"),
	HX_HCSTRING("set_selectedItem","\x0b","\xbf","\x3a","\x31"),
	HX_HCSTRING("resetSelection","\x7d","\x5c","\x8b","\xe8"),
	HX_HCSTRING("addItem","\xd4","\x07","\xfd","\x81"),
	HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"),
	HX_HCSTRING("get_itemCount","\x93","\x7e","\xb2","\x0b"),
	HX_HCSTRING("itemHeight","\x5a","\xd1","\x59","\xf0"),
	HX_HCSTRING("get_itemHeight","\xa3","\x59","\x4f","\x66"),
	HX_HCSTRING("_itemRendererFunction","\x8d","\xe8","\xe3","\x43"),
	HX_HCSTRING("get_itemRendererFunction","\x37","\xfc","\xe4","\x17"),
	HX_HCSTRING("set_itemRendererFunction","\xab","\x7d","\xbf","\x2a"),
	HX_HCSTRING("_itemRenderer","\x55","\xa4","\x73","\x79"),
	HX_HCSTRING("get_itemRendererClass","\xb9","\xcd","\x4d","\x70"),
	HX_HCSTRING("set_itemRendererClass","\xc5","\x9b","\x56","\xc4"),
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("onDataSourceChanged","\xb0","\xdc","\xea","\x03"),
	HX_HCSTRING("syncUI","\x6f","\x91","\x87","\xef"),
	HX_HCSTRING("itemToRenderer","\xd1","\x58","\x33","\x5f"),
	HX_HCSTRING("invalidateIndex","\x97","\xb3","\xc2","\xab"),
	HX_HCSTRING("validateInternal","\xf3","\x79","\xcf","\xe0"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("validateIndex","\x9c","\x5a","\x14","\xea"),
	HX_HCSTRING("validateLayout","\xe0","\x87","\x80","\xac"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void ListView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ListView_obj::NO_SELECTION,"NO_SELECTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ListView_obj::NO_SELECTION,"NO_SELECTION");
};

#endif

hx::Class ListView_obj::__mClass;

static ::String ListView_obj_sStaticFields[] = {
	HX_HCSTRING("NO_SELECTION","\x6e","\x63","\x0c","\xb2"),
	::String(null())
};

void ListView_obj::__register()
{
	hx::Object *dummy = new ListView_obj;
	ListView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.ListView","\x0d","\xa6","\x4d","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ListView_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ListView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a8cd988d67443219_20_boot)
HXDLIN(  20)		NO_SELECTION = (int)-1;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
