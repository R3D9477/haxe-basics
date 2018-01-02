// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_DropDown
#define INCLUDED_haxe_ui_components_DropDown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,DropDown)
HX_DECLARE_CLASS3(haxe,ui,containers,ListView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES DropDown_obj : public  ::haxe::ui::components::Button_obj
{
	public:
		typedef  ::haxe::ui::components::Button_obj super;
		typedef DropDown_obj OBJ_;
		DropDown_obj();

	public:
		enum { _hx_ClassId = 0x6c641221 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.DropDown")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.DropDown"); }
		static hx::ObjectPtr< DropDown_obj > __new();
		static hx::ObjectPtr< DropDown_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropDown_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("DropDown","\x51","\x5c","\xba","\xc1"); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int NO_SELECTION;
		 ::haxe::ui::containers::ListView _listview;
		 ::haxe::ui::core::ItemRenderer _itemRenderer;
		void createDefaults();

		void create();

		void createChildren();

		void destroyChildren();

		void onReady();

		void onDestroy();

		 ::haxe::ui::data::DataSource _dataSource;
		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		bool _requireSelection;
		bool get_requireSelection();
		::Dynamic get_requireSelection_dyn();

		bool set_requireSelection(bool value);
		::Dynamic set_requireSelection_dyn();

		 ::Dynamic _listWidth;
		 ::Dynamic get_listWidth();
		::Dynamic get_listWidth_dyn();

		 ::Dynamic set_listWidth( ::Dynamic value);
		::Dynamic set_listWidth_dyn();

		 ::Dynamic _listHeight;
		 ::Dynamic get_listHeight();
		::Dynamic get_listHeight_dyn();

		 ::Dynamic set_listHeight( ::Dynamic value);
		::Dynamic set_listHeight_dyn();

		int _listSize;
		int get_listSize();
		::Dynamic get_listSize_dyn();

		int set_listSize(int value);
		::Dynamic set_listSize_dyn();

		::String _listStyleNames;
		::String get_listStyleNames();
		::Dynamic get_listStyleNames_dyn();

		::String set_listStyleNames(::String value);
		::Dynamic set_listStyleNames_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onMouseClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic onMouseClick_dyn();

		 ::Dynamic selectedItem;
		 ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		void onItemChange( ::haxe::ui::core::UIEvent event);
		::Dynamic onItemChange_dyn();

		void onScreenMouseDown( ::haxe::ui::core::MouseEvent event);
		::Dynamic onScreenMouseDown_dyn();

		void showList();
		::Dynamic showList_dyn();

		void hideList();
		::Dynamic hideList_dyn();

		void validateData();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_DropDown */ 
