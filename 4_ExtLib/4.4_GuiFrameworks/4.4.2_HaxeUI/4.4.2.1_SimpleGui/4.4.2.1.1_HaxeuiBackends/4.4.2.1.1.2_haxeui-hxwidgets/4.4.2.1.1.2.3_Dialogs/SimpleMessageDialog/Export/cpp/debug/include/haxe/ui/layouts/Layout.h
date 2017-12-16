// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_Layout
#define INCLUDED_haxe_ui_layouts_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES Layout_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Layout_obj OBJ_;
		Layout_obj();

	public:
		enum { _hx_ClassId = 0x548a03f5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.Layout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.Layout"); }
		static hx::ObjectPtr< Layout_obj > __new();
		static hx::ObjectPtr< Layout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"); }

		 ::haxe::ui::core::Component _component;
		 ::haxe::ui::core::Component get_component();
		::Dynamic get_component_dyn();

		 ::haxe::ui::core::Component set_component( ::haxe::ui::core::Component value);
		::Dynamic set_component_dyn();

		void refresh();
		::Dynamic refresh_dyn();

		bool autoSize();
		::Dynamic autoSize_dyn();

		Float marginTop( ::haxe::ui::core::Component child);
		::Dynamic marginTop_dyn();

		Float marginLeft( ::haxe::ui::core::Component child);
		::Dynamic marginLeft_dyn();

		Float marginBottom( ::haxe::ui::core::Component child);
		::Dynamic marginBottom_dyn();

		Float marginRight( ::haxe::ui::core::Component child);
		::Dynamic marginRight_dyn();

		bool hidden( ::haxe::ui::core::Component c);
		::Dynamic hidden_dyn();

		::String horizontalAlign( ::haxe::ui::core::Component child);
		::Dynamic horizontalAlign_dyn();

		::String verticalAlign( ::haxe::ui::core::Component child);
		::Dynamic verticalAlign_dyn();

		Float paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float horizontalSpacing;
		Float get_horizontalSpacing();
		::Dynamic get_horizontalSpacing_dyn();

		Float verticalSpacing;
		Float get_verticalSpacing();
		::Dynamic get_verticalSpacing_dyn();

		Float innerWidth;
		Float innerHeight;
		Float get_innerWidth();
		::Dynamic get_innerWidth_dyn();

		Float get_innerHeight();
		::Dynamic get_innerHeight_dyn();

		virtual void resizeChildren();
		::Dynamic resizeChildren_dyn();

		virtual void repositionChildren();
		::Dynamic repositionChildren_dyn();

		 ::haxe::ui::util::Size usableSize;
		virtual  ::haxe::ui::util::Size get_usableSize();
		::Dynamic get_usableSize_dyn();

		Float usableWidth;
		virtual Float get_usableWidth();
		::Dynamic get_usableWidth_dyn();

		Float usableHeight;
		virtual Float get_usableHeight();
		::Dynamic get_usableHeight_dyn();

		Float calcAutoWidth();
		::Dynamic calcAutoWidth_dyn();

		Float calcAutoHeight();
		::Dynamic calcAutoHeight_dyn();

		virtual  ::haxe::ui::util::Size calcAutoSize(::Array< ::Dynamic> exclusions);
		::Dynamic calcAutoSize_dyn();

		bool excluded(::Array< ::Dynamic> exclusions, ::haxe::ui::core::Component child);
		::Dynamic excluded_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_Layout */ 
