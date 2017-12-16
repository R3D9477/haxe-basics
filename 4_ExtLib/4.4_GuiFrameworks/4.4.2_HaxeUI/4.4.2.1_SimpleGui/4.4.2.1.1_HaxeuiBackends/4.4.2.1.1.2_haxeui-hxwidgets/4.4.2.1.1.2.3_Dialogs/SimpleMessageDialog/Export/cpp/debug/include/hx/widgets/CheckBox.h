// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_CheckBox
#define INCLUDED_hx_widgets_CheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_a958b609e3b635d9
#define INCLUDED_a958b609e3b635d9
#include "wx/checkbox.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,CheckBox)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES CheckBox_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef CheckBox_obj OBJ_;
		CheckBox_obj();

	public:
		enum { _hx_ClassId = 0x58d6973e };

		void __construct( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.CheckBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.CheckBox"); }
		static hx::ObjectPtr< CheckBox_obj > __new( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< CheckBox_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CheckBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CheckBox","\x43","\x46","\x8f","\x86"); }

		bool get_value();
		::Dynamic get_value_dyn();

		bool set_value(bool value);
		::Dynamic set_value_dyn();

		::cpp::Pointer<  wxCheckBox > checkboxRef;
		::cpp::Pointer<  wxCheckBox > get_checkboxRef();
		::Dynamic get_checkboxRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_CheckBox */ 
