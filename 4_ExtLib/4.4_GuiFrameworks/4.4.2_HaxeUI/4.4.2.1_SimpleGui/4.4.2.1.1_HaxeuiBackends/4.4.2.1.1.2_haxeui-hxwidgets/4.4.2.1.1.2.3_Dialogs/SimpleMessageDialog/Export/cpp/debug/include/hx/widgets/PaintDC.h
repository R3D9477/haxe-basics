// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_PaintDC
#define INCLUDED_hx_widgets_PaintDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_ClientDC
#include <hx/widgets/ClientDC.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,ClientDC)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PaintDC)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS2(hx,widgets,WindowDC)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PaintDC_obj : public  ::hx::widgets::ClientDC_obj
{
	public:
		typedef  ::hx::widgets::ClientDC_obj super;
		typedef PaintDC_obj OBJ_;
		PaintDC_obj();

	public:
		enum { _hx_ClassId = 0x65e2f046 };

		void __construct( ::hx::widgets::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PaintDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.PaintDC"); }
		static hx::ObjectPtr< PaintDC_obj > __new( ::hx::widgets::Window window);
		static hx::ObjectPtr< PaintDC_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PaintDC_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PaintDC","\x7d","\xbe","\x73","\x85"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PaintDC */ 
