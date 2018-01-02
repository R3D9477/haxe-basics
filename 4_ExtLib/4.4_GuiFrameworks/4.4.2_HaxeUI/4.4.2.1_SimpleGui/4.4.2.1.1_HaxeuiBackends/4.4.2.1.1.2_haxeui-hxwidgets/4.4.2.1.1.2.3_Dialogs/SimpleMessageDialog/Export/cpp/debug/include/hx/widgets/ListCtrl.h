// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ListCtrl
#define INCLUDED_hx_widgets_ListCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,ListCtrl)
HX_DECLARE_CLASS2(hx,widgets,ListItem)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ListCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef ListCtrl_obj OBJ_;
		ListCtrl_obj();

	public:
		enum { _hx_ClassId = 0x1f215828 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ListCtrl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ListCtrl"); }
		static hx::ObjectPtr< ListCtrl_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ListCtrl_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListCtrl_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListCtrl","\x49","\x14","\x6f","\xfb"); }

		int insertItem( ::hx::widgets::ListItem item,hx::Null< bool >  autoDestroy);
		::Dynamic insertItem_dyn();

		bool setItem( ::hx::widgets::ListItem item,hx::Null< bool >  autoDestroy);
		::Dynamic setItem_dyn();

		int addItem( ::hx::widgets::ListItem item,hx::Null< bool >  autoDestroy);
		::Dynamic addItem_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		 ::hx::widgets::ImageList get_largeImageList();
		::Dynamic get_largeImageList_dyn();

		 ::hx::widgets::ImageList set_largeImageList( ::hx::widgets::ImageList value);
		::Dynamic set_largeImageList_dyn();

		 ::hx::widgets::ImageList get_smallImageList();
		::Dynamic get_smallImageList_dyn();

		 ::hx::widgets::ImageList set_smallImageList( ::hx::widgets::ImageList value);
		::Dynamic set_smallImageList_dyn();

		int appendColumn(::String heading);
		::Dynamic appendColumn_dyn();

		::cpp::Pointer<  wxListCtrl > listCtrlRef;
		::cpp::Pointer<  wxListCtrl > get_listCtrlRef();
		::Dynamic get_listCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ListCtrl */ 
