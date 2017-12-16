// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#define INCLUDED_haxe_ui_layouts_DelegateLayoutSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES DelegateLayoutSize_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DelegateLayoutSize_obj OBJ_;
		DelegateLayoutSize_obj();

	public:
		enum { _hx_ClassId = 0x350255fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.DelegateLayoutSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.DelegateLayoutSize"); }
		static hx::ObjectPtr< DelegateLayoutSize_obj > __new();
		static hx::ObjectPtr< DelegateLayoutSize_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DelegateLayoutSize_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DelegateLayoutSize","\x50","\xe0","\x22","\x9e"); }

		 ::haxe::ui::core::Component component;
		 ::haxe::ds::StringMap config;
		Float width;
		virtual Float get_width();
		::Dynamic get_width_dyn();

		Float height;
		virtual Float get_height();
		::Dynamic get_height_dyn();

		Float usableWidthModifier;
		virtual Float get_usableWidthModifier();
		::Dynamic get_usableWidthModifier_dyn();

		Float usableHeightModifier;
		virtual Float get_usableHeightModifier();
		::Dynamic get_usableHeightModifier_dyn();

		::String getString(::String name,::String defaultValue);
		::Dynamic getString_dyn();

		int getInt(::String name,hx::Null< int >  defaultValue);
		::Dynamic getInt_dyn();

		bool getBool(::String name,hx::Null< bool >  defaultValue);
		::Dynamic getBool_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_DelegateLayoutSize */ 
