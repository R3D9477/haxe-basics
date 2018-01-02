// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_FontDialog
#define INCLUDED_hx_widgets_FontDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_5838facb6f7aa561
#define INCLUDED_5838facb6f7aa561
#include "wx/fontdlg.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,FontDialog)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES FontDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef FontDialog_obj OBJ_;
		FontDialog_obj();

	public:
		enum { _hx_ClassId = 0x1378f1ee };

		void __construct( ::hx::widgets::Window parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.FontDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.FontDialog"); }
		static hx::ObjectPtr< FontDialog_obj > __new( ::hx::widgets::Window parent);
		static hx::ObjectPtr< FontDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FontDialog","\x17","\xa0","\x37","\x5c"); }

		::cpp::Pointer<  wxFontDialog > fontDialogRef;
		::cpp::Pointer<  wxFontDialog > get_fontDialogRef();
		::Dynamic get_fontDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_FontDialog */ 
