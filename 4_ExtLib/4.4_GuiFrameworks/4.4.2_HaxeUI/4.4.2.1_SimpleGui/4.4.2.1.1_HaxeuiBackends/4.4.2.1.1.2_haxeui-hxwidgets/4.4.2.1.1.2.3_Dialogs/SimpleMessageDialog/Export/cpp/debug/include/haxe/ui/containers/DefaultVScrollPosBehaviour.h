// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_DefaultVScrollPosBehaviour
#define INCLUDED_haxe_ui_containers_DefaultVScrollPosBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,containers,DefaultVScrollPosBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES DefaultVScrollPosBehaviour_obj : public  ::haxe::ui::core::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::core::Behaviour_obj super;
		typedef DefaultVScrollPosBehaviour_obj OBJ_;
		DefaultVScrollPosBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x00cb530f };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.DefaultVScrollPosBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.DefaultVScrollPosBehaviour"); }
		static hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< DefaultVScrollPosBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultVScrollPosBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DefaultVScrollPosBehaviour","\xab","\x1f","\x82","\xea"); }

		 ::haxe::ui::util::VariantType get();

		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_DefaultVScrollPosBehaviour */ 
