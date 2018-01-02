// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_FileDialog
#define INCLUDED_hx_widgets_FileDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_cb2edad35d09ff98
#define INCLUDED_cb2edad35d09ff98
#include "wx/filedlg.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,FileDialog)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES FileDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef FileDialog_obj OBJ_;
		FileDialog_obj();

	public:
		enum { _hx_ClassId = 0x3fa9a25b };

		void __construct( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.FileDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.FileDialog"); }
		static hx::ObjectPtr< FileDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style);
		static hx::ObjectPtr< FileDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FileDialog","\x84","\x50","\x68","\x88"); }

		::String currentlySelectedFilename;
		::String get_currentlySelectedFilename();
		::Dynamic get_currentlySelectedFilename_dyn();

		::String get_directory();
		::Dynamic get_directory_dyn();

		::String set_directory(::String value);
		::Dynamic set_directory_dyn();

		::String get_filename();
		::Dynamic get_filename_dyn();

		::String set_filename(::String value);
		::Dynamic set_filename_dyn();

		int get_filterIndex();
		::Dynamic get_filterIndex_dyn();

		int set_filterIndex(int value);
		::Dynamic set_filterIndex_dyn();

		::String get_message();
		::Dynamic get_message_dyn();

		::String set_message(::String value);
		::Dynamic set_message_dyn();

		::String get_path();
		::Dynamic get_path_dyn();

		::String set_path(::String value);
		::Dynamic set_path_dyn();

		::String get_wildcard();
		::Dynamic get_wildcard_dyn();

		::String set_wildcard(::String value);
		::Dynamic set_wildcard_dyn();

		::cpp::Pointer<  wxFileDialog > fileDialogRef;
		::cpp::Pointer<  wxFileDialog > get_fileDialogRef();
		::Dynamic get_fileDialogRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_FileDialog */ 
