// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_TextCtrl
#define INCLUDED_hx_widgets_TextCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_TextEntry
#include <hx/widgets/TextEntry.h>
#endif
#ifndef INCLUDED_224ae41206d096c1
#define INCLUDED_224ae41206d096c1
#include "wx/textctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TextCtrl)
HX_DECLARE_CLASS2(hx,widgets,TextEntry)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TextCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef TextCtrl_obj OBJ_;
		TextCtrl_obj();

	public:
		enum { _hx_ClassId = 0x4227dbf7 };

		void __construct( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TextCtrl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.TextCtrl"); }
		static hx::ObjectPtr< TextCtrl_obj > __new( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< TextCtrl_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextCtrl_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TextCtrl","\x18","\x98","\x75","\x1e"); }

		void appendText(::String value);
		::Dynamic appendText_dyn();

		int get_insertionPoint();
		::Dynamic get_insertionPoint_dyn();

		int set_insertionPoint(int value);
		::Dynamic set_insertionPoint_dyn();

		::String get_value();
		::Dynamic get_value_dyn();

		::String set_value(::String value);
		::Dynamic set_value_dyn();

		::cpp::Pointer<  wxTextCtrl > textCtrlRef;
		::cpp::Pointer<  wxTextCtrl > get_textCtrlRef();
		::Dynamic get_textCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TextCtrl */ 
