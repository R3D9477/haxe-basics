// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_ImageDefaultResourceBehaviour
#define INCLUDED_haxe_ui_components_ImageDefaultResourceBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,ImageDefaultResourceBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES ImageDefaultResourceBehaviour_obj : public  ::haxe::ui::core::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::core::Behaviour_obj super;
		typedef ImageDefaultResourceBehaviour_obj OBJ_;
		ImageDefaultResourceBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x3ba82619 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.ImageDefaultResourceBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.ImageDefaultResourceBehaviour"); }
		static hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< ImageDefaultResourceBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDefaultResourceBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageDefaultResourceBehaviour","\xe9","\x8d","\xbf","\x32"); }

		 ::Dynamic _value;
		void set( ::haxe::ui::util::VariantType value);

		 ::Dynamic getDynamic();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_ImageDefaultResourceBehaviour */ 
