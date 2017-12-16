// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_TextFieldDefaultIconBehaviour
#define INCLUDED_haxe_ui_components_TextFieldDefaultIconBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,TextFieldDefaultIconBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TextFieldDefaultIconBehaviour_obj : public  ::haxe::ui::core::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::core::Behaviour_obj super;
		typedef TextFieldDefaultIconBehaviour_obj OBJ_;
		TextFieldDefaultIconBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x625f919c };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TextFieldDefaultIconBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TextFieldDefaultIconBehaviour"); }
		static hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< TextFieldDefaultIconBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldDefaultIconBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextFieldDefaultIconBehaviour","\x50","\xbb","\x68","\x81"); }

		void set( ::haxe::ui::util::VariantType value);

		 ::haxe::ui::util::VariantType get();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TextFieldDefaultIconBehaviour */ 
