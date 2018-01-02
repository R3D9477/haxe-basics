// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_BufferedPaintDC
#define INCLUDED_hx_widgets_BufferedPaintDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_BufferedDC
#include <hx/widgets/BufferedDC.h>
#endif
#ifndef INCLUDED_ba5a1120fe17f00a
#define INCLUDED_ba5a1120fe17f00a
#include "wx/dcbuffer.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BufferedDC)
HX_DECLARE_CLASS2(hx,widgets,BufferedPaintDC)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,MemoryDC)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BufferedPaintDC_obj : public  ::hx::widgets::BufferedDC_obj
{
	public:
		typedef  ::hx::widgets::BufferedDC_obj super;
		typedef BufferedPaintDC_obj OBJ_;
		BufferedPaintDC_obj();

	public:
		enum { _hx_ClassId = 0x2a720da7 };

		void __construct( ::hx::widgets::Window window);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BufferedPaintDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.BufferedPaintDC"); }
		static hx::ObjectPtr< BufferedPaintDC_obj > __new( ::hx::widgets::Window window);
		static hx::ObjectPtr< BufferedPaintDC_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window window);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BufferedPaintDC_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BufferedPaintDC","\xde","\x6a","\x5e","\xee"); }

		::cpp::Pointer<  wxBufferedPaintDC > bufferedDCRef;
		::cpp::Pointer<  wxBufferedPaintDC > get_bufferedDCRef();
		::Dynamic get_bufferedDCRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BufferedPaintDC */ 
