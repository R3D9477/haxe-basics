// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Window
#define INCLUDED_hx_widgets_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,ClassInfo)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Font)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Point)
HX_DECLARE_CLASS2(hx,widgets,Rect)
HX_DECLARE_CLASS2(hx,widgets,Size)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x7f8f9123 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Window"); }
		static hx::ObjectPtr< Window_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Window_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		static  ::hx::widgets::Window autoConvert( ::hx::widgets::Window win);
		static ::Dynamic autoConvert_dyn();

		static  ::Dynamic convertTo( ::hx::widgets::Window win,hx::Class c);
		static ::Dynamic convertTo_dyn();

		static  wxWindow* toRaw( ::hx::widgets::Window win);

		bool show(hx::Null< bool >  value);
		::Dynamic show_dyn();

		bool hide();
		::Dynamic hide_dyn();

		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		bool close(hx::Null< bool >  force);
		::Dynamic close_dyn();

		bool destroy();

		bool destroyChildren();
		::Dynamic destroyChildren_dyn();

		 ::hx::widgets::Window findWindowById(int id);
		::Dynamic findWindowById_dyn();

		::Array< ::Dynamic> children;
		::Array< ::Dynamic> get_children();
		::Dynamic get_children_dyn();

		 ::hx::widgets::Window parent;
		 ::hx::widgets::Window get_parent();
		::Dynamic get_parent_dyn();

		void refresh(hx::Null< bool >  eraseBackground);
		::Dynamic refresh_dyn();

		void refreshRect( ::hx::widgets::Rect rect,hx::Null< bool >  eraseBackground);
		::Dynamic refreshRect_dyn();

		void update();
		::Dynamic update_dyn();

		int get_backgroundColour();
		::Dynamic get_backgroundColour_dyn();

		int set_backgroundColour(int value);
		::Dynamic set_backgroundColour_dyn();

		int get_foregroundColour();
		::Dynamic get_foregroundColour_dyn();

		int set_foregroundColour(int value);
		::Dynamic set_foregroundColour_dyn();

		 ::hx::widgets::Font get_font();

		 ::hx::widgets::Font set_font( ::hx::widgets::Font value);

		void freeze();
		::Dynamic freeze_dyn();

		void thaw();
		::Dynamic thaw_dyn();

		bool isFrozen;
		bool get_isFrozen();
		::Dynamic get_isFrozen_dyn();

		 cpp::Struct<wxBackgroundStyle, cpp::EnumHandler> backgroundStyle;
		 cpp::Struct<wxBackgroundStyle, cpp::EnumHandler> get_backgroundStyle();

		 cpp::Struct<wxBackgroundStyle, cpp::EnumHandler> set_backgroundStyle( cpp::Struct<wxBackgroundStyle, cpp::EnumHandler> value);

		bool canSetTransparent;
		bool get_canSetTransparent();
		::Dynamic get_canSetTransparent_dyn();

		int transparent;
		int set_transparent(int value);
		::Dynamic set_transparent_dyn();

		bool beginRepositioningChildren();
		::Dynamic beginRepositioningChildren_dyn();

		void endRepositioningChildren();
		::Dynamic endRepositioningChildren_dyn();

		void fit();
		::Dynamic fit_dyn();

		 ::hx::widgets::Size get_size();

		 ::hx::widgets::Size set_size( ::hx::widgets::Size value);

		void resize(int width,int height);
		::Dynamic resize_dyn();

		 ::hx::widgets::Size get_clientSize();

		 ::hx::widgets::Size set_clientSize( ::hx::widgets::Size value);

		void resizeClient(int width,int height);
		::Dynamic resizeClient_dyn();

		 ::hx::widgets::Size bestSize;
		 ::hx::widgets::Size get_bestSize();

		 ::hx::widgets::Size get_virtualSize();

		 ::hx::widgets::Size set_virtualSize( ::hx::widgets::Size value);

		void resizeVirtual(int width,int height);
		::Dynamic resizeVirtual_dyn();

		void move(int x,int y);
		::Dynamic move_dyn();

		 ::hx::widgets::Point get_position();

		 ::hx::widgets::Point set_position( ::hx::widgets::Point value);

		void centerOnParent();
		::Dynamic centerOnParent_dyn();

		int get_windowStyle();
		::Dynamic get_windowStyle_dyn();

		int set_windowStyle(int value);
		::Dynamic set_windowStyle_dyn();

		int get_id();
		::Dynamic get_id_dyn();

		int set_id(int value);
		::Dynamic set_id_dyn();

		 cpp::Struct<wxWindowVariant, cpp::EnumHandler> get_windowVariant();

		 cpp::Struct<wxWindowVariant, cpp::EnumHandler> set_windowVariant( cpp::Struct<wxWindowVariant, cpp::EnumHandler> value);

		int getScrollPos( cpp::Struct<wxOrientation, cpp::EnumHandler> orientation);
		::Dynamic getScrollPos_dyn();

		void setScrollPos( cpp::Struct<wxOrientation, cpp::EnumHandler> orientation,int pos,hx::Null< bool >  refresh);
		::Dynamic setScrollPos_dyn();

		int getScrollRange( cpp::Struct<wxOrientation, cpp::EnumHandler> orientation);
		::Dynamic getScrollRange_dyn();

		int getScrollThumb( cpp::Struct<wxOrientation, cpp::EnumHandler> orientation);
		::Dynamic getScrollThumb_dyn();

		int get_hscrollPos();
		::Dynamic get_hscrollPos_dyn();

		int set_hscrollPos(int value);
		::Dynamic set_hscrollPos_dyn();

		int get_vscrollPos();
		::Dynamic get_vscrollPos_dyn();

		int set_vscrollPos(int value);
		::Dynamic set_vscrollPos_dyn();

		int hscrollRange;
		int get_hscrollRange();
		::Dynamic get_hscrollRange_dyn();

		int vscrollRange;
		int get_vscrollRange();
		::Dynamic get_vscrollRange_dyn();

		int hscrollThumb;
		int get_hscrollThumb();
		::Dynamic get_hscrollThumb_dyn();

		int vscrollThumb;
		int get_vscrollThumb();
		::Dynamic get_vscrollThumb_dyn();

		bool scrollLines(int lines);
		::Dynamic scrollLines_dyn();

		 ::hx::widgets::Sizer get_sizer();
		::Dynamic get_sizer_dyn();

		 ::hx::widgets::Sizer set_sizer( ::hx::widgets::Sizer value);
		::Dynamic set_sizer_dyn();

		void setSizerAndFit( ::hx::widgets::Sizer sizer,hx::Null< bool >  deleteOld);
		::Dynamic setSizerAndFit_dyn();

		bool layout();
		::Dynamic layout_dyn();

		 ::hx::widgets::EvtHandler eventHandler;
		 ::hx::widgets::EvtHandler get_eventHandler();
		::Dynamic get_eventHandler_dyn();

		void queueEvent( ::hx::widgets::Event event);

		 ::hx::widgets::Point clientToScreen( ::hx::widgets::Point pt);

		 ::hx::widgets::Point screenToClient( ::hx::widgets::Point pt);

		 ::hx::widgets::ClassInfo classInfo;
		 ::hx::widgets::ClassInfo get_classInfo();
		::Dynamic get_classInfo_dyn();

		 wxHitTest hitTest( ::hx::widgets::Point pt);

		::cpp::Pointer<  wxWindow > windowRef;
		::cpp::Pointer<  wxWindow > get_windowRef();
		::Dynamic get_windowRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Window */ 
