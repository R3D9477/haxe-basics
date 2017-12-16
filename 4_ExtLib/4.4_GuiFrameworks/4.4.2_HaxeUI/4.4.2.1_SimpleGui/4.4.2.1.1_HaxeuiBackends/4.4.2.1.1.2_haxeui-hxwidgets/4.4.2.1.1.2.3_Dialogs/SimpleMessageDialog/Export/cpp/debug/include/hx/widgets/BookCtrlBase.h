// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#define INCLUDED_hx_widgets_BookCtrlBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,BookCtrlBase)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS2(hx,widgets,WithImages)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BookCtrlBase_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef BookCtrlBase_obj OBJ_;
		BookCtrlBase_obj();

	public:
		enum { _hx_ClassId = 0x42b44b24 };

		void __construct( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BookCtrlBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.BookCtrlBase"); }
		static hx::ObjectPtr< BookCtrlBase_obj > __new( ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static hx::ObjectPtr< BookCtrlBase_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic style, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BookCtrlBase_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("BookCtrlBase","\xc5","\x2b","\xc9","\x1e"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BookCtrlBase */ 
