// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ComboBox
#define INCLUDED_hx_widgets_ComboBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_58abf8f4b320bdc6
#define INCLUDED_58abf8f4b320bdc6
#include "wx/combobox.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ComboBox)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ItemContainer)
HX_DECLARE_CLASS2(hx,widgets,ItemContainerImmutable)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ComboBox_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef ComboBox_obj OBJ_;
		ComboBox_obj();

	public:
		enum { _hx_ClassId = 0x6f70f25c };

		void __construct( ::hx::widgets::Window parent,::String value,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ComboBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ComboBox"); }
		static hx::ObjectPtr< ComboBox_obj > __new( ::hx::widgets::Window parent,::String value,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ComboBox_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String value,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComboBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ComboBox","\x7d","\xae","\xbe","\x4b"); }

		int append(::String string);
		::Dynamic append_dyn();

		void setString(int n,::String string);
		::Dynamic setString_dyn();

		::String getString(int n);
		::Dynamic getString_dyn();

		::cpp::Pointer<  wxComboBox > comboBoxRef;
		::cpp::Pointer<  wxComboBox > get_comboBoxRef();
		::Dynamic get_comboBoxRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ComboBox */ 
