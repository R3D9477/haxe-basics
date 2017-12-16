// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_ContinuousHBox
#define INCLUDED_haxe_ui_containers_ContinuousHBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,ContinuousHBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ContinuousHBox_obj : public  ::haxe::ui::containers::Box_obj
{
	public:
		typedef  ::haxe::ui::containers::Box_obj super;
		typedef ContinuousHBox_obj OBJ_;
		ContinuousHBox_obj();

	public:
		enum { _hx_ClassId = 0x3588ca82 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ContinuousHBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ContinuousHBox"); }
		static hx::ObjectPtr< ContinuousHBox_obj > __new();
		static hx::ObjectPtr< ContinuousHBox_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ContinuousHBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ContinuousHBox","\x52","\x9f","\x9f","\xb3"); }

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ContinuousHBox */ 
