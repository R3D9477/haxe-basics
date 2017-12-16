// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#define INCLUDED_haxe_ui_parsers_ui_ComponentInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentBindingInfo)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentInfo)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ComponentInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentInfo_obj OBJ_;
		ComponentInfo_obj();

	public:
		enum { _hx_ClassId = 0x0438721d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.ComponentInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.ComponentInfo"); }
		static hx::ObjectPtr< ComponentInfo_obj > __new();
		static hx::ObjectPtr< ComponentInfo_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComponentInfo","\xab","\x47","\x4c","\x2b"); }

		::String type;
		::String id;
		 ::Dynamic left;
		 ::Dynamic top;
		 ::Dynamic width;
		 ::Dynamic height;
		 ::Dynamic percentWidth;
		 ::Dynamic percentHeight;
		 ::Dynamic contentWidth;
		 ::Dynamic contentHeight;
		 ::Dynamic percentContentWidth;
		 ::Dynamic percentContentHeight;
		::String text;
		::String style;
		::String styleNames;
		 ::Dynamic composite;
		::String layoutName;
		 ::haxe::ds::StringMap properties;
		 ::haxe::ui::parsers::ui::ComponentInfo parent;
		::Array< ::Dynamic> children;
		::Array< ::Dynamic> bindings;
		::Array< ::String > scriptlets;
		::Array< ::String > styles;
		::String data;
		::String condition;
		::String get_styleString();
		::Dynamic get_styleString_dyn();

		::String get_dataString();
		::Dynamic get_dataString_dyn();

		 ::haxe::ui::parsers::ui::ComponentInfo findRootComponent();
		::Dynamic findRootComponent_dyn();

		void validate();
		::Dynamic validate_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_ComponentInfo */ 
