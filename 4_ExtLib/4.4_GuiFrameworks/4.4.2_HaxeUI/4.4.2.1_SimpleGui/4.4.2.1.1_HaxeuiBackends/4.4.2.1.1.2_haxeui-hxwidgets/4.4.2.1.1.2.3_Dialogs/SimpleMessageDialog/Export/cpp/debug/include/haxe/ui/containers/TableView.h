// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_TableView
#define INCLUDED_haxe_ui_containers_TableView

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
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,Header)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,TableView)
HX_DECLARE_CLASS3(haxe,ui,containers,TableViewRow)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TableView_obj : public  ::haxe::ui::containers::ScrollView_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollView_obj super;
		typedef TableView_obj OBJ_;
		TableView_obj();

	public:
		enum { _hx_ClassId = 0x2222b027 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TableView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TableView"); }
		static hx::ObjectPtr< TableView_obj > __new();
		static hx::ObjectPtr< TableView_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TableView","\x73","\x15","\xb7","\x5d"); }

		 ::haxe::ui::containers::Header _header;
		::Array< ::Dynamic> _itemRenderers;
		void createDefaults();

		 ::haxe::ui::layouts::Layout createLayout();

		void createChildren();

		void onReady();

		void _onContentsResized( ::haxe::ui::core::UIEvent event);

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void _onHeaderResized( ::haxe::ui::core::UIEvent event);
		::Dynamic _onHeaderResized_dyn();

		 ::haxe::ui::core::Component get_horizontalConstraint();

		 ::haxe::ui::core::Component get_verticalConstraint();

		Float get_hscrollOffset();

		 ::haxe::ui::data::DataSource _dataSource;
		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		void onDataSourceChanged();
		::Dynamic onDataSourceChanged_dyn();

		void syncUI();
		::Dynamic syncUI_dyn();

		void resetSelection();
		::Dynamic resetSelection_dyn();

		 ::haxe::ui::containers::TableViewRow _selectedRow;
		 ::haxe::ui::containers::TableViewRow selectedRow;
		 ::haxe::ui::containers::TableViewRow get_selectedRow();
		::Dynamic get_selectedRow_dyn();

		void onRowClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic onRowClick_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		void updateScrollRect();

		void validateData();

		void updateDisplay();

		void validateScroll();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TableView */ 
