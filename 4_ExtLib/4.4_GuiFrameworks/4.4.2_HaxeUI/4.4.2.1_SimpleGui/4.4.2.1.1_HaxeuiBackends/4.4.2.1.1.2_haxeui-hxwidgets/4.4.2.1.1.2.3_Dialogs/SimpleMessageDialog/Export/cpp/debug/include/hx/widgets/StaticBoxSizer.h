// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StaticBoxSizer
#define INCLUDED_hx_widgets_StaticBoxSizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_BoxSizer
#include <hx/widgets/BoxSizer.h>
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BoxSizer)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,StaticBoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticBoxSizer_obj : public  ::hx::widgets::BoxSizer_obj
{
	public:
		typedef  ::hx::widgets::BoxSizer_obj super;
		typedef StaticBoxSizer_obj OBJ_;
		StaticBoxSizer_obj();

	public:
		enum { _hx_ClassId = 0x077b3caf };

		void __construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticBoxSizer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticBoxSizer"); }
		static hx::ObjectPtr< StaticBoxSizer_obj > __new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title);
		static hx::ObjectPtr< StaticBoxSizer_obj > __alloc(hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient, ::hx::widgets::Window window,::String title);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticBoxSizer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticBoxSizer","\x74","\x7d","\x4c","\x4b"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticBoxSizer */ 
