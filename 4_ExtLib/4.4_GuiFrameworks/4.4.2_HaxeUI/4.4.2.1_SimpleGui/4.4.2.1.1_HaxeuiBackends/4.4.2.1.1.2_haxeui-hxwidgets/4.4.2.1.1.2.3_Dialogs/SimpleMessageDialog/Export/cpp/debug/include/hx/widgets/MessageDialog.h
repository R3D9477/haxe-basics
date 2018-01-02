// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MessageDialog
#define INCLUDED_hx_widgets_MessageDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_3d3e59ab7191c16f
#define INCLUDED_3d3e59ab7191c16f
#include "wx/msgdlg.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,MessageDialog)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MessageDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef MessageDialog_obj OBJ_;
		MessageDialog_obj();

	public:
		enum { _hx_ClassId = 0x0f123c58 };

		void __construct( ::hx::widgets::Window parent,::String message,::String caption,hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MessageDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MessageDialog"); }
		static hx::ObjectPtr< MessageDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String caption,hx::Null< int >  __o_style);
		static hx::ObjectPtr< MessageDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MessageDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MessageDialog","\xcf","\x0d","\x4e","\x6f"); }

		::cpp::Pointer<  wxMessageDialog > messageDialogRef;
		::cpp::Pointer<  wxMessageDialog > get_messageDialogRef();
		::Dynamic get_messageDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MessageDialog */ 
