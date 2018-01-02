// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GCDC
#define INCLUDED_hx_widgets_GCDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,GCDC)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,WindowDC)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GCDC_obj : public  ::hx::widgets::DC_obj
{
	public:
		typedef  ::hx::widgets::DC_obj super;
		typedef GCDC_obj OBJ_;
		GCDC_obj();

	public:
		enum { _hx_ClassId = 0x1e0e60fa };

		void __construct( ::hx::widgets::WindowDC windowDC);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GCDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GCDC"); }
		static hx::ObjectPtr< GCDC_obj > __new( ::hx::widgets::WindowDC windowDC);
		static hx::ObjectPtr< GCDC_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::WindowDC windowDC);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GCDC_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GCDC","\x9b","\x38","\x21","\x2f"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GCDC */ 
