// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_TextEntryDialog
#define INCLUDED_hx_widgets_TextEntryDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_2e64b5545582b528
#define INCLUDED_2e64b5545582b528
#include "wx/textdlg.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TextEntryDialog)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TextEntryDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef TextEntryDialog_obj OBJ_;
		TextEntryDialog_obj();

	public:
		enum { _hx_ClassId = 0x11dccf72 };

		void __construct( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TextEntryDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.TextEntryDialog"); }
		static hx::ObjectPtr< TextEntryDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		static hx::ObjectPtr< TextEntryDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEntryDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextEntryDialog","\x0d","\x3b","\x24","\x25"); }

		::cpp::Pointer<  wxTextEntryDialog > textEntryDialogRef;
		::cpp::Pointer<  wxTextEntryDialog > get_textEntryDialogRef();
		::Dynamic get_textEntryDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TextEntryDialog */ 
