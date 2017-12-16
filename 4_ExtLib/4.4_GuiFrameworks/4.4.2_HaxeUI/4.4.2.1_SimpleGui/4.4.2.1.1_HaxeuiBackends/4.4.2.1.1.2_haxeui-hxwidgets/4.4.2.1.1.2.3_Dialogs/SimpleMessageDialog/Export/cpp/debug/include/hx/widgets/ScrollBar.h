// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ScrollBar
#define INCLUDED_hx_widgets_ScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_40d633d332947b28
#define INCLUDED_40d633d332947b28
#include "wx/scrolbar.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,ScrollBar)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ScrollBar_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef ScrollBar_obj OBJ_;
		ScrollBar_obj();

	public:
		enum { _hx_ClassId = 0x0beec24b };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ScrollBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ScrollBar"); }
		static hx::ObjectPtr< ScrollBar_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ScrollBar_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollBar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScrollBar","\xa6","\x37","\xcf","\xdf"); }

		void setScrollbar(int position,int thumbSize,int range,int pageSize);
		::Dynamic setScrollbar_dyn();

		int get_pageSize();
		::Dynamic get_pageSize_dyn();

		int get_range();
		::Dynamic get_range_dyn();

		int get_thumbPosition();
		::Dynamic get_thumbPosition_dyn();

		int set_thumbPosition(int value);
		::Dynamic set_thumbPosition_dyn();

		int thumbSize;
		int get_thumbSize();
		::Dynamic get_thumbSize_dyn();

		::cpp::Pointer<  wxScrollBar > scrollBarRef;
		::cpp::Pointer<  wxScrollBar > get_scrollBarRef();
		::Dynamic get_scrollBarRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ScrollBar */ 
