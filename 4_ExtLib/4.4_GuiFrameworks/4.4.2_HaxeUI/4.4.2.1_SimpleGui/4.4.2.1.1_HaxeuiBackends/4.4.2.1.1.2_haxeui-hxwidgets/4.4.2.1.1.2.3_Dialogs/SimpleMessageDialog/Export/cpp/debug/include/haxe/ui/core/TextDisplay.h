// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#define INCLUDED_haxe_ui_core_TextDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TextDisplay_obj : public  ::haxe::ui::backend::TextDisplayBase_obj
{
	public:
		typedef  ::haxe::ui::backend::TextDisplayBase_obj super;
		typedef TextDisplay_obj OBJ_;
		TextDisplay_obj();

	public:
		enum { _hx_ClassId = 0x28910ebc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.TextDisplay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.TextDisplay"); }
		static hx::ObjectPtr< TextDisplay_obj > __new();
		static hx::ObjectPtr< TextDisplay_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDisplay_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TextDisplay","\xf5","\xbc","\xfc","\x7a"); }

		 ::haxe::ds::StringMap _invalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		 ::haxe::ui::styles::Style get_textStyle();
		::Dynamic get_textStyle_dyn();

		 ::haxe::ui::styles::Style set_textStyle( ::haxe::ui::styles::Style value);
		::Dynamic set_textStyle_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float value);
		::Dynamic set_left_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float value);
		::Dynamic set_top_dyn();

		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float set_height(Float value);
		::Dynamic set_height_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float textWidth;
		Float get_textWidth();
		::Dynamic get_textWidth_dyn();

		Float textHeight;
		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

		bool get_multiline();
		::Dynamic get_multiline_dyn();

		bool set_multiline(bool value);
		::Dynamic set_multiline_dyn();

		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		bool isInvalid(::String flag);
		::Dynamic isInvalid_dyn();

		void invalidate(::String flag);
		::Dynamic invalidate_dyn();

		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		int set_depth(int value);
		::Dynamic set_depth_dyn();

		void updateDisplay();
		::Dynamic updateDisplay_dyn();

		void validate();
		::Dynamic validate_dyn();

		void validateInternal();
		::Dynamic validateInternal_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_TextDisplay */ 
