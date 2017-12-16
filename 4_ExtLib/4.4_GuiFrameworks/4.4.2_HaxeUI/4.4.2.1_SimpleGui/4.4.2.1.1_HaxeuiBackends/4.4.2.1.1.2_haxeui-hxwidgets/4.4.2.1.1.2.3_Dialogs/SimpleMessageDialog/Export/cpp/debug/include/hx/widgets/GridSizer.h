// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GridSizer
#define INCLUDED_hx_widgets_GridSizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,GridSizer)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GridSizer_obj : public  ::hx::widgets::Sizer_obj
{
	public:
		typedef  ::hx::widgets::Sizer_obj super;
		typedef GridSizer_obj OBJ_;
		GridSizer_obj();

	public:
		enum { _hx_ClassId = 0x2bb8530c };

		void __construct(int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GridSizer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GridSizer"); }
		static hx::ObjectPtr< GridSizer_obj > __new(int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap);
		static hx::ObjectPtr< GridSizer_obj > __alloc(hx::Ctx *_hx_ctx,int cols,hx::Null< int >  __o_vgap,hx::Null< int >  __o_hgap);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridSizer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GridSizer","\xcb","\x33","\x6f","\x13"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GridSizer */ 
