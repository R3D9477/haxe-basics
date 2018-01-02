// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#define INCLUDED_haxe_ui_core_ItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ItemRenderer_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef ItemRenderer_obj OBJ_;
		ItemRenderer_obj();

	public:
		enum { _hx_ClassId = 0x3200b6b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ItemRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ItemRenderer"); }
		static hx::ObjectPtr< ItemRenderer_obj > __new();
		static hx::ObjectPtr< ItemRenderer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ItemRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ItemRenderer","\x96","\x5d","\x17","\x5f"); }

		static void __boot();
		static  ::Dynamic __meta__;
		void _onItemMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onItemMouseOver_dyn();

		void _onItemMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onItemMouseOut_dyn();

		bool _allowHover;
		bool get_allowHover();
		::Dynamic get_allowHover_dyn();

		bool set_allowHover(bool value);
		::Dynamic set_allowHover_dyn();

		 ::Dynamic _data;
		 ::Dynamic get_data();
		::Dynamic get_data_dyn();

		 ::Dynamic set_data( ::Dynamic value);
		::Dynamic set_data_dyn();

		void validateData();

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ItemRenderer */ 
