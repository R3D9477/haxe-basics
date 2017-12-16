// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Parser
#define INCLUDED_haxe_ui_styles_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,CssClass)
HX_DECLARE_CLASS3(haxe,ui,styles,FillStyle)
HX_DECLARE_CLASS3(haxe,ui,styles,Parser)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,styles,Token)
HX_DECLARE_CLASS3(haxe,ui,styles,Unit)
HX_DECLARE_CLASS3(haxe,ui,styles,Value)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x2448cadb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.Parser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.Parser"); }
		static hx::ObjectPtr< Parser_obj > __new();
		static hx::ObjectPtr< Parser_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Parser","\xff","\x10","\x1d","\x22"); }

		::String css;
		 ::haxe::ui::styles::Style s;
		 ::haxe::ui::styles::Style simp;
		int pos;
		bool spacesTokens;
		::Array< ::Dynamic> tokens;
		void notImplemented();
		::Dynamic notImplemented_dyn();

		bool applyStyle(::String r, ::haxe::ui::styles::Value v, ::haxe::ui::styles::Style s);
		::Dynamic applyStyle_dyn();

		bool applyComposite(::Array< ::String > names, ::haxe::ui::styles::Value v, ::haxe::ui::styles::Style s);
		::Dynamic applyComposite_dyn();

		::cpp::VirtualArray getGroup( ::haxe::ui::styles::Value v, ::Dynamic f);
		::Dynamic getGroup_dyn();

		::cpp::VirtualArray getList( ::haxe::ui::styles::Value v, ::Dynamic f);
		::Dynamic getList_dyn();

		 ::Dynamic getInt( ::haxe::ui::styles::Value v);
		::Dynamic getInt_dyn();

		 ::Dynamic getBool( ::haxe::ui::styles::Value v);
		::Dynamic getBool_dyn();

		::String getString( ::haxe::ui::styles::Value v);
		::Dynamic getString_dyn();

		::cpp::VirtualArray getCall( ::haxe::ui::styles::Value v);
		::Dynamic getCall_dyn();

		 ::Dynamic getVal( ::haxe::ui::styles::Value v);
		::Dynamic getVal_dyn();

		 ::haxe::ui::styles::Unit getUnit( ::haxe::ui::styles::Value v);
		::Dynamic getUnit_dyn();

		 ::haxe::ui::util::VariantType getVariant( ::haxe::ui::styles::Value v,hx::Null< bool >  allowRem,hx::Null< bool >  allowViewport);
		::Dynamic getVariant_dyn();

		 ::Dynamic mapIdent( ::haxe::ui::styles::Value v,::cpp::VirtualArray vals);
		::Dynamic mapIdent_dyn();

		::String getIdent( ::haxe::ui::styles::Value v);
		::Dynamic getIdent_dyn();

		 ::Dynamic getColAlpha( ::haxe::ui::styles::Value v);
		::Dynamic getColAlpha_dyn();

		 ::haxe::ui::styles::FillStyle getFill( ::haxe::ui::styles::Value v);
		::Dynamic getFill_dyn();

		 ::Dynamic getCol( ::haxe::ui::styles::Value v);
		::Dynamic getCol_dyn();

		::String getFontName( ::haxe::ui::styles::Value v);
		::Dynamic getFontName_dyn();

		 ::Dynamic unexpected( ::haxe::ui::styles::Token t);
		::Dynamic unexpected_dyn();

		void expect( ::haxe::ui::styles::Token t);
		::Dynamic expect_dyn();

		void push( ::haxe::ui::styles::Token t);
		::Dynamic push_dyn();

		bool isToken( ::haxe::ui::styles::Token t);
		::Dynamic isToken_dyn();

		void parse(::String css, ::haxe::ui::styles::Style s);
		::Dynamic parse_dyn();

		::String valueStr( ::haxe::ui::styles::Value v);
		::Dynamic valueStr_dyn();

		void parseStyle( ::haxe::ui::styles::Token eof);
		::Dynamic parseStyle_dyn();

		::Array< ::Dynamic> parseRules(::String css);
		::Dynamic parseRules_dyn();

		::Array< ::Dynamic> parseClasses(::String css);
		::Dynamic parseClasses_dyn();

		::Array< ::Dynamic> readClasses();
		::Dynamic readClasses_dyn();

		void updateClass( ::haxe::ui::styles::CssClass c);
		::Dynamic updateClass_dyn();

		 ::haxe::ui::styles::CssClass readClass( ::haxe::ui::styles::CssClass parent);
		::Dynamic readClass_dyn();

		::String readIdent();
		::Dynamic readIdent_dyn();

		 ::haxe::ui::styles::Value readValue( ::Dynamic opt);
		::Dynamic readValue_dyn();

		::String readHex();
		::Dynamic readHex_dyn();

		 ::haxe::ui::styles::Value readValueUnit(Float f, ::Dynamic i);
		::Dynamic readValueUnit_dyn();

		 ::haxe::ui::styles::Value readValueNext( ::haxe::ui::styles::Value v);
		::Dynamic readValueNext_dyn();

		 ::haxe::ui::styles::Value loopNext( ::haxe::ui::styles::Value v, ::haxe::ui::styles::Value v2);
		::Dynamic loopNext_dyn();

		 ::haxe::ui::styles::Value loopComma( ::haxe::ui::styles::Value v, ::haxe::ui::styles::Value v2);
		::Dynamic loopComma_dyn();

		bool isSpace(int c);
		::Dynamic isSpace_dyn();

		bool isIdentChar(int c);
		::Dynamic isIdentChar_dyn();

		bool isNum(int c);
		::Dynamic isNum_dyn();

		int next();
		::Dynamic next_dyn();

		::String readUrl();
		::Dynamic readUrl_dyn();

		 ::haxe::ui::styles::Token readToken();
		::Dynamic readToken_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Parser */ 
