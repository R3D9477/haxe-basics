// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Choice
#define INCLUDED_hx_widgets_Choice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_ItemContainer
#include <hx/widgets/ItemContainer.h>
#endif
#ifndef INCLUDED_248a00c52206b09f
#define INCLUDED_248a00c52206b09f
#include "wx/choice.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Choice)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ItemContainer)
HX_DECLARE_CLASS2(hx,widgets,ItemContainerImmutable)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Choice_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef Choice_obj OBJ_;
		Choice_obj();

	public:
		enum { _hx_ClassId = 0x581371a0 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Choice")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Choice"); }
		static hx::ObjectPtr< Choice_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< Choice_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Choice_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Choice","\x81","\x33","\x44","\xf5"); }

		int append(::String string);
		::Dynamic append_dyn();

		void _hx_delete(int n);
		::Dynamic _hx_delete_dyn();

		void clear();
		::Dynamic clear_dyn();

		void setString(int n,::String string);
		::Dynamic setString_dyn();

		::String getString(int n);
		::Dynamic getString_dyn();

		int get_selection();
		::Dynamic get_selection_dyn();

		int set_selection(int value);
		::Dynamic set_selection_dyn();

		::String get_selectedString();
		::Dynamic get_selectedString_dyn();

		::String set_selectedString(::String value);
		::Dynamic set_selectedString_dyn();

		::cpp::Pointer<  wxChoice > choiceRef;
		::cpp::Pointer<  wxChoice > get_choiceRef();
		::Dynamic get_choiceRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Choice */ 
