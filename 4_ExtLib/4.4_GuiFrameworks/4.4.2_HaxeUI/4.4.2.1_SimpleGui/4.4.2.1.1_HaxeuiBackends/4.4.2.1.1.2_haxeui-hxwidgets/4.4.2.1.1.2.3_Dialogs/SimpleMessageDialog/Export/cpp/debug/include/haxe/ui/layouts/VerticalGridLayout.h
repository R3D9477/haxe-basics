// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#define INCLUDED_haxe_ui_layouts_VerticalGridLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VerticalGridLayout)
HX_DECLARE_CLASS3(haxe,ui,util,Size)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES VerticalGridLayout_obj : public  ::haxe::ui::layouts::Layout_obj
{
	public:
		typedef  ::haxe::ui::layouts::Layout_obj super;
		typedef VerticalGridLayout_obj OBJ_;
		VerticalGridLayout_obj();

	public:
		enum { _hx_ClassId = 0x43881bf1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.VerticalGridLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.VerticalGridLayout"); }
		static hx::ObjectPtr< VerticalGridLayout_obj > __new();
		static hx::ObjectPtr< VerticalGridLayout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VerticalGridLayout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VerticalGridLayout","\x46","\xa6","\xa8","\xac"); }

		int _columns;
		int get_columns();
		::Dynamic get_columns_dyn();

		int set_columns(int value);
		::Dynamic set_columns_dyn();

		 ::haxe::ui::util::Size get_usableSize();

		void resizeChildren();

		void repositionChildren();

		::Array< Float > calcColumnWidths( ::haxe::ui::util::Size usableSize,bool includePercentage);
		::Dynamic calcColumnWidths_dyn();

		::Array< Float > calcRowHeights( ::haxe::ui::util::Size usableSize,bool includePercentage);
		::Dynamic calcRowHeights_dyn();

		::Array< bool > calcExplicitWidths();
		::Dynamic calcExplicitWidths_dyn();

		::Array< bool > calcExplicitHeights();
		::Dynamic calcExplicitHeights_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_VerticalGridLayout */ 
