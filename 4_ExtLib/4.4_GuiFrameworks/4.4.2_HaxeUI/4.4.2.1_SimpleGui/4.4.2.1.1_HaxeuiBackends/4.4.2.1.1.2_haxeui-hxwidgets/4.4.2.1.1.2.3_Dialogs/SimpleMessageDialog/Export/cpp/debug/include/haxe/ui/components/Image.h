// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_Image
#define INCLUDED_haxe_ui_components_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,Image)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,Size)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x0981e187 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Image"); }
		static hx::ObjectPtr< Image_obj > __new();
		static hx::ObjectPtr< Image_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		 ::haxe::ui::util::Size _originalSize;
		void createDefaults();

		 ::haxe::ui::util::VariantType get_value();

		 ::haxe::ui::util::VariantType set_value( ::haxe::ui::util::VariantType value);

		::String _resource;
		::String get_resource();
		::Dynamic get_resource_dyn();

		::String set_resource(::String value);
		::Dynamic set_resource_dyn();

		::String _scaleMode;
		::String get_scaleMode();
		::Dynamic get_scaleMode_dyn();

		::String set_scaleMode(::String value);
		::Dynamic set_scaleMode_dyn();

		::String _imageHorizontalAlign;
		::String get_imageHorizontalAlign();
		::Dynamic get_imageHorizontalAlign_dyn();

		::String set_imageHorizontalAlign(::String value);
		::Dynamic set_imageHorizontalAlign_dyn();

		::String _imageVerticalAlign;
		::String get_imageVerticalAlign();
		::Dynamic get_imageVerticalAlign_dyn();

		::String set_imageVerticalAlign(::String value);
		::Dynamic set_imageVerticalAlign_dyn();

		void validateData();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

		 ::haxe::ui::util::VariantType getProperty(::String name);

		 ::haxe::ui::util::VariantType setProperty(::String name, ::haxe::ui::util::VariantType v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Image */ 
