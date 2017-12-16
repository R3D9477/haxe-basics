// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#define INCLUDED_haxe_ui_themes_ThemeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,themes,Theme)
HX_DECLARE_CLASS3(haxe,ui,themes,ThemeManager)

namespace haxe{
namespace ui{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES ThemeManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ThemeManager_obj OBJ_;
		ThemeManager_obj();

	public:
		enum { _hx_ClassId = 0x7debac88 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.themes.ThemeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.themes.ThemeManager"); }
		static hx::ObjectPtr< ThemeManager_obj > __new();
		static hx::ObjectPtr< ThemeManager_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThemeManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ThemeManager","\x84","\x4b","\x50","\x0d"); }

		static  ::haxe::ui::themes::ThemeManager _instance;
		static  ::haxe::ui::themes::ThemeManager instance;
		static  ::haxe::ui::themes::ThemeManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _themes;
		 ::haxe::ui::themes::Theme getTheme(::String themeName);
		::Dynamic getTheme_dyn();

		void addStyleResource(::String themeName,::String resourceId);
		::Dynamic addStyleResource_dyn();

		void applyTheme(::String themeName);
		::Dynamic applyTheme_dyn();

		void applyThemeStyles(::String themeName);
		::Dynamic applyThemeStyles_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace themes

#endif /* INCLUDED_haxe_ui_themes_ThemeManager */ 
