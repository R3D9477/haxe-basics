// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Slider
#define INCLUDED_hx_widgets_Slider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_34cc2c107d04ae14
#define INCLUDED_34cc2c107d04ae14
#include "wx/slider.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Slider)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Slider_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();

	public:
		enum { _hx_ClassId = 0x07687860 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_value,hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Slider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Slider"); }
		static hx::ObjectPtr< Slider_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_value,hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Slider_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_value,hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Slider","\x41","\x3a","\x99","\xa4"); }

		int get_value();
		::Dynamic get_value_dyn();

		int set_value(int value);
		::Dynamic set_value_dyn();

		int get_min();
		::Dynamic get_min_dyn();

		int set_min(int value);
		::Dynamic set_min_dyn();

		int get_max();
		::Dynamic get_max_dyn();

		int set_max(int value);
		::Dynamic set_max_dyn();

		void setSelection(int startPos,int endPos);
		::Dynamic setSelection_dyn();

		int get_selectionStart();
		::Dynamic get_selectionStart_dyn();

		int set_selectionStart(int value);
		::Dynamic set_selectionStart_dyn();

		int get_selectionEnd();
		::Dynamic get_selectionEnd_dyn();

		int set_selectionEnd(int value);
		::Dynamic set_selectionEnd_dyn();

		::cpp::Pointer<  wxSlider > sliderRef;
		::cpp::Pointer<  wxSlider > get_sliderRef();
		::Dynamic get_sliderRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Slider */ 
