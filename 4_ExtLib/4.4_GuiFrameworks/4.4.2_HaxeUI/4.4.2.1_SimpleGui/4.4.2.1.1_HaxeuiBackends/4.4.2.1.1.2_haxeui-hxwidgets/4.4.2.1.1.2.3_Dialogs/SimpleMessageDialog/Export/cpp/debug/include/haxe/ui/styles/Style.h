// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Style
#define INCLUDED_haxe_ui_styles_Style

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Style_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Style_obj OBJ_;
		Style_obj();

	public:
		enum { _hx_ClassId = 0x23ee4ab5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.Style")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.Style"); }
		static hx::ObjectPtr< Style_obj > __new();
		static hx::ObjectPtr< Style_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Style_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Style","\x11","\x15","\x4b","\x17"); }

		::String cursor;
		 ::Dynamic hidden;
		 ::Dynamic autoWidth;
		 ::Dynamic autoHeight;
		 ::haxe::ui::util::VariantType verticalSpacing;
		 ::haxe::ui::util::VariantType horizontalSpacing;
		 ::haxe::ui::util::VariantType offsetLeft;
		 ::haxe::ui::util::VariantType offsetTop;
		 ::haxe::ui::util::VariantType width;
		 ::haxe::ui::util::VariantType height;
		 ::Dynamic percentWidth;
		 ::Dynamic percentHeight;
		 ::haxe::ui::util::VariantType paddingTop;
		 ::haxe::ui::util::VariantType paddingLeft;
		 ::haxe::ui::util::VariantType paddingRight;
		 ::haxe::ui::util::VariantType paddingBottom;
		 ::haxe::ui::util::VariantType marginTop;
		 ::haxe::ui::util::VariantType marginLeft;
		 ::haxe::ui::util::VariantType marginRight;
		 ::haxe::ui::util::VariantType marginBottom;
		 ::Dynamic color;
		 ::Dynamic backgroundColor;
		 ::Dynamic backgroundColorEnd;
		::String backgroundGradientStyle;
		 ::Dynamic backgroundOpacity;
		::String backgroundImage;
		::String backgroundImageRepeat;
		 ::haxe::ui::util::VariantType backgroundImageClipTop;
		 ::haxe::ui::util::VariantType backgroundImageClipLeft;
		 ::haxe::ui::util::VariantType backgroundImageClipBottom;
		 ::haxe::ui::util::VariantType backgroundImageClipRight;
		 ::haxe::ui::util::VariantType backgroundImageSliceTop;
		 ::haxe::ui::util::VariantType backgroundImageSliceLeft;
		 ::haxe::ui::util::VariantType backgroundImageSliceBottom;
		 ::haxe::ui::util::VariantType backgroundImageSliceRight;
		 ::Dynamic borderColor;
		 ::Dynamic borderTopColor;
		 ::Dynamic borderLeftColor;
		 ::Dynamic borderBottomColor;
		 ::Dynamic borderRightColor;
		 ::haxe::ui::util::VariantType borderSize;
		 ::haxe::ui::util::VariantType borderTopSize;
		 ::haxe::ui::util::VariantType borderLeftSize;
		 ::haxe::ui::util::VariantType borderBottomSize;
		 ::haxe::ui::util::VariantType borderRightSize;
		 ::haxe::ui::util::VariantType borderRadius;
		 ::Dynamic borderOpacity;
		::cpp::VirtualArray filter;
		::String icon;
		::String iconPosition;
		::String horizontalAlign;
		::String verticalAlign;
		::String textAlign;
		 ::Dynamic opacity;
		 ::Dynamic clip;
		 ::Dynamic native;
		::String fontName;
		 ::haxe::ui::util::VariantType fontSize;
		 ::Dynamic fontBold;
		 ::Dynamic fontUnderline;
		 ::Dynamic fontItalic;
		void apply( ::haxe::ui::styles::Style s);
		::Dynamic apply_dyn();

		bool equalTo( ::haxe::ui::styles::Style s);
		::Dynamic equalTo_dyn();

		void assignNulls();
		::Dynamic assignNulls_dyn();

		 ::haxe::ui::util::VariantType padding;
		 ::haxe::ui::util::VariantType set_padding( ::haxe::ui::util::VariantType value);
		::Dynamic set_padding_dyn();

		void margin( ::haxe::ui::util::VariantType v);
		::Dynamic margin_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Style */ 
