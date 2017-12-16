// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_RadioButton
#define INCLUDED_hx_widgets_RadioButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_e183691a5ed876d4
#define INCLUDED_e183691a5ed876d4
#include "wx/radiobut.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,RadioButton)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES RadioButton_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef RadioButton_obj OBJ_;
		RadioButton_obj();

	public:
		enum { _hx_ClassId = 0x30ca2b12 };

		void __construct( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.RadioButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.RadioButton"); }
		static hx::ObjectPtr< RadioButton_obj > __new( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< RadioButton_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RadioButton_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RadioButton","\x2d","\xed","\xb6","\x15"); }

		bool get_value();
		::Dynamic get_value_dyn();

		bool set_value(bool value);
		::Dynamic set_value_dyn();

		::cpp::Pointer<  wxRadioButton > radioButtonRef;
		::cpp::Pointer<  wxRadioButton > get_radioButtonRef();
		::Dynamic get_radioButtonRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_RadioButton */ 
