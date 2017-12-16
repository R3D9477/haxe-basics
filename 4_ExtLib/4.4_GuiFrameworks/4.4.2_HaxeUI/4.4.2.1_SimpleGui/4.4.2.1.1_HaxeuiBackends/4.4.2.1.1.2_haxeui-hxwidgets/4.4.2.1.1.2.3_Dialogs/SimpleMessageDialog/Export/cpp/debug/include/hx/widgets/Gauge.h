// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Gauge
#define INCLUDED_hx_widgets_Gauge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_1363196d39aeb248
#define INCLUDED_1363196d39aeb248
#include "wx/gauge.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Gauge)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Gauge_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef Gauge_obj OBJ_;
		Gauge_obj();

	public:
		enum { _hx_ClassId = 0x42802e9a };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Gauge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Gauge"); }
		static hx::ObjectPtr< Gauge_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Gauge_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_range,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gauge_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Gauge","\xd9","\x03","\xea","\x21"); }

		int get_value();
		::Dynamic get_value_dyn();

		int set_value(int value);
		::Dynamic set_value_dyn();

		void pulse();
		::Dynamic pulse_dyn();

		::cpp::Pointer<  wxGauge > gaugeRef;
		::cpp::Pointer<  wxGauge > get_gaugeRef();
		::Dynamic get_gaugeRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Gauge */ 
