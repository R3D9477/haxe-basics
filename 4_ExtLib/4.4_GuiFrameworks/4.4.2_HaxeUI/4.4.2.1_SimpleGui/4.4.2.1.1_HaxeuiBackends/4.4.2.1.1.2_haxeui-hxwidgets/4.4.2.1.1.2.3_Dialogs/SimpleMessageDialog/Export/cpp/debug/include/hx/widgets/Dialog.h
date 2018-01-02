// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Dialog
#define INCLUDED_hx_widgets_Dialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_61b65e184b2fc75a
#define INCLUDED_61b65e184b2fc75a
#include "wx/dialog.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)


#include <wx/dialog.h>
#undef RegisterClass

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Dialog_obj : public  ::hx::widgets::TopLevelWindow_obj
{
	public:
		typedef  ::hx::widgets::TopLevelWindow_obj super;
		typedef Dialog_obj OBJ_;
		Dialog_obj();

	public:
		enum { _hx_ClassId = 0x4896b707 };

		void __construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Dialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Dialog"); }
		static hx::ObjectPtr< Dialog_obj > __new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Dialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Dialog","\xe8","\x78","\xc7","\xe5"); }

		int showModal();
		::Dynamic showModal_dyn();

		void endModal(int retCode);
		::Dynamic endModal_dyn();

		bool isModal;
		bool get_isModal();
		::Dynamic get_isModal_dyn();

		void addMainButtonId(int id);
		::Dynamic addMainButtonId_dyn();

		::cpp::Pointer<  wxDialog > dialogRef;
		::cpp::Pointer<  wxDialog > get_dialogRef();
		::Dynamic get_dialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Dialog */ 
