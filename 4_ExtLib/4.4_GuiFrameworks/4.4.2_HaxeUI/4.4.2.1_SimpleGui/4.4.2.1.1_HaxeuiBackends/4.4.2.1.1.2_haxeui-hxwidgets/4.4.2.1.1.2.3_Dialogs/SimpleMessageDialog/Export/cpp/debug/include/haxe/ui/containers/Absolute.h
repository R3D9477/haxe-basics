// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_Absolute
#define INCLUDED_haxe_ui_containers_Absolute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,containers,Absolute)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES Absolute_obj : public  ::haxe::ui::containers::Box_obj
{
	public:
		typedef  ::haxe::ui::containers::Box_obj super;
		typedef Absolute_obj OBJ_;
		Absolute_obj();

	public:
		enum { _hx_ClassId = 0x796cc263 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.Absolute")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.Absolute"); }
		static hx::ObjectPtr< Absolute_obj > __new();
		static hx::ObjectPtr< Absolute_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Absolute_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Absolute","\x97","\x8a","\x47","\x9d"); }

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_Absolute */ 
