// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_BoxSizer
#define INCLUDED_hx_widgets_BoxSizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BoxSizer)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BoxSizer_obj : public  ::hx::widgets::Sizer_obj
{
	public:
		typedef  ::hx::widgets::Sizer_obj super;
		typedef BoxSizer_obj OBJ_;
		BoxSizer_obj();

	public:
		enum { _hx_ClassId = 0x52860cbd };

		void __construct( cpp::Struct<wxOrientation, cpp::EnumHandler> orient);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BoxSizer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.BoxSizer"); }
		static hx::ObjectPtr< BoxSizer_obj > __new( cpp::Struct<wxOrientation, cpp::EnumHandler> orient);
		static hx::ObjectPtr< BoxSizer_obj > __alloc(hx::Ctx *_hx_ctx, cpp::Struct<wxOrientation, cpp::EnumHandler> orient);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoxSizer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BoxSizer","\xa6","\xae","\xa9","\xd1"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BoxSizer */ 
