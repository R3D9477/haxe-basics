// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_ListView
#define INCLUDED_haxe_ui_containers_ListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,containers,ListView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,ClassFactory)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ListView_obj : public  ::haxe::ui::containers::ScrollView_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollView_obj super;
		typedef ListView_obj OBJ_;
		ListView_obj();

	public:
		enum { _hx_ClassId = 0x0b216533 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ListView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ListView"); }
		static hx::ObjectPtr< ListView_obj > __new();
		static hx::ObjectPtr< ListView_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ListView","\x03","\xbe","\xf5","\x07"); }

		static void __boot();
		static int NO_SELECTION;
		void createDefaults();

		void createContentContainer();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::ItemRenderer _currentSelection;
		void onItemClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic onItemClick_dyn();

		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		 ::haxe::ui::core::ItemRenderer get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::haxe::ui::core::ItemRenderer set_selectedItem( ::haxe::ui::core::ItemRenderer value);
		::Dynamic set_selectedItem_dyn();

		void resetSelection();
		::Dynamic resetSelection_dyn();

		 ::haxe::ui::core::ItemRenderer addItem( ::Dynamic data);
		::Dynamic addItem_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		Float itemHeight;
		Float get_itemHeight();
		::Dynamic get_itemHeight_dyn();

		 ::Dynamic _itemRendererFunction;
		Dynamic _itemRendererFunction_dyn() { return _itemRendererFunction;}
		 ::Dynamic get_itemRendererFunction();
		::Dynamic get_itemRendererFunction_dyn();

		 ::Dynamic set_itemRendererFunction( ::Dynamic value);
		::Dynamic set_itemRendererFunction_dyn();

		 ::haxe::ui::core::ItemRenderer _itemRenderer;
		hx::Class get_itemRendererClass();
		::Dynamic get_itemRendererClass_dyn();

		hx::Class set_itemRendererClass(hx::Class value);
		::Dynamic set_itemRendererClass_dyn();

		 ::haxe::ui::data::DataSource _dataSource;
		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		void onDataSourceChanged();
		::Dynamic onDataSourceChanged_dyn();

		void syncUI();
		::Dynamic syncUI_dyn();

		 ::haxe::ui::core::ItemRenderer itemToRenderer( ::Dynamic data);
		::Dynamic itemToRenderer_dyn();

		void invalidateIndex();
		::Dynamic invalidateIndex_dyn();

		void validateInternal();

		void validateData();

		void validateIndex();
		::Dynamic validateIndex_dyn();

		bool validateLayout();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ListView */ 
