// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ListView
#define INCLUDED_hx_widgets_ListView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ListCtrl)
HX_DECLARE_CLASS2(hx,widgets,ListView)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ListView_obj : public  ::hx::widgets::ListCtrl_obj
{
	public:
		typedef  ::hx::widgets::ListCtrl_obj super;
		typedef ListView_obj OBJ_;
		ListView_obj();

	public:
		enum { _hx_ClassId = 0x2ba801e2 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ListView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ListView"); }
		static hx::ObjectPtr< ListView_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ListView_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListView","\x03","\xbe","\xf5","\x07"); }

		int getColumnWidth(int col);
		::Dynamic getColumnWidth_dyn();

		bool setColumnWidth(int col,int width);
		::Dynamic setColumnWidth_dyn();

		::cpp::Pointer<  wxListView > listViewRef;
		::cpp::Pointer<  wxListView > get_listViewRef();
		::Dynamic get_listViewRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ListView */ 
