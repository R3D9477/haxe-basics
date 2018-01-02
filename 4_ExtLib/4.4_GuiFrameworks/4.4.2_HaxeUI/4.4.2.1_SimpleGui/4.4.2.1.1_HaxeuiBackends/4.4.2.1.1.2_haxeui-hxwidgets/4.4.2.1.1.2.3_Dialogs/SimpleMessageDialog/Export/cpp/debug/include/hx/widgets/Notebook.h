// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Notebook
#define INCLUDED_hx_widgets_Notebook

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
#endif
#ifndef INCLUDED_3cdccfd42c43dcc1
#define INCLUDED_3cdccfd42c43dcc1
#include "wx/notebook.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,BookCtrlBase)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,Notebook)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Size)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS2(hx,widgets,WithImages)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Notebook_obj : public  ::hx::widgets::BookCtrlBase_obj
{
	public:
		typedef  ::hx::widgets::BookCtrlBase_obj super;
		typedef Notebook_obj OBJ_;
		Notebook_obj();

	public:
		enum { _hx_ClassId = 0x62d97d1a };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Notebook")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Notebook"); }
		static hx::ObjectPtr< Notebook_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Notebook_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Notebook_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Notebook","\x3b","\x39","\x27","\x3f"); }

		bool addPage( ::hx::widgets::Window page,::String text,hx::Null< bool >  select,hx::Null< int >  imageId);
		::Dynamic addPage_dyn();

		bool deletePage(int page);
		::Dynamic deletePage_dyn();

		bool deleteAllPages();
		::Dynamic deleteAllPages_dyn();

		int pageCount;
		int get_pageCount();
		::Dynamic get_pageCount_dyn();

		 ::hx::widgets::ImageList get_imageList();
		::Dynamic get_imageList_dyn();

		 ::hx::widgets::ImageList set_imageList( ::hx::widgets::ImageList value);
		::Dynamic set_imageList_dyn();

		int get_selection();
		::Dynamic get_selection_dyn();

		int set_selection(int value);
		::Dynamic set_selection_dyn();

		 ::hx::widgets::Size calcSizeFromPage();

		 ::hx::widgets::Size padding;
		 ::hx::widgets::Size set_padding( ::hx::widgets::Size value);

		::String getPageText(int page);
		::Dynamic getPageText_dyn();

		::String selectionText;
		::String get_selectionText();
		::Dynamic get_selectionText_dyn();

		bool allowIcons;
		::cpp::Pointer<  wxNotebook > notebookRef;
		::cpp::Pointer<  wxNotebook > get_notebookRef();
		::Dynamic get_notebookRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Notebook */ 
