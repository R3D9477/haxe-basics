// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_TextAreaDefaultWrapBehaviour
#define INCLUDED_haxe_ui_components_TextAreaDefaultWrapBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,TextAreaDefaultWrapBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES TextAreaDefaultWrapBehaviour_obj : public  ::haxe::ui::core::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::core::Behaviour_obj super;
		typedef TextAreaDefaultWrapBehaviour_obj OBJ_;
		TextAreaDefaultWrapBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x5561ff7c };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.TextAreaDefaultWrapBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.TextAreaDefaultWrapBehaviour"); }
		static hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< TextAreaDefaultWrapBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextAreaDefaultWrapBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextAreaDefaultWrapBehaviour","\xac","\x81","\x7c","\x75"); }

		void set( ::haxe::ui::util::VariantType value);

		 ::haxe::ui::util::VariantType get();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_TextAreaDefaultWrapBehaviour */ 
