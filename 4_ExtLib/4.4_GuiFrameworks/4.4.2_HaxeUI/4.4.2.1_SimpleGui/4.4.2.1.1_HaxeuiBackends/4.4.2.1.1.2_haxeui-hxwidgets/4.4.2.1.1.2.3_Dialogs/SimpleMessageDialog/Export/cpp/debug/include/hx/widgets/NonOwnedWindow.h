// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#define INCLUDED_hx_widgets_NonOwnedWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES NonOwnedWindow_obj : public  ::hx::widgets::Window_obj
{
	public:
		typedef  ::hx::widgets::Window_obj super;
		typedef NonOwnedWindow_obj OBJ_;
		NonOwnedWindow_obj();

	public:
		enum { _hx_ClassId = 0x3d664327 };

		void __construct( ::hx::widgets::Window parent, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.NonOwnedWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.NonOwnedWindow"); }
		static hx::ObjectPtr< NonOwnedWindow_obj > __new( ::hx::widgets::Window parent, ::Dynamic id);
		static hx::ObjectPtr< NonOwnedWindow_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NonOwnedWindow_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NonOwnedWindow","\x08","\x4e","\xed","\xf0"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_NonOwnedWindow */ 
