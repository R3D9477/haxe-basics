// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ColourDialog
#define INCLUDED_hx_widgets_ColourDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_e764e3cfec6851e0
#define INCLUDED_e764e3cfec6851e0
#include "wx/colordlg.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ColourData)
HX_DECLARE_CLASS2(hx,widgets,ColourDialog)
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ColourDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef ColourDialog_obj OBJ_;
		ColourDialog_obj();

	public:
		enum { _hx_ClassId = 0x5df0edb3 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ColourDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ColourDialog"); }
		static hx::ObjectPtr< ColourDialog_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		static hx::ObjectPtr< ColourDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColourDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColourDialog","\x54","\xce","\x05","\x3a"); }

		 ::hx::widgets::ColourData colourData;
		 ::hx::widgets::ColourData get_colourData();
		::Dynamic get_colourData_dyn();

		int selectedColour;
		int get_selectedColour();
		::Dynamic get_selectedColour_dyn();

		::cpp::Pointer<  wxColourDialog > colourDialogRef;
		::cpp::Pointer<  wxColourDialog > get_colourDialogRef();
		::Dynamic get_colourDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ColourDialog */ 
